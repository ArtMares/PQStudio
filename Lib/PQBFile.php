<?php

/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                08.06.2016
 * @version             1.0
 * @copyright           artmares@influ.su
 */

/**
 * Class PQBFile
 * @property        PQB         $PQFile     Объект PQB
 * @property                    $QDir       Объект QDir расширения PQEngine File System
 * @property                    $QFile      Объект QFile расширения PQEngine File System
 * @property        string      $path       Путь к файлу .pqb
 *
 * Класс выполняет роль обертки над объектом PQB
 * Имеет дополнительные методы для работы с файлом
 * Может открывать файл по указанному пути
 * Может сохранять ранее открытый файл
 */
class PQBFile extends PQFileWorker {

    /**
     * Метод check() - Выполняет проверку переданых данных и вызывает соответствующий метод
     * @param $data - Данные из файла pqb
     */
    protected function check($data) {
        if(!is_null($data) && !empty($data)) {
            if($this->isPQ($data)) $this->rebuild($data);
            if(is_array($data)) $this->import($data);
        }
    }

    /**
     * Метод rebuild() - Импортирует объект PQB во внутрений объект PQB
     * Необходимо для того чтобы избежать не соответствия версий объектов
     * А так же автоматическую пересборку объекта на новую версию
     * @param PQB $data - Объект PQB
     */
    protected function rebuild($data) {
        $version = $data->version();
        $this->PQFile->setHistory($data->getHistory());
        if($version < $this->PQFile->version()) $this->PQFile->setRebuild($version);
        foreach($data as $key => $value) $this->insert($key, $value);
    }

    /**
     * Метод import() - Импортирует данные из старых версий файлов pqb
     * Под старыми версиями понимаются файлы данные в которых хранятся как сериализованный массив
     * @param array $data - Массив данных
     */
    protected function import(Array $data) {
        if(isset($data['pqbversion'])) {
            switch($data['pqbversion']) {
                case '0.4':
                    foreach($data as $key => $value) {
                        if($key === 'pqbversion') {
                            $this->PQFile->setImport($value);
                            $value = $this->PQFile->version();
                        }
                        $this->insert($key, $value);
                    }
                    break;
                case '0.5':
                    if(isset($data[$data['pqbversion']])) {
                        foreach($data[$data['pqbversion']] as $key => $value) {
                            if($key === 'pqbversion') {
                                $this->PQFile->setImport($value);
                                $value = $this->PQFile->version();
                            }
                            $this->insert($key, $value);
                        }
                    }
                    break;
            }
        }
    }
}
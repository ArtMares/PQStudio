<?php

/**
 * @author  ArtMares (Dmitriy Deragchev)
 * @date    08.06.2016
 * @version 0.1
 */

/**
 * Class PQSFile
 * @property    PQS     $PQFile Объект PQS
 * @property            $QDir   Объект QDir расширения PQEngine File System
 * @property            $QFile  Объект QFile расширения PQEngine File System
 * @property    string  $path   Путь к файлу .pqs
 *
 * Класс обертка для работы с файлами расширения .pqs
 */
class PQSFile extends PQFileWorker {

    /**
     * Метод check() - Выполняет проверку переданых данных и вызывает соответствующий метод
     * @param $data - Данные из файла .pqs
     */
    protected function check($data) {
        if(!is_null($data) && !empty($data)) {
            if($this->isPQ($data)) $this->rebuild($data);
        }
    }
}
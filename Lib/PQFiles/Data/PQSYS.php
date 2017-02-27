<?php

/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                06.06.2016
 * @version             1.0
 * @copyright           artmares@influ.su
 */

/**
 * Class PQSYS
 * @property        string      $version        Версия файла PQSYS
 * @property        array       $history        Историческая информация о файле
 */
class PQSYS extends PQFile {

    protected $version = '1.0';
    private $history = array();

    /**
     * PQSYS constructor.
     */
    public function __construct() {
        parent::__construct();
        $this->build();
    }

    /**
     * Метод build() - Инициализирует структуру хранения данных для текущей версии файла
     */
    private function build() {

    }

    /**
     * Метод setRebuild() - Заносит в историческую информацию данные о пересборке файла
     * @param $version - Версия файла
     */
    public function setRebuild($version) {
        if(!empty($version)) $this->history['rebuild'][time()] = (string)$version;
    }

    /**
     * Метод getRebuild() - Возвращает массив исторических данных о пересборке файла
     * @return array
     */
    public function getRebuild() {
        if(isset($this->history['rebuild'])) {
            return $this->history['rebuild'];
        } else {
            return array();
        }
    }

    /**
     * Метод setHistory() - Перезаписывает исторические данные о файле
     * @param array $data
     */
    public function setHistory(Array $data) {
        if(!empty($data)) {
            $this->history = $data;
        }
    }

    /**
     * Метод getHistory() - Возвращает массив содержащий исторические данные о файле
     * @return array
     */
    public function getHistory() {
        return $this->history;
    }
}
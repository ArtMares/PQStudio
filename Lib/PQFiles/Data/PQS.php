<?php

/**
 * @author  ArtMares (Dmitriy Dergachev)
 * @date    06.06.2016
 * @version 0.1
 */

/**
 * Class PQS
 * @property    string  $version    Версия файла PQS
 * @property    array   $history    Историческая информация о файле
 */
class PQS extends PQFile {

    protected $version = '0.1';
    private $history = array();

    /**
     * PQS constructor.
     */
    public function __construct() {
        parent::__construct();
        $this->build();
    }

    /**
     * Метод build() - Инициализирует структуру хранения данных для текущей версии файла
     */
    private function build() {
        $this->project = array(
            'template' => '',
            'name' => '',
            'addons' => array()
        );
        $this->build = array(
            'template' => '',
            'icon' => '',
            'target' => '',
            'pqext' => array(
                'pqengine-core' => 'pqengine'
            ),
            'ub_write' => '',
            'pre' => '',
            'instance' => '',
            'qmakelf' => '',
            'save_php7ts_md5' => false,
            'save_ini_md5' => false
        );
        $this->app = array(
            'name' => '',
            'version' => '1.0',
            'orgName' => '',
            'orgDomain' => ''
        );
        $this->windows = array();
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
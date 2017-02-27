<?php

/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                06.06.2016
 * @version             1.0
 * @copyright           artmares@influ.su
 */

/**
 * Class PQB
 * @property        string      $version        Версия файла PQB
 * @property        array       $history        Историчейская информация о файле
 */

class PQB extends PQFile {

    protected $version = '0.5';
    private $history = array();

    /**
     * PQB constructor.
     */
    public function __construct() {
        parent::__construct();
        $this->build();
    }

    /**
     * Метод build() - Инициализирует создание структуру данных хранящихся в файле
     */
    private function build() {
        $this->pqbversion = $this->version;
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
    }

    /**
     * Метод setRebuild() - Заносит в историческую информацию о файле, версию с который был пересобран на текущую
     * Ключем является метка времени
     * @param $version - Номер версии
     */
    public function setRebuild($version) {
        if(!empty($version)) $this->history['rebuild'][time()] = (string)$version;
    }

    /**
     * Метод getRebuild() - Возвращает исторические данные о пересборках файла если они есть
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
     * МЕтод setImport() - Заносит в историческую информацию о файле, версию из которой был импортирован файл в новый формат
     * @param $version - Номер версии
     */
    public function setImport($version) {
        if(!empty($version)) $this->history['import'][time()] = (string)$version;
    }

    /**
     * Метод getImport() - Возвращает историческую данные о версии с которой был импортирован в новый формат
     * @return array
     */
    public function getImport() {
        if(isset($this->history['import'])) {
            return $this->history['import'];
        } else {
            return array();
        }
    }

    /**
     * Метод setHistory() - Заносит в историческую информаци данные переданные в виде массива
     * Необходим из-за наличия пересборки файла
     * @param array $data - Массив исторических данных
     */
    public function setHistory(Array $data) {
        if(!empty($data)) $this->history = $data;
    }

    /**
     * Метод getHistory() - Возвращает массив содержащий истрическую информацию о файле
     * @return array
     */
    public function getHistory() {
        return $this->history;
    }
}
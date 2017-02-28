<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQ\Component\Config;
use PQ\Core;

/**
 * Class Manager
 * @package PQ\Component\Config
 * @property        Core            $core
 */
class Manager {

    /** Экземпляр Core */
    protected $core = false;

    /** Объект QSettings */
    protected $settings = false;

    private $_class;

    private $_hash_name;

    private $_config;

    public function __construct(Core &$core, $hash_name = '', $config = []) {
        $this->core = $core;
        $this->_hash_name = $hash_name;
        $this->_config = $config;
        if(isset($this->core->log)) {
            $this->_class = str_replace('PQ\\Component\\Config\\', '', get_class($this));
            $this->core->log->info('Config format "'.$this->_class.'" is initialized', 'Core -> Config');
        }
    }

    public function __destruct() {
        $this->core->log->info('Config format "'.$this->_class.'" is destruct', 'Core -> Config');
    }

    /**
     * Метод возвращает жив ли объект QSettings или нет
     * @return bool
     */
    public function alive() {
        if(!$this->settings) return false;
        $class = get_class($this->settings);
        if($class == 'QSettings') return true;
        return false;
    }

    /**
     * Магический метод для получения данныйх из объекта QSettings по ключу
     * @param $name
     * @return mixed
     */
    public function __get($name) {
        $variant = $this->settings->value($name);
        return $this->core->variant->get($variant);
    }

    /**
     * Магический метод для задания данных объекту QSettings по ключу
     * @param $name
     * @param $value
     */
    public function __set($name, $value) {
        $this->settings->setValue($name, $value);
    }

    /**
     * Получает значение объекта QSettings по ключу
     * @param $name
     * @return mixed
     */
    public function get($name) {
        return $this->__get($name);
    }

    /**
     * Задает значение объекту QSettings по ключу
     * @param $name
     * @param $value
     */
    public function set($name, $value) {
        $this->__set($name, $value);
    }

    /**
     * Удаляет значение у объекта QSettings по ключу
     * @param $name
     */
    public function remove($name) {
        $this->settings->remove($name);
    }

    /**
     * Проверяет возможна ли запись занчений в файл конфигуарции объекта QSettings
     * @return bool
     */
    public function isWritable() {
        return $this->settings->isWritable();
    }
}
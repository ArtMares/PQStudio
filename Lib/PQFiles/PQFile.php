<?php

/**
 * @author  ArtMares (Dmitriy Dergachev)
 * @date    06.06.2016
 * @version 0.1
 */

/**
 * Class PQFile
 * @property    string  $version    Свойство хранящее текущую версию файла
 * @property    array   $data       Массив который представляет из себя хранилище
 *
 * Класс хранилище данных
 * Позволяет задавать и получать значения обращаясь к ним как к свойствам объекта
 * Обрабатввается конструкцией foreach
 * Обрабатывается конструкцией count
 *
 * Является наследуюмым классом
 */

class PQFile implements IteratorAggregate, Countable {

    protected $version;
    private $data = array();

    /**
     * PQFile constructor
     */
    public function __construct() {
        $this->data[$this->version] = array();
    }

    /**
     * Магический метод __set() - Вызывается в момент присвоения не существующему свойству класса значения
     * @param $name - Название свойства
     * @param $value - Значение свойства
     */
    public function __set($name, $value) {
        $this->data[$this->version][$name] = $value;
    }

    /**
     * Магический метод __get() - Вызывается в момент получения значения не существующего свойства класса
     * @param $name - Название свойства
     * @return null
     */
    public function __get($name) {
        if($this->__isset($name)) {
            return $this->data[$this->version][$name];
        } else {
            return null;
        }
    }

    /**
     * Магический метод __isset() - Вызывается в момент обработки конструкцией isset() не существующего свойства класса
     * @param $name - Название свойства
     * @return bool
     */
    public function __isset($name) {
        return isset($this->data[$this->version][$name]);
    }

    /**
     * Магический метод __unset() - Вызывается в момент обработки конструкцией unset() не существующего свойства класса
     * @param $name
     */
    public function __unset($name) {
        unset($this->data[$this->version][$name]);
    }

    /**
     * Метод getIterator() - Позволяет передавать объект в конструкции циклов и получать значения хранимых данных в свойстве $data
     * @return ArrayIterator
     */
    public function getIterator() {
        return new ArrayIterator($this->data[$this->version]);
    }

    /**
     * Метод count() - Позвоялет конструкции count() получить количество элементов в $data
     * @return int
     */
    public function count() {
        return count($this->data[$this->version]);
    }

    /**
     * Метод version() - Возвращает значение свойства $version
     * @return string
     */
    public function version() {
        return $this->version;
    }
}

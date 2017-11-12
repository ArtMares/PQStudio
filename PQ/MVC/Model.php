<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                27.03.2017
 * @copyright           artmares@influ.su
 */

namespace PQ\MVC;

abstract class Model implements \IteratorAggregate, \ArrayAccess, \Countable {
    
    public function __construct() {
        $this->reset();
    }

    /**
     * Метод скидывает состояние модели на начальное
     */
    abstract public function reset();

    /**
     * Возвращает список публичных и защищенных свойст
     * Return list of public and protected properties
     * @return array
     */
    public function fields() {
        $fields = array_keys(get_object_vars($this));
        return $fields;
    }

    /**
     * Возвращает список публичных свойст
     * Return list of public properties
     * @return array
     */
    public function attributes() {
        $class = new \ReflectionClass($this);
        $names = [];
        foreach($class->getProperties(\ReflectionProperty::IS_PUBLIC) as $property) {
            if(!$property->isStatic()) {
                $names[] = $property->getName();
            }
        }
        return $names;
    }

    public function getAttributes($names = null, $except = []) {
        $values = [];
        if ($names === null) {
            $names = $this->attributes();
        }
        foreach ($names as $name) {
            $values[$name] = $this->$name;
        }
        foreach ($except as $name) {
            unset($values[$name]);
        }

        return $values;
    }

    public function __set($name, $value) {
        $setter = $this->gettingSetter($name);
        if($this->hasMethod($setter)) {
            $this->$setter($value);
        }
    }

    public function __get($name) {
        $getter = $this->gettingGetter($name);
        if($this->hasMethod($getter)) {
            return $this->$getter();
        }
        return null;
    }

    public function __isset($name) {
        return $this->hasProperty($name);
    }

    public function __unset($name) {
        if($this->hasProperty($name)) {
            unset($this->{$name});
        }
    }

    public function __toString() {
        $reflector = new \ReflectionClass($this);
        return $reflector->getShortName();
    }

    public function getIterator() {
        return new \ArrayIterator($this->data);
    }

    public function count() {
        return count($this->attributes());
    }

    public function offsetExists($offset) {
        return $this->__isset($offset);
    }

    public function offsetGet($offset) {
        return $this->__get($offset);
    }

    public function offsetSet($offset, $item) {
        $this->__set($offset, $item);
    }

    public function offsetUnset($offset) {
        $this->__unset($offset);
    }

    public function hasMethod($name) {
        return method_exists($this, $name);
    }

    public function hasProperty($name, $checkVars = true) {
        return $this->canGetProperty($name, $checkVars) || $this->canSetProperty($name, false);
    }

    public function canSetProperty($name, $checkVars = true) {
        return $this->hasMethod($this->gettingSetter($name)) || $checkVars && property_exists($this, $name);
    }

    public function canGetProperty($name, $checkVars = true) {
        return $this->hasMethod($this->gettingGetter($name)) || $checkVars && property_exists($this, $name);
    }

    private function gettingSetter($name) {
        return 'set' . ucfirst($name);
    }

    private function gettingGetter($name) {
        return 'get' . ucfirst($name);
    }
}
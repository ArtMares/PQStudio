<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQ\Component;
use PQ\Component;

class Variable extends Component {

    public function convert($type, $data) {
        $type = strtolower($type);
        switch($type) {
            case 'int':
            case 'integer':
                $data = $this->convert_int($data);
                break;
            case 'str':
            case 'string':
                $data = $this->convert_str($data);
                break;
            case 'bool':
            case 'boolean':
                $data = $this->convert_bool($data);
                break;
            case 'real':
            case 'float':
            case 'double':
                $data = $this->convert_float($data);
                break;
            case 'binary':
                $data = $this->convert_binary($data);
                break;
            case 'array':
                $data = $this->convert_array($data);
                break;
            case 'object':
                $data = $this->convert_object($data);
                break;
        }
        return $data;
    }

    private function convert_int($data) {
        if($this->is_int($data)) return $data;
        return (int)$data;
    }

    private function convert_float($data) {
        if($this->is_float($data)) return $data;
        return (float)$data;
    }

    private function convert_str($data) {
        if($this->is_str($data)) return $data;
        return (string)$data;
    }

    private function convert_binary($data) {
        return (binary)$data;
    }

    private function convert_bool($data) {
        if($this->is_bool($data)) return $data;
        return (bool)$data;
    }

    private function convert_array($data) {
        if($this->is_array($data)) return $data;
        return (array)$data;
    }

    private function convert_object($data) {
        if($this->is_object($data)) return $data;
        return (object)$data;
    }

    public function is_int($data) {
        return is_int($data);
    }

    public function is_float($data) {
        return is_float($data);
    }

    public function is_str($data) {
        return is_string($data);
    }

    public function is_bool($data) {
        return is_bool($data);
    }

    public function is_scalar($data) {
        return is_scalar($data);
    }

    public function is_numeric($data) {
        return is_numeric($data);
    }

    public function is_array($data) {
        return is_array($data);
    }

    public function is_object($data) {
        return is_object($data);
    }

    public function is_resource($data) {
        return is_resource($data);
    }

    public function is_null($data) {
        return is_null($data);
    }

    public function is_nan($data) {
        return is_nan($data);
    }

    public function is_callable($data) {
        return is_callable($data);
    }
}
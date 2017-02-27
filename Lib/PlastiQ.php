<?php

/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                21.10.2016
 * @version             1.0
 * @copyright           artmares@influ.su
 */
class PlastiQ {

    private $data = array();

    public function __construct() {
        $this->data = require_once(__DIR__.'/'.__CLASS__.'/includes.php');
    }

    public function check($name) {
        if(isset($this->data[$name])) {
            return $this->data[$name];
        }
        return false;
    }
}
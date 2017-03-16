<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                16.03.2017
 * @copyright           artmares@influ.su
 */
namespace PQ\Component;
use PQ\Component;

class Model extends Component {

    private $models = [];

    public function set($name, $model) {
        $this->_info('Set model "'.$name.'"');
        $this->models[$name] = $model;
    }

    public function &get($name) {
        $result = false;
        if(isset($this->models[$name])) $result = $this->models[$name];
        return $result;
    }
}
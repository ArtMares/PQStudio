<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQ\Component;
use PQ\Component;

class Widgets extends Component {

    private $widgets = [];

    public function set($name, $widget) {
        $this->widgets[$name] = $widget;
    }

    public function &get($name) {
        if(isset($this->widgets[$name])) {
            return $this->widgets[$name];
        }
        return null;
    }
}
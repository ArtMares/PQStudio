<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQ\Component;
use PQ\Component;
use PQ\WidgetsInterface;

class Widgets extends Component {

    /** @var WidgetsInterface[] */
    private $widgets = [];

    private $title;

    public function set($name, WidgetsInterface $widget) {
        $this->widgets[$name] = $widget;
    }

    /**
     * @param $name
     * @return null|WidgetsInterface
     */
    public function get($name) {
        if(isset($this->widgets[$name])) {
            return $this->widgets[$name];
        }
        return null;
    }

    public function setDefaultTitle($title) {
        $this->title = $this->core->var->convert('str', $title);
    }

    public function setTitle(&$object, $title = '') {
        $title = $this->core->var->convert('str', $title);
        if($title !== '') {
            $object->windowTitle = ($this->title !== '' ? $this->title.' | ' : '').$title;
        } else {
            $object->windowTitle = ($this->title !== '' ? $this->title : $this->core->applicationName());
        }
    }
}
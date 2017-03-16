<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                16.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components;
class ModelWorker extends QObject {

    public $signals = [
        'changed(string)'
    ];

    private $parent;

    public function __construct($parent) {
        parent::__construct();
        $this->parent = $parent;
    }

    public function set($name, $value) {
        if(isset($this->parent->{$name})) {
            $this->parent->{$name} = $value;
            $this->signal_changed($name);
        }
    }

    public function signal_changed($name) {
        $this->emit('changed(string)', [$name]);
    }
}
<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                07.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom;
use PQ\Core;
use Components\Custom\Events;

class Input extends \QLineEdit {

    public $signals = [
        'focused()',
        'blured()'
    ];
    
    protected $onBlur = [];

    protected $onFocus = [];

    public function __construct($parent) {
        parent::__construct($parent);

        Core::getInstance()->style->set($this, 'Input');

        $this->eventFilter = new Events\Input($this);
    }

    public function onBlured(callable $callback) {
        $this->onBlur[] = $callback;
    }

    public function onFocused(callable $callback) {
        $this->onFocus[] = $callback;
    }
    
    public function blur() {
        foreach($this->onBlur as $blur) {
            if(is_callable($blur)) call_user_func_array($blur, [$this]);
        }
        $this->emit('focused()', []);
    }

    public function focus() {
        foreach($this->onFocus as $focus) {
            if(is_callable($focus)) call_user_func_array($focus, [$this]);
        }
        $this->emit('blured()', []);
    }
}
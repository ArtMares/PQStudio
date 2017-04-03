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
        'blurred()',
        'invalidly()',
        'validly()'
    ];

    protected $eventFilter;
    
    protected $onBlur = [];

    protected $onFocus = [];
    
    protected $onValidate;

    public function __construct($parent) {
        parent::__construct($parent);

        Core::getInstance()->style->set($this, 'Input');

        $this->eventFilter = new \PQEventFilter($this);
        $this->eventFilter->addEventType(\QEvent::FocusIn);
        $this->eventFilter->addEventType(\QEvent::FocusOut);
        $this->installEventFilter($this->eventFilter);
        $this->eventFilter->onEvent = function($sender, $event) {
            switch($event->type()) {
                case \QEvent::FocusIn: $sender->focus();
                    break;
                case \QEvent::FocusOut: $sender->blur();
                    break;
            }
        };
        
        $this->onTextChanged = function($sender, $value) {
            $this->setProperty('invalid', !$this->hasAcceptableInput());
        };
    }

    public function onBlurred(callable $callback) {
        $this->onBlur[] = $callback;
    }

    public function onFocused(callable $callback) {
        $this->onFocus[] = $callback;
    }
    
    public function blur() {
        $this->slot_blur();
    }

    public function focus() {
        $this->slot_focus();
    }

    protected function slot_blur() {
        foreach($this->onBlur as $blur) {
            if(is_callable($blur)) call_user_func_array($blur, [$this]);
        }
        $this->emit('focused()', []);
    }

    protected function slot_focus() {
        foreach($this->onFocus as $focus) {
            if(is_callable($focus)) call_user_func_array($focus, [$this]);
        }
        $this->emit('blurred()', []);
    }
}
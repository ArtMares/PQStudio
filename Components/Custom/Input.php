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
        'validate(bool)'
    ];

    protected $eventFilter;

    public function __construct($parent) {
        parent::__construct($parent);

        Core::getInstance()->style->set($this, 'Input');

        $this->eventFilter = new \PQEventFilter($this);
        $this->eventFilter->addEventType(\QEvent::FocusIn);
        $this->eventFilter->addEventType(\QEvent::FocusOut);
        $this->eventFilter->addEventType(\QEvent::EnabledChange);
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
            if($this->hasAcceptableInput()) {
                $this->valid();
            } else {
                $this->invalid();
            }
        };
    }
    
    public function blur() {
        $this->slot_blur();
    }

    public function focus() {
        $this->slot_focus();
    }
    
    public function invalid() {
        $this->setProperty('invalid', true);
        $this->emit('validate(bool)', [false]);
        $this->updateStyle();
    }
    
    public function valid() {
        $this->setProperty('invalid', false);
        $this->emit('validate(bool)', [true]);
        $this->updateStyle();
    }

    protected function slot_blur() {
        $this->emit('focused()', []);
    }

    protected function slot_focus() {
        $this->emit('blurred()', []);
    }
    
    protected function updateStyle() {
        $this->styleSheet = $this->styleSheet();
    }
}
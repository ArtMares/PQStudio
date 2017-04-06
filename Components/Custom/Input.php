<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                07.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom;
use PQ\Core;

class Input extends \QLineEdit {

    public $signals = [
        'focused()',
        'blurred()',
        'textValidated(bool)'
    ];

    public function __construct($parent = null) {
        parent::__construct($parent);

        Core::getInstance()->style->set($this, 'Input');

        $eventFilter = new \PQEventFilter($this);
        $eventFilter->addEventType(\QEvent::FocusIn);
        $eventFilter->addEventType(\QEvent::FocusOut);
        $this->installEventFilter($eventFilter);
        $eventFilter->onEvent = function($sender, $event) {
            switch($event->type()) {
                case \QEvent::FocusIn: $sender->slot_focus();
                    break;
                case \QEvent::FocusOut: $sender->slot_blur();
                    break;
            }
        };
        
        $this->connect(SIGNAL('textChanged(string)'), $this, SLOT('slot_acceptInput(string)'));
    }
    
    public function invalid() {
        $this->setProperty('invalid', true);
        $this->emit('textValidated(bool)', [false]);
        $this->updateStyle();
    }
    
    public function valid() {
        $this->setProperty('invalid', false);
        $this->emit('textValidated(bool)', [true]);
        $this->updateStyle();
    }

    protected function slot_blur() {
        $this->emit('blurred()', []);
    }

    protected function slot_focus() {
        $this->emit('focused()', []);
    }
    
    protected function updateStyle() {
        $this->styleSheet = $this->styleSheet();
    }
    
    public function slot_acceptInput($sender, $value) {
        if($this->hasAcceptableInput()) {
            $this->valid();
        } else {
            $this->invalid();
        }
    }
}
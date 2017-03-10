<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                09.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom\Events;

class CheckBox extends \PQEventFilter {

    public function __construct($parent = null) {
        parent::__construct($parent);
        $this->addEventType(\QEvent::EnabledChange);
        if(!is_null($parent) && is_object($parent)) $parent->installEventFilter($this);
        $this->onEvent = function($sender, $event) {
            switch($event->type()) {
                case \QEvent::EnabledChange:
                    $sender->styleSheet = $sender->styleSheet();
                    break;
            }
        };
    }

//    public function eventFilter($sender, $event){
//
//    }
}
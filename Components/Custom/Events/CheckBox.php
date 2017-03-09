<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                09.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom\Events;
use Components\Custom\EventCtrl;

class CheckBox extends EventCtrl {

    public function __construct($parent = null) {
        parent::__construct($parent);
        self::$eventFilter->addEventType(\QEvent::EnabledChange);
        $parent->installEventFilter(self::$eventFilter);
        $this->onEvent = function($sender, $event) {
            switch($event->type()) {
                case \QEvent::EnabledChange:
                    $sender->styleSheet = $sender->styleSheet();
                    break;
            }
        };
        return self::$eventFilter;
    }

//    public function eventFilter($sender, $event){
//
//    }
}
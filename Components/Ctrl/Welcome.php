<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                10.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */
namespace Components\Ctrl;
class Welcome extends \PQEventFilter {
    
    public function __construct($parent = null) {
        parent::__constrcut($parent);
        $this->addEventType(\QEvent::Show);
        if(!is_null($parent) && is_object($parent)) $parent->installEventFilter($this);
        
        $this->onEvent = function($sender, $event) {
            switch($event->type()) {
                case \QEvent::Show:
                    $sender->slide();
                    break;
            }
        };
    }
}
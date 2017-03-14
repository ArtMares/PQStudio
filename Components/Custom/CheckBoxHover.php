<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                14.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */
namespace Components\Custom;
use PQ\Core;

class CheckBoxHover extends CheckBox {
    
    public function __construct($parent, $text, $check = false) {
        parent::__construct($parent, $text, $check);
        
        $this->styleSheet = $this->styleSheet() . Core::getInstance()->style->CheckBoxHover;
        
        $this->eventFilter->addEventType(\QEvent::Enter);
        $this->eventFilter->addEventType(\QEvent::Leave);
        
        $this->eventFilter->onEvent = function($sender, $event) {
            switch($event->type()) {
                case \QEvent::Enter:
                    qDebug('Enter');
                    break;
                case \QEvent::Leave:
                    qDebug('Leave');
                    break;
            }
        };
    }
}
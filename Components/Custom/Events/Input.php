<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                07.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom\Events;
use Components\Custom\EventCtrl;

class Input extends EventCtrl {
    
    protected $parent;

    public function __construct($parent = null) {
        parent::__construct($parent);
        $this->addEventType(\QEvent::FocusIn);
        $this->addEventType(\QEvent::FocusOut);
        $parent->installEventFilter(self::$eventFilter);
        return self::$eventFilter;
    }

    public function eventFilter($sender, $event) {
        var_dump($event->type());
        $eventObject = get_class($event);
        if($eventObject === 'QFocusEvent') {
            if($event->gotFocus() && in_array('focus()', $sender->signals)) $sender->emit('focus()', []);
            if($event->lostFocus() && in_array('blur()', $sender->signals)) $sender->emit('blur()', []);
        }
    }

    private function getParent($object) {
        $result = $object->parentWidget();
        if(is_null($result)) return $object;
        return $this->getParent($result);
    }
}
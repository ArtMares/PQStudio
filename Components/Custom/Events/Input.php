<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                07.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom\Events;
class Input extends \PQEventFilter {
    
    protected $parent;

    public function __construct($parent = null) {
        parent::__construct($parent);
        /** Задаем собития для отслеживания */
        $this->addEventType(\QEvent::FocusIn);
        $this->addEventType(\QEvent::FocusOut);
        /** Если родитель был передан то инсталируем ему отслеживание событий  */
        if(!is_null($parent) && is_object($parent)) $parent->installEventFilter($this);
        $this->onEvent = function($sender, $event) {
            switch($event->type()) {
                case \QEvent::FocusIn: $sender->focus();
                    break;
                case \QEvent::FocusOut: $sender->blur();
                    break;
            }
        };
    }
}
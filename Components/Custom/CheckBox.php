<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                03.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom;
use PQ\Core;

class CheckBox extends Btn\Icon {

    protected $eventFilter;

    protected $iconSize = 18;

    /**
     * CheckBox constructor.
     * @param $parent
     * @param string $text
     * @param bool $check
     */
    public function __construct($parent, $text, $check = false) {
        /** Конвертируем аргумент в булев тип */
        $check = (bool)$check;

        /** Задаем иконку в зависимости от аргумента $check */
        $icon = Core::getInstance()->icon->font(($check ? 'fa-check-square-o' : 'fa-square-o'), $this->iconSize);

        /** Вызываем конструктор родителя и передаем необходимые аргументы */
        parent::__construct($parent, $icon, $text);

        $this->textLabel->setWordWrap(true);

        $this->eventFilter = new \PQEventFilter($this);
        $this->eventFilter->addEventType(\QEvent::EnabledChange);
        $this->installEventFilter($this->eventFilter);
        $this->eventFilter->onEvent = function($sender, $event) {
            switch($event->type()) {
                case \QEvent::EnabledChange:
                    $sender->styleSheet = $sender->styleSheet();
                    break;
            }
        };

        /** Задаем возможность использовать кнопку как checkbox */
        $this->checkable = true;

        /** Задаем свойство checked равное рагументу $check */
        $this->checked = $check;

        /** Залаем стиль оформления */
        Core::getInstance()->style->set($this, 'CheckBox');
        $this->connect(SIGNAL('toggled(bool)'), $this, SLOT('slot_toggled(bool)'));
    }

    private function updateState($check) {
        $this->icon = Core::getInstance()->icon->font(($check ? 'fa-check-square-o' : 'fa-square-o'), $this->iconSize);
        /** Изменяем иконку в зависимости от аргумента $check */
        $this->iconLabel->setText($this->icon->__toString());
    }
    
    public function slot_toggled($sender, $check) {
        $this->updateState($check);
    }
}
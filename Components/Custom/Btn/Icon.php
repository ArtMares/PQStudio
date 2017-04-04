<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                03.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom\Btn;
use Components\Custom\Btn;
use PQ\Component\Icon\Char;
use PQ\Core;

class Icon extends Btn {

    protected $iconLabel;

    protected $textLabel;

    protected $icon;
    
    protected $eventFilter;

    public function __construct($parent, Char $icon, $text) {
        parent::__construct($parent);

        $this->icon = $icon;

        /** Задаем максимальную и минимальную высоту*/
        $this->setMaximumHeight(30);
        $this->setMinimumHeight(30);
        $this->heigth = 30;

        /** Задаем стиль оформления */
        Core::getInstance()->style->set($this, 'IconBtn');

        /** Создаем слой QHBoxLayout */
        $this->setLayout(new \QHBoxLayout());
        $this->layout()->setSpacing(1);
        $this->layout()->setContentsMargins(3, 0, 0, 0);

        /** Создаем элемент под шрифтовую иконку */
        $this->iconLabel = new \QLabel($this);
        $this->iconLabel->setMaximumWidth(22);
        $this->iconLabel->text = $icon->__toString();
        $this->iconLabel->objectName = 'Icon';

        /** Создаем элемент под текст кнопки */
        $this->textLabel = new \QLabel($this);
        $this->textLabel->text = $text;
        $this->textLabel->objectName = 'Text';
    
        $this->eventFilter = new \PQEventFilter($this);
        $this->eventFilter->addEventType(\QEvent::MouseButtonRelease);
        $this->eventFilter->addEventType(\QEvent::EnabledChange);
        $this->eventFilter->onEvent = function($sender, $event) {
            switch($event->type()) {
                case \QEvent::MouseButtonRelease:
                    $this->click();
                    break;
                case \QEvent::EnabledChange:
                    qDebug('EnabledChange');
                    $this->updateStyle();
                    break;
            }
        };
        
        $this->iconLabel->installEventFilter($this->eventFilter);
        
        $this->compose();
    }
    
    protected function compose() {
        /** Добавляем элементы на слой */
        $this->layout()->addWidget($this->iconLabel);
        $this->layout()->addWidget($this->textLabel);
    }
    
    protected function updateStyle() {
        $this->styleSheet = $this->styleSheet();
    }
}
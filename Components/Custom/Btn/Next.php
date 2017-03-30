<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                06.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom\Btn;
use PQ\Core;

class Next extends Icon {

    protected $iconSize = 16;

    public function __construct($parent, $text) {
        /** Задаем шрифтовую иконку для кнопки */
        $icon = Core::getInstance()->icon->font('fa-arrow-right', $this->iconSize);
        parent::__construct($parent, $icon, $text);

        /** Задаем стиль для кнопки */
        Core::getInstance()->style->set($this, 'NextBtn');

        /** Задаем минимальную ширину */
        $this->setMinimumWidth(70);
    }
    
    protected function compose() {
        /** Добавляем элементы на слой */
        $this->layout()->addWidget($this->textLabel);
        $this->layout()->setAlignment($this->textLabel, \Qt::AlignRight);
        $this->layout()->addWidget($this->iconLabel);
    }
}
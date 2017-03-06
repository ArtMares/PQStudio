<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                06.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom;
use PQ\Core;

class NextBtn extends IconBtn {

    protected $iconSize = 16;

    public function __construct($parent, $text) {
        /** Задаем шрифтовую иконку для кнопки */
        $icon = Core::getInstance()->icon->font('fa-arrow-right', $this->iconSize);
        parent::__construct($parent, $icon, $text);

        /** Задаем стиль для кнопки */
        $this->styleSheet = Core::getInstance()->style->NextBtn;

        /** Задаем минимальную ширину */
        $this->setMinimumWidth(70);

        /** Уничтожаем ранее созданый элемент шрифтовой иконки */
        $this->iconLabel->free();

        /** Создаем новый элемент для шрифтовой иконки */
        $this->iconLabel = new \QLabel($this);
        $this->iconLabel->setMaximumWidth(22);
        $this->iconLabel->text = $icon->__toString();
        $this->iconLabel->objectName = 'Icon';

        /** Добавлям элемент на слой */
        $this->layout()->addWidget($this->iconLabel);
    }
}
<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                03.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom;

use PQ\Core;

class BackBtn extends IconBtn {

    protected $iconSize = 16;

    public function __construct($parent, $text) {
        /** Задаем шрифтовую иконку для кнопки */
        $icon = Core::getInstance()->icon->font('fa-arrow-left', $this->iconSize);
        parent::__construct($parent, $icon, $text);
        $this->styleSheet = Core::getInstance()->style->BackBtn;
        $this->setMinimumWidth(70);
    }
}
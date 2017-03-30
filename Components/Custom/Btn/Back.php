<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                03.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom\Btn;

use PQ\Core;

class Back extends Icon {

    protected $iconSize = 16;

    public function __construct($parent, $text) {
        /** Задаем шрифтовую иконку для кнопки */
        $icon = Core::getInstance()->icon->font('fa-arrow-left', $this->iconSize);
        parent::__construct($parent, $icon, $text);
        Core::getInstance()->style->set($this, 'BackBtn');
        $this->setMinimumWidth(70);
    }
}
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

        $this->icon = Core::getInstance()->icon->font('fa-arrow-left', $this->iconSize);
        parent::__construct($parent, $this->icon, $text);
    }
}
<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                06.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom;
class Btn extends \QPushButton {

    public function __construct($parent = null) {
        parent::__construct($parent);
        $this->setCursor(new \QCursor(\Qt::PointingHandCursor));
    }
}
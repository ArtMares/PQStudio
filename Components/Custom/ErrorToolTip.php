<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                09.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */
namespace Components\Custom;
class ErrorToolTip extends ToolTip {
    
    public function __construct($target) {
        parent::__construct($target);
        $target->connect(SIGNAL('invalid()'), $this, SLOT('showText()'));
    }
}
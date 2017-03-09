<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                07.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom;
use PQ\Core;
use Components\Custom\Events;

class Input extends \QLineEdit {

    public $signals = [
        'focus()',
        'blur()'
    ];
    
    protected $eventFilter;
    
    protected $tooltip;

    public function __construct($parent) {
        parent::__construct($parent);

        $this->styleSheet = Core::getInstance()->style->Input;

//        $this->eventFilter = new Events\Input($this);
//
//        $this->tooltip = new ToolTip($this);
    }
    
//    public function setToolTip($str) {
//        $this->tooltip->message($str);
//    }
}
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
    
    protected $onBlur = [];

    public function __construct($parent) {
        parent::__construct($parent);

        $this->styleSheet = Core::getInstance()->style->Input;

        $this->eventFilter = new Events\Input($this);
        
        $this->connect(SIGNAL('blur()'), $this, SLOT('blur()'));
//
//        $this->tooltip = new ToolTip($this);
    }
    
    public function blur($sender) {
        
    }
    
    public function __set($name, $value) {
        if($name === 'onBlur') {
            $this->onBlur[] = $value;
        } else {
            parent::__set($name, $value);
        }
    }
    
//    public function setToolTip($str) {
//        $this->tooltip->message($str);
//    }
}
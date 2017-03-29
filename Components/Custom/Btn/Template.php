<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                29.03.2017
 * @copyright           artmares@influ.su
 */

namespace Components\Custom\Btn;
use PQ\Core;

class Template extends \QWidget {
    
    public $signals = [
        'selected(bool)'
    ];
    
    public function __construct($parent = null, $iconPath, $text) {
        parent::__construct($parent);
        
        $this->setLayout(new \QHBoxLayout());
        $this->layout()->setContentsMargins(0, 0, 0, 0);
        
        $labelIcon = new \QLabel($this);
        $pixmap = new \QIcon($iconPath);
        $labelIcon->setPixmap($pixmap->pixmap(32, 32));
        $labelIcon->installEventFilter($this);
        $labelIcon->setMaximumWidth(34);
        
        $labelText = new \QLabel($this);
        $labelText->text = $text;
        $labelText->installEventFilter($this);
        
        $this->layout()->addWidget($labelIcon);
        $this->layout()->addWidget($labelText);
    
        $this->setProperty('selected', false);
        
        Core::getInstance()->style->set($this, 'TemplateBtn');
    }
    
    private function updateStyle($hover = false) {
        if($hover) {
            $this->objectName = 'Hover';
        } else {
            $this->objectName = '';
        }
        $this->styleSheet = $this->styleSheet();
    }
    
    /** @override enterEvent */
    public function enterEvent($event) {
        $this->updateStyle(true);
    }
    
    /** @override leaveEvent */
    public function leaveEvent($event) {
        $this->updateStyle();
    }
    
    /** @override mouseReleaseEvent */
    public function mouseReleaseEvent($event) {
        $this->setProperty('selected', true);
        $this->updateStyle();
        $this->emit('selected(bool)', [true]);
    }
}
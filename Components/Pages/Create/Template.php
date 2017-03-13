<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                12.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */
namespace Components\Pages\Create;
use PQ\Component\Dir;
use PQ\QtObject;
use PQ\WidgetsInterface;

class Template extends \QFrame implements WidgetsInterface {
    use QtObject;
    
    public $ui = [];
    
    public function initComponents() {
        
        $labelTemplate = new \QLabel($this);
        $labelTemplate->text = tr('Application Template');
        
        $this->ui['listTemplate'] = new \QListWidget($this);
        
        
        $this->setLayout(new \QGridLayout());
    }
    
}
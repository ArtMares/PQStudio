<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                03.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Pages;
use Components\Custom\Widget\Slider;
use Components\Pages\Create\Basic;
use PQ\QtObject;
use PQ\WidgetsInterface;

class Create extends \QFrame implements WidgetsInterface {

    use QtObject;

    public $ui = [];

    public $slider;

    public function initComponents() {

        /** Задаем имя объекту */
        $this->objectName = 'CreatePage';

        $this->core->style->set($this, 'CreatePage');

        $this->slider = new Slider($this);
        
        $this->core->widgets->set('Components/Pages/Create/Basic', new Basic());
        
        $this->slider->addWidget($this->core->widgets->get('Components/Pages/Create/Basic'));
        
        $this->slider->setLoop(true);
        
        $this->setLayout(new \QHBoxLayout());
        
        $this->layout()->addWidget($this->slider);
    }

    private function setProjectsPath($sender) {
        $path = $sender->text;
        $dir = \QFileDialog::getExistingDirectory($this, tr('Select directory'), $this->core->preparePath($path));
        if(!empty($dir)) {
            if($this->ui['defaultPath']->checked === true) {
                $this->ui['defaultPath']->checked = false;
                $this->ui['defaultPath']->enabled = true;
            }
            $this->ui['path']->text = $this->core->preparePath($dir, $this->core->WIN);
        }
    }

    private function setDefaultProjectsPath($sender, $path) {
        if($sender->checked) {
            $path = $path->text;
            if($this->core->storage->defaultProjectsPath !== $path) {
                $this->core->storage->defaultProjectsPath = $path;
            }
        }
        $this->core->config->ini()->set('defaultProjectsPath', $this->core->storage->defaultProjectsPath);
    }
    
    private function checkProject($name) {
        if(!$this->core->dir->exists($this->core->preparePath($this->ui['path']->text.'/'.$name))) {
            return true;
        }
        return false;
    }
}
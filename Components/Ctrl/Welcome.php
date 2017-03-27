<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                10.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */
namespace Components\Ctrl;

use Components\Model\Main;
use Components\Model\Project;
use PQ\Component\Dir;
use PQ\MVC;
use PQ\MVC\Controller;

class Welcome extends Controller {
    /** @var \Components\Widgets\Welcome */
    public $widget;
    
    public $pages = [];
    /** @var Main */
    public $model;
    /** @var Project */
    public $create;
    
    public function __construct() {
        parent::__construct();
        MVC::setModel('Components/Model/Create', new Project());
        $this->model = MVC::m('Components/Model/Main');
        $this->create = MVC::m('Components/Model/Create');
        $this->loadPlastiQ();
        $this->loadPQCore();
        $this->loadAppTemplates();
    }
    
    private function loadPlastiQ() {
        $path = $this->core->APP_PATH.'Builder/includes/';
        if($this->core->dir->exists($path)) {
            if($this->core->file->exists($path.'PlastiQ.php')) {
                $this->model->plastiq = require_once($path.'PlastiQ.php');
                ksort($this->model->plastiq);
            }
        }
    }
    
    private function loadPQCore() {
        $path = $this->core->APP_PATH.'Builder/includes/';
        if($this->core->dir->exists($path)) {
            if($this->core->file->exists($path.'PQCore.php')) {
                $this->model->pqcore = require_once($path.'PQCore.php');
            }
        }
    }
    
    private function loadAppTemplates() {
        $path = $this->core->APP_PATH.'templates/';
        if($this->core->dir->exists($path)) {
            $result = $this->core->dir->ls($path, Dir::Dirs);
            foreach($result as $dir) {
                $file = $path.$dir.'/wizard.json';
                if($this->core->file->exists($file)) {
                    $data = json_decode($this->core->file->read($file), true);
                    $data['path'] = $dir.'/';
                    $data['phpqt5'] = json_decode($this->core->file->read($path.$dir.'/file.phpqt5'), true);
                    $this->model->templates = $data;
                }
            }
        }
    }
    
    public function getWidget() {
        $this->widget = MVC::v('Components/Widgets/Welcome');
    }
    
    public function showPage($pageName) {
        $this->widget->showPage($pageName);
    }
}
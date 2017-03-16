<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                13.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components;
use Components\Model\CreateProject;
use PQ\Component\Dir;
use PQ\QtObject;
use PQ\WidgetsInterface;

class Collector extends \QObject implements WidgetsInterface {
    use QtObject;

    public function initComponents() {
        $this->loadModelCreateProject();
        $this->loadAppTemplates();
        $this->loadPlastiQ();
        $this->loadPQCore();
    }

    private function loadModelCreateProject() {
        $model = new CreateProject();
        $model->reset();
        $model->path_to = $this->core->preparePath(
            $this->core->config->ini()->get('defaultProjectsPath', $this->core->HOME_PATH.'PQStudioProjects'),
            $this->core->WIN
        );
        $this->core->model->set('CreateProject', $model);
    }

    private function loadAppTemplates() {
        $this->core->storage->appTemplates = [];
        $path = $this->core->APP_PATH.'templates/';
        if($this->core->dir->exists($path)) {
            $result = $this->core->dir->ls($path, Dir::Dirs);
            foreach($result as $dir) {
                $file = $path.$dir.'/wizard.json';
                if($this->core->file->exists($file)) {
                    $data = json_decode($this->core->file->read($file), true);
                    $data['path'] = $dir.'/';
                    $data['phpqt5'] = json_decode($this->core->file->read($path.$dir.'/file.phpqt5'), true);
                    $this->core->storage->appTemplates[] = $data;
                }
            }
        }
    }

    private function loadPlastiQ() {
        $this->core->storage->plastiq = [];
        $path = $this->core->APP_PATH.'Builder/';
        if($this->core->dir->exists($path)) {
            if($this->core->file->exists($path.'PlastiQ_includes.php')) {
                $this->core->storage->plastiq = require_once($path.'PlastiQ_includes.php');
                ksort($this->core->storage->plastiq);
            }
        }
    }

    private function loadPQCore() {
        $this->core->storage->pqcore = [];
        $path = $this->core->APP_PATH.'Builder/';
        if($this->core->dir->exists($path)) {
            if($this->core->file->exists($path.'PQCore_includes.php')) {
                $this->core->storage->pqcore = require_once($path.'PQCore_includes.php');
            }
        }
    }
}
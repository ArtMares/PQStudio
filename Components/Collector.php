<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                13.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components;
use PQ\Component\Dir;
use PQ\QtObject;
use PQ\WidgetsInterface;

class Collector extends \QObject implements WidgetsInterface {
    use QtObject;

    public function initComponents() {
        $this->prepareCreateProjectData();
        $this->loadAppTemplates();
        $this->loadPlastiQ();
    }

    public function resetProjectData() {
        $this->prepareCreateProjectData();
    }

    private function prepareCreateProjectData() {
        $this->core->storage->createProjectData = [
            'name' => '',
            'path' => '',
            'build' => [
                'template' => 'app',
                'icon' =>  '',
                'save_php7ts_md5' =>  true,
                'save_ini_md5' => false,
            ],
            'app' => [
                'name' => '',
                'version' => '',
                'orgName' => '',
                'orgDomain' => '',
            ],
            'templateIndex' => 0,
            'usePQCore' => false,
            'includes' => [
                'core:Qt'
            ]
        ];
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
}
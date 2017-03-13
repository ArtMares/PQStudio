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

    public $appTemplates = [];

    public function initComponents() {
        $this->loadAppTemplates();
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
}
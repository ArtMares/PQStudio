<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                24.03.2017
 * @copyright           artmares@influ.su
 */

namespace Components\Model;

use PQ\MVC\Model;

class Project extends Model {
    
    public $name;
    
    public $path_to;
    
    public $appName;
    
    public $version;
    
    public $orgName;
    
    public $orgDomain;
    
    public $templateIndex;
    
    public $usePQCore = false;
    
    public $includes = [];
    
    public $icon;
    
    public function reset() {
        $this->name = '';
        $this->path_to = '';
        $this->appName = '';
        $this->version = new Version();
        $this->orgName = '';
        $this->orgDomain = '';
        $this->templateIndex = -1;
        $this->usePQCore = false;
        $this->includes = [
            'core:Qt'
        ];
        $this->icon = '';
    }
}
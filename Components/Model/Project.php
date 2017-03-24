<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                24.03.2017
 * @copyright           artmares@influ.su
 */

namespace Components\Model;
use Components\BaseModel;

class Project extends BaseModel {
    
    public $name;
    
    public $path_to;
    
    public $appName;
    
    public $appVersion;
    
    public $orgName;
    
    public $orgDomain;
    
    public $templateIndex;
    
    public $usePQCore = false;
    
    public $includes = [];
    
    public $icon;
    
    public function __construct() {
        $this->reset();
    }
    
    public function reset() {
        $this->name = '';
        $this->path_to = '';
        $this->appName = '';
        $this->appVersion = '0.1';
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
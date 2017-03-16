<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                15.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Model;
use Components\BaseModel;

class CreateProjects extends BaseModel {

    public $name;

    public $path_to;

    public $appName;

    public $appVersion;

    public $orgName;

    public $orgDomain;

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
    }
}
<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                26.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */
namespace Components\Model;
use Components\BaseModel;

class Main extends BaseModel {
    
    public $plastiq = [];
    
    public $templates = [];
    
    public $pqcore = [];
    
    public function __construct() {
        $this->reset();
    }
    
    public function reset() {
        $this->plastiq = [];
        $this->templates = [];
        $this->pqcore = [];
    }
}
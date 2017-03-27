<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                26.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */
namespace Components\Model;

use PQ\MVC\Model;

class Main extends Model {
    
    public $plastiq = [];
    
    public $templates = [];
    
    public $pqcore = [];
    
    public function reset() {
        $this->plastiq = [];
        $this->templates = [];
        $this->pqcore = [];
    }
}
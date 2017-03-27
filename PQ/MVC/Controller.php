<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                27.03.2017
 * @copyright           artmares@influ.su
 */

namespace PQ\MVC;
use PQ\Core;

class Controller {
    
    protected $core;
    
    public function __construct() {
        $this->core = Core::getInstance();
    }
}
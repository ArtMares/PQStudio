<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                27.03.2017
 * @copyright           artmares@influ.su
 */

namespace PQ\MVC;
use PQ\Core;

class Controller extends \QObject {
    
    protected $core;
    
    public function __construct($parent = null) {
        parent::__construct($parent);
        $this->core = Core::getInstance();
    }
}
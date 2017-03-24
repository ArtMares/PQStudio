<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                24.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components;
use PQ\Core;

/**
 * Class BaseCtrl
 * @package Components
 * @property        Core        $core
 */
class BaseCtrl {
    
    protected $core;
    
    public function __construct() {
        $this->core = Core::getInstance();
    }
}
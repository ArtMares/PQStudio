<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQ;
trait Widget {

    protected $core;

    public function __construct() {
        $args = func_get_args();
        $parent = get_parent_class($this);
        if(preg_match('/^Q[a-zA-Z]+$/', $parent)) {
            $ref = new \ReflectionMethod($parent, '__construct');
            if (!empty($args)) {
                $ref->invokeArgs($this, $args);
            } else {
                $ref->invoke($this);
            }
            $this->core = Core::getInstance();
            if (method_exists($this, 'initComponents')) {
                $this->initComponents();
            }
        }
    }
}
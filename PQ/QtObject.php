<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQ;
trait QtObject {

    protected $core;

    private $depth = 0;

    public function __construct() {
        $args = func_get_args();
        $parent = get_parent_class($this);
        if(preg_match('/^Q[a-zA-Z]+$/', $parent)) {
            $ref = new \ReflectionMethod($parent, '__construct');
            if(!empty($args)) {
                $ref->invokeArgs($this, $args);
            } else {
                $ref->invoke($this);
            }
            $this->core = Core::getInstance();
            if(method_exists($this, 'initComponents')) {
                $this->initComponents();
            }
        }
    }

    private function deleteChildren($object) {
        $class = get_class($object);
        $pad = str_pad('>', $this->depth + 1, '-', STR_PAD_LEFT);
        echo $pad.'Attempt to delete QtObject "'.$class.'"'.PHP_EOL;
        $result = $object->children();
        if(count($result) > 0) {
            echo $pad.'Found children'.PHP_EOL;
            $this->depth++;
        }
        foreach($result as $child) {
            $this->deleteChildren($child);
        }
        echo $pad.'Deleted QtObject "'.$class.'"'.PHP_EOL;
        $object->deleteLater();
        unset($object);
    }

//    public function __destruct() {
//        $this->deleteChildren($this);
//    }
}
<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                27.03.2017
 * @copyright           artmares@influ.su
 */

namespace PQ;
class MVC {
    
    static protected $controllers = [];
    
    static protected $models = [];
    
    static protected $views = [];
    
    static protected $title = '';
    
    static protected function set($type, $name, $object) {
        switch($type) {
            case 'controller':
                self::$controllers[$name] = $object;
                break;
            case 'model':
                self::$models[$name] = $object;
                break;
            case 'view':
                self::$views[$name] = $object;
                break;
        }
    }
    
    static public function setController(string $name, $object) {
        self::set('controller', $name, $object);
    }
    
    static public function setCtrl(string $name, $object) {
        self::setController($name, $object);
    }
    
    static public function setModel(string $name, $object) {
        self::set('model', $name, $object);
    }
    
    static public function setView(string $name, $object) {
        self::set('view', $name, $object);
    }
    
    static public function controller(string $name) {
        if(isset(self::$controllers[$name])) return self::$controllers[$name];
        return null;
    }
    
    static public function ctrl(string $name) {
        return self::controller($name);
    }
    
    static public function c(string $name) {
        return self::controller($name);
    }
    
    static public function model(string $name) {
        if(isset(self::$models[$name])) return self::$models[$name];
        return null;
    }
    
    static public function m(string $name) {
        return self::model($name);
    }
    
    static public function view(string $name) {
        if(isset(self::$views[$name])) return self::$views[$name];
        return null;
    }
    
    static public function v(string $name) {
        return self::view($name);
    }
    
    static public function setDefaultTitle($title) {
        self::$title = Core::getInstance()->var->convert('str', $title);
    }
    
    static public function getDefaultTitle() {
        return self::$title;
    }
    
    static public function setTitle(&$object, $title = '') {
        $title = Core::getInstance()->var->convert('str', $title);
        if($title !== '') {
            $object->windowTitle = (self::$title !== '' ? self::$title.' | ' : '').$title;
        } else {
            $object->windowTitle = (self::$title !== '' ? self::$title : Core::getInstance()->applicationName());
        }
    }
    
    static public function destruct() {
        self::$controllers = null;
        self::$models = null;
        self::$views = null;
    }
}

require_once __DIR__.'/MVC/Controller.php';
require_once __DIR__.'/MVC/Model.php';
require_once __DIR__.'/MVC/View.php';
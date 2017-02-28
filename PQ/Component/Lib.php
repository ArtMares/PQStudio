<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQ\Component;
use PQ\Component;

class Lib extends Component {

    private $_loaded = array();

    public function &__get($name) {
        $name = strtolower($name);
        if(!$this->_load($name)) {
            return false;
        }
        return $this->_loaded[$name];
    }

    private function _load($name) {
        if(isset($this->_loaded[$name])) {
            return true;
        }
        $paths = array(
            'resource' => ':/Lib/',
            'app' => $this->core->APP_PATH.'Lib/'
        );

        $file = false;
        foreach($paths as $type => $path) {
            $file = $path.$name.'.php';
            if(!$this->core->file->exists($file)) {
                $file = false;
                continue;
            }
            break;
        }

        if(!$file) {
            $this->_error('Failed to load the library file "'.$name.'"');
            return false;
        }

        require_once(str_replace(':/', 'qrc://', $file));
        $class = ucfirst($name);
        if(!class_exists($class)) {
            $this->_error('Class "'.$class.'", "'.$name.'" library not found');
            return false;
        }

        $this->_loaded[$name] = new $class();

        $this->_info('Library "'.$name.'" is loaded');
        return true;
    }
}
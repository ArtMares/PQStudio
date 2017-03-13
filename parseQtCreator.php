<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                12.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */

switch($argc) {
    case 1:
        echo 'Please enter directory to the QtCreator templates!';
        break;
    case 2:
        $QtCreator = new QtCreator();
        $QtCreator->searchTemplates($argv[1]);
        break;
}

class QtCreator {
    
    private $objects = [];
    
    private $win = false;
    
    public function __construct() {
        $this->win = stripos(PHP_OS, 'win') === false ? false : true;
    }
    
    public function searchTemplates($sourcePath = '') {
        if($sourcePath == '') {
            echo "Please enter path to QtCreator Templates".PHP_EOL;
            return false;
        }
        if(!($sourcePath = $this->is_dir($sourcePath))) {
            echo "Directory not found: $sourcePath".PHP_EOL;
            return false;
        }
        $data = $this->readdir($sourcePath);
        foreach($data as $dir) {
            if($dir['type'] === 'dir') {
                $path = $this->is_dir($sourcePath.$dir['name']);
                if(!$this->existWizard($path)) {
                    $tmp = $this->readdir($path);
                    foreach($tmp as $_dir) {
                        $_path = $this->is_dir($path.$_dir['name']);
                        $this->existWizard($_path);
                    }
                }
            }
        }
        print_r($this->objects);
        if(count($this->objects) > 0) return true;
        return false;
    }
    
    private function existWizard($filePath) {
        $file = $filePath.'wizard.json';
        if(file_exists($file)) {
            $wizard = $this->extractWizard($file);
            if($this->isProjectCategory($wizard)) {
                $this->objects[$wizard['trDisplayName']] = [
                    'name' => $wizard['trDisplayName'],
                    'description' => $wizard['trDescription'],
                    
                ];
            }
            return true;
        }
        return false;
    }
    
    private function extractWizard($filePath) {
        $wizard = json_decode(file_get_contents($filePath), true);
        return $wizard;
    }
    
    private function isProjectCategory($data = [], $category = 'PHPQt5') {
        if(isset($data['trDisplayCategory'])) {
            if($data['trDisplayCategory'] === $category) return true;
        }
        return false;
    }
    
    private function is_dir($path) {
        $path = $this->preparePath($path);
        if(file_exists($path) && is_dir($path)) {
            if($path{strlen($path) - 1} !== '/') $path .= '/';
            return $path;
        }
        return false;
    }
    
    private function preparePath($path, $toWin = false) {
        if($toWin && $this->win) {
            $search = '/';
            $needle = '\\\\';
            $replace = '\\';
        } else {
            $search = '\\';
            $needle = '//';
            $replace = '/';
        }
        $path = str_replace($search, $replace, $path);
        while(strpos($path, $needle) !== false) {
            $path = str_replace($needle, $replace, $path);
        }
        return $path;
    }
    
    private function readdir($path) {
        $data = array();
        if($dh = opendir($path)) {
            while(($file = readdir($dh)) !== false) {
                $type = filetype($path.$file);
                if($file !== '.' && $file !== '..') {
                    $data[] = array(
                        'name' => $file,
                        'type' => $type
                    );
                }
            }
        } else {
            echo "Don't open directory: $path".PHP_EOL;
        }
        return $data;
    }
}
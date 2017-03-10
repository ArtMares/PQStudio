<?php

switch(count($argv)) {
    case 1:
        echo "Please enter the path to Module PlastiQ".PHP_EOL;
        break;
    case 2:
        $includes = array();
        $p = new PlastiQParser();
        if($p->parse_cpp($argv[1])) {
            $p->generate();
        }
        break;
}


function dir_read($path) {
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
        echo "Dont't open directory: $path";
    }
    return $data;
}

class PlastiQParser {

    private $objects = array();

    private $win = false;

    public function __construct() {
        $this->win = stripos(PHP_OS, 'win') === false ? false : true;
    }

    public function parse_cpp($sourcePath = '') {
        if($sourcePath == '') {
            echo "Please enter path to source PlastiQ".PHP_EOL;
            return false;
        }
        if(!($sourcePath = $this->is_dir($sourcePath))) {
            echo "Directory not found: $sourcePath".PHP_EOL;
            return false;
        }
        $data = $this->readdir($sourcePath);
        foreach($data as $dir) {
            $qtLib = $dir['name'];
            $subDir = $this->is_dir($sourcePath.$dir['name']);
            $tmp = $this->readdir($subDir);
            foreach($tmp as $f) {
                if($f['type'] === 'dir') {
                    $qtObject = str_replace('PlastiQ', '', $f['name']);
                    $this->objects[$qtObject] = [
                        'lib' => $qtLib
                    ];
                    $cpp = $subDir.$f['name'].DIRECTORY_SEPARATOR.strtolower($f['name']).'.cpp';
                    if(file_exists($cpp)) {
                        $str = file_get_contents($cpp);
                        if(preg_match('/::plastiqInherits\s?=\s?{\s?(.*)\s?}/i', $str, $match)) {
                            if($match[1] !== '') {
                                if(preg_match_all('/&PlastiQ([a-zA-Z]*)::/U', $match[1], $inherits)) {
                                    $this->objects[$qtObject]['depends'] = $inherits[1];
                                }
                            }
                        }
                    }
                }
            }
        }
        if(count($this->objects) > 0) return true;
        return false;
    }

    public function generate($path) {
        $str = '<?php'.PHP_EOL.PHP_EOL;
        $str .= 'return array('.PHP_EOL;
        foreach($this->objects as $qobject => $values) {
            $str .= "    '$qobject' => array(".PHP_EOL;
            foreach($values as $key => $value) {
                $str .= "        '$key'";
                if(is_array($value)) {
                    foreach($value as &$v) $v = "'$v'";
                    $str .= " => array(".implode(', ', $value)."),".PHP_EOL;
                } else{
                    $str .= " => '$value',".PHP_EOL;
                }
            }
            $str .= "    ),".PHP_EOL;
         }
         $str .= ");";
         file_put_contents(__DIR__ . DIRECTORY_SEPARATOR, $str);
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
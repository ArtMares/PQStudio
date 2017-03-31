<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */

# QFontDatabase

namespace PQ\Component;
use PQ\Component;
use PQ\Core;

class Font extends Component {

    private $database = false;

    public function __construct(Core &$core) {
        parent::__construct($core);
        $this->database = new \QFontDatabase();
        $this->load();
    }
    
    private function load() {
        $this->_info('Loading Fonts');
        $paths = array(
            $this->core->APP_PATH,
            ':/'
        );
        foreach($paths as $path) {
            $this->_info('Loading from a directory "'.$path.'Fonts/"');
            if($this->core->dir->exists($path.'Fonts/')) {
                $tmp = $this->core->dir->ls_mask($path.'Fonts/', ['*.ttf'], Dir::Files);
                foreach($tmp as $font) {
                    $this->_info('Add font '.$font);
                    $this->add($path.'Fonts/'.$font);
                }
            }
        }
    }

    public function add($fontPath) {
        $this->database->addApplicationFont($fontPath);
    }

    public function getList() {
        return $this->database->families();
    }

    public function exists($fontName) {
        return in_array($fontName, $this->getList());
    }
}
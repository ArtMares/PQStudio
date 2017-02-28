<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQ\Component;
use PQ\Component;
use PQ\Core;

class Font extends Component {

    private $database = false;

    public function __construct(Core &$core) {
        parent::__construct($core);
        $this->database = new \QFontDatabase();
    }

    public function db_add_font($fontPath) {
        $this->database->addApplicationFont($fontPath);
    }

    public function db_list() {
        return $this->database->families();
    }

    public function db_exists($fontName) {
        return in_array($fontName, $this->db_list());
    }
}
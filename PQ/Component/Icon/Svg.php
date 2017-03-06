<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                06.03.2017
 * @copyright           artmares@influ.su
 */
namespace PQ\Component\Icon;
class Svg {

    protected $icon;

    public function __construct($filePath = '') {
        if($filePath !== '') $this->icon = new \QIcon($filePath);
    }

    public function set($filePath) {
        $this->icon = new \QIcon($filePath);
    }

    public function get() {
        if(!is_null($this->icon)) return $this->icon;
        return null;
    }
}
<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                03.03.2017
 * @copyright           artmares@influ.su
 */
namespace PQ\Component\Icon;
class Char {

    private $char = '';

    private $color = false;

    private $size = false;

    public function __construct($char = '') {
        $this->set($char);
    }

    public function set($char) {
        $this->char = $char;
        return $this;
    }

    public function color(string $color) {
        $this->color = $color;
        return $this;
    }

    public function size(int $size) {
        $this->size = $size;
        return $this;
    }

    public function __toString(){
        $str = '';
        if($this->color) $this->color = "color: {$this->color}";
        if($this->size) $this->size = "font-size: {$this->size}px";
        if($this->char !== '') {
            $str = "<span>".$this->char.'</span>';
            if($this->color) $str = "<span style=\"{$this->color}\">".$this->char."</span>";
            if($this->size) $str = "<span style=\"{$this->size}\">".$this->char."</span>";
            if($this->color && $this->size) $str = "<span style=\"{$this->color}; {$this->size}\">".$this->char."</span>";
        }
        return $str;
    }
}
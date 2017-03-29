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
    
    private $html = false;

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
    
    public function html($res = true) {
        $this->html = $res;
        return $this;
    }

    public function __toString(){
        $str = '';
        if($this->color) $this->color = "color: {$this->color}";
        if($this->size) $this->size = "font-size: {$this->size}px";
        if($this->char !== '') {
            $str = ($this->html === true ? "<span>".$this->char.'</span>' : $this->char);
            if($this->color) $str = "<span style=\"{$this->color}\">".$this->char."</span>";
            if($this->size) $str = "<span style=\"{$this->size}\">".$this->char."</span>";
            if($this->color && $this->size) $str = "<span style=\"{$this->color}; {$this->size}\">".$this->char."</span>";
        }
        return $str;
    }
}
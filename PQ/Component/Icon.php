<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                03.03.2017
 * @copyright           artmares@influ.su
 */
namespace PQ\Component;
use PQ\Component;
use PQ\Core;

class Icon extends Component {

    private $icons = array();

    private $font_ext = '.ttf';

    private $style_ext = '.css';

    private $path;

    public function __construct(Core $core) {
        parent::__construct($core);
        $this->path = $this->core->APP_DATA.'icon_fonts';
        $this->core->dir->mkdir($this->path);
        $this->_load();
        foreach(['Char', 'Svg'] as $item) {
            require_once $this->core->PATH.'Component/Icon/'.$item.'.php';
        }
    }

    private function _load() {
        $this->_info('Loading Icon Fonts');
        $fonts = array();
        $paths = array(
            $this->core->APP_PATH,
            ':/'
        );
        foreach($paths as $path) {
            $this->_info('Loading from a directory "'.$path.'Fonts/Icons"');
            if($this->core->dir->exists($path.'Fonts/Icons')) {
                $tmp = $this->core->dir->ls_mask($path.'Fonts/Icons', ['*'.$this->font_ext], Dir::Files);
                foreach($tmp as $font) $fonts[str_replace($this->font_ext, '', $font)] = $path.'Fonts/Icons';
            }
        }
        foreach($fonts as $font => $path) {
            $this->_info('Loading font data "'.$font.'"');
            if(!$this->_check_parsed($font)) {
                $this->_info('Parse stylesheet');
                $data = $this->_load_css($font, $path);
                $data = $this->_parse_css($data);
                $this->core->file->rewrite($this->path.'/'.$font.'.json', json_encode($data));
            } else {
                $this->_load_file($font);
            }
            $this->_load_ttf($path.'/'.$font.$this->font_ext);
        }
    }

    private function _check_parsed($name) {
        return $this->core->file->exists($this->path.'/'.$name.'.json');
    }

    private function _load_file($name) {
        $data = $this->core->file->read($this->path.'/'.$name.'.json');
        $this->icons = array_merge($this->icons, json_decode($data, true));
    }

    private function _load_ttf($path) {
        $this->core->font->add($path);
    }

    private function _load_css($name, $path) {
        $file = $path.'/'.$name.$this->style_ext;
        if(!$this->core->file->exists($file)) return '';
        $data = $this->core->file->read($file);
        return $data;
    }

    private function _parse_css($str = '') {
        $data = array();
        if(!empty($str)) {
            $str = str_replace(["\r\n", "\r", "\n", "\t"], '', $str);
            $exp = '/(\.([a-z\-_]*)(:after|:before)\s?\{\s{0,4}content:\s?\"\\\\([a-z0-9]{2})([a-z0-9]{2})\")/i';
            if(preg_match_all($exp, $str, $match)) {
                foreach($match[2] as $index => $key) {
                    $data[$key] = iconv('UCS-2', 'UTF-8', chr(hexdec('\\'.$match[4][$index])).chr(hexdec('\\'.$match[5][$index])));
                }
            }
        }
        if(!empty($data)) $this->icons = array_merge($this->icons, $data);
        return $data;
    }

    public function font($name, $param1 = false, $param2 = false) {
        $icon = new Component\Icon\Char();
        $icon->set(isset($this->icons[$name]) ? $this->icons[$name] : '');
        if($param1 !== false && !$param2) {
            if(is_string($param1)) $icon->color($param1);
            if(is_int($param1) || is_float($param1)) $icon->size((int)$param1);
        }
        if($param1 !== false && $param2 !== false) {
            if(is_string($param1) && (is_int($param2) || is_float($param2))) $icon->color($param1)->size((int)$param2);
            if((is_int($param1) || is_float($param1)) && is_string($param2)) $icon->size((int)$param1)->color($param2);
        }
        return $icon;
    }

    public function svg($name) {
        $icon = new Component\Icon\Svg();
    }
}
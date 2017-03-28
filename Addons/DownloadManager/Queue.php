<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                27.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */

namespace Addons\DownloadManager;
class Queue {
    
    protected $list = [];
    
    public function put($value) {
        $this->list[] = $value;
    }
    
    public function get() {
        return array_shift($this->list);
    }
}
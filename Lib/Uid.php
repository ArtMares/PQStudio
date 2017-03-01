<?php

/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                01.03.17
 * @copyright           artmares@influ.su
 */
class Uid {
    
    private function rand() {
        $t = rand(0, 10);
        if($t == 10) $t = $this->rand();
        return $t;
    }
    
    public function generate() {
        $b = '';
        for($a = 1; $a <= 36; $a++) {
            $b .= (string)($a * 51 & 52 ? dechex(($a ^ 15 ? (8 ^ ($this->rand() / 10) * ($a ^ 20 ? 16 : 4)) : 4)) : '-');
        }
        return $b;
    }
}
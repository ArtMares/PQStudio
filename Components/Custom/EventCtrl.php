<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                07.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */
namespace Components\Custom;
class EventCtrl extends \PQEventFilter {
    
    static protected $eventFilter = false;
    
    public function __construct($parent = null) {
        parent::__construct($parent);
        if(self::$eventFilter === false) {
            self::$eventFilter = $this;
        }
    }
}
<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                10.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */
namespace Components\Ctrl;
use Components\BaseCtrl;

class Welcome extends BaseCtrl {
    /** @var \Components\Widgets\Welcome */
    public $widget;
    
    public $pages = [];
    
    public function __construct() {
        parent::__construct();
        $this->widget = $this->core->widgets->get('Components/Widgets/Welcome');
    }
    
    public function showPage($pageName) {
        $this->widget->showPage($pageName);
    }
}
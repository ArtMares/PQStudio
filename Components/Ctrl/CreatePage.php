<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                15.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Ctrl;
use Components\BaseCtrl;

class CreatePage extends BaseCtrl {
    
    protected $model;
    
    public function __construct() {
        parent::__construct();
        $this->model = $this->core->model->get('CreateProject');
    }
    
    public function Next() {
        $this->core->widgets->get('Components/Pages/Create')->next();
    }
    
    public function Prev() {
        $this->core->widgets->get('Components/Pages/Create')->prev();
    }
    
    public function Create() {
    }
}
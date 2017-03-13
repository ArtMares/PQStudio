<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                11.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */
namespace Components\Widgets;
use Components\Custom\SliderWidget;
use Components\Pages\Create;
use Components\Pages\Import;
use Components\Pages\Main;
use PQ\QtObject;
use PQ\WidgetsInterface;

class Pages extends \QWidget implements WidgetsInterface {
    use QtObject;
    
    /** @var SliderWidget */
    protected $slider;
    
    private $btns = [];
    
    public function initComponents() {
    
//        $this->setFixedSize(770, 430);
        $this->resize(770, 430);
        
        $this->slider = new SliderWidget($this);
        $this->slider->setDirection(SliderWidget::DownToUp);
        $this->slider->setLoop(true);
    
//        $this->slider->setFixedSize(770, 430);
        
        $this->setLayout(new \QVBoxLayout());
        $this->layout()->setContentsMargins(0, 0, 0, 0);
        $this->layout()->setSpacing(0);
        
        $this->layout()->addWidget($this->slider);
    
        $this->core->widgets->set('Components/Pages/Main', new Main());
        $this->core->widgets->set('Components/Pages/Create', new Create());
//        $this->core->widgets->set('Components/Pages/Import', new Import());
    
        $this->slider->addWidget($this->core->widgets->get('Components/Pages/Main'));
        $this->slider->addWidget($this->core->widgets->get('Components/Pages/Create'));
//        $this->slider->addWidget($this->core->widgets->get('Components/Pages/Import'));
        
        $this->btns['next'] = new \QPushButton($this);
        $this->btns['next']->text = 'Next';
        $this->btns['next']->onClicked = function($sender) {
            $this->slider->next();
        };
        
        $this->layout()->addWidget($this->btns['next']);
    
        $this->btns['prev'] = new \QPushButton($this);
        $this->btns['prev']->text = 'Prev';
        $this->btns['prev']->onClicked = function($sender) {
            $this->slider->prev();
        };
        
        $this->layout()->addWidget($this->btns['prev']);
    }
}
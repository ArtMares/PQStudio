<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                03.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Pages;
use Components\Custom\Widget\Slider;
use Components\Pages\Create\Basic;
use Components\Pages\Create\Template;
use PQ\QtObject;
use PQ\WidgetsInterface;

class Create extends \QFrame implements WidgetsInterface {

    use QtObject;

    /** @var Slider */
    private $slider;

    private $currentSlide = 0;

    public function initComponents() {

        /** Задаем имя объекту */
        $this->objectName = 'CreatePage';

        $this->core->style->set($this, 'CreatePage');

        $this->slider = new Slider($this);
        $this->slider->setDuration(350);
        $this->slider->setLoop(true);
        
        $this->core->widgets->set('Components/Pages/Create/Basic', new Basic());
        $this->core->widgets->set('Components/Pages/Create/Template', new Template());
        
        $this->slider->addWidget($this->core->widgets->get('Components/Pages/Create/Basic'));
        $this->slider->addWidget($this->core->widgets->get('Components/Pages/Create/Template'));
        
        $this->setLayout(new \QHBoxLayout());
        $this->layout()->setContentsMargins(0, 0, 0, 0);
        $this->layout()->setSpacing(0);
        
        $this->layout()->addWidget($this->slider);

//        $this->slider->connect(SIGNAL('currentChanged(int)'), $this, SLOT('changeSlide(int)'));
    }

    public function next() {
        $this->slider->next();
    }

    public function prev() {
        $this->slider->prev();
    }

//    public function changeSlide($sender, $slideIndex) {
//        if($slideIndex === 0) {
//            $this->core->widgets->get('Components/Widgets/Welcome')->Back();
//        }
//        qDebug($slideIndex);
//    }
}
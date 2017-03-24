<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                03.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Widgets;
use Components\Custom\Widget\Slider;
use Components\Pages\Create;
use Components\Pages\Import;
use Components\Pages\Main;
use PQ\QtObject;
use PQ\WidgetsInterface;

class Welcome extends \QWidget implements WidgetsInterface {

    use QtObject;
    
    private $MainPage;
    
    private $pages = [];
    
    private $currentPage;
    
    private $hideAnimator;
    
    private $showAnimator;

    private $duration = 350;
    
    private $firstShow = true;
    
    public function initComponents() {
        
        $this->objectName = 'Welcome';
        
        $this->hideAnimator = new \QPropertyAnimation($this);
        $this->hideAnimator->setDuration($this->duration);
        $this->hideAnimator->setPropertyName('pos');
        $this->hideAnimator->setEasingCurve(new \QEasingCurve(\QEasingCurve::InOutQuad));
        
        $this->showAnimator = new \QPropertyAnimation($this);
        $this->showAnimator->setDuration($this->duration);
        $this->showAnimator->setPropertyName('pos');
        $this->showAnimator->setEasingCurve(new \QEasingCurve(\QEasingCurve::InOutQuad));
        
        /** Задаем фиксированный размер окна */
        $this->setFixedSize(770, 430);

        /** Задаем заголовок окна */
        $this->core->widgets->setTitle($this);

        /** Задаем стили для окна */
        $this->core->style->set($this, 'WelcomeWidget');

        /** Инициализируем основные страницы виджета */
        $this->core->widgets->set('Components/Pages/Main', new Main($this));
//        $this->core->widgets->set('Components/Pages/Create', new Create($this));
//        $this->core->widgets->set('Components/Pages/Import', new Import($this));
        
        $this->MainPage = $this->core->widgets->get('Components/Pages/Main');
//        $this->pages[] = $this->core->widgets->get('Components/Pages/Create');
    }
    
    /** @override showEvent */
    public function showEvent($event) {
        $this->resizePages();
    }
    
    public function showPage($pageName) {
        $this->currentPage = false;
        $page = $this->core->widgets->get($pageName);
        if(!$this->core->var->is_null($page)) {
            $this->hideAnimator->setTargetObject($this->MainPage);
            $this->hideAnimator->setStartValue(new \QPoint(0, 0));
            $this->hideAnimator->setEndValue(new \QPoint(-$this->width(), 0));
    
            $this->showAnimator->setTargetObject($page);
            $this->showAnimator->setStartValue(new \QPoint($this->width(), 0));
            $this->showAnimator->setEndValue(new \QPoint(0, 0));
            
            $this->animationStart();
            
            $this->currentPage = $pageName;
        }
    }

    public function Back() {
        $page = $this->core->widgets->get($this->currentPage);
        if(!$this->core->var->is_null($page)) {
            $this->hideAnimator->setTargetObject($page);
            $this->hideAnimator->setStartValue(new \QPoint(0, 0));
            $this->hideAnimator->setEndValue(new \QPoint($this->width(), 0));
    
            $this->showAnimator->setTargetObject($this->MainPage);
            $this->showAnimator->setStartValue(new \QPoint(-$this->width(), 0));
            $this->showAnimator->setEndValue(new \QPoint(0, 0));
            
            $this->animationStart();
            
            $this->currentPage = false;
        }
    }
    
    private function animationStart() {
        $this->hideAnimator->start();
        $this->showAnimator->start();
    }
    
    private function resizePages() {
        if($this->firstShow) {
            $this->MainPage->resize($this->size());
            foreach ($this->pages as $index => $page) {
                $page->resize($this->size());
                $page->move(new \QPoint($this->width(), 0));
            }
            $this->firstShow = false;
        }
    }

    public function show() {
        parent::show();
        $this->core->QApp->alert($this, 10000);
    }
}
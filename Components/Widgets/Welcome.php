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
    
    private $eventFilter;

    private $firstShow = true;
    
    public function initComponents() {
        
        $this->hideAnimator = new \QPropertyAnimation($this);
        $this->hideAnimator->setDuration($this->duration);
        $this->hideAnimator->setPropertyName('pos');
        $this->hideAnimator->setEasingCurve(new \QEasingCurve(\QEasingCurve::InOutQuad));
        
        $this->showAnimator = new \QPropertyAnimation($this);
        $this->showAnimator->setDuration($this->duration);
        $this->showAnimator->setPropertyName('pos');
        $this->showAnimator->setEasingCurve(new \QEasingCurve(\QEasingCurve::InOutQuad));
    
        $this->eventFilter = new \PQEventFilter($this);
        $this->eventFilter->addEventType(\QEvent::Show);
//        $this->eventFilter->addEventType(\QEvent::WindowStateChange);
        $this->installEventFilter($this->eventFilter);
    
        $this->eventFilter->onEvent = function($sender, $event) {
            switch($event->type()) {
                case \QEvent::Show:
                    $this->resizePages();
                    break;
                case \QEvent::WindowStateChange:
                    if($sender->isMinimized())
                        qDebug('Minimized');
                    break;
            }
        };
        
        /** Задаем фиксированный размер окна */
        $this->setFixedSize(770, 430);

        /** Задаем заголовок окна */
        $this->core->widgets->setTitle($this);

        /** Задаем стили для окна */
        $this->core->style->set($this, 'WelcomeWidget');

        /** Создаем слой */
//        $this->setLayout(new \QHBoxLayout());

        /** Убираем отступы от края у слоя */
//        $this->layout()->setContentsMargins(0, 0, 0, 0);
//        $this->layout()->setSpacing(0);

        /** Инициализируем основные страницы виджета */
        $this->core->widgets->set('Components/Pages/Main', new Main($this));
        $this->core->widgets->set('Components/Pages/Create', new Create($this));
        $this->core->widgets->set('Components/Pages/Import', new Import($this));
        
        $this->MainPage = $this->core->widgets->get('Components/Pages/Main');
//        $this->MainPage->setParent($this);
        $this->pages[] = $this->core->widgets->get('Components/Pages/Create');

        /** Добавляем страницы в стаковый виджет */
//        $this->stack->addWidget($this->core->widgets->get('Components/Pages/Main'));
//        $this->stack->addWidget($this->core->widgets->get('Components/Pages/Create'));
//        $this->stack->addWidget($this->core->widgets->get('Components/Pages/Import'));

        /** Добавляем стаковый виджет в слой */
//        $this->layout()->addWidget($this->stack);

        /** Задаем страницу которая будет отображена */
//        $this->stack->setCurrentWidget($this->core->widgets->get('Components/Pages/Main'));
//        $this->page = 'Components/Pages/Main';
    }
    
    public function showPage($pageName) {
        $this->currentPage = false;
        if(!$this->core->var->is_null($this->core->widgets->get($pageName))) {
            $this->hideAnimator->setTargetObject($this->MainPage);
            $this->hideAnimator->setStartValue(new \QPoint(0, 0));
            $this->hideAnimator->setEndValue(new \QPoint(-$this->width(), 0));
    
            $this->showAnimator->setTargetObject($this->core->widgets->get($pageName));
            $this->showAnimator->setStartValue(new \QPoint($this->width(), 0));
            $this->showAnimator->setEndValue(new \QPoint(0, 0));
            
            $this->hideAnimator->start();
            $this->showAnimator->start();
            
            $this->currentPage = $pageName;
        }
    }

    public function Back() {
        if(!$this->core->var->is_null($this->core->widgets->get($this->currentPage))) {
            $this->hideAnimator->setTargetObject($this->core->widgets->get($this->currentPage));
            $this->hideAnimator->setStartValue(new \QPoint(0, 0));
            $this->hideAnimator->setEndValue(new \QPoint($this->width(), 0));
    
            $this->showAnimator->setTargetObject($this->MainPage);
            $this->showAnimator->setStartValue(new \QPoint(-$this->width(), 0));
            $this->showAnimator->setEndValue(new \QPoint(0, 0));
    
            $this->hideAnimator->start();
            $this->showAnimator->start();
            $this->currentPage = false;
        }
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
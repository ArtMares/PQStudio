<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                12.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */
namespace Components\Custom\Widget;
class Slider extends \QWidget {
    
    const Stopped       = 0x00;
    const Running       = 0x01;
    
    const RightToLeft   = 0x00;
    const LeftToRight   = 0x01;
    const UpToDown      = 0x02;
    const DownToUp      = 0x03;
    
    public $signals = [
        'currentChanged(int)',
        'stateChanged(int,int)'
    ];
    
    protected $count = 0;
    
    protected $widgets = [];
    
    protected $currentIndex = 0;
    
    protected $hideAnimator;
    
    protected $showAnimator;
    
    protected $duration = 300;
    
    protected $direction;
    
    protected $state;
    
    protected $loop = false;
    
    protected $eventFilter;
    
    public function __construct($parent = null) {
        parent::__construct($parent);
        
        $this->eventFilter = new \PQEventFilter($this);
        $this->eventFilter->addEventType(\QEvent::Show);
        $this->eventFilter->addEventType(\QEvent::Resize);
        $this->installEventFilter($this->eventFilter);
        
        $this->eventFilter->onEvent = function($sender, $event) {
            switch($event->type()) {
                case \QEvent::Show:
                case \QEvent::Resize:
                    $this->resizeWidgets();
                    break;
            }
        };
        
        $this->hideAnimator = new \QPropertyAnimation($this);
        $this->hideAnimator->setDuration($this->duration);
        $this->hideAnimator->setPropertyName('pos');
        $this->hideAnimator->setEasingCurve(new \QEasingCurve(\QEasingCurve::InOutQuad));
        
        $this->showAnimator = new \QPropertyAnimation($this);
        $this->showAnimator->setDuration($this->duration);
        $this->showAnimator->setPropertyName('pos');
        $this->showAnimator->setEasingCurve(new \QEasingCurve(\QEasingCurve::InOutQuad));
        
        $this->hideAnimator->onFinished = function($sender) {
            if($this->isStopped()) $this->stateChange(self::Stopped);
        };
        
        $this->showAnimator->onFinished = function($sender) {
            if($this->isStopped()) $this->stateChange(self::Stopped);
        };
        
        $this->state = self::Stopped;
        
        $this->direction = self::RightToLeft;
    }
    
    public function addWidget($widget) {
        $widget->setParent($this);
        $this->widgets[] = $widget;
        $this->count++;
        return $this->count - 1;
    }
    
    public function setDirection($direction) {
        $this->direction = self::RightToLeft;
        if($direction === self::RightToLeft
            || $direction === self::LeftToRight
            || $direction === self::UpToDown
            || $direction === self::DownToUp) {
            $this->direction = $direction;
        }
    }
    
    public function setDuration($microtime) {
        $microtime = (int)$microtime;
        if($microtime > 0) {
            $this->hideAnimator->setDuration($microtime);
            $this->showAnimator->setDuration($microtime);
        }
    }
    
    public function setLoop($loop) {
        $this->loop = (bool)$loop;
    }
    
    public function currentIndex() {
        return $this->currentIndex;
    }
    
    public function count() {
        return $this->count;
    }
    
    public function next() {
        if($this->state === self::Stopped && $this->count > 1) {
            $this->hideDirectionNext($this->widgets[$this->currentIndex]);
            $this->currentUp();
            if($this->issetWidget()) {
                $this->showDirectionNext($this->widgets[$this->currentIndex]);
                $this->startAnimators();
            } else {
                $this->currentDown();
            }
        }
    }
    
    public function prev() {
        if($this->state === self::Stopped && $this->count > 1) {
            $this->hideDirectionPrev($this->widgets[$this->currentIndex]);
            $this->currentDown();
            if($this->issetWidget()) {
                $this->showDirectionPrev($this->widgets[$this->currentIndex]);
                $this->startAnimators();
            } else {
                $this->currentUp();
            }
        }
    }

    public function showSlideToIndex($index) {
        $index = (int)$index;
        if($this->state === self::Stopped && $this->count > 1 && $index > -1 && $index < $this->count) {
            $this->hideDirectionPrev($this->widgets[$this->currentIndex]);
            $i = $this->currentIndex;
            $this->currentIndex = $index;
            if($this->issetWidget()) {
                $this->showDirectionPrev($this->widgets[$this->currentIndex]);
                $this->startAnimators();
            } else {
                $this->currentIndex = $i;
            }
        }
    }
    
    public function isStopped() {
        if($this->hideAnimator->state() === $this->showAnimator->state()) {
            $this->signal_currentChanged();
            return true;
        }
        return false;
    }
    
    protected function currentUp() {
        $this->currentIndex++;
        if($this->loop === true && $this->currentIndex >= $this->count) {
            $this->currentIndex = 0;
        }
    }
    
    protected function currentDown() {
        $this->currentIndex--;
        if($this->loop === true && $this->currentIndex < 0) {
            $this->currentIndex = $this->count - 1;
        }
    }
    
    protected function stateChange($state) {
        $this->emit('stateChanged(int,int)', [$this->state, $state]);
        $this->state = $state;
    }
    
    protected function resizeWidgets() {
        foreach($this->widgets as $index => $widget) {
            $widget->resize($this->size());
            if($index !== $this->currentIndex) {
                $widget->move(new \QPoint($this->width(), $this->pos()->y()));
            } else {
                $widget->move($this->pos());
            }
        }
    }
    
    protected function startAnimators() {
        $this->hideAnimator->start();
        $this->showAnimator->start();
        $this->stateChange(self::Running);
    }
    
    protected function signal_currentChanged() {
        $this->emit('currentChanged(int)', [$this->currentIndex]);
    }
    
    protected function issetWidget() {
        
        return isset($this->widgets[$this->currentIndex]);
    }
    
    protected function hideDirectionNext($widget) {
        $this->hideAnimator->setTargetObject($widget);
        $this->hideAnimator->setStartValue($this->pos());
        switch($this->direction) {
            case self::RightToLeft:
                $this->hideAnimator->setEndValue(new \QPoint(-$this->width(), $this->pos()->y()));
                break;
            case self::LeftToRight:
                $this->hideAnimator->setEndValue(new \QPoint($this->width(), $this->pos()->y()));
                break;
            case self::UpToDown:
                $this->hideAnimator->setEndValue(new \QPoint($this->pos()->x(), $this->height()));
                break;
            case self::DownToUp:
                $this->hideAnimator->setEndValue(new \QPoint($this->pos()->x(), -$this->height()));
                break;
        }
    }
    
    protected function showDirectionNext($widget) {
        $this->showAnimator->setTargetObject($widget);
        switch($this->direction) {
            case self::RightToLeft:
                $this->showAnimator->setStartValue(new \QPoint($this->width(), $this->pos()->y()));
                break;
            case self::LeftToRight:
                $this->showAnimator->setStartValue(new \QPoint(-$this->width(), $this->pos()->y()));
                break;
            case self::UpToDown:
                $this->showAnimator->setStartValue(new \QPoint($this->pos()->x(), -$this->height()));
                break;
            case self::DownToUp:
                $this->showAnimator->setStartValue(new \QPoint($this->pos()->x(), $this->height()));
                break;
        }
        $this->showAnimator->setEndValue($this->pos());
    }
    
    protected function hideDirectionPrev($widget) {
        $this->hideAnimator->setTargetObject($widget);
        $this->hideAnimator->setStartValue($this->pos());
        switch($this->direction) {
            case self::RightToLeft:
                $this->hideAnimator->setEndValue(new \QPoint($this->width(), $this->pos()->y()));
                break;
            case self::LeftToRight:
                $this->hideAnimator->setEndValue(new \QPoint(-$this->width(), $this->pos()->y()));
                break;
            case self::UpToDown:
                $this->hideAnimator->setEndValue(new \QPoint($this->pos()->x(), -$this->height()));
                break;
            case self::DownToUp:
                $this->hideAnimator->setEndValue(new \QPoint($this->pos()->x(), $this->height()));
                break;
        }
    }
    
    protected function showDirectionPrev($widget) {
        $this->showAnimator->setTargetObject($widget);
        switch($this->direction) {
            case self::RightToLeft:
                $this->showAnimator->setStartValue(new \QPoint(-$this->width(), $this->pos()->y()));
                break;
            case self::LeftToRight:
                $this->showAnimator->setStartValue(new \QPoint($this->width(), $this->pos()->y()));
                break;
            case self::UpToDown:
                $this->showAnimator->setStartValue(new \QPoint($this->pos()->x(), $this->height()));
                break;
            case self::DownToUp:
                $this->showAnimator->setStartValue(new \QPoint($this->pos()->x(), -$this->height()));
                break;
        }
        $this->showAnimator->setEndValue($this->pos());
    }
}
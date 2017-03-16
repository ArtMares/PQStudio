<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                16.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */
namespace Components\Widgets;
use PQ\WidgetsInterface;

class NotificationCenter extends \QWidget implements WidgetsInterface {
    
    protected $parentWidget;
    
    protected $showAnimator;
    
    protected $hideAnimator;
    
    protected $moveAnimator;
    
    protected $items = [];
    
    protected $duration = 400;
    
    protected $desktop;
    
    public function __construct($parent = null, $duration = 400) {
        parent::__construct();
        
        $this->parentWidget = $parent;
        
        $this->showAnimator = new \QPropertyAnimation($this);
        $this->showAnimator->setPropertyName('pos');
        
        $this->hideAnimator = new \QPropertyAnimation($this);
        $this->hideAnimator->setPropertyName('pos');
        
        $this->setDuration($duration);
        
        $this->desktop = \QApplication::desktop();
    }
    
    public function setDuration($duration) {
        $this->duration = (int)$duration;
        
        $this->showAnimator->setDuration($this->duration);
        $this->hideAnimator->setDuration($this->duration);
    }
    
    public function initComponents() {
        $this->setMinimumWidth(500);
        $this->setMaximumWidth(500);
    
        /** Задаем флаги и атрибуты для прозрачного фона*/
        $this->setWindowFlags(Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);
        $this->setAttribute(Qt::WA_TranslucentBackground);
    
        /** Убираем автоматическую заливку фона*/
        $this->setAutoFillBackground(false);
    }
    
    private function getResolution() {
        if(is_null($this->parentWidget)) {
            $screen = $this->desktop->primaryScreen();
            $area = $this->desktop->availableGeometry($screen);
            $screenArea = $this->desktop->screenGeometry($screen);
            qDebug('Area');
            qDebug([
                $area->x(),
                $area->y(),
                $area->width(),
                $area->height()
            ]);
            qDebug('Screen');
            qDebug([
                $screenArea->x(),
                $screenArea->y(),
                $screenArea->width(),
                $screenArea->height()
            ]);
//            $area = \QDesktopWidget::availableGeometry();
//            qDebug($area);
        }
    }
    
    public function show() {
        parent::show();
        $this->getResolution();
    }
}
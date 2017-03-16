<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                10.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Widgets;
use PQ\WidgetsInterface;

class Notification extends \QWidget implements WidgetsInterface {
    const SUCCESS   = 0x00;
    const INFO      = 0x01;
    const WARNING   = 0x02;
    const ERROR     = 0x03;
    const NONE      = 0x04;

    const sideTop       = 0x05;
    const sideBottom    = 0x06;
    const sideLeft      = 0x07;
    const sideRight     = 0x08;
    /**
     * Ссылка на родительский объект
     * Если не является null то Notification будет отображатся на том же экране где находится основное окно
     */
    private $parentWindow;

    /** QPropertyAnimation - пердназначены для анимации появления Notification */
    private $slideIn;
    private $slideOut;
    /** QTimer - задержа перед slideOut при собитии QEvent::Leave */
    private $delayLeave;

    private $delayShow;
    /** Время задержки перед срабатыванием slideOut при собитии QEvent::Leave */
    private $timeoutLeave = 5;

    private $timeoutShow;
    /** Интервал обновления QTimer */
    private $interval = 3;
    /** Шаг анимации в пикселях */
    private $step = 2;
    /** Ширина окна Notification */
    private $width;
    /** Высота окна Notification */
    private $height;

    /** Ссылка на QLabel для заголовка сообщения */
    private $labelTitle;
    /** Ссылка на QLabel для текста сообщения */
    private $labelMessage;
    /** Ссылка на QPushButton - кнопка для скрытия Notification */
    private $closeBtn;
    /** Строна экрана с которой будет производится анимация slideIn и slideOut */
    private $side;

    /** Прошедший промежуток времени между собитием QEvent::Leave и slideOut() */
    private $timeLeave;

    private $timeShow;
    /** Переменная используемая для анимации */
    private $now;
    /** Координата Y окна Notification */
    private $y;
    /** Координата X окна Notification */
    private $x;
    /** Координата Y окна Notification для метода slideIn */
    private $maxY;
    /** Координата X окна Notification для метода slideIn */
    private $maxX;
    /** Стили для окна Notification */
    private $theme;
    
    private $eventFilter;

    /**
     * Notification constructor.
     * @param null $parentWindow - Ссылка на родительский объект
     * @param int $width - Ширина окна Notification
     * @param int $height - Высота окна Notification
     */
    public function __construct(&$parentWindow = null, $width = 400, $height = 200) {
        parent::__construct();
        $this->parentWindow = $parentWindow;

        $this->width = $width;
        $this->height = $height;
        /** Задаем минимальные и максимальные параметры ширины и высоты окна Notification */
        $this->minimumWidth = $this->width;
        $this->maximumWidth = $this->width;
        $this->minimumHeight = $this->height;
        $this->maximumHeight = $this->height;

        $this->theme = '
            #Notification_success {
                background-color: #739E73;
            }
            #Notification_info {
                background-color: #3276B1;
            }
            #Notification_warning {
                background-color: #C79121;
            }
            #Notification_error {
                background-color: #C46A69;
            }
            #Notification_default {
                background-color: #DBDBDB;
            }
            #Notification_success > QLabel {
                color: #fff;
            }
            #Notification_info > QLabel {
                color: #fff;
            }
            #Notification_warning > QLabel {
                color: #fff;
            }
            #Notification_error > QLabel {
                color: #fff;
            }
            #Notification_default > QLabel {
                color: #323232;
            }
            QLabel#Title {
                font: bold 18px;
            }
            QLabel#Message {
                font: 16px;
            }
            QPushButton#Close {
                background-color: #fff;
                border: 1ps solid #fff;
                border-radius: 10px;
                width: 20px;
                height: 20px;
                font: bold 15px;
                color: #323232;
            }
            #Notification_default > QPushButton#Close {
                background-color: #323232;
                border: 1ps solid #323232;
                border-radius: 10px;
                width: 20px;
                height: 20px;
                font: bold 15px;
                color: #fff;
            }';

        $this->initComponents();
        
        $this->eventFilter = new \PQEventFilter($this);
        $this->eventFilter->addEventType(\QEvent::Leave);
        $this->installEventFilter($this->eventFilter);
        
        $this->eventFilter->onEvent = function($sender, $event) {
            switch($event->type) {
                case \QEvent::Leave:
                    $this->time = microtime(true);
                    $this->delayLeave->start();
                    break;
            }
            return false;
        };
    }

    /**
     * Метод initComponents()
     * Создает все необходимые элменеты в окне Notification
     */
    public function initComponents() {
        /** Задаем флаг для типа окна */
        $this->setWindowFlags(\Qt::ToolTip);

        /** Создается QTimer анимации появления окна */
        $this->slideIn = new \QTimer();
        $this->slideIn->interval = $this->interval;
        $this->slideIn->onTimeout = function() {
            switch($this->side) {
                case self::sideTop:
                    $this->now += $this->step;
                    if($this->now >= $this->maxY) {
                        $this->slideIn->stop();
                        $this->showTime();
                    }
                    $this->setY($this->now);
                    break;
                case self::sideBottom:
                    $this->now -= $this->step;
                    if($this->now <= $this->maxY) {
                        $this->slideIn->stop();
                        $this->showTime();
                    }
                    $this->setY($this->now);
                    break;
                case self::sideLeft:
                    $this->now += $this->step;
                    if($this->now >= $this->maxX) {
                        $this->slideIn->stop();
                        $this->showTime();
                    }
                    $this->setX($this->now);
                    break;
                case self::sideRight:
                    $this->now -= $this->step;
                    if($this->now <= $this->maxX) {
                        $this->slideIn->stop();
                        $this->showTime();
                    }
                    $this->setX($this->now);
                    break;
            }
        };
        /** Создается QTimer анимации скрытия окна */
        $this->slideOut = new \QTimer();
        $this->slideOut->interval = $this->interval;
        $this->slideOut->onTimeout = function() {
            switch($this->side) {
                case self::sideTop:
                    $this->now -= $this->step;
                    if($this->now <= $this->y) {
                        $this->slideOut->stop();
                        $this->hide();
                    }
                    $this->setY($this->now);
                    break;
                case self::sideBottom:
                    $this->now += $this->step;
                    if($this->now >= $this->y) {
                        $this->slideOut->stop();
                        $this->hide();
                    }
                    $this->setY($this->now);
                    break;
                case self::sideLeft:
                    $this->now -= $this->step;
                    if($this->now <= $this->x) {
                        $this->slideOut->stop();
                        $this->hide();
                    }
                    $this->setX($this->now);
                    break;
                case self::sideRight:
                    $this->now += $this->step;
                    if($this->now >= $this->x) {
                        $this->slideOut->stop();
                        $this->hide();
                    }
                    $this->setX($this->now);
                    break;
            }
        };
        $this->delayLeave = new \QTimer();
        $this->delayLeave->intevral = $this->interval;
        $this->delayLeave->onTimeout = function() {
            $time = microtime(true) - $this->timeLeave;
            if($time >= $this->timeoutLeave) {
                $this->delayLeave->stop();
                $this->slideOut();
            }
        };
        $this->delayShow = new \QTimer();
        $this->delayShow->interval = $this->interval;
        $this->delayShow->onTimeout = function() {
            $time = microtime(true) - $this->timeShow;
            if($time >= $this->timeoutShow) {
                $this->delayShow->stop();
                $this->slideOut();
            }
        };
        /** Созется слой-сетка для позизионирования элементов */
        $this->layout = new \QGridLayout();
        /** Создается QLabel для заголовка окна */
        $this->labelTitle = new \QLabel($this);
        $this->labelTitle->objectName = 'Title';
        $this->labelTitle->text = '';
        $this->labelTitle->setSizePolicy(\QSizePolicy::Expanding, \QSizePolicy::Fixed);
        /** Создается QLabel для текста сообщения */
        $this->labelMessage = new \QLabel($this);
        $this->labelMessage->objectName = 'Message';
        $this->labelMessage->text = '';
        $this->labelMessage->setWordWrap(true);
        /** Создается кнопка для скрытия окна */
        $this->closeBtn = new \QPushButton($this);
        $this->closeBtn->objectName = 'Close';
        $this->closeBtn->text = "\u{00d7}";
        $this->closeBtn->setCursor(new \QCursor(\Qt::PointingHandCursor));
        $this->closeBtn->onClicked = function($sender) {
            $this->slideOut();
        };

        /** Добавляем создаенные элементы на слой */
        $row = 0;
        $this->layout->addWidget($this->labelTitle, $row, 0);
        $this->layout->addWidget($this->closeBtn, $row, 1);
        $row++;
        $this->layout->addWidget($this->labelMessage, $row, 0, 1, 2);
    }

    /**
     * Метод moveTo()
     * Высчитывает координаты для окна
     * Если была передана ссылка на родительское окно,
     * то окно Notification появится на том же экране где и родительское окно
     */
    private function moveTo() {
        if(is_null($this->parentWindow)) {
            $area = \QDesktopWidget::availableGeometry(0);
            $screen = \QDesktopWidget::screenGeometry(0);
            if($area['x'] > 0 or $area['y'] > 0) {
                if($area['x'] > 0) $this->side = 'left';
                if($area['y'] > 0) $this->side = 'top';
            } else {
                if($screen['width'] > $area['width']) $this->side = 'right';
                if($screen['height'] > $area['height']) $this->side = 'bottom';
            }
        } else {
            $screenNumber = \QDesktopWidget::screenNumber($this->parentWindow);
            $area = \QDesktopWidget::availableGeometry($this->parentWindow);
            $screen = \QDesktopWidget::screenGeometry($this->parentWindow);
            if($screenNumber > 0) {
                $this->side = 'bottom';
            } else {
                if($area['x'] > 0 or $area['y'] > 0) {
                    if($area['x'] > 0) $this->side = 'left';
                    if($area['y'] > 0) $this->side = 'top';
                } else {
                    if($screen['width'] > $area['width']) $this->side = 'right';
                    if($screen['height'] > $area['height']) $this->side = 'bottom';
                }
            }
        }
        switch($this->side) {
            case self::sideTop:
                $this->x = $screen['width'] - $this->width;
                $this->y = $screen['y'] - $this->height;
                $this->maxY = $area['y'];
                $this->now = $this->y;
                $this->move($this->x, $this->y);
                break;
            case self::sideBottom:
                $this->x = $screen['width'] + $screen['left'] - $this->width;
                $this->y = $screen['height'];
                $this->maxY = $area['height'] - $this->height;
                $this->now = $this->y;
                $this->move($this->x, $this->y);
                break;
            case self::sideLeft:
                $this->x = $screen['x'] - $this->width;
                $this->y = $screen['height'] - $this->height;
                $this->maxX = $area['x'];
                $this->now = $this->x;
                $this->move($this->x, $this->y);
                break;
            case self::sideRight:
                $this->x = $screen['width'];
                $this->y = $screen['height'] - $this->height;
                $this->maxX = $area['width'] - $this->width;
                $this->now = $this->x;
                $this->move($this->x, $this->y);
                break;
        }
    }

    /**
     * Метод showMessage()
     * @param $level - Уровень Notification
     * Зависит стиль который применится к окну
     * @param $title - Заголовок сообщения
     * @param $message - Текст сообщения
     * @param $time - Время для отображения сообщения
     * Если заголовок и текст были переданы как пустые строки,
     * то окно Notification не появится
     */
    public function showMessage($level, $title, $message, $time = 0) {
        switch(strtolower($level)) {
            case self::SUCCESS: $_level = self::SUCCESS; break;
            case self::INFO: $_level = self::INFO; break;
            case self::WARNING: $_level = self::WARNING; break;
            case self::ERROR: $_level = self::ERROR; break;
            default: $_level = self::NONE; break;
        }
        $this->objectName = "Notification_$_level";
        $this->styleSheet = $this->theme;
        $this->labelTitle->text = $title;
        $this->labelMessage->text = $message;
        $this->moveTo();
        if(!empty($title) && !empty($message)) {
            $this->timeoutShow = (int)$time;
            $this->slideIn();
        }
    }

    /**
     * Метод slideIn()
     * Запускает анимацию появления окна Notification
     */
    private function slideIn() {
        $this->delayShow->stop();
        $this->slideOut->stop();
        $this->show();
        $this->slideIn->start();
    }

    /**
     * Метод slideOut()
     * Запускает анимацию скрытия окна Notification
     */
    private function slideOut() {
        $this->slideIn->stop();
        $this->delayShow->stop();
        $this->slideOut->start();
    }

    private function showTime() {
        if($this->timeoutShow > 0) {
            $this->timeShow = microtime(true);
            $this->delayShow->start();
        }
    }
}
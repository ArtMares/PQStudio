<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                07.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom;
use PQ\Core;

class ToolTip extends \QFrame {

    protected $target;

    protected $message;

    public function __construct($target) {
        parent::__construct();
        $this->setWindowFlags(\Qt::WindowStaysOnTopHint | \Qt::FramelessWindowHint);
        $this->setAttribute(\Qt::WA_ShowWithoutActivating);
        $target->connect(SIGNAL('focus()'), $this, SLOT('showText()'));
        $target->connect(SIGNAL('blur()'), $this, SLOT('hideText()'));
//        $this->message = new \QLabel($this);
//        $this->setLayout(new \QHBoxLayout());
//        $this->layout()->setContentsMargins(1, 1, 1, 1);
//        $this->layout()->setSpacing(0);
//        $this->layout()->addWidget($this->message);
//        $this->styleSheet = Core::getInstance()->style->ToolTip;
    }

    public function message($str) {
        $this->message = $str;
    }

    private function getRect($target) {
        return [
            'x' => $target->x(),
            'y' => $target->y(),
            'w' => $target->width(),
            'h' => $target->height()
        ];
    }

    public function showText($sender) {
        if($this->message !== '') {
            $rect = $this->getRect($sender);
            \QToolTip::showText($sender->mapToGlobal(new \QPaint(0, $rect['h'])), $this->message, )
//            $this->move($sender->mapToGlobal(new \QPoint(0, 0 + $rect['h'])));
//            parent::show();
        }
    }

    public function hideText($sender) {
//        if($this->isVisible()) parent::hide();
    }
}
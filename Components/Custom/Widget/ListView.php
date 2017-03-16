<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                15.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom\Widget;

class ListView extends \QScrollArea {

    const Horizontal    = 0x00;
    const Vertical      = 0x01;

    protected $items = [];

    protected $count = 0;

    protected $list = [];

    protected $area;

    protected $eventFilter;

    protected $firstShow = true;

    public function __construct($parent = null) {
        parent::__construct($parent);
        $this->area = new \QFrame($this);
        $this->area->setLayout(new \QVBoxLayout());
        $this->area->layout()->setContentsMargins(0, 0, 0, 0);
        $this->area->layout()->setSpacing(0);

        $this->setWidget($this->area);

        $this->eventFilter = new \PQEventFilter($this);
        $this->eventFilter->addEventType(\QEvent::Show);
        $this->eventFilter->addEventType(\QEvent::Resize);
        $this->installEventFilter($this->eventFilter);

        $this->eventFilter->onEvent = function($sender, $event) {
            switch($event->type()) {
                case \QEvent::Show:
                    if($this->firstShow) {
                        $this->firstShow = false;
                        $this->updateList();
                        $this->resizeWidgets();
                    }
                    break;
                case \QEvent::Resize:
                    $this->resizeWidgets();
                    break;
            }
        };
    }

    public function disableScroll($side) {
        switch($side) {
            case self::Horizontal:
                $this->setHorizontalScrollBarPolicy(\Qt::ScrollBarAlwaysOff);
                break;
            case self::Vertical:
                $this->setVerticalScrollBarPolicy(\Qt::ScrollBarAlwaysOff);
                break;
        }
    }

    public function addItem($widget, $name) {
        $this->items[$name] = $widget;
        $this->count++;
        return $this->count - 1;
    }

    public function update($mask = '') {
        $rows = [];
        foreach($this->items as $name => $include) {
            if($mask !== '') {
                if(stristr($name, $mask) !== false) {
                    $rows[] = $name;
                }
            } else {
                $rows[] = $name;
            }
        }
        $this->updateList($rows);
        $this->resizeWidgets();
    }

    protected function updateList($list = []) {
        while($this->area->layout()->count()) {
            $item = $this->area->layout()->itemAt(0);
            if($item) {
                $this->area->layout()->removeItem($item);
                $res = array_search($item->widget(), $this->list);
                if($res !== false) {
                    $this->area->layout()->removeWidget($this->list[$res]);
                    $this->list[$res]->hide();
                    unset($this->list[$res]);
                }
                $item->free();
            }
        }
        $this->list = [];
        $this->area->layout()->update();
        \QCoreApplication::processEvents();
        if(count($list) > 0) {
            foreach($list as $item) {
                $this->list[] = $this->items[$item];
                $this->items[$item]->show();
                $this->area->layout()->addWidget($this->items[$item]);
            }
        } else {
            foreach($this->items as $item) {
                $this->list[] = $item;
                $item->show();
                $this->area->layout()->addWidget($item);
            }
        }
    }

    protected function resizeWidgets() {
        \QCoreApplication::processEvents();
        $n = count($this->list);
        if($n > 0) {
            $this->area->resize(new \QSize($this->width() - 12, $n * $this->list[0]->height()));
        } else {
            $this->area->resize(new \QSize($this->width() - 12, $this->height() - 10));
        }
    }
}
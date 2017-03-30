<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                29.03.2017
 * @copyright           artmares@influ.su
 */

namespace Components\Custom\Widget;
class OneSelectList extends ListWidget {
    
    public $signals = [
        'currentRowChanged(int)'
    ];
    
    protected $items = [];
    
    protected $currentRow = -1;
    
    public function addWidget($widget) {
        parent::addWidget($widget);
        $this->items[] = $widget;
        $widget->connect(SIGNAL('selected(bool)'), $this, SLOT('currentRowChange(bool)'));
    }
    
    public function currentRowChange($sender, $selected) {
        $index = array_search($sender, $this->items);
        foreach($this->items as $i => $item) {
            if($index !== $i) {
                $item->setProperty('selected', false);
                $item->styleSheet = $item->styleSheet();
            }
        }
        $this->currentRow = $index;
        $this->emit('currentRowChanged(int)', [$index]);
    }
    
    public function currentRow() {
        return $this->currentRow;
    }
}
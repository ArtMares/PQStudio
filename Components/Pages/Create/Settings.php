<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                14.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Pages\Create;
use Components\Custom\BackBtn;
use Components\Custom\CheckBox;
use Components\Custom\CheckBoxHover;
use Components\Custom\Input;
use Components\Custom\NextBtn;
use Components\Custom\Widget\ListView;
use PQ\QtObject;
use PQ\WidgetsInterface;

class Settings extends \QFrame implements WidgetsInterface {
    use QtObject;

    public $ui = [];

    private $items = [];

    private $searchText = '';

    public function initComponents() {

        $labelIncludes = new \QLabel($this);
        $labelIncludes->text = tr('PlastiQ Meta Objects') . ':';

//        $this->ui['scroll'] = new \QScrollArea($this);
        $this->ui['scroll'] = new ListView($this);
        $this->ui['scroll']->disableScroll(ListView::Horizontal);

//        $this->ui['includesList'] = new \QFrame($this->ui['scroll']);
//        $this->ui['includesList'] = new \QListWidget($this);
//        $this->ui['includesList']->setLayout(new \QVBoxLayout());
//        $this->ui['includesList']->layout()->setContentsMargins(0, 0, 0, 0);
//        $this->ui['includesList']->layout()->setSpacing(0);
//        $this->ui['includesList']->objectName = 'includesList';

        $include = $this->loadPHPQt5File();

//        $i = 0;
        foreach($this->core->storage->plastiq as $include => $data) {
//            $item = new \QListWidgetItem();
//            $this->ui['includes'][$include] = new CheckBoxHover($this->ui['includesList'], $include);
            $this->ui['includes'][$include] = new CheckBoxHover($this->ui['scroll'], $include);
//            $item->setSizeHint($this->ui['includes'][$include]->size());
//            $this->ui['includesList']->addItem($item);
//            $this->ui['includesList']->setItemWidget($item, $this->ui['includes'][$include]);
            $this->ui['scroll']->addItem($this->ui['includes'][$include], $include);
            $this->ui['includes'][$include]->onToggled = function($sender, $check) use($include) {
                $this->checkInclude($include, $check);
            };
//            $i++;
//            if($i > 10) break;
        }
        
        $this->ui['search'] = new Input($this);
        $this->ui['search']->setPlaceholderText(tr('Search', '1') . '...');
//        $this->ui['search']->enabled = false;
        $this->ui['search']->onEditingFinished = function($sender) {
            $text = $sender->text();
            if($text !== $this->searchText) {
                $this->searchText = $text;
                $this->ui['scroll']->update($text);
//            $rows = [];
//            foreach($this->ui['includes'] as $name => $include) {
//                if($text !== '') {
//                    if(stristr($name, $text) !== false) {
//                        $rows[] = $name;
//                    }
//                } else {
//                    $rows[] = $name;
//                }
//            }
//            $this->updateList($rows);
            }
        };

//        $this->ui['scroll']->setWidget($this->ui['includesList']);

        $labelAdditionally = new \QLabel($this);
        $labelAdditionally->text = tr('Additionally') . ':';

        $this->ui['usePQCore'] = new CheckBox($this, tr('Use PQ/Core'));
        $this->ui['usePQCore']->onToggled = function($sender, $check) {
            if($check) {
                foreach($this->core->storage->pqcore as $include) $this->ui['includes'][$include]->setChecked($check);
            }
        };

        $this->ui['BackBtn'] = new BackBtn($this, tr('Back'));
        $this->ui['BackBtn']->onClicked = function() {
            $this->core->widgets->get('Components/Pages/Create')->prev();
        };

        $this->ui['NextBtn'] = new NextBtn($this, tr('Create'));
        $this->ui['NextBtn']->onClicked = function($sender) {
            qDebug($this->core->storage->createProjectData);
            var_dump($this->core->storage->createProjectData['includes']);
            $this->core->widgets->get('Components/Pages/Create')->next();
            $this->core->widgets->get('Components/Widgets/Welcome')->Back();
        };

        $this->setLayout(new \QGridLayout());

        $row = 0;

        $this->layout()->addWidget($labelIncludes, $row, 0, 1, 2);
        $this->layout()->addWidget($labelAdditionally, $row, 2, 1, 2);
        
        $row++;
        $this->layout()->addWidget($this->ui['search'], $row, 0, 1, 2);
        $this->layout()->addWidget($this->ui['usePQCore'], $row, 2, 1, 2);
    
        $row++;
        $this->layout()->addWidget($this->ui['scroll'], $row, 0, 1, 2);
//        $this->layout()->addWidget($this->ui['includesList'], $row, 0, 1, 2);

//        $row++;
//        $spacer = new \QFrame($this);
//        $spacer->setSizePolicy(\QSizePolicy::Expanding, \QSizePolicy::Expanding);
//        $this->layout()->addWidget($spacer, $row, 2, 2, 2);

        /** Добавляем основные кнопки */
        $row++;
        $this->layout()->addWidget($this->ui['BackBtn'], $row, 0);
        $this->layout()->setAlignment($this->ui['BackBtn'], \Qt::AlignBottom | \Qt::AlignLeft);
        $this->layout()->addWidget($this->ui['NextBtn'], $row, 3);
        $this->layout()->setAlignment($this->ui['NextBtn'], \Qt::AlignRight | \Qt::AlignBottom);
    }

    public function resize($size) {
        parent::resize($size);
//        $w = $this->ui['scroll']->width();
//        qDebug($w);
//        $this->ui['includesList']->setMinimumWidth($w - 12);
    }

    private function updateList($data) {
        $this->ui['includesList']->clear();
//        foreach($this->items as $item) unset($item);
//        $this->items = [];
        foreach($data as $name) {
            qDebug($this->ui['includes'][$name]);
            $item = new \QListWidgetItem();
            $item->setSizeHint($this->ui['includes'][$name]->size());
            $this->ui['includesList']->addItem($item);
//            $this->ui['includesList']->setItemWidget($item, $this->ui['includes'][$name]);
        }
    }

    private function checkInclude($name, $add = false) {
        $fullName = $this->core->storage->plastiq[$name]['lib'].':'.$name;
        $index = array_search($fullName, $this->core->storage->createProjectData['includes']);
        if($index === false && $add === true) {
            $this->core->storage->createProjectData['includes'][] = $fullName;
            $depends = isset($this->core->storage->plastiq[$name]['depends']) ? $this->core->storage->plastiq[$name]['depends'] : [];
            foreach($depends as $depend) $this->ui['includes'][$depend]->setChecked(true);
        } else {
            unset($this->core->storage->createProjectData['includes'][$index]);
        }
    }

    private function loadPHPQt5File() {
        $file = $this->core->APP_PATH.'templates/';
        $file .= $this->core->storage->appTemplates[$this->core->storage->createProjectData['templateIndex']]['id'].'/';
        foreach($this->core->storage->appTemplates[$this->core->storage->createProjectData['templateIndex']]['files'] as $f) {
            if($f['source'] === 'file.phpqt5') {
                $file .= $f['source'];
                break;
            }
        }
        qDebug($file);
        return $file;
    }
}
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
use PQ\QtObject;
use PQ\WidgetsInterface;

class Settings extends \QFrame implements WidgetsInterface {
    use QtObject;

    public $ui = [];

    public function initComponents() {

        $labelIncludes = new \QLabel($this);
        $labelIncludes->text = tr('PlastiQ Meta Objects') . ':';

//        $this->ui['scroll'] = new \QScrollArea($this);

//        $this->ui['includesList'] = new \QFrame($this->ui['scroll']);
        $this->ui['includesList'] = new \QListWidget($this);
//        $this->ui['includesList']->setLayout(new \QVBoxLayout());
//        $this->ui['includesList']->layout()->setContentsMargins(0, 0, 0, 0);
//        $this->ui['includesList']->layout()->setSpacing(0);
        $this->ui['includesList']->objectName = 'includesList';

        $include = $this->loadPHPQt5File();

        foreach($this->core->storage->plastiq as $include => $data) {
//            qDebug($include);
            $this->ui['items'][$include] = new \QListWidgetItem();
            $this->ui['includes'][$include] = new CheckBoxHover($this->ui['includesList'], $include);
            $this->ui['items'][$include]->setSizeHint($this->ui['includes'][$include]->size());
            $this->ui['includesList']->addItem($this->ui['items'][$include]);
            $this->ui['includesList']->setItemWidget($this->ui['items'][$include], $this->ui['includes'][$include]);
//            $this->ui['includesList']->layout()->addWidget($this->ui['includes'][$include]);
        }
        
        $this->ui['search'] = new Input($this);
        $this->ui['search']->setPlaceholderText(tr('Search', '1') . '...');
        $this->ui['search']->onTextChanged = function($sender, $value) {
            foreach($this->ui['includes'] as $name => $include) {
                if($value !== '') {
                    if(stristr($name, $value) !== false) {
                        qDebug($name);
//                        $include->hide();
//                        $this->ui['includesList']->layout()->removeWidget($include);
                    } else {
                        $this->ui['includesList']->removeItemWidget($this->ui['items'][$name]);
                    }
                } else {
//                    $include->show();
                }
            }
//            $this->ui['includesList']->layout()->update();
        };

//        $this->ui['scroll']->setWidget($this->ui['includesList']);

        $labelAdditionally = new \QLabel($this);
        $labelAdditionally->text = tr('Additionally') . ':';

        $this->ui['usePQCore'] = new CheckBox($this, tr('Use PQ/Core'));

        $this->ui['BackBtn'] = new BackBtn($this, tr('Back'));
        $this->ui['BackBtn']->onClicked = function() {
            $this->core->widgets->get('Components/Pages/Create')->prev();
        };

        $this->ui['NextBtn'] = new NextBtn($this, tr('Create'));
        $this->ui['NextBtn']->onClicked = function($sender) {
            qDebug($this->core->storage->createProjectData);
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
//        $this->layout()->addWidget($this->ui['scroll'], $row, 0, 2, 2);
        $this->layout()->addWidget($this->ui['includesList'], $row, 0, 1, 2);

        $row++;
        $spacer = new \QFrame($this);
        $spacer->setSizePolicy(\QSizePolicy::Expanding, \QSizePolicy::Expanding);
        $this->layout()->addWidget($spacer, $row, 2, 2, 2);

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

    private function loadPHPQt5File() {
        $file = $this->core->APP_DATA.'templates/';
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
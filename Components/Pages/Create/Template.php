<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                12.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */
namespace Components\Pages\Create;
use Components\Custom\BackBtn;
use Components\Custom\NextBtn;
use PQ\QtObject;
use PQ\WidgetsInterface;

class Template extends \QFrame implements WidgetsInterface {
    use QtObject;
    
    public $ui = [];

    private $items = [];
    
    public function initComponents() {
        
        $labelTemplate = new \QLabel($this);
        $labelTemplate->text = tr('Application Template') . ':';
        
        $this->ui['listTemplate'] = new \QListWidget($this);
        $this->ui['listTemplate']->setIconSize(new \QSize(32, 32));
        foreach($this->core->storage->appTemplates as $t) {
            $iconPath = $this->core->APP_PATH . $t['icon'] == '' ? 'img/icons/unknown.png' : 'templates/'.$t['path'].'/'.$t['icon'];
            $this->items[] = new \QListWidgetItem(new \QIcon($iconPath), tr($t['name']), $this->ui['listTemplate']);
        }
        $this->ui['listTemplate']->onCurrentRowChanged = function($sender, $index) {
            if(isset($this->core->storage->appTemplates[$index])) {
                $this->ui['description']->plainText = tr($this->core->storage->appTemplates[$index]['description']);
            } else {
                $this->ui['description']->plainText = '';
            }
        };
//        $this->ui['listTemplate']->onDestroyed = function($sender) {
//            qDebug('QListWidget Destroyed');
//            foreach($this->items as $i => $item) {
//                $item->free();
//                unset($this->items[$i]);
//            }
//        };

        $labelDescription = new \QLabel($this);
        $labelDescription->text = tr('Description') . ':';

        $this->ui['description'] = new \QTextEdit($this);

        $this->ui['BackBtn'] = new BackBtn($this, tr('Back'));
        $this->ui['BackBtn']->onClicked = function() {
            $this->core->widgets->get('Components/Pages/Create')->prev();
        };

        $this->ui['NextBtn'] = new NextBtn($this, tr('Next'));
        $this->ui['NextBtn']->onClicked = function($sender) {
            $index = $this->ui['listTemplate']->currentRow();
            if($index > -1) {
                $this->core->storage->createProjectData['templateIndex'] = $index;
                $this->core->widgets->get('Components/Pages/Create')->next();
            }
        };

        $this->setLayout(new \QGridLayout());

        $row = 0;

        $this->layout()->addWidget($labelTemplate, $row, 0, 1, 2);
        $this->layout()->addWidget($labelDescription, $row, 2, 1, 2);

        $row++;
        $this->layout()->addWidget($this->ui['listTemplate'], $row, 0, 1, 2);
        $this->layout()->addWidget($this->ui['description'], $row, 2, 1, 2);

        /** Добавляем основные кнопки */
        $row++;
        $this->layout()->addWidget($this->ui['BackBtn'], $row, 0);
        $this->layout()->setAlignment($this->ui['BackBtn'], \Qt::AlignBottom | \Qt::AlignLeft);
        $this->layout()->addWidget($this->ui['NextBtn'], $row, 3);
        $this->layout()->setAlignment($this->ui['NextBtn'], \Qt::AlignRight | \Qt::AlignBottom);
    }
}
<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                14.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Pages\Create;
use Components\Custom\Btn;
use Components\Custom\CheckBox;
use Components\Custom\CheckBoxHover;
use Components\Custom\Input;
use Components\Custom\Widget\ListView;
use PQ\MVC;
use PQ\MVC\View;

class Settings extends \QFrame {
    use View;

    public $ui = [];

    private $searchText = '';
    
    private $model;

    public function initComponents() {
        
        $this->model = MVC::m('Components/Model/Create');

        $labelIncludes = new \QLabel($this);
        $labelIncludes->text = tr('PlastiQ Meta Objects') . ':';

        $this->ui['scroll'] = new ListView($this);
        $this->ui['scroll']->disableScroll(ListView::Horizontal);

        $i = 0;
        foreach(MVC::m('Components/Model/Main')->plastiq as $include => $data) {
            $this->ui['includes'][$include] = new CheckBoxHover($this->ui['scroll'], $include);
            $this->ui['scroll']->addItem($this->ui['includes'][$include], $include);
            $this->ui['includes'][$include]->onToggled = function($sender, $check) use($include) {
                $this->checkInclude($include, $check);
            };
            $i++;
            if($this->core->var->av(0, $this->core->args()) === 'PQStudio-debug.exe') if($i > 10) break;
        }
        
        $this->ui['search'] = new Input($this);
        $this->ui['search']->setPlaceholderText(tr('Search', '1') . '...');
        $this->ui['search']->onEditingFinished = function($sender) {
            $text = $sender->text();
            if($text !== $this->searchText) {
                $this->searchText = $text;
                $this->ui['scroll']->update($text);
            }
        };

        $labelAdditionally = new \QLabel($this);
        $labelAdditionally->text = tr('Additionally') . ':';

        $this->ui['usePQCore'] = new CheckBox($this, tr('Use PQ/Core'));
        $this->ui['usePQCore']->onToggled = function($sender, $check) {
            $this->model->usePQCore = $check;
            if($check) {
                foreach(MVC::m('Components/Model/Main')->pqcore as $include) if(isset($this->ui['includes'][$include])) $this->ui['includes'][$include]->setChecked($check);
            }
        };

        $this->ui['BackBtn'] = new Btn\Back($this, tr('Back'));
        $this->ui['BackBtn']->onClicked = function() {
            MVC::v('Components/Pages/Create')->prev();
        };

        $this->ui['NextBtn'] = new Btn\Next($this, tr('Create'));
        $this->ui['NextBtn']->onClicked = function($sender) {
//            qDebug('Model');
            qDebug($this->model);
//            var_dump($this->model);
            if(MVC::v('Components/Pages/Main')->createProject($this->model)) {
                MVC::v('Components/Pages/Create')->next();
                MVC::v('Components/Widgets/Welcome')->Back();
            }
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

    private function checkInclude($name, $add = false) {
        $fullName = MVC::m('Components/Model/Main')->plastiq[$name]['lib'].':'.$name;
        $index = array_search($fullName, $this->model->includes);
        if($index === false && $add === true) {
            $this->model->includes[] = $fullName;
            $depends = $this->core->var->av('depends', MVC::m('Components/Model/Main')->plastiq[$name], []);
            foreach($depends as $depend)
                if(isset($this->ui['includes'][$depend])) $this->ui['includes'][$depend]->setChecked(true);
        } else {
            unset($this->model->includes[$index]);
        }
    }

    public function prepareIncludes($data) {
        foreach($data as $include) {
            $tmp = explode(':', $include);
            $this->checkInclude($tmp[1], true);
        }
    }
}
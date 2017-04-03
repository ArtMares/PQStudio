<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                12.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */
namespace Components\Pages\Create;
use Components\Custom\Btn;
use Components\Custom\Widget\OneSelectList;
use PQ\MVC;
use PQ\MVC\View;

class Template extends \QFrame {
    use View;
    
    public $model;
    
    public $ui = [];
    
    public function initComponents() {
        
        $this->model = MVC::m('Components/Model/Create');
        
        $labelTemplate = new \QLabel($this);
        $labelTemplate->text = tr('Application Template') . ':';
        
        $this->ui['listTemplate'] = new OneSelectList($this);
        foreach(MVC::m('Components/Model/Main')->templates as $index => $t) {
            $iconPath = $this->core->APP_PATH . $t['icon'] == '' ? 'img/icons/unknown.png' : 'templates/'.$t['path'].'/'.$t['icon'];
            $template = new Btn\Template(null, $iconPath, tr($t['name']), tr($t['description']));
            $this->ui['listTemplate']->addWidget($template);
        }
        $this->ui['listTemplate']->connect(SIGNAL('currentRowChanged(int)'), $this, SLOT('updateDescription(int)'));

        $labelDescription = new \QLabel($this);
        $labelDescription->text = tr('Description') . ':';

        $this->ui['description'] = new \QLabel($this);
        $this->ui['description']->wordWrap = true;
        $this->ui['description']->setMaximumWidth($this->width() / 2);

        $this->ui['BackBtn'] = new Btn\Back($this, tr('Back'));
        $this->ui['BackBtn']->onClicked = function() {
            MVC::v('Components/Pages/Create')->prev();
        };

        $this->ui['NextBtn'] = new Btn\Next($this, tr('Next'));
        $this->ui['NextBtn']->onClicked = function($sender) {
            $index = $this->ui['listTemplate']->currentRow();
            if($index > -1) {
                $this->model->templateIndex = $index;
                MVC::v('Components/Pages/Create/Settings')->prepareIncludes(
                    $this->model->includes
                );
                MVC::v('Components/Pages/Create')->next();
            }
        };

        $this->setLayout(new \QGridLayout());

        $row = 0;

        $this->layout()->addWidget($labelTemplate, $row, 0, 1, 2);
        $this->layout()->addWidget($labelDescription, $row, 2, 1, 2);

        $row++;
        $this->layout()->addWidget($this->ui['listTemplate'], $row, 0, 1, 2);
        $this->layout()->addWidget($this->ui['description'], $row, 2, 1, 2);
        $this->layout()->setAlignment($this->ui['description'], \Qt::AlignTop);

        /** Добавляем основные кнопки */
        $row++;
        $this->layout()->addWidget($this->ui['BackBtn'], $row, 0);
        $this->layout()->setAlignment($this->ui['BackBtn'], \Qt::AlignBottom | \Qt::AlignLeft);
        $this->layout()->addWidget($this->ui['NextBtn'], $row, 3);
        $this->layout()->setAlignment($this->ui['NextBtn'], \Qt::AlignRight | \Qt::AlignBottom);
    }
    
    public function updateDescription($sender, $index) {
        if(isset(MVC::m('Components/Model/Main')->templates[$index])) {
            $this->ui['description']->text = tr(MVC::m('Components/Model/Main')->templates[$index]['description']);
        } else {
            $this->ui['description']->text = '';
        }
    }
}
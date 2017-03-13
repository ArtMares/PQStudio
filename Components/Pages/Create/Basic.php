<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                12.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */
namespace Components\Pages\Create;
use Components\Custom\BackBtn;
use Components\Custom\Btn;
use Components\Custom\CheckBox;
use Components\Custom\Input;
use Components\Custom\InputValidate;
use Components\Custom\NextBtn;
use PQ\QtObject;
use PQ\WidgetsInterface;

class Basic extends \QFrame implements WidgetsInterface {
    use QtObject;
    
    private $ui = [];
    
    public function initComponents() {
        /** Создаем QLabel для названия поля ввода */
        $labelName = new \QLabel($this);
        $labelName->text = tr('Project Name') . ':';
    
        /** Создаем поле ввода для Навзвания проекта */
        $this->ui['name'] = new InputValidate($this);
        $this->ui['name']->setPlaceholderText(tr('Enter Project Name') . '...');
        /** Задаем функция для проверки валидности поля */
        $this->ui['name']->onValidate(function($sender, $text) {
            if(preg_match('/[0-9a-zA-Z\-\.\_ ]+/', $text)) {
                return $this->checkProject($text);
            }
            return false;
        });
        /** Задаем функцию для кастомного события onBlur */
        $this->ui['name']->onBlurred(function($sender) {
            if($this->core->variant->get($this->ui['name']->property('invalid')) === false) $this->ui['appName']->text = $sender->text;
        });
    
        /** Создаем QLabel для названия поля ввода */
        $labelPath = new \QLabel($this);
        $labelPath->text = tr('Create in') . ':';
    
        /** Создаем поле ввода для директории проекта */
        $this->ui['path'] = new Input($this);
        $this->ui['path']->text = $this->core->storage->defaultProjectsPath;
        $this->ui['path']->setPlaceholderText(tr('Select directory for Project') . '...');
        $this->ui['path']->readOnly = true;
    
        $this->ui['ViewBtn'] = new Btn($this);
        $this->ui['ViewBtn']->text = tr('View') . '...';
        $this->ui['ViewBtn']->onClicked = function($sender) {
            $this->setProjectsPath($this->ui['path']);
        };
    
        $this->ui['defaultPath'] = new CheckBox($this, tr('Directory for all projects by default'), true);
        $this->ui['defaultPath']->enabled = false;
        $this->ui['defaultPath']->onClicked = function($sender) {
            $this->setDefaultProjectsPath($sender, $this->ui['path']);
        };
    
    
        $labelAppName = new \QLabel($this);
        $labelAppName->text = tr('Application Name') . ':';
        $this->ui['appName'] = new Input($this);
        $this->ui['appName']->setPlaceholderText(tr('Enter Application Name') . '...');
    
        $labelAppVersion = new \QLabel($this);
        $labelAppVersion->text = tr('Application Version') . ':';
        $this->ui['appVersion'] = new Input($this);
        $this->ui['appVersion']->text = '0.1';
        $this->ui['appVersion']->setPlaceholderText(tr('Enter Version') . '...');
    
        $labelOrgName = new \QLabel($this);
        $labelOrgName->text = tr('Organization Name') . ':';
        $this->ui['orgName'] = new Input($this);
        $this->ui['orgName']->setPlaceholderText(tr('Enter Organization Name') . '...');
    
        $labelOrgDomain = new \QLabel($this);
        $labelOrgDomain->text = tr('Domain') . ':';
        $this->ui['orgDomain'] = new Input($this);
        $this->ui['orgDomain']->setPlaceholderText(tr('Enter Domain') . '...');
    
    
        $this->ui['message'] = new \QLabel($this);
        $this->ui['message']->text = '';
    
        $this->ui['BackBtn'] = new BackBtn($this, tr('Back'));
        $this->ui['BackBtn']->onClicked = function() {
            $this->core->widgets->get('Components/Widgets/Welcome')->Back();
        };
    
        $this->ui['NextBtn'] = new NextBtn($this, tr('Next'));
        $this->ui['NextBtn']->onClicked = function($sender) {
            $this->core->widgets->get('Components/Pages/Create')->next();
        };
    
        /** Создаем слой */
        $this->setLayout(new \QGridLayout());
    
        /** Передаем все элементы в слой */
        $row = 0;
        /** Создаем пустой QFrame для отсупа от верха окна */
        $topSpacer = new \QFrame($this);
        $topSpacer->setMinimumHeight(50);
        $this->layout()->addWidget($topSpacer, $row, 0, 1, 4);
    
        /** Добавляем лайбел и поля для ввода названия проекта */
        $row++;
        $this->layout()->addWidget($labelName, $row, 1);
        $this->layout()->addWidget($this->ui['name'], $row, 2, 1, 2);
    
        /** Добавляем лайбел, поле для ввода пути и кнопку для указания пути проекта */
        $row++;
        $this->layout()->addWidget($labelPath, $row, 1);
        $this->layout()->addWidget($this->ui['path'], $row, 2);
        $this->layout()->addWidget($this->ui['ViewBtn'], $row, 3);
    
        /** Добавляем чекбокс для задания пути как пути по умолчанию для всех проектов */
        $row++;
        $this->layout()->addWidget($this->ui['defaultPath'], $row, 2);
    
        $row++;
        /** Создаем пустой QFrame для отступа и добавляем на слой */
        $spacer = new \QFrame($this);
        $spacer->setMinimumHeight(30);
        $this->layout()->addWidget($spacer, $row, 0, 1, 4);
    
        $row++;
        $this->layout()->addWidget($labelAppName, $row, 1);
        $this->layout()->addWidget($this->ui['appName'], $row, 2, 1, 2);
    
        $row++;
        $this->layout()->addWidget($labelAppVersion, $row, 1);
        $this->layout()->addWidget($this->ui['appVersion'], $row, 2, 1, 2);
    
        $row++;
        $this->layout()->addWidget($labelOrgName, $row, 1);
        $this->layout()->addWidget($this->ui['orgName'], $row, 2, 1, 2);
    
        $row++;
        $this->layout()->addWidget($labelOrgDomain, $row, 1);
        $this->layout()->addWidget($this->ui['orgDomain'], $row, 2, 1, 2);
    
        /** Добавляем элемент для вывода сообщений */
        // TODO В дальшейнем заменить на Notification
        $row++;
        $this->layout()->addWidget($this->ui['message'], $row, 2, 1, 2);
    
        /** Добавялем пустой QFrame для того чтобы прижать элемнеты к низу */
        $row++;
        $spacer = new \QFrame($this);
        $spacer->setSizePolicy(\QSizePolicy::Expanding, \QSizePolicy::Expanding);
        $this->layout()->addWidget($spacer, $row, 0, 1, 4);
    
        /** Добавляем основные кнопки */
        $row++;
        $this->layout()->addWidget($this->ui['BackBtn'], $row, 0);
        $this->layout()->setAlignment($this->ui['BackBtn'], \Qt::AlignBottom);
        $this->layout()->addWidget($this->ui['NextBtn'], $row, 3);
        $this->layout()->setAlignment($this->ui['NextBtn'], \Qt::AlignRight | \Qt::AlignBottom);
    }

    private function setProjectsPath($sender) {
        $path = $sender->text;
        $dir = \QFileDialog::getExistingDirectory($this, tr('Select directory'), $this->core->preparePath($path));
        if(!empty($dir)) {
            if($this->ui['defaultPath']->checked === true) {
                $this->ui['defaultPath']->checked = false;
                $this->ui['defaultPath']->enabled = true;
            }
            $this->ui['path']->text = $this->core->preparePath($dir, $this->core->WIN);
        }
    }

    private function setDefaultProjectsPath($sender, $path) {
        if($sender->checked) {
            $path = $path->text;
            if($this->core->storage->defaultProjectsPath !== $path) {
                $this->core->storage->defaultProjectsPath = $path;
            }
        }
        $this->core->config->ini()->set('defaultProjectsPath', $this->core->storage->defaultProjectsPath);
    }

    private function checkProject($name) {
        if(!$this->core->dir->exists($this->core->preparePath($this->ui['path']->text.'/'.$name))) {
            return true;
        }
        return false;
    }
}
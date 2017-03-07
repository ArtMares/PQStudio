<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                03.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Pages;
use Components\Custom\BackBtn;
use Components\Custom\Btn;
use Components\Custom\CheckBox;
use Components\Custom\Input;
use Components\Custom\InputValidate;
use Components\Custom\NextBtn;
use PQ\QtObject;
use PQ\WidgetsInterface;

class Create extends \QFrame implements WidgetsInterface {

    use QtObject;

    public $name;

    public $path;

    public $appName;

    public $appVersion;

    public $orgName;

    public $orgDomain;

    public $message;

    public function initComponents() {

        /** Задаем имя объекту */
        $this->objectName = 'CreatePage';

        /** Создаем QLabel для названия поля ввода */
        $labelName = new \QLabel($this);
        $labelName->text = tr('Project Name') . ':';

        /** Создаем поле ввода для Навзвания проекта */
        $this->name = new InputValidate($this);
        $this->name->setPlaceholderText(tr('Enter Project Name') . '...');
        $this->name->onValidate(function($text) {
            return $this->checkProject($text);
        });
        $this->name->onTextChanged = function($sender, $name) {
            echo $name.PHP_EOL;
        };

        /** Создаем QLabel для названия поля ввода */
        $labelPath = new \QLabel($this);
        $labelPath->text = tr('Project Path') . ':';

        /** Создаем поле ввода для директории проекта */
        $this->path = new Input($this);
        $this->path->text = $this->core->storage->defaultProjectPath;
        $this->path->setPlaceholderText(tr('Enter path to Project') . '...');
        $this->path->readOnly = true;

        $ViewBtn = new Btn($this);
        $ViewBtn->text = tr('View') . '...';
//        $ViewBtn->onClicked = function($sender) {
//            $this->controller->setProjectPath($this->ProjectPath);
//        };

        $defaultPath = new CheckBox($this, tr('Directory for all projects by default'), false);
//        connect($defaultPath, 'clicked()', $this, 'setDefaultPath()');
        $defaultPath->onClicked = function($sender) {
            echo 'Click PushButton'.PHP_EOL;
            $this->setDefaultPath($sender);
        };


        $labelAppName = new \QLabel($this);
        $labelAppName->text = tr('Application Name') . ':';
        $this->appName = new Input($this);
        $this->appName->setPlaceholderText(tr('Enter Application Name') . '...');

        $labelAppVersion = new \QLabel($this);
        $labelAppVersion->text = tr('Application Version') . ':';
        $this->appVersion = new Input($this);
        $this->appVersion->text = '0.1';
        $this->appVersion->setPlaceholderText(tr('Enter Version') . '...');

        $labelOrgName = new \QLabel($this);
        $labelOrgName->text = tr('Organization Name') . ':';
        $this->orgName = new Input($this);
        $this->orgName->setPlaceholderText(tr('Enter Organization Name') . '...');

        $labelOrgDomain = new \QLabel($this);
        $labelOrgDomain->text = tr('Domain') . ':';
        $this->orgDomain = new Input($this);
        $this->orgDomain->setPlaceholderText(tr('Enter Domain') . '...');


        $this->message = new \QLabel($this);
        $this->message->text = '';

        $BackBtn = new BackBtn($this, tr('Back'));
        $BackBtn->onClicked = function() {
            $this->core->widgets->get('Components/Widgets/Welcome')->Back();
        };

        $CreateBtn = new NextBtn($this, tr('Create'));
        $CreateBtn->onClicked = function($sender) {
            $this->controller->createProject($this->ProjectName, $this->Message);
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
        $this->layout()->addWidget($this->name, $row, 2, 1, 2);

        /** Добавляем лайбел, поле для ввода пути и кнопку для указания пути проекта */
        $row++;
        $this->layout()->addWidget($labelPath, $row, 1);
        $this->layout()->addWidget($this->path, $row, 2);
        $this->layout()->addWidget($ViewBtn, $row, 3);

        /** Добавляем чекбокс для задания пути как пути по умолчанию для всех проектов */
        $row++;
        $this->layout()->addWidget($defaultPath, $row, 2);

        $row++;
        /** Создаем пустой QFrame для отступа и добавляем на слой */
        $spacer = new \QFrame($this);
        $spacer->setMinimumHeight(30);
        $this->layout()->addWidget($spacer, $row, 0, 1, 4);

        $row++;
        $this->layout()->addWidget($labelAppName, $row, 1);
        $this->layout()->addWidget($this->appName, $row, 2, 1, 2);

        $row++;
        $this->layout()->addWidget($labelAppVersion, $row, 1);
        $this->layout()->addWidget($this->appVersion, $row, 2, 1, 2);

        $row++;
        $this->layout()->addWidget($labelOrgName, $row, 1);
        $this->layout()->addWidget($this->orgName, $row, 2, 1, 2);

        $row++;
        $this->layout()->addWidget($labelOrgDomain, $row, 1);
        $this->layout()->addWidget($this->orgDomain, $row, 2, 1, 2);

        /** Добавляем элемент для вывода сообщений */
        // TODO В дальшейнем заменить на Notification
        $row++;
        $this->layout()->addWidget($this->message, $row, 2, 1, 2);

        /** Добавялем пустой QFrame для того чтобы прижать элемнеты к низу */
        $row++;
        $spacer = new \QFrame($this);
        $spacer->setSizePolicy(\QSizePolicy::Expanding, \QSizePolicy::Expanding);
        $this->layout()->addWidget($spacer, $row, 0, 1, 4);

        /** Добавляем основные кнопки */
        $row++;
        $this->layout()->addWidget($BackBtn, $row, 0);
        $this->layout()->setAlignment($BackBtn, \Qt::AlignBottom);
        $this->layout()->addWidget($CreateBtn, $row, 3);
        $this->layout()->setAlignment($CreateBtn, \Qt::AlignRight | \Qt::AlignBottom);
    }

    public function setDefaultPath($sender) {
        var_dump($sender->checked);
    }
    
    private function checkProject($name) {
        if(!$this->core->dir->exists($this->core->storage->defaultProjectPath.$name)) {
            return true;
        }
        return false;
    }
}
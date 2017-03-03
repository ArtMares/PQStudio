<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                03.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Pages;
use Components\Custom\BackBtn;
use Components\Custom\CheckBox;
use PQ\QtObject;
use PQ\WidgetsInterface;

class Create extends \QFrame implements WidgetsInterface {

    use QtObject;

    public $name;

    public $path;

    public $message;

    public function initComponents() {
        /** Создаем слой */
        $this->setLayout(new \QGridLayout());

        /** Задаем имя объекту */
        $this->objectName = 'CreatePage';

        /** Создаем QLabel для названия поля ввода */
        $labelName = new \QLabel($this);
        $labelName->text = tr('Project Name').':';

        /** Создаем поле ввода для Навзвания проекта */
        $this->name = new \QLineEdit($this);
        $this->name->setPlaceholderText(tr('Enter the Project Name') . '...');
//        connect($this->name, 'textChanged(string)', $this->core->)
//        $this->name->connect(SIGNAL('textChanged(string)'), $this->pqcore->mvc->controller->welcome_main, SLOT('changeNewProjectName(string)'));

        /** Создаем QLabel для названия поля ввода */
        $labelPath = new \QLabel($this);
        $labelPath->text = tr('Project Path') . ':';

        /** Создаем поле ввода для директории проекта */
        $this->path = new \QLineEdit($this);
//        $this->path->text = $this->pqcore->
        $this->path->setPlaceholderText(tr('Enter path to Project') . '...');
        $this->path->readOnly = true;

        $ViewBtn = new \QPushButton($this);
        $ViewBtn->text = tr('View') . '...';
        $ViewBtn->setCursor(new \QCursor(\Qt::PointingHandCursor));
//        $ViewBtn->onClicked = function($sender) {
//            $this->controller->setProjectPath($this->ProjectPath);
//        };

        $defaultPath = new CheckBox($this, tr('Directory for all projects by default'), false);
        connect($defaultPath, 'clicked()', $this, 'setDefaultPath()');
//        $defaultPath->onClicked = function($sender) {
//            echo 'Click PushButton'.PHP_EOL;
//        };


        $this->message = new \QLabel($this);
        $this->message->text = '';

//        $BackBtn = new QToolButton($this);
//        $BackBtn->text = $this->pqcore->icon->font('fa-arrow-left')."\t\t".tr('Back');
//        $BackBtn->toolButtonStyle = Qt::ToolButtonTextOnly;
//        $BackBtn->setCursor(new QCursor(Qt::PointingHandCursor));
//        $BackBtn->onClicked = function($sender) {
//            $this->storage->WelcomeStack->currentWidget = $this->storage->MainMenuStack;
//        };
        $BackBtn = new BackBtn($this, tr('Back'));
        $BackBtn->onClicked = function() {
            $this->core->widgets->get('Widgets/Welcome')->Back();
        };

        $CreateBtn = new \QPushButton($this);
        $CreateBtn->text = tr('Create');
        $CreateBtn->setCursor(new \QCursor(\Qt::PointingHandCursor));
        $CreateBtn->onClicked = function($sender) {
            $this->controller->createProject($this->ProjectName, $this->Message);
        };

        /** Передаем все элементы в слой */
        $row = 0;
        /** Создаем пустой QFrame для отсупа от верха окна */
        $topSpacer = new \QFrame($this);
        $topSpacer->setMinimumHeight(50);
        $this->layout()->addWidget($topSpacer, $row, 0, 1, 4);

        $row++;
        $this->layout()->addWidget($labelName, $row, 1);
        $this->layout()->addWidget($this->name, $row, 2, 1, 2);

        $row++;
        $this->layout()->addWidget($labelPath, $row, 1);
        $this->layout()->addWidget($this->path, $row, 2);
        $this->layout()->addWidget($ViewBtn, $row, 3);

        $row++;
        $this->layout()->addWidget($defaultPath, $row, 2);

        $row++;
        $this->layout()->addWidget($this->message, $row, 2, 1, 2);

        $row++;
        $spacer = new \QFrame($this);
        $spacer->setSizePolicy(\QSizePolicy::Expanding, \QSizePolicy::Expanding);
        $this->layout()->addWidget($spacer, $row, 0, 1, 4);

        $row++;
        $this->layout()->addWidget($BackBtn, $row, 0);
        $this->layout()->addWidget($CreateBtn, $row, 3);
        $this->layout()->setAlignment($CreateBtn, \Qt::AlignRight);
    }

    public function setDefaultPath($sender) {
        var_dump($sender->checked);
//        var_dump($sender);
    }
}
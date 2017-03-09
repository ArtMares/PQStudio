<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                03.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Pages;
use Components\Custom\MenuBtn;
use PQ\QtObject;
use PQ\WidgetsInterface;

class Main extends \QFrame implements WidgetsInterface {

    use QtObject;

    public $scrollArea;

    public $projectsList;

    public $general;

    /** Инициализирует основные компоненты */
    public function initComponents() {
        /** Создаем слой */
        $this->setLayout(new \QHBoxLayout());
        /** Устанавливаем отступы от края в 0 */
        $this->layout()->setContentsMargins(0, 0, 0, 0);
        /** Устанавливаем отступы между элементами на слое в 0 */
        $this->layout()->setSpacing(0);
        /** Задаем имя для класса PQView_welcome_main_page */
        $this->objectName = 'MainPage';
        /** Инициализируем создание области для списка проектов которые были созданы с IDE */
        $this->initProjectsListArea();
        /** Инициализируем создание основной области */
        $this->initGeneralArea();
    }

    public function initProjectsListArea() {
        /** Создаем QScrollArea для области проектов */
        $this->scrollArea = new \QScrollArea($this);
        /** Задаем имя для QScrollArea */
        $this->scrollArea->objectName = 'ScrollProjects';
        /** Запрещаем горизонтальное отображение скролла */
        $this->scrollArea->setHorizontalScrollBarPolicy(\Qt::ScrollBarAlwaysOff);
        /** Создаем область для списка проектов */
        $this->projectsList = new \QFrame($this);
        /** Задаем имя для QFrame */
        $this->projectsList->objectName = 'Projects';
        /** Задаем минимальную и максимальную ширину области */
        $this->projectsList->setMinimumWidth(288);
        $this->projectsList->setMaximumWidth(300);
        /** Создаем слой для области проектов */
        $this->projectsList->setLayout(new \QVBoxLayout());
        /** Передаем область проектов в QScrollArea */
        $this->scrollArea->setWidget($this->projectsList);
        /** Добавляем QScrollArea на основнйо слой */
        $this->layout()->addWidget($this->scrollArea);
    }

    public function initGeneralArea() {

        $this->general = new \QFrame($this);

        $this->general->objectName = 'General';

        $this->general->setMinimumWidth(470);

        $this->general->setLayout(new \QVBoxLayout());

        $this->general->layout()->setContentsMargins(0, 0, 0, 0);

        /** Создаем QLabel для логотипа */
        $labelLogo = new \QLabel($this->general);
        $labelLogo->setFixedSize(96, 100);
        $pixmap = new \QIcon(':/img/logo_96x96.png');
        $labelLogo->setPixmap($pixmap->pixmap(96, 96));
        $labelLogo->objectName = 'AppLogo';

        /** Создаем QLabel для названия приложения */
        $labelAppName = new \QLabel($this->general);
        $labelAppName->text = $this->core->applicationName();
        $labelAppName->objectName = 'AppName';

        /** Создаем QLabel для отображения текущей версии приложения */
        $labelAppVersion = new \QLabel($this->general);
        $labelAppVersion->text = tr('Version').' '.$this->core->applicationVersion();
        $labelAppVersion->objectName = 'AppVersion';

        /** Создаем QFrame для основного меню */
        $menu = new \QFrame($this->general);
        $menu->objectName = 'MainMenu';
        $menu->setMinimumWidth(200);
        $menu->setMaximumWidth(200);
        $menu->setLayout(new \QVBoxLayout());
        $menu->layout()->setSpacing(0);
//        $this->pqcore->mvc->controller->welcome_main->addEventType(QEvent::MouseButtonRelease);
//        $this->pqcore->mvc->controller->welcome_main->addEventType(QEvent::MouseButtonPress);
//        $this->pqcore->mvc->controller->welcome_main->addEventType(QEvent::Enter);
//        $this->pqcore->mvc->controller->welcome_main->addEventType(QEvent::Leave);

        /** Создаем кнопку основного меню для создания проекта */
        $createBtn = new MenuBtn($menu, $this->core->icon->font('fa-asterisk', '#c43737', 16), 'Create Project', 'CreateProjectBtn');
        $createBtn->onClicked = function($sender) {
            $this->core->widgets->get('Components/Widgets/Welcome')->setPage('Components/Pages/Create');
        };
//        $createBtn->installEventFilter($this->pqcore->mvc->controller->welcome_main);
//        $createBtn = new QToolButton($this);
//        $createBtn->text = $this->pqcore->icon->font('fa-asterisk').' '.tr('Create Project');
//        $createBtn->toolButtonStyle = Qt::ToolButtonTextOnly;
//        $createBtn->setCursor(new QCursor(Qt::PointingHandCursor));

        /** Создаем кнопку основного меню для открытия проекта */
        $openBtn = new MenuBtn($menu, $this->core->icon->font('fa-folder-open', '#bf6024', 16), 'Open Project File', 'welcome_main-open_project');
        $openBtn->onClicked = function($sender) {
//            $this->core->mvc->controller->welcome_main->open_project_directory();
        };
//        $openBtn->installEventFilter($this->pqcore->mvc->controller->welcome_main);


//        $importBtn = new MainMenuBtn($this->Menu, Icon::get('fa-sign-in', '#c28a46', 16), tr('Import PQBuilder Project'));
        $importBtn = new MenuBtn($menu, $this->core->icon->font('fa-sign-in', '#71a62b', 16), 'Import PQBuilder Project', 'welcome_main-import_page_show');
        $importBtn->onClicked = function($sender) {
//            $this->core->mvc->controller->welcome_main->import_project_show();
        };
//        $importBtn->installEventFilter($this->pqcore->mvc->controller->welcome_main);

        /** Создаем кнопку основного меню для открытия окна настроек приложения */
        $settingBtn = new MenuBtn($menu, $this->core->icon->font('fa-gears', '#999999', 16), 'Settings', 'settings_main-show');
        $settingBtn->onClicked = function($sender) {
//            $this->core->mvc->controller->settings_main->show();
        };
//        $settingBtn->installEventFilter($this->pqcore->mvc->controller->welcome_main);

        /** Добавляем кнопки меню в слой QFrame основного меню */
        $menu->layout()->addWidget($createBtn);
        $menu->layout()->addWidget($openBtn);
        $menu->layout()->addWidget($importBtn);
        $menu->layout()->addWidget($settingBtn);

        /** Создаем пустой QFrame для отсупа от верха окна */
        $topSpacer = new \QFrame($this);
        $topSpacer->setMinimumHeight(50);
        $this->general->layout()->addWidget($topSpacer);

        $this->general->layout()->addWidget($labelLogo);
        $this->general->layout()->setAlignment($labelLogo, \Qt::AlignHCenter);
        $this->general->layout()->addWidget($labelAppName);
        $this->general->layout()->setAlignment($labelAppName, \Qt::AlignCenter);
        $this->general->layout()->addWidget($labelAppVersion);
        $this->general->layout()->setAlignment($labelAppVersion, \Qt::AlignCenter);
        $this->general->layout()->addWidget($menu);
        $this->general->layout()->setAlignment($menu, \Qt::AlignHCenter);

        $spacer = new \QFrame($this);
        $spacer->setSizePolicy(\QSizePolicy::Expanding, \QSizePolicy::Expanding);
        $this->general->layout()->addWidget($spacer);

        $this->layout()->addWidget($this->general);
    }
}
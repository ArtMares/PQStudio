<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                03.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Pages;
use Components\Custom\Btn;
use Components\Custom\Widget\ListWidget;
use Components\Model\Project;
use PQ\MVC;
use PQ\MVC\View;

class Main extends \QWidget {
    use View;
    
    public $projectsList;

    /** Инициализирует основные компоненты */
    public function initComponents() {
        /** Создаем слой */
        $this->setLayout(new \QHBoxLayout());
        
        /** Устанавливаем отступы от края в 0 */
        $this->layout()->setContentsMargins(0, 0, 0, 0);
        
        /** Устанавливаем отступы между элементами на слое в 0 */
        $this->layout()->setSpacing(0);
        
        /** Задаем имя для страницы */
        $this->objectName = 'MainPage';
        
        $this->core->style->set($this, 'MainPage');
        
        /** Инициализируем создание области для списка проектов которые были созданы в IDE */
        $this->initProjectsListArea();
        
        /** Инициализируем создание основной области */
        $this->initGeneralArea();
    }

    public function initProjectsListArea() {

        $this->projectsList = new ListWidget($this);
        /** Задаем минимальную и максимальную ширину области */
        $this->projectsList->setMinimumWidth(300);
        $this->projectsList->setMaximumWidth(300);
        $projectBtn = new Btn\Project('Test', 'D:/Test');
        $projectBtn->setUID($this->core->lib->uid->new());
        $projectBtn->connect(SIGNAL('remove()'), $this, SLOT('removeProject()'));
        $this->projectsList->addWidget($projectBtn);
        $this->layout()->addWidget($this->projectsList);
    }
    
    public function removeProject($sender) {
        qDebug($sender->uid);
    }

    public function initGeneralArea() {

        /** Создаем область для вывода основной информации */
        $general = new \QFrame($this);
        /** Задаем название для объекта */
        $general->objectName = 'General';
        /** Задаем минимальную ширину */
        $general->setMinimumWidth(470);
        /** Задаем слой для конмановки */
        $general->setLayout(new \QVBoxLayout());
        /** Задаем слою отступы от края равные 0 */
        $general->layout()->setContentsMargins(0, 0, 0, 0);

        /** Создаем QLabel для логотипа */
        $labelLogo = new \QLabel($general);
        $labelLogo->setFixedSize(96, 100);
        $pixmap = new \QIcon($this->core->APP_PATH.'img/logo.svg');
        $labelLogo->setPixmap($pixmap->pixmap(96, 96));
        $labelLogo->objectName = 'AppLogo';

        /** Создаем QLabel для названия приложения */
        $labelAppName = new \QLabel($general);
        $labelAppName->text = $this->core->applicationName();
        $labelAppName->objectName = 'AppName';

        /** Создаем QLabel для отображения текущей версии приложения */
        $labelAppVersion = new \QLabel($general);
        $labelAppVersion->text = tr('Version').' '.$this->core->applicationVersion();
        $labelAppVersion->objectName = 'AppVersion';

        /** Создаем QFrame для основного меню */
        $menu = new \QFrame($general);
        $menu->objectName = 'MainMenu';
        $menu->setMinimumWidth(200);
        $menu->setMaximumWidth(200);
        $menu->setLayout(new \QVBoxLayout());
        $menu->layout()->setSpacing(0);

        /** Создаем кнопку основного меню для создания проекта */
        $createBtn = new Btn\Menu($menu, $this->core->icon->font('fa-asterisk', '#c43737', 16), tr('Create Project'), 'CreateProjectBtn');
        $createBtn->onClicked = function($sender) {
            MVC::v('Components/Widgets/Welcome')->showPage('Components/Pages/Create');
        };

        /** Создаем кнопку основного меню для открытия проекта */
        $openBtn = new Btn\Menu($menu, $this->core->icon->font('fa-folder-open', '#bf6024', 16), tr('Open Project File'), 'welcome_main-open_project');
        $openBtn->onClicked = function($sender) {
        };
        
        /** Создаем кнопку основного меню для импорта проекта */
        $importBtn = new Btn\Menu($menu, $this->core->icon->font('fa-sign-in', '#71a62b', 16), tr('Import Project'), 'welcome_main-import_page_show');
        $importBtn->onClicked = function($sender) {
        };

        /** Создаем кнопку основного меню для открытия окна настроек приложения */
        $settingBtn = new Btn\Menu($menu, $this->core->icon->font('fa-gears', '#999999', 16), tr('Settings'), 'settings_main-show');
        $settingBtn->onClicked = function($sender) {
        };

        /** Добавляем кнопки меню в слой QFrame основного меню */
        $menu->layout()->addWidget($createBtn);
        $menu->layout()->addWidget($openBtn);
        $menu->layout()->addWidget($importBtn);
        $menu->layout()->addWidget($settingBtn);

        /** Создаем пустой QFrame для отсупа от верха окна */
        $topSpacer = new \QFrame($this);
        $topSpacer->setMinimumHeight(50);
        $general->layout()->addWidget($topSpacer);

        $general->layout()->addWidget($labelLogo);
        $general->layout()->setAlignment($labelLogo, \Qt::AlignHCenter);
        $general->layout()->addWidget($labelAppName);
        $general->layout()->setAlignment($labelAppName, \Qt::AlignCenter);
        $general->layout()->addWidget($labelAppVersion);
        $general->layout()->setAlignment($labelAppVersion, \Qt::AlignCenter);
        $general->layout()->addWidget($menu);
        $general->layout()->setAlignment($menu, \Qt::AlignHCenter);

        $spacer = new \QFrame($this);
        $spacer->setSizePolicy(\QSizePolicy::Expanding, \QSizePolicy::Expanding);
        $general->layout()->addWidget($spacer);

        $this->layout()->addWidget($general);
    }
    
    public function addProject($name, $path, $icon = '') {
    
    }
    
    /**
     * @param Project $data
     * @return bool
     */
    public function createProject($data) {
        $projectPath = $data->path_to.'/'.$data->name;
        $this->core->dir->mkdir($projectPath);
        if($data->usePQCore) {
            $this->core->dir->copy($this->core->APP_PATH.'PQ', $projectPath.'/PQ');
        }
        return false;
    }
}
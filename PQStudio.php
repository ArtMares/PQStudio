<?php

/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                27.02.2017
 * @copyright           artmares@influ.su
 */

require_once 'PQ/Core.php';

$core = \PQ\Core::getInstance();

define('RELEASE_VERSION', 'testing');
define('BUILD_VERSION', '100');

$title = sprintf('%1$s %2$s [build: %3$s]',
    $core->applicationName(),
    $core->applicationVersion(),
    BUILD_VERSION);

$core->widgets->setDefaultTitle($title);

define('PQSTUDIO_TITLE', $title);

class PQStudio extends QFrame {

    use \PQ\QtObject;

    private $progress;

    private $message;

    private $hidden = false;

    private $components = [
        [
            'title' => 'Custom Elements',
            'class' => 'Components\\Custom\\Btn',
            'init'  => false
        ],
        [
            'title' => 'Custom Elements',
            'class' => 'Components\\Custom\\IconBtn',
            'init'  => false
        ],
        [
            'title' => 'Custom Elements',
            'class' => 'Components\\Custom\\MenuBtn',
            'init'  => false
        ],
        [
            'title' => 'Custom Elements',
            'class' => 'Components\\Custom\\BackBtn',
            'init'  => false
        ],
        [
            'title' => 'Custom Elements',
            'class' => 'Components\\Custom\\NextBtn',
            'init'  => false
        ],
        [
            'title' => 'Custom Elements',
            'class' => 'Components\\Custom\\CheckBox',
            'init'  => false
        ],
        [
            'title' => 'Custom Elements',
            'class' => 'Components\\Custom\\Events\\Input',
            'init'  => false
        ],
        [
            'title' => 'Custom Elements',
            'class' => 'Components\\Custom\\Input',
            'init'  => false
        ],
        [
            'title' => 'Custom Elements',
            'class' => 'Components\\Custom\\InputValidate',
            'init'  => false
        ],
        [
            'title' => 'Custom Elements',
            'class' => 'Components\\Custom\\ToolTip',
            'init'  => false
        ],
        [
            'title' => 'Windows',
            'class' => 'Components\\Pages\\Main',
            'init'  => false
        ],
        [
            'title' => 'Windows',
            'class' => 'Components\\Pages\\Create',
            'init'  => false
        ],
        [
            'title' => 'Windows',
            'class' => 'Components\\Widgets\\Welcome',
            'init'  => true
        ]
    ];

    private $now = 0;

    private $count = 0;

    private function initConfiguration() {
        $this->changeLang($this->core->config->ini()->get('language', 'en'), true);
        $this->core->storage->defaultProjectPath = $this->core->config->ini()->get('project_path', $this->core->APP_PATH.'Projects/');
    }

    private function changeLang($lang, $accept = false) {
        if($lang !== 'en') {
            if($accept === true) set_tr_lang($lang, 'languages');
            $this->core->config->ini()->set('language', $lang);
        }
    }

    public function initComponents() {
        /** Инициализируем загрузку всех основных конфигураций приложени */
        $this->initConfiguration();
        
        /** Проверяем запущен ли уже экземпляр приложения */
        $single = $this->core->single->check($this->core->applicationName());

        /** Если запущен то закрываем текущее приложение */
        if($single) $this->core->quit();

        /** Задаем тему оформления */
        $this->core->style->setSkin($this->core->config->ini()->get('theame', 'PQDark'));

        /** Получаем колличество компонетов приложения которые необходимо подключить */
        $this->count = count($this->components);

        /** Задаем флаги и атрибуты для прозрачного фона QFrame */
        $this->setWindowFlags(Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);
        $this->setAttribute(Qt::WA_TranslucentBackground);

        /** Убираем автоматическую заливку фона QFrame */
        $this->setAutoFillBackground(false);

        /** Создаем слой */
        $this->setLayout(new QVBoxLayout());

        /** Убираем отступы от края окна */
        $this->layout()->setContentsMargins(0, 0, 0, 0);
        $this->layout()->setSpacing(0);

        /** Задаем максимальную шируну для QFrame */
        $imgWidth = (isset($config['imageWidth']) && $config['imageWidth'] > 400 ? $config['imageWidth'] : 400);
        /** Задаем макстмальную высоту для QFrame */
        $imgHeight = (isset($config['imageHeight']) ? $config['imageHeight'] + 20 : 20);

        /** Проверяем был ли передан путь для фонового изображения */
        if(isset($config['imagePath']) && !empty($config['imagePath'])) {
            /** Создаем QLabel в который вставим фоновое изображение */
            $image = new QLabel($this);
            /** Загружаем изображение */
            $pixmap = new QIcon($config['imagePath']);
            /** Добавляем изображение в QLabel с переданными шириной и высотой */
            $image->setPixmap($pixmap->pixmap($imgWidth, $imgHeight));
            /** Добавялем QLabel с изобаржением на слой */
            $this->layout()->addWidget($image);
            /** Выравниваем QLabel по центру */
            $this->layout()->setAlignment($image, Qt::AlignCenter);
        }

        /** Создаем QLabel для вывода сообщений о текущем состоянии загрузчика */
        $this->message = new QLabel($this);
        $this->message->objectName = 'Message';
        $this->layout()->addWidget($this->message);

        /** Создаем QProgressBar для вывода полосы загрузки компонентов */
        $this->progress = new QProgressBar($this);
        $this->progress->setMaximum($this->count);
        $this->progress->setValue(0);
        $this->progress->textVisible = false;
        $this->layout()->addWidget($this->progress);

        /** Устанавливаем максимальную и минимальную ширину QFrame */
        $this->setMaximumWidth($imgWidth);
        $this->setMinimumWidth($imgWidth);
        /** Делаем ресайз QFrame */
        $this->resize($imgWidth, $imgHeight);
    }

    public function show() {
        if(!$this->hidden) {
            $this->message->text = tr('Loading components').'...';
            /** Получаем стиль для окна */
            $style = $this->core->style->Bootstrap;
            /** Проверяем существует ли стиль в теме оформления */
            if(!empty($style)) {
                /** Если стиль существует то задаем стиль темы оформления */
                $this->styleSheet = $style;
            } else {
                /** В противном случае задаем стиль по умолчанию */
                $this->styleSheet = '
                    QFrame {
                        font-family: "Akrobat";
                        font-size: 16px;
                    }
                    QLabel {
                        color: #323232;
                    }
                    QLabel#Message {
                        padding-left: 5px;
                        background: #cfcfcf;
                        border-top-left-radius: 6px;
                        border-top-right-radius: 6px;
                    }
                    QProgressBar {
                        background: #cfcfcf;
                        height: 10px;
                        border-bottom-left-radius: 6px;
                        border-bottom-right-radius: 6px;
                    }
                    QProgressBar::chunk {
                        background-color: #276ccc;
                        border-bottom-left-radius: 6px;
                        border-bottom-right-radius: 6px;
                    }
                ';
            }
            parent::show();
            $this->core->QApp->processEvents();
            sleep(1);
            while(isset($this->components[$this->now]) && $this->now <= $this->count) {
                $this->load();
            }
            $this->completed();
        }
    }

    public function load() {
        $data = $this->components[$this->now];
        $this->now++;
        $this->message->text = tr('Loading component') . " : " . $data['title'];
        $file = ':/' . $data['class'] . '.php';
        $this->core->log->info('Loading component "' . $data['class'] . '"', 'App');
        if(!$this->core->file->exists($file)) {
            $file = $this->core->APP_PATH . $data['class'] . '.php';
            if(!$this->core->file->exists($file)) {
                $this->core->log->error('No component file "' . $data['class'] . '"', 'App');
            } else {
                $data['path'] = $file;
            }
        } else {
            $data['path'] = $file;
        }
        if(isset($data['path'])) {
            $data['path'] = preg_replace('/^:\//', 'qrc://', $data['path']);
            $data['path'] = str_replace('\\', '/', $data['path']);
            if($this->_load($data)) $this->progress->setValue($this->now);
        }
    }

    public function completed() {
        sleep(2);
        $args = $this->core->args();
        if(count($args) === 1) {
            if(!$this->core->var->is_null($this->core->widgets->get('Components/Widgets/Welcome'))) $this->core->widgets->get('Components/Widgets/Welcome')->show();
        }
        $this->close();
    }

    private function _load($data) {
        require_once($data['path']);
        $class = $data['class'];
        if(!class_exists($class)) return false;
        if($data['init'] === true) {
            $this->core->widgets->set(str_replace('\\', '/', $data['class']), new $class());
        }
        return true;
    }

//    public function SocketConnect($sender) {
//        $this->connect = QLocalSocket::ConnectedState;
//    }
//
//    public function SocketDisconnect($sender) {
//        $this->connect = QLocalSocket::ClosingState;
//    }
//
//    public function SocketState($sender, $state) {
//        var_dump($state);
//    }
//
//    public function SocketError($sender, $errNo) {
//        echo $errNo.PHP_EOL;
//    }
//
//    public function terminal($sender) {
//        $this->btn['terminal']->plainText = $sender->readAllStandardOutput();
//    }
}

return $core->exec(new PQStudio());
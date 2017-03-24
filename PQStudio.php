<?php

/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                27.02.2017
 * @copyright           artmares@influ.su
 */

require_once 'PQ/Core.php';

$core = \PQ\Core::getInstance();

define('RELEASE_VERSION', 'testing');
define('BUILD_VERSION', (string)112);

$title = sprintf('%1$s %2$s [build: %3$s]',
    $core->applicationName(),
    $core->applicationVersion(),
    BUILD_VERSION);

var_dump(QSysInfo::productType());
//var_dump(aboutPQ(true));

$core->widgets->setDefaultTitle($title);

class PQStudio extends QFrame {

    use \PQ\QtObject;
    
    private $components = [
        [
            'title' => 'Wake up',
            'class' => 'Components\\BaseModel',
            'init'  => false
        ],
        [
            'title' => 'Wake up',
            'class' => 'Components\\Model\\Project',
            'init'  => false
        ],
        [
            'title' => 'Wake up',
            'class' => 'Components\\Collector',
            'init'  => true
        ],
        [
            'title' => 'Collecting stones',
            'class' => 'Components\\Custom\\Btn',
            'init'  => false
        ],
        [
            'title' => 'Collecting stones',
            'class' => 'Components\\Custom\\IconBtn',
            'init'  => false
        ],
        [
            'title' => 'Collecting stones',
            'class' => 'Components\\Custom\\MenuBtn',
            'init'  => false
        ],
        [
            'title' => 'Collecting stones',
            'class' => 'Components\\Custom\\BackBtn',
            'init'  => false
        ],
        [
            'title' => 'Collecting stones',
            'class' => 'Components\\Custom\\NextBtn',
            'init'  => false
        ],
        [
            'title' => 'Collecting stones',
            'class' => 'Components\\Custom\\ProjectBtn',
            'init'  => false
        ],
        [
            'title' => 'Collecting stones',
            'class' => 'Components\\Custom\\CheckBox',
            'init'  => false
        ],
        [
            'title' => 'Collecting stones',
            'class' => 'Components\\Custom\\CheckBoxHover',
            'init'  => false
        ],
        [
            'title' => 'Collecting stones',
            'class' => 'Components\\Custom\\Input',
            'init'  => false
        ],
        [
            'title' => 'Collecting stones',
            'class' => 'Components\\Custom\\InputValidate',
            'init'  => false
        ],
        [
            'title' => 'Collecting stones',
            'class' => 'Components\\Custom\\ToolTip',
            'init'  => false
        ],
        [
            'title' => 'Collecting stones',
            'class' => 'Components\\Custom\\ErrorToolTip',
            'init'  => false
        ],
        [
            'title' => 'Collecting stones',
            'class' => 'Components\\Custom\\Widget\\Slider',
            'init'  => false
        ],
        [
            'title' => 'Collecting stones',
            'class' => 'Components\\Custom\\Widget\\ListView',
            'init'  => false
        ],
        [
            'title' => 'Collecting stones',
            'class' => 'Components\\Custom\\Widget\\ListWidget',
            'init'  => false
        ],
        [
            'title' => 'Pour coffee',
            'class' => 'Components\\Pages\\Main',
            'init'  => false
        ],
        [
            'title' => 'Pour coffee',
            'class' => 'Components\\Pages\\Create\\Basic',
            'init'  => true
        ],
        [
            'title' => 'Pour coffee',
            'class' => 'Components\\Pages\\Create\\Template',
            'init'  => true
        ],
        [
            'title' => 'Pour coffee',
            'class' => 'Components\\Pages\\Create\\Settings',
            'init'  => true
        ],
        [
            'title' => 'Pour coffee',
            'class' => 'Components\\Pages\\Create',
            'init'  => false
        ],
        [
            'title' => 'Pour coffee',
            'class' => 'Components\\Pages\\Import',
            'init'  => false
        ],
        [
            'title' => 'Pour coffee',
            'class' => 'Components\\Widgets\\Welcome',
            'init'  => true
        ],
    ];
    
    private $progress;
    
    private $message;
    
    private $hidden = false;

    private $now = 0;

    private $count = 0;

    private function initConfiguration() {
        /** Задаем язык приложения */
        $this->changeLang($this->core->config->ini()->get('language', QLocale::system()->name()), true);
        /** Задаем тему оформления */
        $this->core->style->setSkin($this->core->config->ini()->get('theme', 'PQDark'));
    }

    private function changeLang($lang, $accept = false) {
        if($lang !== 'en_US') {
            if($accept === true) set_tr_lang($lang, 'languages');
        }
        $this->core->config->ini()->set('language', $lang);
    }
    
    private function initLocalSocket() {
        $socket = new QLocalSocket();
        $socket->abort();
        $socket->connectToServer('PQCenter');
    
        if($socket->waitForConnected(1000)) {
            $this->core->storage->socket = $socket;
        }
        $this->core->QApp->processEvents();
    }

    public function initComponents() {
        /** Инициализируем загрузку всех основных конфигураций приложени */
        $this->initConfiguration();
        
        $this->core->process->detached('PQStudioCenter-src.exe');
        
        $this->initLocalSocket();

        /** Проверяем запущен ли уже экземпляр приложения */
        $single = $this->core->single->check($this->core->applicationName());

        /** Если запущен то закрываем текущее приложение */
        if($single) {
            $this->core->storage->socket->write(
                json_encode([
                    'type' => 'notice',
                    'title' => $this->core->widgets->getDefaultTitle(),
                    'message' => tr('The application is already running'),
                    'level' => 6
                ])
            );
            die();
//            $msgBox = new QMessageBox();
//            $this->core->style->set($msgBox, 'MessageBox');
//            $msgBox->setText(tr('The application is already running'));
//            $ret = $msgBox->exec();
//            if($ret === QMessageBox::Ok) $this->core->quit();
        }

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
        $Width = 400;
        /** Задаем максимальную высоту для QFrame */
        $Height = 230;

        /** Создаем QLabel в который вставим фоновое изображение */
        $image = new QLabel($this);
        /** Загружаем изображение */
        $pixmap = new QIcon($this->core->APP_PATH.'img/logo.svg');
        /** Добавляем изображение в QLabel с переданными шириной и высотой */
        $image->setPixmap($pixmap->pixmap($Width - 200, $Height - 30));
        /** Добавялем QLabel с изобаржением на слой */
        $this->layout()->addWidget($image);
        /** Выравниваем QLabel по центру */
        $this->layout()->setAlignment($image, Qt::AlignCenter);

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
        $this->setMaximumWidth($Width);
        $this->setMinimumWidth($Width);
        /** Делаем ресайз QFrame */
        $this->resize($Width, $Height);
    }

    public function show() {
        if(!$this->hidden) {
            $this->message->text = tr('Wake up').'...';

            /** В противном случае задаем стиль по умолчанию */
            $this->styleSheet = '
                QFrame {
                    font-family: "Akrobat";
                    font-size: 16px;
                }
                QLabel#Message {
                    color: #c4c4c4;
                    padding-left: 5px;
                    background: #46474b;
                    border-top-left-radius: 6px;
                    border-top-right-radius: 6px;
                }
                QProgressBar {
                    background: #46474b;
                    height: 10px;
                    border-bottom-left-radius: 6px;
                    border-bottom-right-radius: 6px;
                }
                QProgressBar::chunk {
                    background-color: #f16327;
                    border-bottom-left-radius: 6px;
                    border-bottom-right-radius: 6px;
                }
            ';
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
        $this->message->text = tr($data['title']) . '...';
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
        $window = $this->core->widgets->get('Components/Widgets/Welcome');
//        $window = $this->core->widgets->get('Components/Widgets/NotificationCenter');
        $window->show();
        
//        $this->core->widgets->set(
//            'Components/Widgets/Notification',
//            new \Components\Widgets\Notification($window)
//        );
//        $this->core->widgets->get('Components/Widgets/Notification')->showMessage(\Components\Widgets\Notification::INFO, 'PQStudio', 'Is run', 10000);
//        $this->core->widgets->get('Components/Widgets/Pages')->show();
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
return $core->exec('PQStudio');
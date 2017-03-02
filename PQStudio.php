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

$core->widgets->setDefaulttitle($title);

define('PQSTUDIO_TITLE', $title);

class PQStudio extends QFrame {

    use \PQ\QtObject;

    private $signals = [
        'completed()'
    ];

    private $progress;

    private $message;

    private $hidden = false;

    private $timer = false;

    private $components = [];

    private $now = 1;

    private $count = 0;

    public function initComponents() {
        $single = $this->core->single->check($this->core->applicationName());
        if($single) $this->core->quit();
        if($this->core->var->is_null($this->core->config->ini()->theame)) $this->core->config->ini()->theame = 'PQDark';
        $this->core->style->setSkin($this->core->config->ini()->theame);
        if(isset($config['hidden'])) $this->hidden = (bool)$config['hidden'];
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
        $this->progress->setValue(1);
        $this->progress->textVisible = false;
        $this->layout()->addWidget($this->progress);

        /** Устанавливаем максимальную и минимальную ширину QFrame */
        $this->setMaximumWidth($imgWidth);
        $this->setMinimumWidth($imgWidth);
        /** Делаем ресайз QFrame */
        $this->resize($imgWidth, $imgHeight);

        $this->timer = new QTimer($this);
        $this->timer->setInterval(600);
        connect($this->timer, 'timeout()', $this, 'load()');
    }

    public function show() {
        if(!$this->hidden) {
            $this->message->text = tr('Loading components');
            /** Получаем стиль для окна */
            $style = $this->core->style->Bootstrap;
            /** Проверяем существует ли стиль в теме оформления */
            if(!empty($style)) {
                /** Если стиль существует то задаем стиль темы оформления */
                $this->styleSheet = $style;
            } else {
                /** В противном случае задаем стиль по умолчанию */
                $this->styleSheet = '
                    QLabel {
                        color: #323232;
                        font-size: 12px;
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
            $this->timer->start();
        }
    }

    public function load($sender) {
        if(isset($this->components[$this->now]) && $this->now <= $this->count) {
            $data = $this->components[$this->now];
            $this->now++;
            $this->message->text = tr('Loading component')." : ".$data['display'];
            $data['type'] = strtolower($data['type']);
            $data['name'] = $data['module'].'_'.$data['class'];
            $path = $data['module'].'/'.$data['type'].'/'.$data['class'].'.php';
            $file = ':/Components/'.$path;
            $data['class'] = 'PQ'.ucwords($data['type']).'_'.$data['name'];
            $this->core->log->info('Loading component "'.$data['class'].'"');
            if(!$this->core->file->exists($file)) {
                $file = $this->core->APP_PATH.'Components/'.$path;
                if(!$this->core->file->exists($file)) {
                    $this->core->log->error('No component file "'.$data['name'].'"');
                } else {
                    $data['path'] = $file;
                }
            } else {
                $data['path'] = $file;
            }
            if(isset($data['path'])) {
                if($this->_load($data)) {
                    $this->progress->setValue($this->now);
                }
            }
        } else {
            $this->timer->stop();
            $this->completed();
        }
    }

    public function completed() {
        sleep(2);
        $this->emit('completed()', []);
//        $this->close();
    }

    private function _load($data) {
        require_once($data['path']);
        $class = $data['class'];
        if(!class_exists($class)) return false;
        if($data['init'] === true) {
            $this->pqcore->mvc->{$data['type']}->{$data['name']} = new $class();
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
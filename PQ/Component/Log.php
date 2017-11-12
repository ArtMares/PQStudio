<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */

# QDir
# QFile
# QFileDevice
# QIODevice
# QObject

namespace PQ\Component;
use PQ\Component;
use PQ\Core;

class Log extends Component {

    /** Время инициализации компонента */
    private $timer_start = 0;
    /** Расширение файлов журналирования */
    private $ext = '.log';
    /** Путь к директории в которую будут записываться файлы журналирования */
    private $_conf_log_path = '';
    /** Радномный ключ для визуального отличия логов */
    private $_random_session_key = '';
    /** Объект QFile */
    private $file = false;

    public function __construct(Core &$core) {
        parent::__construct($core);
        /** Получаем время инициализации компонента */
        $this->timer_start = microtime(true);
        /** Генерируем раномный ключ */
        $this->_random_session_key = rand(1,9) . substr($this->timer_start, 9, strlen($this->timer_start));
        /** Инициализируем отдельный объект QFile */
        $this->file = new \QFile();
        $this->init();
        $this->info('->--- Session log start (session_id: '.$this->_random_session_key.') ---<- ');
        $this->info('Component "Log" is loaded', 'Core');
    }

    /**
     * Переопределен деструктор класса, так как необходимо записать послдение сообщения в файл
     */
    public function __destruct() {
        $this->info('Component "Log" is destruct', 'Core');
        $this->info('->--- Session log end (session_id: '.$this->_random_session_key.') ---<-');
    }

    /**
     * Инициализирует создаение файла и директории если ее не сущетствует
     */
    private function init() {
        $this->_conf_log_path = $this->core->APP_DATA.'log';
        $dir = new \QDir($this->_conf_log_path);
        $dir->mkpath($this->_conf_log_path);
        $this->file->setFileName($this->_conf_log_path.'/'.date('Y-m-d', time()).$this->ext);
        unset($dir);
    }

    /**
     * Запись сообщения с пометкой Info
     * @param $msg
     * @param bool $item_name
     */
    public function info($msg, $item_name = false) {
        $this->_write($msg, 'Info', $item_name);
    }

    /**
     * Запись сообщения с пометкой Warning
     * @param $msg
     * @param bool $item_name
     */
    public function warning($msg, $item_name = false) {
        $this->_write($msg, 'Warning', $item_name);
    }

    /**
     * Запись сообщения с пометкой Debug
     * @param $msg
     * @param bool $item_name
     */
    public function debug($msg, $item_name = false) {
        $this->_write($msg, 'Debug', $item_name);
    }

    /**
     * Запись сообщения с пометкой Error
     * @param $msg
     * @param bool $item_name
     */
    public function error($msg, $item_name = false) {
        $this->_write($msg, 'Error', $item_name);
    }

    /**
     * Записывает сообщение в файл журналирования
     * @param $msg
     * @param $level
     * @param bool $item_name
     */
    private function _write($msg, $level, $item_name = false) {
        $type = str_pad($level, 10, " ");
        $time = str_pad(date("H:i:s", time()), 10, " ");
        $session = str_pad($this->_random_session_key, 10, " ");
        $msg = ' -> '.$msg;
        if($item_name) {
            $msg = ' -> '.$item_name.$msg;
        }
        $message = $time.'| '.$session.'| '.$type.':'.$msg.PHP_EOL;
        echo $message;
        if($this->file->open(\QIODevice::Append)) {
            $this->file->write($message);
            $this->file->close();
        }
    }
}
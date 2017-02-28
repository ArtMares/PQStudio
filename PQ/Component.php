<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQ;
/**
 * Class Component
 * @package PQ
 * @property        Core            $core
 */
class Component {

    protected $core;

    private $_class;

    public function __construct(Core &$core) {
        $this->core = $core;
        if(isset($this->core->log) && $this->core->log !== false) {
            $this->_class = str_replace('PQ\\Component\\', '', get_class($this));
            $this->core->log->info('Component "'.$this->_class.'" is loaded', 'Core');
        }
    }

    public function __destruct() {
        $this->_log('Component "'.$this->_class.'" is destruct', 'Core', 'info');
    }

    /**
     * Записывает сообщение в журнал с пометкой Info
     * @param $msg
     */
    protected function _info($msg) {
        $this->_log($msg, 'Core -> '.$this->_class, 'info');
    }

    /**
     * Записывает сообщение в журнал с пометкой Warning
     * @param $msg
     */
    protected function _warning($msg) {
        $this->_log($msg, 'Core -> '.$this->_class, 'warning');
    }

    /**
     * Записывает сообщение в журнал с пометкой Debug
     * @param $msg
     */
    protected function _debug($msg) {
        $this->_log($msg, 'Core -> '.$this->_class, 'debug');
    }

    /**
     * Записывает сообщение в журнал с пометкой Error
     * @param $msg
     */
    protected function _error($msg) {
        $this->_log($msg, 'Core -> '.$this->_class, 'error');
    }

    /**
     * Производит запись сообщений в журнал
     * @param $msg
     * @param $item_name
     * @param $type
     */
    private function _log($msg, $item_name, $type) {
        if(isset($this->core->log)) {
            $this->core->log->{$type}($msg, $item_name);
        }
    }
}
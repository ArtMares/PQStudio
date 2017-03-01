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

define('PQSTUDIO_TITLE', $title);

class PQStudio extends QWidget {

    use \PQ\Widget;

    public $bootstrap;

    public $btn = [];

    public $socket = false;

    private $connect;

    public function initComponents() {
        $this->windowTitle = PQSTUDIO_TITLE;
        $this->setLayout(new QHBoxLayout);
        $this->btn['connect'] = new QPushButton($this);
        $this->btn['connect']->text = 'Connect';
        $this->btn['connect']->onClicked = function() {
            if($this->socket === false) {
                $this->socket = new QLocalSocket($this);
                connect($this->socket, 'stateChanged(int)',$this, 'SocketState(int)');
                connect($this->socket, 'connected()', $this, 'SocketConnect()');
                connect($this->socket, 'disconnected()', $this, 'SocketDisconnect()');
            }
            $this->socket->abort();
            $this->socket->connectToServer('PQStudio Worker');
//            connect($this->socket, 'error(int)', $this, 'SocketError(int)');
            if($this->socket->waitForConnected(1000)) {
                echo "Connected!";
//                $this->btn['connect']->setEnabled(false);
            }
        };
        $this->btn['send'] = new QPushButton($this);
        $this->btn['send']->text = 'Send';
        $this->btn['send']->onClicked = function() {
            var_dump($this->socket->state());
            if($this->connect == QLocalSocket::ConnectedState) {
                $this->socket->write('Test test test test');
            }
        };
        $this->layout()->addWidget($this->btn['connect']);
        $this->layout()->addWidget($this->btn['send']);
    }

    private function initBootstrap() {
        $this->bootstrap = new QFrame();

    }

    public function SocketConnect($sender) {
        $this->connect = QLocalSocket::ConnectedState;
    }

    public function SocketDisconnect($sender) {
        $this->connect = QLocalSocket::ClosingState;
    }

    public function SocketState($sender, $state) {
        var_dump($state);
    }

    public function SocketError($sender, $errNo) {
        echo $errNo.PHP_EOL;
    }
}

return $core->exec(new PQStudio());
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

    public function initComponents() {
        $this->windowTitle = PQSTUDIO_TITLE;
        $this->btn['connect'] = new QPushButton($this);
        $this->btn['connect']->text = 'Connect';
        $this->btn['connect']->onClicked = function() {
            if($this->socket === false) {
                $this->socket = new QLocalSocket($this);
            }
            $this->socket->abort();
            $this->socket->connectToServer('PQStudio Worker');
            if($this->socket->waitForConnected(1000)) {
                echo "Connected!";
                $this->socket->write('brefefdef');
            }
        };
        $this->btn['send'] = new QPushButton($this);

    }

    private function initBootstrap() {
        $this->bootstrap = new QFrame();

    }
}

return $core->exec(new PQStudio());
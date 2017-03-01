<?php

require_once 'PQ/Core.php';

$core = \PQ\Core::getInstance('Core');

class PQServer extends QObject {

    use \PQ\Widget;

    private $server;

    private $sockets = [];

    private $clients = [];

    public function init() {
        $this->core->lib->uid;
        $this->server = new QLocalServer($this);
        $this->core->log->info('Initialize LocalServer', 'PQServer');
        $this->server->listen('PQStudio Worker');
        $this->core->log->info('Listen...', 'PQServer');
        connect($this->server, 'newConnection()', $this, 'incomingConnection()');
    }

    public function incomingConnection() {
        $this->core->log->info('Detected new connection', 'PQServer');
        $socket = $this->server->nextPendingConnection();
        connect($socket, 'readyRead()', $this, 'readData()');
        connect($socket, 'disconnected()', $this, 'onClose()');
        $uid = $this->core->lib->uid->generate();
        $this->core->log->info('Connection assigned uid "'.$uid.'"', 'PQServer');
        $this->sockets[$uid] = $socket;
    }

    public function readData($socket) {
        echo $socket->readAll().PHP_EOL;
    }
    
    public function onClose($socket) {
        $this->core->log->info('Connection closed by the client', 'PQServer');
        $uid = array_search($socket, $this->sockets);
        if($uid !== false) {
            $this->core->log->info('Connection "'.$uid.'" is removed from sockets list', 'PQServer');
            unset($this->sockets[$uid]);
        }
    }
}

return $core->exec(new PQServer(), 'init');

//$app = new QCoreApplication($argc, $argv);
//
//$PQServer = new PQServer();
//
//return $app->exec();
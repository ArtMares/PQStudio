<?php

require_once 'PQ/Core.php';

$core = \PQ\Core::getInstance('Core');

class PQServer extends QObject {

    use \PQ\Widget;

    private $server;

    private $sockets = [];

    private $clients = [];

    public function init() {
        $this->server = new QLocalServer($this);
        $this->core->log->info('Initialize LocalServer', 'PQServer');
        $this->server->listen('PQStudio Worker');
        $this->core->log->info('Listen...', 'PQServer');
        connect($this->server, 'newConnection()', $this, 'incomingConnection()');
    }

    public function incomingConnection() {
        $this->core->log->info('Detected new connected', 'PQServer');
        $socket = $this->server->nextPendingConnection();
        connect($socket, 'readyRead()', $this, 'readData()');
        $this->sockets[] = $socket;
    }

    public function readData($socket) {
        echo $socket->readAll().PHP_EOL;
    }
}

return $core->exec(new PQServer(), 'init');

//$app = new QCoreApplication($argc, $argv);
//
//$PQServer = new PQServer();
//
//return $app->exec();
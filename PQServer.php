<?php

class PQServer extends QObject {

    private $server;

    private $sockets = [];

    private $clients = [];

    public function __construct() {
        parent::__construct();

        $this->server = new QLocalServer($this);
        $this->server->listen('PQStudio Worker');
        connect($this->server, 'newConnection()', $this, 'incomingConnection()');
    }

    public function incomingConnection() {
        $socket = $this->server->nextPendingConnection();
        connect($socket, 'readyRead()', $this, 'readData()');
        $this->sockets[] = $socket;
    }

    public function readData($socket) {
        echo $socket->readAll().PHP_EOL;
    }
}

$app = new QCoreApplication($argc, $argv);

$PQServer = new PQServer();

return $app->exec();
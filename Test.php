<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                02.03.2017
 * @copyright           artmares@influ.su
 */

$this->core->widgets->setTitle($this);
$this->setLayout(new QGridLayout);
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
    } else {
        echo "Not Connected!";
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

$this->layout()->addWidget($this->btn['connect'], 0, 0);
$this->layout()->addWidget($this->btn['send'], 0, 1);
$this->btn['terminal'] = new QPlainTextEdit();
$this->layout()->addWidget($this->btn['terminal'], 1, 0, 1, 2);
$pid = $this->core->process->start('cmd');
$this->core->process->connect($pid, 'readyReadStandardOutput()', $this, 'terminal');
//        $this->btn['terminal']->appendPlaintext($this->core->process->read());
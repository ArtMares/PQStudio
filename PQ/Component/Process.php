<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                02.03.2017
 * @copyright           artmares@influ.su
 */

# QProcess

namespace PQ\Component;
use PQ\Component;

class Process extends Component {

    private $list;

    public function start($command, $arguments = []) {
        $process = new \QProcess();
        $process->start($command, $arguments);
        if(!$process->waitForStarted()) {
            return false;
        }
        $pid = $process->processId();
        $this->list[$pid] = $process;
        return $pid;
    }
    
    public function detached($command) {
        \QProcess::startDetached($command);
    }

    public function connect($pid, $signal, &$object, $slot) {
        if(isset($this->list[$pid])) {
            connect($this->list[$pid], $signal, $object, $slot);
        }
    }
}
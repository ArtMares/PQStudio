<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                02.03.2017
 * @copyright           artmares@influ.su
 */
namespace PQ\Component;
use PQ\Component;

class Single extends Component {

    private $semaphore;

    private $memory;

    public function check($key) {
        $isRunning = false;
        $key = $this->core->var->convert('str', $key);
        if($key !== '') {
            $this->semaphore = new \QSystemSemaphore($key.'Semaphore', 1);
            $this->semaphore->acquire();
            $memory = new \QSharedMemory($key.'Memory');
            $memory->attach();
            unset($memory);
            $this->memory = new \QSharedMemory($key.'Memory');
            if($this->memory->attach()) {
                $isRunning = true;
            } else {
                $this->memory->create(1);
            }
            $this->semaphore->release();
        }
        return $isRunning;
    }
}
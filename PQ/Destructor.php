<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                02.03.2017
 * @copyright           artmares@influ.su
 */
namespace PQ;
class Destructor extends \QObject {

    protected $core;

    public function __construct(Core &$core) {
        parent::__construct();
        $this->core = $core;
    }

    public function onDestruct() {
        $this->core->log->info('Detected signal to close Application', 'Core');
        $this->core->quit(true);
    }
}
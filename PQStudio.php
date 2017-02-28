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

    public function initComponents() {
        $this->windowTitle = PQSTUDIO_TITLE;
    }

    private function initBootstrap() {
        $this->bootstrap = new QFrame();

    }
}

return $core->exec(new PQStudio());
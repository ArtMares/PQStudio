<?php

/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                27.02.2017
 * @copyright           artmares@influ.su
 */

$app = new QApplication($argc, $argv);
$app->applicationName = 'PQBuilder';
$app->applicationVersion = '0.6';
$app->organizationName = 'PHPQt5 Team';
$app->organizationDomain = 'phpqt.ru';

define('RELEASE_VERSION', 'testing');
define('BUILD_VERSION', '100');

$title = sprintf('%1$s %2$s [build: %3$s]',
    $app->applicationName,
    $app->applicationVersion,
    BUILD_VERSION);

define('PQSTUDIO_TITLE', $title);

class PQStudio extends QObject {


}

return $app->exec();
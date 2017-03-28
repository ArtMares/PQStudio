<?php

/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                27.03.2017
 * @copyright           artmares@influ.su
 */
class DownloadManager extends QObject {
    
    public $signals = [
        'finished()'
    ];
    
    private $manager;
    
    private $list = [];
    
    private $queue = [];

    public function __construct() {
        parent::__construct();
        $this->manager = new QNetworkAccessManager();
    }
}
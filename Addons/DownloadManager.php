<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                27.03.17
 * @version             0.1
 * @copyright           artmares@influ.su
 */

# QFile
# QObject
# QUrl
# QTime
# QTimer
# QNetworkAccessManager
# QNetworkRequest
# QNetworkReply


namespace Addons;
class DownloadManager extends \QObject {
    
    public $signals = [
        'downloadProgress(int,int,double)',
        'finished()'
    ];
    
    protected $manager;
    
    protected $list = [];
    
    protected $queue = [];
    
    protected $count = 0;
    
    protected $totalCount = 0;
    
    protected $time;
    
    protected $current;
    
    public function __construct() {
        parent::__construct();
        $this->manager = new \QNetworkAccessManager();
        
        $this->time = new \QTime();
        
        
    }
    
    public function append($url) {
        if(is_array($url)) {
            foreach($url as $_url) $this->append($_url);
            if(empty($this->queue)) {
                \QTimer::singleShot(0, $this, SIGNAL('finished()'));
            }
        } else {
            if(empty($this->queue)) {
                \QTimer::singleShot(0, $this, SLOT('startNextDownload()'));
            }
            $this->queue[] = \QUrl::fromEncoded($url);
            ++$this->totalCount;
        }
    }
    
    public function startNextDownload() {
    
    }
    
    public function saveFileName(&$url) {
        $path = $url->path();
        $basename = (new \QFileInfo($path))->fileName();
        if($basename === '') {
            $basename = 'download';
        }
        if(\QFile::exists($basename)) {
            $i = 0;
            $basename .= '.';
            while(\QFile::exists($basename . $i)) {
                ++$i;
            }
            $basename .= $i;
        }
        return $basename;
    }
    
    public function downloadProgress($bytesReceived, $bytesTotal) {
    
        $speed = $bytesReceived * 1000 / $this->time->elapsed();
        $unit = '';
        if($speed < 1024) {
            $unit = 'B/s';
        } else if($speed < 1024 * 1024) {
            $speed /= 1024;
            $unti = 'kB/s';
        } else {
            $speed /= (1024 * 1024);
            $unit = 'mB/s';
        }
    }
}
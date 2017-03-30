<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */

# QDir
# QFileInfo
# QFile

namespace PQ\Component;
use PQ\Component;
use PQ\Core;

class Dir extends Component {

    const All = \QDir::AllEntries;
    const Dirs = \QDir::Dirs | \QDir::NoDotAndDotDot;
    const Files = \QDir::Files;
    const Drives = \QDir::Drives;

    private $dir = false;

    public function __construct(Core &$core) {
        parent::__construct($core);
        $this->dir = new \QDir();
    }

    public function exists($dirPath) {
        $this->dir->setPath($dirPath);
        return $this->dir->exists();
    }

    public function mkdir($dirPath) {
        $this->dir->setPath($dirPath);
        return $this->dir->mkpath($dirPath);
    }

    public function rmdir($dirPath) {
        $this->dir->setPath($dirPath);
        return $this->dir->rmdir($dirPath);
    }

    public function rename($dirPath, $newName) {
        $this->dir->setPath($dirPath);
        return $this->dir->rename($newName);
    }

    public function ls($dirPath, $filters = self::All, $sort = false) {
        $this->dir->setPath($dirPath);
        return $this->_ls_filters_sort($filters, $sort);
    }

    public function ls_mask($dirPath, array $mask, $filters = self::All, $sort = false) {
        $this->dir->setPath($dirPath);
        return $this->_ls_mask_filters_sort($mask, $filters, $sort);
    }

    private function _ls_mask_filters_sort($mask, $filters = false, $sort = false) {
        $result = array();
        if(is_int($filters) && $filters > 0 && is_int($sort) && $sort > 0) $result = $this->dir->entryList($mask, $filters, $sort);
        if(is_int($filters) && $filters > 0 && !$sort) $result = $this->dir->entryList($mask, $filters);
        if(!$filters && !$sort) $result = $this->dir->entryList($mask);
        return $result;
    }

    private function _ls_filters_sort($filters, $sort = false) {
        if(!$sort) return $this->dir->entryList($filters);
        return $this->dir->entryList($filters, $sort);
    }
    
    public function copy($source, $destination) {
        $this->dir->setPath($source);
        if(!$this->dir->isReadable()) return false;
        $this->mkdir($destination);
        $list = $this->ls($source);
        foreach($list as $item) {
            if($item !== '.' && $item !== '..') {
                $itemPath = $source .'/'.$item;
                $fInfo = new \QFileInfo($itemPath);
                if($fInfo->isDir()) $this->copy($itemPath, $destination.'/'.$item);
                if($fInfo->isSymLink()) continue;
                if($fInfo->isFile()) {
                    qDebug('copy ' . ($this->core->file->copy($itemPath, $destination.'/'.$item) ? 'true' : 'false'));
                }
                qDebug($item);
                qDebug($itemPath);
                qDebug($destination.'/'.$item);
            }
//            $fi = new \QFileInfo()
        }
        return true;
    }
}
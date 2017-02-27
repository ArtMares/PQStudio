<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                27.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQStudio\Core;
class Dir {

    private $dir = false;

    public function __construct() {
        $this->dir = new QDir();
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

    public function ls($dirPath, $filters = false, $sort = false) {
        $this->dir->setPath($dirPath);
        return $this->_ls_filters_sort($filters, $sort);
    }

    public function ls_mask($dirPath, array $mask, $filters = false, $sort = false) {
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
}
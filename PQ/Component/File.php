<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQ\Component;
use PQ\Component;
use PQ\Core;

class File extends Component {

    private $file = false;

    public function __construct(Core &$core) {
        parent::__construct($core);
        $this->file = new \QFile();
    }

    public function exists($pathToFile) {
        $this->file->setFileName($pathToFile);
        return $this->file->exists();
    }

    public function read($pathToFile) {
        $this->file->setFileName($pathToFile);
        $this->file->open(\QIODevice::ReadOnly);
        $data = $this->file->readAll();
        $this->file->close();
        return $data;
    }

    public function write($pathToFile, $data) {
        $this->_write('write', $pathToFile, $data);
    }

    public function rewrite($pathToFile, $data) {
        $this->_write('rewrite', $pathToFile, $data);
    }

    private function _write($type, $pathToFile, $data) {
        $this->file->setFileName($pathToFile);
        switch($type) {
            case 'rewrite':
                $this->file->open(\QIODevice::WriteOnly);
                break;
            case 'write':
                $this->file->open(\QIODevice::Append);
                break;
        }
        $this->file->write($data);
        $this->file->close();
    }

    public function remove($pathToFile) {
        $this->file->setFileName($pathToFile);
        return $this->file->remove();
    }

    public function rename($pathToFile, $newName) {
        $this->file->setFileName($pathToFile);
        return $this->file->rename($newName);
    }

    public function copy($pathToFile, $newName) {
        $this->file->setFileName($pathToFile);
        return $this->file->copy($newName);
    }
}
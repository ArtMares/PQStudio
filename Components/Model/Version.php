<?php
/**
 * @author          Dmitriy Dergachev (ArtMares)
 * @date            11.11.2017
 */

namespace Components\Model;


use PQ\MVC\Model;

class Version extends Model {

    protected $major = 0;

    protected $minor = 0;

    protected $build;

    protected $revision;

    public function setMajor($int) {
        $this->major = (int)$int;
    }

    public function getMajor() {
        return $this->major;
    }

    public function setMinor($int) {
        $this->minor = (int)$int;
    }

    public function getMinor() {
        return $this->minor;
    }

    public function setBuild($int) {
        $this->build = (int)$int;
    }

    public function getBuild() {
        return $this->build;
    }

    public function setRevision($int) {
        $this->revision = (int)$int;
    }

    public function getRevision() {
        return $this->revision;
    }

    public function __toString()
    {
        $str = $this->major . '.' . $this->minor;
        if($this->build !== null) {
            $str .= '.' . $this->build;
        }
        if($this->revision !== null) {
            $str .= '.' . $this->revision;
        }
        return $str;
    }
}
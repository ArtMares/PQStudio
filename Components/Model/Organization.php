<?php
/**
 * @author          Dmitriy Dergachev (ArtMares)
 * @date            11.11.2017
 */

namespace Components\Model;


use PQ\MVC\Model;

class Organization extends Model {

    protected $name;

    protected $domain;

    public function setName($name) {
        $this->name = $name;
    }

    public function getName() {
        return $this->name;
    }

    public function setDomain($domain) {
        $this->domain = $domain;
    }

    public function getDomain() {
        return $this->domain;
    }

    public function reset() {
        $this->name = '';
        $this->domain = '';
    }
}
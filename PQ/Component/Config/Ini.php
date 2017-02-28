<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQ\Component\Config;
use PQ\Core;

class Ini extends Manager {

    public function __construct(Core &$core, $hash_name = '', $config = []) {
        parent::__construct($core, $hash_name, $config);
        if(isset($config['file'])) {
            $this->settings = new \QSettings($config['file'], \QSettings::IniFormat);
        }
        if(isset($config['scope']) && isset($config['org']) && isset($config['app'])) {
            $this->settings = new \QSettings(\QSettings::IniFormat, $config['scope'], $config['org'], $config['app']);
        }
        if(!$this->settings) {
            return false;
        } else {
            $this->settings->setIniCodec("UTF-8");
            return $this;
        }
    }
}
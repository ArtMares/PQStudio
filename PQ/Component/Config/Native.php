<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQ\Component\Config;
use PQ\Core;

class Native extends Manager {

    public function __construct(Core &$core, $hash_name = '', $config = []) {
        parent::__construct($core, $hash_name, $config);
        if(isset($config['file'])) {
            $this->settings = new \QSettings($config['file'], \QSettings::NativeFormat);
        }
        if(isset($config['scope']) && isset($config['org']) && isset($config['app'])) {
            $this->settings = new \QSettings(\QSettings::NativeFormat, $config['scope'], $config['org'], $config['app']);
        }
        if(!$this->settings) return false;
        return $this;
    }
}
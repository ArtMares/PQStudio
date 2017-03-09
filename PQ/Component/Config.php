<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQ\Component;
use PQ\Component;
use PQ\Core;

class Config extends Component {

    /**
     * @var Component\Config\Manager[]
     */
    private $_loaded = array();

    private $_config = array();

    public function __construct(Core &$core) {
        parent::__construct($core);
        foreach(['Manager', 'Native', 'Ini'] as $item) {
            require_once $this->core->PATH.'Component/Config/'.$item.'.php';
        }
        if(\QFile::exists($this->core->APP_PATH.'config.php')) {
            $config = require_once($this->core->APP_PATH.'config.php');
            if(is_array($config) && count($config) > 0) {
                $this->_config = array_replace_recursive($this->_config, $config);
            }
        }
        if(\QFile::exists(':/config.php')) {
            $config = require_once('qrc://config.php');
            if(is_array($config) && count($config) > 0) {
                $this->_config = array_replace_recursive($this->_config, $config);
            }
        }
    }

    public function __destruct(){
        $this->_loaded = array();
        parent::__destruct();
    }

    public function __get($name) {
        return isset($this->_config[$name]) ? $this->_config[$name] : null;
    }

    /**
     * Метод возвращает экземпляр класса Native
     * @param string $scope
     * @param bool $orgName
     * @param bool $appName
     * @return Config\Native
     */
    public function &native($scope = 'user', $orgName = false, $appName = false) {
        $result = $this->_load('native', $scope, $orgName, $appName);
        return $result;
    }

    /**
     * Метод возвращает экземпляр класса Ini
     * @param string $scope
     * @param bool $orgName
     * @param bool $appName
     * @return Config\Ini
     */
    public function &ini($scope = 'user', $orgName = false, $appName = false) {
        $result = $this->_load('ini', $scope, $orgName, $appName);
        return $result;
    }

    /**
     * Проверяет наличие активного интерфейса
     * @param $name
     * @return bool
     */
    private function _is_load($name) {
        if(isset($this->_loaded[$name])) {
            return $this->_loaded[$name]->alive();
        }
        return false;
    }

    /**
     * Метод инициализирует необходимый интерфейс или возвращает уже активный
     * @param $type
     * @param $scope
     * @param $orgName
     * @param $appName
     * @return mixed
     */
    private function _load($type, $scope, $orgName, $appName) {
        $tmp = strtolower($scope);
        $class = 'PQ\\Component\\Config\\' . ucfirst($type);
        $str = 'Load '.$type.' config "'.$scope.'"';
        if(!$orgName) $orgName = $this->core->organizationName();
        if(!$appName) $appName = $this->core->applicationName();
        switch($tmp) {
            case 'user':
                $name = md5($type . '_' . $scope . '_' . $orgName . '_' . $appName);
                $str .= ' "'.$orgName.'" "'.$appName.'"';
                $conf = array('scope' => \QSettings::UserScope, 'org' => $orgName, 'app' => $appName);
                break;
            case 'system':
                $name = md5($type . '_' . $scope . '_' . $orgName . '_' . $appName);
                $str .= ' "'.$orgName.'" "'.$appName.'"';
                $conf = array('scope' => \QSettings::SystemScope, 'org' => $orgName, 'app' => $appName);
                break;
            default:
                $name = md5($type . '_' . $scope);
                $conf = array('file' => $scope);
                break;
        }
        if($this->_is_load($name)) return $this->_loaded[$name];
        $this->_info($str);
        $this->_loaded[$name] = new $class($this->core, $name, $conf);
        return $this->_loaded[$name];
    }
}
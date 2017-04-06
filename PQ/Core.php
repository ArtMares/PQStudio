<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                27.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQ;

use PQ\Component\Config;
use PQ\Component\Dir;
use PQ\Component\File;
use PQ\Component\Font;
use PQ\Component\Icon;
use PQ\Component\Lib;
use PQ\Component\Log;
use PQ\Component\Process;
use PQ\Component\Single;
use PQ\Component\Storage;
use PQ\Component\Style;
use PQ\Component\Variable;
use PQ\Component\Variant;

/**
 * Class Core
 * @package PQ
 * @property        bool            $WIN
 * @property        object          $QApp
 * @property        string          $PATH
 * @property        string          $QT_PATH
 * @property        string          $APP_PATH
 * @property        string          $APP_DATA
 * @property        string          $HOME_PATH
 *
 * @property        Log             $log
 * @property        Variant         $variant
 * @property        Variable        $var
 * @property        Config          $config
 * @property        Dir             $dir
 * @property        File            $file
 * @property        Font            $font
 * @property        Lib             $lib
 * @property        Style           $style
 * @property        Icon            $icon
 * @property        Storage         $storage
 * @property        Single          $single
 * @property        Process         $process
 */
class Core {

    const QtCore = 0x00;
    const QtGui  = 0x01;
    const QtApp  = 0X02;

    const MAJOR_VERSION     = 0;
    const MINOR_VERSION     = 1;
    const RELEASE_VERSION   = 1;
    /**
     * Версия ядра
     * Core Version
     */
    const VERSION = self::MAJOR_VERSION.'.'.self::MINOR_VERSION.'.'.self::RELEASE_VERSION;
    /**
     * Экземпляр ядра
     * Instance Core
     */
    static protected $APP = false;
    /**
     * Объект QApplication
     * Object QApplication
     */
    public $QApp;
    /**
     * Путь к каталогу приложения
     * The path to the application directory
     */
    public $APP_PATH;
    /**
     * Путь к AppData приложения в директории пользователя
     * The path to the application in the user's AppData directory
     */
    public $APP_DATA;
    /**
     * Путь к домашней директории пользователя
     */
    public $HOME_PATH;
    /**
     * Путь к каталогу в котором расположенно ядро
     * The path to the directory in which the location of the Core
     */
    public $PATH;
    /**
     * Путь к каталогу в котором расположенно ядро для объектов Qt
     * The path to the directory in which the location of the Core for Qt objects
     */
    public $QT_PATH;
    /**
     * ОС семейства Windows
     * Windows operating systems
     */
    public $WIN = false;
    /**
     * Список компонентов ядра
     * The list of Core components
     */
    private $components = [
        self::QtCore => [
            'log' => 'Log', 'variant' => 'Variant', 'var' => 'Variable', 'config' => 'Config',
            'dir' => 'Dir', 'file' => 'File', 'lib' => 'Lib', 'storage' => 'Storage',
            'single' => 'Single', 'process' => 'Process'
        ],
        self::QtGui => [
            'font' => 'Font'
        ],
        self::QtApp => [
            'style' => 'Style', 'icon' => 'Icon'
        ],
    ];

    private $object;

    /** @var Destructor */
    private $destructor;
    
    private $initType = self::QtApp;
    /**
     * Класс может быть инициализирован только самим классом
     * A class can only be initialized by the class
     */
    private function __construct() {}
    /**
     * Запрещаем клонировать объект
     * Forbid clone object
     */
    protected function __clone() {}

    static public function &getInstance($type = self::QtApp) {
        global $argc, $argv;
        if((!class_exists('QApplication') || !class_exists('QCuiApplication') || !class_exists('QCoreApplication')) && !class_exists('QStandardPaths')) {
            die('Error! Core not run!'.PHP_EOL.'Please assemble the project using QCoreApplication and QStandardPaths of Core library');
        }
        if(self::$APP === false) {
            self::$APP = new self();
            self::$APP->WIN = stripos(PHP_OS, 'win') === false ? false : true;
            self::$APP->initType = (int)$type;
            switch(self::$APP->initType) {
                case self::QtCore:
                    self::$APP->QApp = new \QCoreApplication($argc, $argv);
                    break;
                case self::QtGui:
                    self::$APP->QApp = new \QGuiApplication($argc, $argv);
                    break;
                case self::QtApp:
                    self::$APP->QApp = new \QApplication($argc, $argv);
                    break;
                default:
                    die('Error! Core not run!'.PHP_EOL.'Please specify the type of application!'.PHP_EOL.'Use constants: PQ\\Core::QtApp or PQ\\Core::QtGui or PQ\\Core::QtCore');
            }
            self::$APP->PATH = __DIR__.'/';
            self::$APP->QT_PATH = stripos(self::$APP->PATH, 'qrc://') === false ? self::$APP->PATH : str_replace('qrc://', ':/', self::$APP->PATH);
            self::$APP->APP_PATH = \QCoreApplication::applicationDirPath().'/';
            if(\QFile::exists(':/pqcore.config.php')) {
                /** Если да то подключаем его и получаем конфигурационный конфиг */
                $app_config = require_once('qrc://pqcore.config.php');
                /** Проходим по конфигурационному массиву и задаем основные данные о приложении */
                foreach($app_config as $name => $value) {
                    if(in_array($name, ['applicationName', 'applicationVersion', 'organizationName', 'organizationDomain'])) {
                        self::$APP->{$name}($value);
                    }
                }
                /** Получаем путь к AppData приложения в директории пользователя */
                self::$APP->APP_DATA = \QStandardPaths::writableLocation(\QStandardPaths::AppLocalDataLocation).'/';

                self::$APP->HOME_PATH = \QStandardPaths::writableLocation(\QStandardPaths::HomeLocation).'/';

            }
            require_once self::$APP->PATH.'Component.php';
            $components = [];
            for($i = 0; $i <= self::$APP->initType; $i++) {
                $components = array_merge($components, self::$APP->components[$i]);
            }
            foreach($components as $alias => $component) {
                self::$APP->load_component($component, $alias);
            }
            self::$APP->components = $components;
            
            require_once self::$APP->PATH.'MVC.php';
            require_once self::$APP->PATH.'Destructor.php';
            self::$APP->destructor = new Destructor(self::$APP);
            self::$APP->QApp->connect(SIGNAL('aboutToQuit()'), self::$APP->destructor, SLOT('onDestruct()'));
        }
        return self::$APP;
    }

    private function load_component($name = false, $alias = '') {
        if(!$name) return false;
        $file = 'Component/'.$name.'.php';
        if(!\QFile::exists($this->QT_PATH.$file)) return false;
        require_once($this->PATH.$file);
        $class = 'PQ\\Component\\'.$name;
        if(!class_exists($class)) return false;
        if($alias === '') $alias = strtolower($name);
        $this->{$alias} = new $class($this);
        return true;
    }

    /**
     * Задает или возвращает название приложения
     * Sets or return the name of application
     * @param bool $string
     * @return mixed
     */
    public function applicationName($string = false) {
        if($string) {
            $this->QApp->applicationName = $string;
            return null;
        }
        return $this->QApp->applicationName;
    }

    /**
     * Задает или возвращает версию приложения
     * Sets or return a version of application
     * @param bool $string
     * @return mixed
     */
    public function applicationVersion($string = false) {
        if($string) {
            $this->QApp->applicationVersion = $string;
            return null;
        }
        return $this->QApp->applicationVersion;
    }

    /**
     * Задает или возвращает название организации
     * Sets or return the name of organization
     * @param bool $string
     * @return mixed
     */
    public function organizationName($string = false) {
        if($string) {
            $this->QApp->organizationName = $string;
            return null;
        }
        return $this->QApp->organizationName;
    }

    /**
     * Задает или возвращает домен организации
     * Sets or return the organization domain
     * @param bool $string
     * @return mixed
     */
    public function organizationDomain($string = false) {
        if($string) {
            $this->QApp->organizationDomain = $string;
            return null;
        }
        return $this->QApp->organizationDomain;
    }

    public function args() {
        return $this->QApp->arguments();
    }

    /**
     * Инициализируем запуск петли
     * Initialize the run loop
     * @param string $object
     * @param string $method
     * @return mixed
     */
    public function exec($object = '', $method = 'show') {
        if($object !== '') {
            if($this->var->is_object($object)) $this->object = $object;
            if($this->var->is_str($object)) $this->object = new $object();
            if(method_exists($this->object, $method)) {
                $this->object->$method();
            } elseif (isset(\pqMethods($this->object)[$method])) {
                $this->object->$method();
            }
        }
        return $this->QApp->exec();
    }

    public function quit($die = false) {
        MVC::destruct();
        if((bool)$die === true) $this->log->info('Forced Core shutdown', 'Core');
        foreach(array_reverse($this->components, true) as $key => $component) {
            unset($this->{$key});
        }
    }
}

if(!function_exists('preparePath')) {
    function preparePath($path, $toWin = false) {
        if ($toWin && Core::getInstance()->WIN) {
            $search = '/';
            $needle = '\\\\';
            $replace = '\\';
        } else {
            $search = '\\';
            $needle = '//';
            $replace = '/';
        }
        $path = str_replace($search, $replace, $path);
        // remove double slashes
        while (strpos($path, $needle) !== false) {
            $path = str_replace($needle, $replace, $path);
        }
        return $path;
    }
}

register_shutdown_function(function() {
    Core::getInstance()->quit(true);
});
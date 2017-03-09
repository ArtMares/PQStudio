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
use PQ\Component\Widgets;

/**
 * Class Core
 * @package PQ
 * @property        bool            $WIN
 * @property        object          $QApp
 * @property        string          $PATH
 * @property        string          $QT_PATH
 * @property        string          $APP_PATH
 * @property        string          $APP_DATA
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
 * @property        Widgets         $widgets
 * @property        Single          $single
 * @property        Process         $process
 */
class Core {
    /**
     * Версия ядра
     * Core Version
     */
    const VERSION = '0.1';
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
        'app' => [
            'log' => 'Log', 'variant' => 'Variant', 'var' => 'Variable', 'config' => 'Config',
            'dir' => 'Dir', 'file' => 'File', 'font' => 'Font', 'lib' => 'Lib',
            'style' => 'Style', 'icon' => 'Icon',
            'storage' => 'Storage', 'widgets' => 'Widgets', 'bootstrap' => 'Bootstrap', 'network' => 'Network',
            'single' => 'Single', 'process' => 'Process'
        ],
        'gui' => [
            'log' => 'Log', 'variant' => 'Variant', 'var' => 'Variable', 'config' => 'Config',
            'dir' => 'Dir', 'file' => 'File', 'font' => 'Font', 'lib' => 'Lib',
            'storage' => 'Storage', 'widgets' => 'Widgets', 'bootstrap' => 'Bootstrap', 'network' => 'Network',
            'single' => 'Single', 'process' => 'Process'
        ],
        'core' => [
            'log' => 'Log', 'variant' => 'Variant', 'var' => 'Variable', 'config' => 'Config',
            'dir' => 'Dir', 'file' => 'File', 'lib' => 'Lib',
            'storage' => 'Storage', 'network' => 'Network', 'single' => 'Single', 'process' => 'Process'
        ]
    ];

    private $object;

    private $descructor;
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

    static public function &getInstance($type = 'app') {
        global $argc, $argv;
        if((!class_exists('QApplication') || !class_exists('QCuiApplication') || !class_exists('QCoreApplication')) && !class_exists('QStandardPaths')) {
            die('Error! Core not run!'.PHP_EOL.'Please assemble the project using QCoreApplication and QStandardPaths of Core library');
        }
        if(self::$APP === false) {
            $type = strtolower($type);
            self::$APP = new self();
            self::$APP->WIN = stripos(PHP_OS, 'win') === false ? false : true;
            switch($type) {
                case 'gui':
                    self::$APP->QApp = new \QGuiApplication($argc, $argv);
                    break;
                case 'core':
                    self::$APP->QApp = new \QCoreApplication($argc, $argv);
                    break;
                default:
                    self::$APP->QApp = new \QApplication($argc, $argv);
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

            }
            require_once self::$APP->PATH.'Component.php';
            foreach(self::$APP->components[$type] as $alias => $component) {
                self::$APP->load_component($component, $alias);
            }
            require_once self::$APP->PATH.'WidgetsInterface.php';
            require_once self::$APP->PATH.'QtObject.php';
            require_once self::$APP->PATH.'Destructor.php';
            self::$APP->descructor = new Destructor(self::$APP);
            connect(self::$APP->QApp, 'aboutToQuit()', self::$APP->descructor, 'onDestruct()');
        }
        return self::$APP;
    }

    static public function preparePath($path, $toWin = false) {
        if(self::$APP !== false) {
            if ($toWin && self::$APP->WIN) {
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
        }
        return $path;
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

    public function quit() {
        $this->descructor->onDestruct();
    }
}
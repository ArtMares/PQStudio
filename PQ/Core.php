<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                27.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQ;
/**
 * Class Core
 * @package PQ
 * @property        bool            $WIN
 * @property        object          $QApp
 * @property        string          $PATH
 * @property        string          $QT_PATH
 * @property        string          $APP_PATH
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

    private function __construct() {}

    protected function __clone() {}

    static public function &getInstance() {
        global $argc, $argv;
        if(!class_exists('QApplication') && !class_exists('QCoreApplication') && !class_exists('QStandardPaths')) {
            die('Error! Core not run!'.PHP_EOL.'Please assemble the project using QCoreApplication and QStandardPaths of Core library');
        }
        if(self::$APP === false) {
            self::$APP = new self();
            self::$APP->WIN = stripos(PHP_OS, 'win') === false ? false : true;
            self::$APP->QApp = new QApplication($argc, $argv);
            self::$APP->PATH = __DIR__.'/';
            self::$APP->QT_PATH = stripos(self::$APP->PATH, 'qrc://') === false ? self::$APP->PATH : str_replace('qrc://', ':/', self::$APP->PATH);
            self::$APP->APP_PATH = QCoreApplication::applicationDirPath().'/';
        }
        return self::$APP;
    }
}
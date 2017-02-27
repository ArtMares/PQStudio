<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                27.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQStudio\Core;
class PQCore {

    /**
     * Версия ядра
     * Core Version
     */
    const VERSION = '1.0';
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
     * Путь к каталогу в котором расположено ядро
     */
    public $PATH;

    private function __construct() {}

    protected function __clone() {}

    static public function &getInstance() {

    }
}
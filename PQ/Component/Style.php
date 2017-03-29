<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                28.02.2017
 * @copyright           artmares@influ.su
 */
namespace PQ\Component;
use PQ\Component;
use PQ\Core;

class Style extends Component {

    /** Name of the current themes   */
    /** Название текущей темы оформления */
    private $theme;

    /** List of themes and their data */
    /** Список тем оформления и их данных */
    private $styles = array();

    /** List description themes */
    /** Список описаний тем оформления */
    private $about = array();


    public function __construct(Core &$core) {
        parent::__construct($core);
        $this->loadThemes();
        $this->loadDefault();
    }

    /**
     * Loading themes from the application directory
     * Загружает темы оформления из директории приложения
     */
    private function loadThemes() {
        $this->_info('Looking themes in the application directory');
        $path = $this->core->APP_PATH.'Themes';
        if($this->core->dir->exists($path)) {
            $themes = $this->core->dir->ls($path, Dir::Dirs);
            if(empty($themes)) $this->_info('No themes found in the application directory');
            foreach($themes as $theme) $this->_load_theme_files($path, $theme);
        } else {
            $this->_info('No themes found in the application directory');
        }
    }

    /**
     * Loading themes from the application resources
     * Загружает темы оформления из ресурсов приложения
     */
    private function loadDefault() {
        $this->_info('Looking at the default themes');
        $path = ':/Themes';
        if($this->core->dir->exists($path)) {
            $themes = $this->core->dir->ls($path, Dir::Dirs);
            if(empty($themes)) $this->_info('The default themes nas not been found');
            foreach($themes as $theme) $this->_load_theme_files($path, $theme);
        } else{
            $this->_info('The default themes has not been found');
        }
    }

    /**
     * Loading files themes
     * Загружает файлы темы оформления
     * @param $path
     * @param $themeName
     */
    private function _load_theme_files($path, $themeName) {
        $this->_info('Loading design theme "'.$themeName.'"');
        $styles = $this->core->dir->ls_mask($path.'/'.$themeName, ['*.qss'], Dir::Files);
        foreach($styles as $name) $this->styles[$themeName][str_replace('.qss', '', $name)] = $this->_load($name, $path.'/'.$themeName);
        $this->_load_about($themeName, $path);
    }

    /**
     * Get data from file
     * Получает даные из файла
     * @param $name
     * @param $path
     * @return mixed
     */
    private function _load($name, $path) {
        $data = $this->core->file->read($path.'/'.$name);
        return $data;
    }

    /**
     * Seeking to description of themes and loads it
     * Ищет описание темы оформления и загружает его
     * @param $themeName
     * @param $path
     */
    private function _load_about($themeName, $path) {
        $file = $path.'/'.$themeName.'/about.json';
        if($this->core->file->exists($file)) {
            $this->_info('Get a description of themes "'.$themeName.'"');
            $this->about[$themeName] = json_decode($this->core->file->read($file), true);
        } else {
            $this->_warning('For the themes "'.$themeName.'" no description file');
        }
    }

    /**
     * Sets the current design theme
     * Задает текущую тему оформления
     * @param $name
     */
    public function setTheme($name) {
        $this->theme = $name;
    }

    /**
     * Alias method setThemes()
     * Алиас метода setThemes()
     * @param $name
     */
    public function setSkin($name) {
        $this->setTheme($name);
    }

    /**
     * Returns data for the current theme file name
     * Возвращает данные текущей темы по имени файла
     * @param $name
     * @return string
     */
    public function __get($name) {
        return isset($this->styles[$this->theme][$name]) ? $this->styles[$this->theme][$name] : '';
    }

    /**
     * Alias method __get()
     * Алиас метода __get()
     * @param $name
     * @return string
     */
    public function get($name) {
        return $this->__get($name);
    }

    /**
     * Applies a theme to the transmitting object
     * Применяет тему к переданому объекту
     * @param $object
     * @param $name
     */
    public function set(&$object, $name) {
        $args = func_get_args();
        $n = count($args);
        $style = '';
        if($n > 2) {
            for($i = 2; $i < $n; $i++) $style .= $this->get($args[$i]);
        }
        $object->styleSheet = $this->get($name) . $style;
    }

    /**
     * Returns a list of themes
     * Возвращает список тем оформления
     * @return array
     */
    public function getThemesList() {
        return array_keys($this->styles);
    }

    /**
     * Alias method getThemesList()
     * Алиас метода getThemesList()
     * @return array
     */
    public function getSkinsList() {
        return $this->getThemesList();
    }

    /**
     * Returns the description of themes
     * Возвращает описание темы оформления
     * @param string $name
     * @return array
     */
    public function about($name = '') {
        if(!empty($name)) {
            return isset($this->about[$name]) ? $this->about[$name] : array();
        } else {
            return isset($this->about[$this->theme])? $this->about[$this->theme] : array();
        }
    }

    /**
     * Returns a description of all themes
     * Возвращает описание всех тем оформления
     * @return array
     */
    public function aboutAll() {
        return $this->about;
    }
}
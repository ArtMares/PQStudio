<?php

/**
 * @author				Dmitriy Dergachev (ArtMares)
 * @date				09.06.2016
 * @version				1.0
 * @copyright			artmares@influ.su
 */

/**
 * Class PQFileWorker
 * @property		PQB|PQS|PQSYS|PQFile		$PQFile		Объект наслденик PQFile
 * @property		string						$PQName		Имя объекта наследника PQFile
 * @property									$QDir		Объект QDir расширения PQEngine File System
 * @property									$QFile		Объект QFile расширения PQEngine File System
 * @property		string						$path		Полный путь к файлу
 */
class PQFileWorker implements IteratorAggregate, Countable {

    protected $PQFile = null;
    protected $PQName;
    protected $QDir;
    protected $QFile;
    protected $path;

    /**
     * PQFileWorker constructor.
     * @param string $path
     */
    public function __construct(string $path = '') {
        $child = get_class($this);
        if($child !== __CLASS__) {
            $this->QDir = new QDir();
            $this->QFile = new QFile();
            $this->PQName = str_replace('File', '', $child);
            $this->PQFile = new $this->PQName();
            if(is_string($path) && !empty($path)) $this->open($path);
        }
    }

    /**
     * Метод error() - Выводит сообщение о ошибке и завершает работу приложения
     * @param string $error - Сообщение которое должно быть отображено
     */
    protected function error($error = '') {
        if(!empty($error)) die($error);
    }

    /**
     * Магический метод __set() - Вызывается в момент когда не определенному свойству объекта пытаются задать значение
     * Вызывает метод __set() объекта наследника PQFile
     * @param $name - Название свойства
     * @param $value - Значение свойства
     */
    public function __set($name, $value) {
        if($this->isPQFile()) {
            $this->PQFile->__set($name, $value);
        }
    }

    /**
     * Магический метод __get() - Вызывается в момент получения значение не определенного свойства объекта
     * Вызывает метод __get() объекта наследника PQFile
     * @param $name - Навзание свойства
     * @return null
     */
    public function __get($name) {
        if($this->isPQFile()) {
            $value = $this->PQFile->__get($name);
            return $value;
        }
        return null;
    }

    /**
     * Магический метод __isset() - Вызывается в момент обработки конструкицей isset() на определенного свойства объекта
     * Вызывает метод __isset() объекта наследника PQFile
     * @param $name - Навзание свойства
     * @return bool
     */
    public function __isset($name) {
        if($this->isPQFile()) {
            return $this->PQFile->__isset($name);
        }
        return false;
    }

    /**
     * Магический метод __unset() - Вызывается в момент обработки конструкцией unset() не определенного свойства объекта
     * Вызывает метод __unset() объекта наследника PQFile
     * @param $name - Название свойства
     */
    public function __unset($name) {
        if($this->isPQFile()) {
            $this->PQFile->__unset($name);
        }
    }

    /**
     * Метод getIterator() - Позволяет перебирать объект как массив
     * Вызывает метод getIterator() объекта наследника PQFile
     * @return ArrayIterator|Traversable
     */
    public function getIterator() {
        if($this->isPQFile()) {
            return $this->PQFile->getIterator();
        }

    }

    /**
     * Метод count() - Позвоялет получить количество элементов находящихся в хранилище
     * Вызывает метод count() объекта наследника PQFile
     * @return int
     */
    public function count() {
        if($this->isPQFile()) {
            return $this->PQFile->count();
        }
        return 0;
    }

    /**
     * Метод version() - Возвращает текущую версию объекта наследника PQFile
     * @return mixed
     */
    public function version() {
        if($this->isPQFile()) {
            return $this->PQFile->version();
        }
        return '0.0';
    }

    /**
     * Метод open() - Открывает файл pqb и десериализует данные для работы с ними
     * @param $path - Путь к файлу
     */
    public function open($path) {
        if($this->isPQExt($path)) {
            $this->path = $path;
            $this->QFile->setFileName($path);
            $data = null;
            if($this->QFile->exists()) {
                $this->PQFile = new $this->PQName();
                $this->QFile->open(QIODevice::ReadOnly);
                $data = unserialize($this->QFile->readAll());
                $this->QFile->close();
            }
            $this->check($data);
        }
    }

    /**
     * Метод save() - Сохраняет текущий объект наследник PQFile в файл
     * @param string $path - Новый путь к файлу
     */
    public function save($path = '') {
        $save = '';
        if($this->isPQExt($path)) {
            $save = $path;
        } else {
            if($this->isPQExt($this->path)) $save = $this->path;
        }
        if(!empty($save)) {
            $tmp = explode('/', $save);
            unset($tmp[count($tmp) - 1]);
            $dir = implode('/', $tmp);
            $this->QDir->mkpath($dir);
            $this->QFile->setFileName($save);
            $this->QFile->open(QIODevice::WriteOnly);
            $this->QFile->write(serialize($this->PQFile));
            $this->QFile->close();
            $this->path = $save;
        }
    }

    /**
     * Метод check() - Выполняет проверку переданых данных и вызывает соответствующий метод
     * @param $data - Данные из файла pqb
     */
    protected function check($data) {
        if(!is_null($data) && !empty($data)) {
            if($this->isPQ($data)) $this->rebuild($data);
            if(is_array($data)) $this->import($data);
        }
    }

    /**
     * Метод rebuild() - Импортирует объект наследник PQFile во внутрений объект наследник PQFile
     * Необходимо для того чтобы избежать не соответствия версий объектов
     * А так же автоматическую пересборку объекта на новую версию
     * @param PQB $data - Объект наследник PQFile
     */
    protected function rebuild($data) {
        $version = $data->version();
        $this->PQFile->setHistory($data->getHistory());
        if($version < $this->PQFile->version()) $this->PQFile->setRebuild($version);
        foreach($data as $key => $value) $this->insert($key, $value);
    }

    /**
     * Метод import() - Импортирует данные из старого формата файлов
     * Может быть переобперделен наследником
     * @param array $data
     */
    protected function import(Array $data) {}

    /**
     * Метод insert() - Служит для записи данных в объект наследник PQFile
     * @param $key - Ключ
     * @param $value - Значение
     */
    public function insert($key, $value) {
        if(is_array($value)) {
            if(!$this->PQFile->__isset($key)) $this->PQFile->$key = array();
            foreach($value as $k => $v) $this->PQFile->{$key}[$k] = $v;
        } else {
            $this->PQFile->$key = $value;
        }
    }

    /**
     * Метод isPQ() - Проверяет является ли переданный аргумент объектом наследованным от PQFile по имени наследника
     * @param $object - Объект или класс
     * @return bool
     */
    protected function isPQ($object) {
        if(is_object($object) && get_class($object) === $this->PQName) {
            return true;
        } else {
            return false;
        }
    }

    /**
     * Метод isPQExt() - Проверяет оканчивается ли путь к файлу расширением
     * @param $path - Путь к файлу
     * @return bool
     */
    protected function isPQExt($path) {
        if(is_string($path) && !empty($path) && preg_match('/\.'.strtolower($this->PQName).'$/', $path) == true) {
            return true;
        } else {
            return false;
        }
    }

    /**
     * Метод isPQFile() - Проверяет инициализирован ли объект наследник PQFile
     */
    private function isPQFile() {
        return (is_null($this->PQFile) ? false : true);
    }

    public function toArray() {
        $data = array();
        foreach($this->PQFile as $key => $value) $data[$key] = $this->objectToArray($value);
        return $data;
    }

    private function objectToArray($object) {
        if(is_object($object)) $object = get_object_vars($object);
        if(is_array($object)) {
            foreach($object as $key => $value) $object[$key] = $this->objectToArray($value);
        }
        return $object;
    }

    public function clear() {
        $this->PQFile = new $this->PQName();
    }

    public function getPath() {
        return $this->path;
    }
}
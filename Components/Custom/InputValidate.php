<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                07.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom;
use PQ\Core;

class InputValidate extends Input {

    protected $qss;

    protected $onValidate;

    public function __construct($parent) {
        parent::__construct($parent);
        /** Задаем свойсво которое указывает валидно поле или нет */
        $this->setProperty('invalid', false);
        /** Запоминаем стиль */
        $this->qss = Core::getInstance()->style->InputValidate;
        /** Задаем стиль */
        $this->styleSheet = $this->qss;
        /** Задаем обработку по событию onTextChange */
        $this->onTextChanged = function($sender, $value) {
            $this->validate($value);
        };
        $this->tooltip->message(tr('Project name is the name of the directory'));
    }

    /**
     * Метод для задания функции для валидации
     * @param callable $callback
     */
    public function onValidate(callable $callback) {
        $this->onValidate = $callback;
    }

    private function validate($value) {
        if(is_callable($this->onValidate)) {
            $result = call_user_func($this->onValidate, $value);
            if($result === false) {
                $this->setProperty('invalid', true);
            } else {
                $this->setProperty('invalid', false);
            }
            $this->styleSheet = $this->qss;
        }
    }
}
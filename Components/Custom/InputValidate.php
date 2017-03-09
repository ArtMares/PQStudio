<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                07.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom;
use PQ\Core;

class InputValidate extends Input {

    protected $onValidate;

    public function __construct($parent) {
//        $this->signals[] = 'invalid()';
        parent::__construct($parent);
//        $this->tooltip = new ErrorToolTip($this);
        /** Задаем свойсво которое указывает валидно поле или нет */
        $this->setProperty('invalid', false);
        /** Задаем стиль */
        $this->styleSheet = Core::getInstance()->style->Input . Core::getInstance()->style->InputValidate;
        /** Задаем обработку по событию onTextChange */
        $this->onTextChanged = function($sender, $value) {
            $this->validate($value);
        };
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
            $result = call_user_func_array($this->onValidate, [$this, $value]);
            if($result === false) {
//                $this->emit('invalid()', []);
                $this->setProperty('invalid', true);
            } else {
                $this->setProperty('invalid', false);
            }
            $this->styleSheet = $this->styleSheet();
        }
    }
}
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
        /** Добавляем кастомный сигнал */
        $this->signals[] = 'invalid()';
        
        /** Инициализируем создание объекта */
        parent::__construct($parent);
        
        /** Задаем свойсво которое указывает валидно поле или нет */
        $this->setProperty('invalid', false);
        
        /** Задаем стиль */
        Core::getInstance()->style->set($this, 'Input', 'InputValidate');
        
        /** Задаем обработку по событию onTextChange */
        $this->onTextChanged = function($sender, $value) {
            $this->validate($value);
        };
        
        $this->onBlurred(function($sender) {
            $this->validate($sender->text);
        });
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
                $this->emit('invalid()', []);
                $this->setProperty('invalid', true);
            } else {
                $this->setProperty('invalid', false);
            }
            $this->styleSheet = $this->styleSheet();
        }
    }
}
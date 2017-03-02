<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                02.03.2017
 * @copyright           artmares@influ.su
 */
class WelcomeWidget extends QWidget {

    use \PQ\QtObject;

    public $stack;

    public function initComponents(array $args = array()) {
        /** Задаем фиксированный размер окна */
        $this->setFixedSize(770, 430);
        /** Задаем заголовок окна */
        $this->core->widgets->setTitle($this);
//        $this->windowTitle = PQSTUDIO_TITLE;
        /** Задаем стили для окна */
        $this->core->style->set($this, __CLASS__);
        /** Создаем слой */
        $this->setLayout(new QHBoxLayout);
        /** Убираем отступы от края окна */
        $this->layout()->setContentsMargins(0, 0, 0, 0);
        $this->layout()->setSpacing(0);
        /** Создаем стаковый виджет для реализации стараниц */
        $this->stack = new QStackedWidget($this);

//        $this->stack->addWidget($this->pqcore->mvc->view->welcome_main_page);
//        $this->stack->addWidget($this->pqcore->mvc->view->welcome_create_page);
//        $this->stack->addWidget($this->pqcore->mvc->view->welcome_import_page);

        $this->layout()->addWidget($this->stack);

        /** Указываем текущую страницу */
//        $this->stack->setCurrentWidget($this->pqcore->mvc->view->welcome_main_page);
    }
}
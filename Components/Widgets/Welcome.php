<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                03.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Widgets;
use Components\Pages\Create;
use Components\Pages\Main;
use PQ\QtObject;
use PQ\WidgetsInterface;

class Welcome extends \QWidget implements WidgetsInterface {

    use QtObject;

    private $stack;
    
    private $page;

    public function initComponents() {
        /** Задаем фиксированный размер окна */
        $this->setFixedSize(770, 430);

        /** Задаем заголовок окна */
        $this->core->widgets->setTitle($this);

        /** Задаем стили для окна */
        $this->core->style->set($this, 'WelcomeWidget');

        /** Создаем слой */
        $this->setLayout(new \QHBoxLayout());

        /** Убираем отступы от края окна */
        $this->layout()->setContentsMargins(0, 0, 0, 0);
        $this->layout()->setSpacing(0);

        /** Создаем стаковый виджет для реализации стараниц */
        $this->stack = new \QStackedWidget($this);

        /** Инициализируем основные страницы виджета */
        $this->core->widgets->set('Components/Pages/Main', new Main($this->stack));
        $this->core->widgets->set('Components/Pages/Create', new Create($this->stack));

        /** Добавляем страницы виджета в стаковый виджет */
        $this->stack->addWidget($this->core->widgets->get('Components/Pages/Main'));
        $this->stack->addWidget($this->core->widgets->get('Components/Pages/Create'));
//        $this->stack->addWidget($this->pqcore->mvc->view->welcome_import_page);

        $this->layout()->addWidget($this->stack);

        /** Указываем текущую страницу */
        $this->stack->setCurrentWidget($this->core->widgets->get('Components/Pages/Main'));
    }
    
    public function setPage($pageName) {
        if(!$this->core->var->is_null($this->core->widgets->get($pageName))) {
            $this->stack->setCurrentWidget($this->core->widgets->get($pageName));
        }
    }

    public function Back() {
        $this->stack->setCurrentWidget($this->core->widgets->get('Components/Pages/Main'));
    }
}
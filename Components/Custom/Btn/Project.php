<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                24.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom\Btn;
use PQ\Core;

class Project extends \QWidget {
    
    public $signals = [
        'open()',
        'openDirectory()',
        'remove()'
    ];
    
    protected $closeBtn;
    
    public $name;
    
    public $path;
    
    public $uid;
    
    public function __construct($parent = null, $projectName, $projectPath, $uid) {
        parent::__construct($parent);
    
        $this->setCursor(new \QCursor(\Qt::PointingHandCursor));
        
        $this->objectName = 'ProjectBtn';
        
        Core::getInstance()->style->set($this, 'ProjectBtn');
        
        $this->name = $projectName;
        $this->path = $projectPath;
        $this->uid = $uid;
        
        $this->closeBtn = new \QPushButton($this);
        $this->closeBtn->setCursor(new \QCursor(\Qt::PointingHandCursor));
        $this->closeBtn->text = Core::getInstance()->icon->font('fa-times')->html(false)->__toString();
        $this->closeBtn->onClicked = function($sender) {
            $this->emit('remove()', []);
        };
        
        $labelName = new \QLabel($this);
        $labelName->text = $projectName;
        $labelName->setSizePolicy(\QSizePolicy::Expanding, \QSizePolicy::Fixed);
        
        $labelPath = new \QLabel($this);
        $labelPath->text = $projectPath;
        $labelPath->objectName = 'Path';
        
        $this->setLayout(new \QGridLayout());
        
        $row = 0;
        $this->layout()->addWidget($labelName, $row, 0);
        $this->layout()->addWidget($this->closeBtn, $row, 1);
        
        $row++;
        $this->layout()->addWidget($labelPath, $row, 0, 1, 2);
    }
    
    /** @override enterEvent */
    public function enterEvent($event) {
        $this->objectName = 'ProjectBtnHover';
        $this->styleSheet = $this->styleSheet();
    }
    
    /** @override leaveEvent */
    public function leaveEvent($event) {
        $this->objectName = 'ProjectBtn';
        $this->styleSheet = $this->styleSheet();
    }
    
    /** @override contextMenuEvent */
    public function contextMenuEvent($event) {
        $menu = new \QMenu($this);
        
        $open = new \QAction(tr('Open'), $menu);
        $open->onTriggered = function($sender) {
            $this->emit('open()', []);
        };
        $openDirectory = new \QAction(tr('Open Directory'), $menu);
        $openDirectory->onTriggered = function($sender) {
            $this->emit('openDirectory()', []);
        };
        $remove = new \QAction(tr('Delete from List'), $menu);
        $remove->onTriggered = function($sender) {
            $this->emit('remove()', []);
        };
        
        $menu->addAction($open);
        $menu->addAction($openDirectory);
        $menu->addAction($remove);
        $menu->exec($event->globalPos());
    }
}
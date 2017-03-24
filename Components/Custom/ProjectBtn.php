<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                24.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Custom;
use PQ\Core;

class ProjectBtn extends \QWidget {
    
    public $signals = [
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
        $this->closeBtn->iconSize = new \QSize(12, 12);
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
        $this->closeBtn->setIcon(new \QIcon(
            Core::getInstance()->APP_PATH.'Themes/'.Core::getInstance()->config->ini()->get('theme', 'PQDark').'/close.png'
        ));
    }
    
    /** @override leaveEvent */
    public function leaveEvent($event) {
        $this->objectName = 'ProjectBtn';
        $this->styleSheet = $this->styleSheet();
        $this->closeBtn->setIcon(new \QIcon(''));
    }
}
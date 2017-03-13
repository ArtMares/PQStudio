<?php

$app = new QApplication($argc, $argv);

class MainWindow extends QWidget {
    public function __construct($parent = null) {
        parent::__construct($parent);
        
        $this->initComponents();
    }
    
    private function initComponents() {
        // Write your code here
    }
}

$window = new MainWindow;
$window->show();

return $app->exec();

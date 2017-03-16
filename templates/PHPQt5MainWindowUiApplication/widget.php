<?php

class %{ClassName} extends QWidget {
    private $mainWindow = null;
    
    public function __construct($parent = null) {
        parent::__construct($parent);
        $this->mainWindow = setupUi(":/forms/%{LowerClassName}.ui", $this);
    }

    public function show() {
        $this->mainWindow->show();
    }
}

<?php

class %{ClassName} extends QWidget {
    public function __construct($parent = null) {
        parent::__construct($parent);
        setupUi(":/forms/%{LowerClassName}.ui", $this);
    }
}

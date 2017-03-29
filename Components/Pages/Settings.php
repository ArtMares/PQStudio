<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                10.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Pages;

use PQ\MVC\View;

class Settings extends \QFrame {
    use View;

    public function initComponents() {

        $this->objectName = 'SettingsPage';

        $this->core->style->set($this, 'SettingsPage');

        $labelTemplate = new \QLabel($this);
        $labelTemplate->text = tr('Application Template');

    }
}
<?php
/**
 * @author              Dmitriy Dergachev (ArtMares)
 * @date                10.03.2017
 * @copyright           artmares@influ.su
 */
namespace Components\Pages;
use PQ\QtObject;
use PQ\WidgetsInterface;

class Settings extends \QFrame implements WidgetsInterface {
    use QtObject;

    public function initComponents() {

        $this->objectName = 'SettingsPage';

        $this->core->style->set($this, 'SettingsPage');

        $labelTemplate = new \QLabel($this);
        $labelTemplate->text = tr('Application Template');

    }
}
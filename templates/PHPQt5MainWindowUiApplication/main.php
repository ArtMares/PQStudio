<?php

require_once("qrc://scripts/%{LowerClassName}.php");

$app = new QApplication($argc, $argv);

$w = new %{ClassName};
$w->show();

return $app->exec();

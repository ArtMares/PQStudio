#ifndef PLASTIQQMAINWINDOW_H
#define PLASTIQQMAINWINDOW_H

#include "plastiqobject.h"

class PlastiQQMainWindow : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QMainWindow,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQMainWindow();
};

#endif // PLASTIQQMAINWINDOW_H
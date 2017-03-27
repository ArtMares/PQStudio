#ifndef PLASTIQQMDISUBWINDOW_H
#define PLASTIQQMDISUBWINDOW_H

#include "plastiqobject.h"

class PlastiQQMdiSubWindow : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QMdiSubWindow,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQMdiSubWindow();
};

#endif // PLASTIQQMDISUBWINDOW_H
#ifndef PLASTIQQDOCKWIDGET_H
#define PLASTIQQDOCKWIDGET_H

#include "plastiqobject.h"

class PlastiQQDockWidget : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QDockWidget,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQDockWidget();
};

#endif // PLASTIQQDOCKWIDGET_H
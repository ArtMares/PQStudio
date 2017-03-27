#ifndef PLASTIQQTABWIDGET_H
#define PLASTIQQTABWIDGET_H

#include "plastiqobject.h"

class PlastiQQTabWidget : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QTabWidget,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQTabWidget();
};

#endif // PLASTIQQTABWIDGET_H
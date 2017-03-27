#ifndef PLASTIQQSTACKEDWIDGET_H
#define PLASTIQQSTACKEDWIDGET_H

#include "plastiqobject.h"

class PlastiQQStackedWidget : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QStackedWidget,QFrame)
    PLASTIQ_INHERITS(QFrame)
public:    ~PlastiQQStackedWidget();
};

#endif // PLASTIQQSTACKEDWIDGET_H
#ifndef PLASTIQQWIDGETACTION_H
#define PLASTIQQWIDGETACTION_H

#include "plastiqobject.h"

class PlastiQQWidgetAction : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QWidgetAction,QAction)
    PLASTIQ_INHERITS(QAction)
public:    ~PlastiQQWidgetAction();
};

#endif // PLASTIQQWIDGETACTION_H
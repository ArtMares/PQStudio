#ifndef PLASTIQQACCESSIBLEWIDGET_H
#define PLASTIQQACCESSIBLEWIDGET_H

#include "plastiqobject.h"

class PlastiQQAccessibleWidget : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAccessibleWidget,QAccessibleObject)
    PLASTIQ_INHERITS(QAccessibleObject,QAccessibleActionInterface)
public:    ~PlastiQQAccessibleWidget();
};

#endif // PLASTIQQACCESSIBLEWIDGET_H
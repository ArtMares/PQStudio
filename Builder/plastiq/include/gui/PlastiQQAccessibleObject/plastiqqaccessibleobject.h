#ifndef PLASTIQQACCESSIBLEOBJECT_H
#define PLASTIQQACCESSIBLEOBJECT_H

#include "plastiqobject.h"

class PlastiQQAccessibleObject : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAccessibleObject,QAccessibleInterface)
    PLASTIQ_INHERITS(QAccessibleInterface)
public:    ~PlastiQQAccessibleObject();
};

#endif // PLASTIQQACCESSIBLEOBJECT_H
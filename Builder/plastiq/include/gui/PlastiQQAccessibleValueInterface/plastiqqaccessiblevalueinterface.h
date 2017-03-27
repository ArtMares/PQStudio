#ifndef PLASTIQQACCESSIBLEVALUEINTERFACE_H
#define PLASTIQQACCESSIBLEVALUEINTERFACE_H

#include "plastiqobject.h"

class PlastiQQAccessibleValueInterface : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAccessibleValueInterface,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQAccessibleValueInterface();
};

#endif // PLASTIQQACCESSIBLEVALUEINTERFACE_H
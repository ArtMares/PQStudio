#ifndef PLASTIQQACCESSIBLEINTERFACE_H
#define PLASTIQQACCESSIBLEINTERFACE_H

#include "plastiqobject.h"

class PlastiQQAccessibleInterface : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAccessibleInterface,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQAccessibleInterface();
};

#endif // PLASTIQQACCESSIBLEINTERFACE_H
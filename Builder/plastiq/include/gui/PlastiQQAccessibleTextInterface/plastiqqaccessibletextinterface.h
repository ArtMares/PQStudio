#ifndef PLASTIQQACCESSIBLETEXTINTERFACE_H
#define PLASTIQQACCESSIBLETEXTINTERFACE_H

#include "plastiqobject.h"

class PlastiQQAccessibleTextInterface : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAccessibleTextInterface,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQAccessibleTextInterface();
};

#endif // PLASTIQQACCESSIBLETEXTINTERFACE_H
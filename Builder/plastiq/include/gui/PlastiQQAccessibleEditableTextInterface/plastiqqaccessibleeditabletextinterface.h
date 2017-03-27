#ifndef PLASTIQQACCESSIBLEEDITABLETEXTINTERFACE_H
#define PLASTIQQACCESSIBLEEDITABLETEXTINTERFACE_H

#include "plastiqobject.h"

class PlastiQQAccessibleEditableTextInterface : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAccessibleEditableTextInterface,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQAccessibleEditableTextInterface();
};

#endif // PLASTIQQACCESSIBLEEDITABLETEXTINTERFACE_H
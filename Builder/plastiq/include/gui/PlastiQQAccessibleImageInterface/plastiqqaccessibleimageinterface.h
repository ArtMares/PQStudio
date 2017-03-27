#ifndef PLASTIQQACCESSIBLEIMAGEINTERFACE_H
#define PLASTIQQACCESSIBLEIMAGEINTERFACE_H

#include "plastiqobject.h"

class PlastiQQAccessibleImageInterface : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAccessibleImageInterface,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQAccessibleImageInterface();
};

#endif // PLASTIQQACCESSIBLEIMAGEINTERFACE_H
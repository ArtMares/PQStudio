#ifndef PLASTIQQACCESSIBLE_H
#define PLASTIQQACCESSIBLE_H

#include "plastiqobject.h"

class PlastiQQAccessible : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAccessible,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQAccessible();
};

#endif // PLASTIQQACCESSIBLE_H
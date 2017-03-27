#ifndef PLASTIQQT_H
#define PLASTIQQT_H

#include "plastiqobject.h"

class PlastiQQt : public PlastiQObject {
    PLASTIQ_OBJECT(IsNamespace,Qt,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQt();
};

#endif // PLASTIQQT_H
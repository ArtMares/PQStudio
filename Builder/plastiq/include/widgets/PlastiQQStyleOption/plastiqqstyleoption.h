#ifndef PLASTIQQSTYLEOPTION_H
#define PLASTIQQSTYLEOPTION_H

#include "plastiqobject.h"

class PlastiQQStyleOption : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleOption,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQStyleOption();
};

#endif // PLASTIQQSTYLEOPTION_H
#ifndef PLASTIQQSTYLEFACTORY_H
#define PLASTIQQSTYLEFACTORY_H

#include "plastiqobject.h"

class PlastiQQStyleFactory : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStyleFactory,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQStyleFactory();
};

#endif // PLASTIQQSTYLEFACTORY_H
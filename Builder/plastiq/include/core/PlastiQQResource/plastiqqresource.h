#ifndef PLASTIQQRESOURCE_H
#define PLASTIQQRESOURCE_H

#include "plastiqobject.h"

class PlastiQQResource : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QResource,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQResource();
};

#endif // PLASTIQQRESOURCE_H
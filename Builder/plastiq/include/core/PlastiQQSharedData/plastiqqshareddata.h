#ifndef PLASTIQQSHAREDDATA_H
#define PLASTIQQSHAREDDATA_H

#include "plastiqobject.h"

class PlastiQQSharedData : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSharedData,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQSharedData();
};

#endif // PLASTIQQSHAREDDATA_H
#ifndef PLASTIQQREGION_H
#define PLASTIQQREGION_H

#include "plastiqobject.h"

class PlastiQQRegion : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QRegion,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQRegion();
};

#endif // PLASTIQQREGION_H
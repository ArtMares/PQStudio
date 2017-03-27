#ifndef PLASTIQQSURFACE_H
#define PLASTIQQSURFACE_H

#include "plastiqobject.h"

class PlastiQQSurface : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSurface,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQSurface();
};

#endif // PLASTIQQSURFACE_H
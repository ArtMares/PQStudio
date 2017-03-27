#ifndef PLASTIQQSURFACEFORMAT_H
#define PLASTIQQSURFACEFORMAT_H

#include "plastiqobject.h"

class PlastiQQSurfaceFormat : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSurfaceFormat,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQSurfaceFormat();
};

#endif // PLASTIQQSURFACEFORMAT_H
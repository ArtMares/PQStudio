#ifndef PLASTIQQVIDEOSURFACEFORMAT_H
#define PLASTIQQVIDEOSURFACEFORMAT_H

#include "plastiqobject.h"

class PlastiQQVideoSurfaceFormat : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QVideoSurfaceFormat,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQVideoSurfaceFormat();
};

#endif // PLASTIQQVIDEOSURFACEFORMAT_H
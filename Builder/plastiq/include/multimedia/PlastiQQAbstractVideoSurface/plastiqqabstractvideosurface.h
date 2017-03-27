#ifndef PLASTIQQABSTRACTVIDEOSURFACE_H
#define PLASTIQQABSTRACTVIDEOSURFACE_H

#include "plastiqobject.h"

class PlastiQQAbstractVideoSurface : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAbstractVideoSurface,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQAbstractVideoSurface();
};

#endif // PLASTIQQABSTRACTVIDEOSURFACE_H
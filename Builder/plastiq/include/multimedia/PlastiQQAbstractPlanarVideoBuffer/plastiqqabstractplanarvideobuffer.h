#ifndef PLASTIQQABSTRACTPLANARVIDEOBUFFER_H
#define PLASTIQQABSTRACTPLANARVIDEOBUFFER_H

#include "plastiqobject.h"

class PlastiQQAbstractPlanarVideoBuffer : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAbstractPlanarVideoBuffer,QAbstractVideoBuffer)
    PLASTIQ_INHERITS(QAbstractVideoBuffer)
public:    ~PlastiQQAbstractPlanarVideoBuffer();
};

#endif // PLASTIQQABSTRACTPLANARVIDEOBUFFER_H
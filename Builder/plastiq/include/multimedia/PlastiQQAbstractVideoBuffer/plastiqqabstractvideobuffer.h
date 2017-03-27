#ifndef PLASTIQQABSTRACTVIDEOBUFFER_H
#define PLASTIQQABSTRACTVIDEOBUFFER_H

#include "plastiqobject.h"

class PlastiQQAbstractVideoBuffer : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAbstractVideoBuffer,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQAbstractVideoBuffer();
};

#endif // PLASTIQQABSTRACTVIDEOBUFFER_H
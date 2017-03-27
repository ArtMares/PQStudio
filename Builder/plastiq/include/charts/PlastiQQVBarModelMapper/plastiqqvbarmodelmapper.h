#ifndef PLASTIQQVBARMODELMAPPER_H
#define PLASTIQQVBARMODELMAPPER_H

#include "plastiqobject.h"

class PlastiQQVBarModelMapper : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QVBarModelMapper,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQVBarModelMapper();
};

#endif // PLASTIQQVBARMODELMAPPER_H
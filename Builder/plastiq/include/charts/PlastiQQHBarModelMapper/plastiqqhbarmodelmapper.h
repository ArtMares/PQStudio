#ifndef PLASTIQQHBARMODELMAPPER_H
#define PLASTIQQHBARMODELMAPPER_H

#include "plastiqobject.h"

class PlastiQQHBarModelMapper : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QHBarModelMapper,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQHBarModelMapper();
};

#endif // PLASTIQQHBARMODELMAPPER_H
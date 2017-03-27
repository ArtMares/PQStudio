#ifndef PLASTIQQHBOXPLOTMODELMAPPER_H
#define PLASTIQQHBOXPLOTMODELMAPPER_H

#include "plastiqobject.h"

class PlastiQQHBoxPlotModelMapper : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QHBoxPlotModelMapper,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQHBoxPlotModelMapper();
};

#endif // PLASTIQQHBOXPLOTMODELMAPPER_H
#ifndef PLASTIQQVBOXPLOTMODELMAPPER_H
#define PLASTIQQVBOXPLOTMODELMAPPER_H

#include "plastiqobject.h"

class PlastiQQVBoxPlotModelMapper : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QVBoxPlotModelMapper,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQVBoxPlotModelMapper();
};

#endif // PLASTIQQVBOXPLOTMODELMAPPER_H
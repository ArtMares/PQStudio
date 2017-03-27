#ifndef PLASTIQQCANDLESTICKMODELMAPPER_H
#define PLASTIQQCANDLESTICKMODELMAPPER_H

#include "plastiqobject.h"

class PlastiQQCandlestickModelMapper : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCandlestickModelMapper,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQCandlestickModelMapper();
};

#endif // PLASTIQQCANDLESTICKMODELMAPPER_H
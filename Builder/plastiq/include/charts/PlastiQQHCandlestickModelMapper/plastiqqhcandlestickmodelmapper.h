#ifndef PLASTIQQHCANDLESTICKMODELMAPPER_H
#define PLASTIQQHCANDLESTICKMODELMAPPER_H

#include "plastiqobject.h"

class PlastiQQHCandlestickModelMapper : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QHCandlestickModelMapper,QCandlestickModelMapper)
    PLASTIQ_INHERITS(QCandlestickModelMapper)
public:    ~PlastiQQHCandlestickModelMapper();
};

#endif // PLASTIQQHCANDLESTICKMODELMAPPER_H
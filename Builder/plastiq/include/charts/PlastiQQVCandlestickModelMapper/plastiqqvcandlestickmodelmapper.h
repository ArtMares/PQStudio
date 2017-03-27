#ifndef PLASTIQQVCANDLESTICKMODELMAPPER_H
#define PLASTIQQVCANDLESTICKMODELMAPPER_H

#include "plastiqobject.h"

class PlastiQQVCandlestickModelMapper : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QVCandlestickModelMapper,QCandlestickModelMapper)
    PLASTIQ_INHERITS(QCandlestickModelMapper)
public:    ~PlastiQQVCandlestickModelMapper();
};

#endif // PLASTIQQVCANDLESTICKMODELMAPPER_H
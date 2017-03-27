#ifndef PLASTIQQCANDLESTICKSERIES_H
#define PLASTIQQCANDLESTICKSERIES_H

#include "plastiqobject.h"

class PlastiQQCandlestickSeries : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCandlestickSeries,QAbstractSeries)
    PLASTIQ_INHERITS(QAbstractSeries)
public:    ~PlastiQQCandlestickSeries();
};

#endif // PLASTIQQCANDLESTICKSERIES_H
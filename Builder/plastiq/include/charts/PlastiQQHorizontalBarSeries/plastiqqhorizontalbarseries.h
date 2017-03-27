#ifndef PLASTIQQHORIZONTALBARSERIES_H
#define PLASTIQQHORIZONTALBARSERIES_H

#include "plastiqobject.h"

class PlastiQQHorizontalBarSeries : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QHorizontalBarSeries,QAbstractBarSeries)
    PLASTIQ_INHERITS(QAbstractBarSeries)
public:    ~PlastiQQHorizontalBarSeries();
};

#endif // PLASTIQQHORIZONTALBARSERIES_H
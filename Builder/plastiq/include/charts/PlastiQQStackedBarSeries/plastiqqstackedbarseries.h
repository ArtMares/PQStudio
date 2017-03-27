#ifndef PLASTIQQSTACKEDBARSERIES_H
#define PLASTIQQSTACKEDBARSERIES_H

#include "plastiqobject.h"

class PlastiQQStackedBarSeries : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QStackedBarSeries,QAbstractBarSeries)
    PLASTIQ_INHERITS(QAbstractBarSeries)
public:    ~PlastiQQStackedBarSeries();
};

#endif // PLASTIQQSTACKEDBARSERIES_H
#ifndef PLASTIQQHORIZONTALSTACKEDBARSERIES_H
#define PLASTIQQHORIZONTALSTACKEDBARSERIES_H

#include "plastiqobject.h"

class PlastiQQHorizontalStackedBarSeries : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QHorizontalStackedBarSeries,QAbstractBarSeries)
    PLASTIQ_INHERITS(QAbstractBarSeries)
public:    ~PlastiQQHorizontalStackedBarSeries();
};

#endif // PLASTIQQHORIZONTALSTACKEDBARSERIES_H
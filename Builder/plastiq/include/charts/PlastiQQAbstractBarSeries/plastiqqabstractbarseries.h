#ifndef PLASTIQQABSTRACTBARSERIES_H
#define PLASTIQQABSTRACTBARSERIES_H

#include "plastiqobject.h"

class PlastiQQAbstractBarSeries : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAbstractBarSeries,QAbstractSeries)
    PLASTIQ_INHERITS(QAbstractSeries)
public:    ~PlastiQQAbstractBarSeries();
};

#endif // PLASTIQQABSTRACTBARSERIES_H
#ifndef PLASTIQQBARSERIES_H
#define PLASTIQQBARSERIES_H

#include "plastiqobject.h"

class PlastiQQBarSeries : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QBarSeries,QAbstractBarSeries)
    PLASTIQ_INHERITS(QAbstractBarSeries)
public:    ~PlastiQQBarSeries();
};

#endif // PLASTIQQBARSERIES_H
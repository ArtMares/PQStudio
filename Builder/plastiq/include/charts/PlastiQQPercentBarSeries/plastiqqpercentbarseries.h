#ifndef PLASTIQQPERCENTBARSERIES_H
#define PLASTIQQPERCENTBARSERIES_H

#include "plastiqobject.h"

class PlastiQQPercentBarSeries : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QPercentBarSeries,QAbstractBarSeries)
    PLASTIQ_INHERITS(QAbstractBarSeries)
public:    ~PlastiQQPercentBarSeries();
};

#endif // PLASTIQQPERCENTBARSERIES_H
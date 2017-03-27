#ifndef PLASTIQQHORIZONTALPERCENTBARSERIES_H
#define PLASTIQQHORIZONTALPERCENTBARSERIES_H

#include "plastiqobject.h"

class PlastiQQHorizontalPercentBarSeries : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QHorizontalPercentBarSeries,QAbstractBarSeries)
    PLASTIQ_INHERITS(QAbstractBarSeries)
public:    ~PlastiQQHorizontalPercentBarSeries();
};

#endif // PLASTIQQHORIZONTALPERCENTBARSERIES_H
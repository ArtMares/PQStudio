#ifndef PLASTIQQXYSERIES_H
#define PLASTIQQXYSERIES_H

#include "plastiqobject.h"

class PlastiQQXYSeries : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QXYSeries,QAbstractSeries)
    PLASTIQ_INHERITS(QAbstractSeries)
public:    ~PlastiQQXYSeries();
};

#endif // PLASTIQQXYSERIES_H
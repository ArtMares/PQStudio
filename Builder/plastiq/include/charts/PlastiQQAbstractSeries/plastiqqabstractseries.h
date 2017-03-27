#ifndef PLASTIQQABSTRACTSERIES_H
#define PLASTIQQABSTRACTSERIES_H

#include "plastiqobject.h"

class PlastiQQAbstractSeries : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAbstractSeries,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQAbstractSeries();
};

#endif // PLASTIQQABSTRACTSERIES_H
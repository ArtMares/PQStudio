#ifndef PLASTIQQDATAWIDGETMAPPER_H
#define PLASTIQQDATAWIDGETMAPPER_H

#include "plastiqobject.h"

class PlastiQQDataWidgetMapper : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QDataWidgetMapper,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQDataWidgetMapper();
};

#endif // PLASTIQQDATAWIDGETMAPPER_H
#ifndef PLASTIQQDATETIMEAXIS_H
#define PLASTIQQDATETIMEAXIS_H

#include "plastiqobject.h"

class PlastiQQDateTimeAxis : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QDateTimeAxis,QAbstractAxis)
    PLASTIQ_INHERITS(QAbstractAxis)
public:    ~PlastiQQDateTimeAxis();
};

#endif // PLASTIQQDATETIMEAXIS_H
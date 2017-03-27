#ifndef PLASTIQQBARCATEGORYAXIS_H
#define PLASTIQQBARCATEGORYAXIS_H

#include "plastiqobject.h"

class PlastiQQBarCategoryAxis : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QBarCategoryAxis,QAbstractAxis)
    PLASTIQ_INHERITS(QAbstractAxis)
public:    ~PlastiQQBarCategoryAxis();
};

#endif // PLASTIQQBARCATEGORYAXIS_H
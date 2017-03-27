#ifndef PLASTIQQCATEGORYAXIS_H
#define PLASTIQQCATEGORYAXIS_H

#include "plastiqobject.h"

class PlastiQQCategoryAxis : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCategoryAxis,QValueAxis)
    PLASTIQ_INHERITS(QValueAxis)
public:    ~PlastiQQCategoryAxis();
};

#endif // PLASTIQQCATEGORYAXIS_H
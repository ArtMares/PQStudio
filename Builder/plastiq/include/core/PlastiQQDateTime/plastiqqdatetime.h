#ifndef PLASTIQQDATETIME_H
#define PLASTIQQDATETIME_H

#include "plastiqobject.h"

class PlastiQQDateTime : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QDateTime,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQDateTime();
};

#endif // PLASTIQQDATETIME_H
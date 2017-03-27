#ifndef PLASTIQQLATIN1STRING_H
#define PLASTIQQLATIN1STRING_H

#include "plastiqobject.h"

class PlastiQQLatin1String : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QLatin1String,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQLatin1String();
};

#endif // PLASTIQQLATIN1STRING_H
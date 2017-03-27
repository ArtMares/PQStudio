#ifndef PLASTIQQLATIN1CHAR_H
#define PLASTIQQLATIN1CHAR_H

#include "plastiqobject.h"

class PlastiQQLatin1Char : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QLatin1Char,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQLatin1Char();
};

#endif // PLASTIQQLATIN1CHAR_H
#ifndef PLASTIQQTEXTOPTION_H
#define PLASTIQQTEXTOPTION_H

#include "plastiqobject.h"

class PlastiQQTextOption : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextOption,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTextOption();
};

#endif // PLASTIQQTEXTOPTION_H
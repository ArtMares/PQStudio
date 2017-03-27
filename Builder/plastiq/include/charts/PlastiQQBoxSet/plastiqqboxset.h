#ifndef PLASTIQQBOXSET_H
#define PLASTIQQBOXSET_H

#include "plastiqobject.h"

class PlastiQQBoxSet : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QBoxSet,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQBoxSet();
};

#endif // PLASTIQQBOXSET_H
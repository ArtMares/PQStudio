#ifndef PLASTIQQOBJECT_H
#define PLASTIQQOBJECT_H

#include "plastiqobject.h"

class PlastiQQObject : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QObject,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQObject();
};

#endif // PLASTIQQOBJECT_H
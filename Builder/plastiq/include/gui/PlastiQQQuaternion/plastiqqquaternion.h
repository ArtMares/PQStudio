#ifndef PLASTIQQQUATERNION_H
#define PLASTIQQQUATERNION_H

#include "plastiqobject.h"

class PlastiQQQuaternion : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QQuaternion,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQQuaternion();
};

#endif // PLASTIQQQUATERNION_H
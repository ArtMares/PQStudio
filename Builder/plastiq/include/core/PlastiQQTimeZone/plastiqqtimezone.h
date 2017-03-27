#ifndef PLASTIQQTIMEZONE_H
#define PLASTIQQTIMEZONE_H

#include "plastiqobject.h"

class PlastiQQTimeZone : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTimeZone,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTimeZone();
};

#endif // PLASTIQQTIMEZONE_H
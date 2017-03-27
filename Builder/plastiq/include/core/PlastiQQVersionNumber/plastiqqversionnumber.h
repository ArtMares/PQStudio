#ifndef PLASTIQQVERSIONNUMBER_H
#define PLASTIQQVERSIONNUMBER_H

#include "plastiqobject.h"

class PlastiQQVersionNumber : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QVersionNumber,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQVersionNumber();
};

#endif // PLASTIQQVERSIONNUMBER_H
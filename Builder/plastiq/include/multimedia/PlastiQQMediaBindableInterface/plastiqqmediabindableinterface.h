#ifndef PLASTIQQMEDIABINDABLEINTERFACE_H
#define PLASTIQQMEDIABINDABLEINTERFACE_H

#include "plastiqobject.h"

class PlastiQQMediaBindableInterface : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QMediaBindableInterface,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQMediaBindableInterface();
};

#endif // PLASTIQQMEDIABINDABLEINTERFACE_H
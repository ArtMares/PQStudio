#ifndef PLASTIQQTOUCHDEVICE_H
#define PLASTIQQTOUCHDEVICE_H

#include "plastiqobject.h"

class PlastiQQTouchDevice : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTouchDevice,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTouchDevice();
};

#endif // PLASTIQQTOUCHDEVICE_H
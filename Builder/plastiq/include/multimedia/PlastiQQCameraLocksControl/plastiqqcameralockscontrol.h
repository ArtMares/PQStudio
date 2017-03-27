#ifndef PLASTIQQCAMERALOCKSCONTROL_H
#define PLASTIQQCAMERALOCKSCONTROL_H

#include "plastiqobject.h"

class PlastiQQCameraLocksControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraLocksControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQCameraLocksControl();
};

#endif // PLASTIQQCAMERALOCKSCONTROL_H
#ifndef PLASTIQQCAMERAINFOCONTROL_H
#define PLASTIQQCAMERAINFOCONTROL_H

#include "plastiqobject.h"

class PlastiQQCameraInfoControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraInfoControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQCameraInfoControl();
};

#endif // PLASTIQQCAMERAINFOCONTROL_H
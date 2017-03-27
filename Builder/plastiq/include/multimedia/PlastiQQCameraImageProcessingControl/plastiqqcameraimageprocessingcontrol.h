#ifndef PLASTIQQCAMERAIMAGEPROCESSINGCONTROL_H
#define PLASTIQQCAMERAIMAGEPROCESSINGCONTROL_H

#include "plastiqobject.h"

class PlastiQQCameraImageProcessingControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraImageProcessingControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQCameraImageProcessingControl();
};

#endif // PLASTIQQCAMERAIMAGEPROCESSINGCONTROL_H
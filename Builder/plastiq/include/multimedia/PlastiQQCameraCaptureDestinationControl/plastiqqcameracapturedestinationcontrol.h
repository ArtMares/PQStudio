#ifndef PLASTIQQCAMERACAPTUREDESTINATIONCONTROL_H
#define PLASTIQQCAMERACAPTUREDESTINATIONCONTROL_H

#include "plastiqobject.h"

class PlastiQQCameraCaptureDestinationControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraCaptureDestinationControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQCameraCaptureDestinationControl();
};

#endif // PLASTIQQCAMERACAPTUREDESTINATIONCONTROL_H
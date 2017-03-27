#ifndef PLASTIQQCAMERAFOCUSCONTROL_H
#define PLASTIQQCAMERAFOCUSCONTROL_H

#include "plastiqobject.h"

class PlastiQQCameraFocusControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraFocusControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQCameraFocusControl();
};

#endif // PLASTIQQCAMERAFOCUSCONTROL_H
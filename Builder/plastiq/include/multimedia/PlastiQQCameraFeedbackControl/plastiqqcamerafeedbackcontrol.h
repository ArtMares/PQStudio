#ifndef PLASTIQQCAMERAFEEDBACKCONTROL_H
#define PLASTIQQCAMERAFEEDBACKCONTROL_H

#include "plastiqobject.h"

class PlastiQQCameraFeedbackControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraFeedbackControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQCameraFeedbackControl();
};

#endif // PLASTIQQCAMERAFEEDBACKCONTROL_H
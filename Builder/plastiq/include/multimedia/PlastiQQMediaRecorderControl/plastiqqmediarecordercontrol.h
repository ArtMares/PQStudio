#ifndef PLASTIQQMEDIARECORDERCONTROL_H
#define PLASTIQQMEDIARECORDERCONTROL_H

#include "plastiqobject.h"

class PlastiQQMediaRecorderControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMediaRecorderControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQMediaRecorderControl();
};

#endif // PLASTIQQMEDIARECORDERCONTROL_H
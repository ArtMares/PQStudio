#ifndef PLASTIQQVIDEODEVICESELECTORCONTROL_H
#define PLASTIQQVIDEODEVICESELECTORCONTROL_H

#include "plastiqobject.h"

class PlastiQQVideoDeviceSelectorControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QVideoDeviceSelectorControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQVideoDeviceSelectorControl();
};

#endif // PLASTIQQVIDEODEVICESELECTORCONTROL_H
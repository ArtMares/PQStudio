#ifndef PLASTIQQVIDEOWINDOWCONTROL_H
#define PLASTIQQVIDEOWINDOWCONTROL_H

#include "plastiqobject.h"

class PlastiQQVideoWindowControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QVideoWindowControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQVideoWindowControl();
};

#endif // PLASTIQQVIDEOWINDOWCONTROL_H
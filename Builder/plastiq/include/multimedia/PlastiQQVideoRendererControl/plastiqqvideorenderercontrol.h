#ifndef PLASTIQQVIDEORENDERERCONTROL_H
#define PLASTIQQVIDEORENDERERCONTROL_H

#include "plastiqobject.h"

class PlastiQQVideoRendererControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QVideoRendererControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQVideoRendererControl();
};

#endif // PLASTIQQVIDEORENDERERCONTROL_H
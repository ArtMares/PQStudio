#ifndef PLASTIQQAUDIOROLECONTROL_H
#define PLASTIQQAUDIOROLECONTROL_H

#include "plastiqobject.h"

class PlastiQQAudioRoleControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAudioRoleControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQAudioRoleControl();
};

#endif // PLASTIQQAUDIOROLECONTROL_H
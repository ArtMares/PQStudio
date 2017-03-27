#ifndef PLASTIQQMEDIAAUDIOPROBECONTROL_H
#define PLASTIQQMEDIAAUDIOPROBECONTROL_H

#include "plastiqobject.h"

class PlastiQQMediaAudioProbeControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMediaAudioProbeControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQMediaAudioProbeControl();
};

#endif // PLASTIQQMEDIAAUDIOPROBECONTROL_H
#ifndef PLASTIQQMEDIAGAPLESSPLAYBACKCONTROL_H
#define PLASTIQQMEDIAGAPLESSPLAYBACKCONTROL_H

#include "plastiqobject.h"

class PlastiQQMediaGaplessPlaybackControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMediaGaplessPlaybackControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQMediaGaplessPlaybackControl();
};

#endif // PLASTIQQMEDIAGAPLESSPLAYBACKCONTROL_H
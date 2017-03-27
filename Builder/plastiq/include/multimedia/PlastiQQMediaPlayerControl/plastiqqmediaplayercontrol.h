#ifndef PLASTIQQMEDIAPLAYERCONTROL_H
#define PLASTIQQMEDIAPLAYERCONTROL_H

#include "plastiqobject.h"

class PlastiQQMediaPlayerControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMediaPlayerControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQMediaPlayerControl();
};

#endif // PLASTIQQMEDIAPLAYERCONTROL_H
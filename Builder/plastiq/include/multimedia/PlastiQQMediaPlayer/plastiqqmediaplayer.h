#ifndef PLASTIQQMEDIAPLAYER_H
#define PLASTIQQMEDIAPLAYER_H

#include "plastiqobject.h"

class PlastiQQMediaPlayer : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMediaPlayer,QMediaObject)
    PLASTIQ_INHERITS(QMediaObject)
public:    ~PlastiQQMediaPlayer();
};

#endif // PLASTIQQMEDIAPLAYER_H
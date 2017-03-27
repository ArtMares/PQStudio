#ifndef PLASTIQQAUDIODECODERCONTROL_H
#define PLASTIQQAUDIODECODERCONTROL_H

#include "plastiqobject.h"

class PlastiQQAudioDecoderControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAudioDecoderControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQAudioDecoderControl();
};

#endif // PLASTIQQAUDIODECODERCONTROL_H
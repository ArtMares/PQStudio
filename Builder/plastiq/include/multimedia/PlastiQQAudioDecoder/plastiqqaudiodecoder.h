#ifndef PLASTIQQAUDIODECODER_H
#define PLASTIQQAUDIODECODER_H

#include "plastiqobject.h"

class PlastiQQAudioDecoder : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAudioDecoder,QMediaObject)
    PLASTIQ_INHERITS(QMediaObject)
public:    ~PlastiQQAudioDecoder();
};

#endif // PLASTIQQAUDIODECODER_H
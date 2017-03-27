#ifndef PLASTIQQAUDIORECORDER_H
#define PLASTIQQAUDIORECORDER_H

#include "plastiqobject.h"

class PlastiQQAudioRecorder : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAudioRecorder,QMediaRecorder)
    PLASTIQ_INHERITS(QMediaRecorder)
public:    ~PlastiQQAudioRecorder();
};

#endif // PLASTIQQAUDIORECORDER_H
#ifndef PLASTIQQMEDIARECORDER_H
#define PLASTIQQMEDIARECORDER_H

#include "plastiqobject.h"

class PlastiQQMediaRecorder : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMediaRecorder,QObject)
    PLASTIQ_INHERITS(QObject,QMediaBindableInterface)
public:    ~PlastiQQMediaRecorder();
};

#endif // PLASTIQQMEDIARECORDER_H
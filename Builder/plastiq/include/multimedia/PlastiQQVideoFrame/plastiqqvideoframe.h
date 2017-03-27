#ifndef PLASTIQQVIDEOFRAME_H
#define PLASTIQQVIDEOFRAME_H

#include "plastiqobject.h"

class PlastiQQVideoFrame : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QVideoFrame,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQVideoFrame();
};

#endif // PLASTIQQVIDEOFRAME_H
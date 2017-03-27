#ifndef PLASTIQQCAMERA_H
#define PLASTIQQCAMERA_H

#include "plastiqobject.h"

class PlastiQQCamera : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCamera,QMediaObject)
    PLASTIQ_INHERITS(QMediaObject)
public:    ~PlastiQQCamera();
};

#endif // PLASTIQQCAMERA_H
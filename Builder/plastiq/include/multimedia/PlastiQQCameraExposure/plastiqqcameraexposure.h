#ifndef PLASTIQQCAMERAEXPOSURE_H
#define PLASTIQQCAMERAEXPOSURE_H

#include "plastiqobject.h"

class PlastiQQCameraExposure : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraExposure,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQCameraExposure();
};

#endif // PLASTIQQCAMERAEXPOSURE_H
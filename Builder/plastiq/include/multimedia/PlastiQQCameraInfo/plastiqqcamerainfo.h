#ifndef PLASTIQQCAMERAINFO_H
#define PLASTIQQCAMERAINFO_H

#include "plastiqobject.h"

class PlastiQQCameraInfo : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QCameraInfo,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQCameraInfo();
};

#endif // PLASTIQQCAMERAINFO_H
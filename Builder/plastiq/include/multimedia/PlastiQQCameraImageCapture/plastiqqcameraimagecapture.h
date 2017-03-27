#ifndef PLASTIQQCAMERAIMAGECAPTURE_H
#define PLASTIQQCAMERAIMAGECAPTURE_H

#include "plastiqobject.h"

class PlastiQQCameraImageCapture : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraImageCapture,QObject)
    PLASTIQ_INHERITS(QObject,QMediaBindableInterface)
public:    ~PlastiQQCameraImageCapture();
};

#endif // PLASTIQQCAMERAIMAGECAPTURE_H
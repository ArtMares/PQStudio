#ifndef PLASTIQQCAMERAIMAGEPROCESSING_H
#define PLASTIQQCAMERAIMAGEPROCESSING_H

#include "plastiqobject.h"

class PlastiQQCameraImageProcessing : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraImageProcessing,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQCameraImageProcessing();
};

#endif // PLASTIQQCAMERAIMAGEPROCESSING_H
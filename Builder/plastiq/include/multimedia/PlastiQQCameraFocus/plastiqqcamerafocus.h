#ifndef PLASTIQQCAMERAFOCUS_H
#define PLASTIQQCAMERAFOCUS_H

#include "plastiqobject.h"

class PlastiQQCameraFocus : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCameraFocus,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQCameraFocus();
};

#endif // PLASTIQQCAMERAFOCUS_H
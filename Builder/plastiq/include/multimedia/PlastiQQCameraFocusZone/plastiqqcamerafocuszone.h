#ifndef PLASTIQQCAMERAFOCUSZONE_H
#define PLASTIQQCAMERAFOCUSZONE_H

#include "plastiqobject.h"

class PlastiQQCameraFocusZone : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QCameraFocusZone,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQCameraFocusZone();
};

#endif // PLASTIQQCAMERAFOCUSZONE_H
#ifndef PLASTIQQMEDIAAVAILABILITYCONTROL_H
#define PLASTIQQMEDIAAVAILABILITYCONTROL_H

#include "plastiqobject.h"

class PlastiQQMediaAvailabilityControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMediaAvailabilityControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQMediaAvailabilityControl();
};

#endif // PLASTIQQMEDIAAVAILABILITYCONTROL_H
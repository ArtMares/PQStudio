#ifndef PLASTIQQRADIOTUNERCONTROL_H
#define PLASTIQQRADIOTUNERCONTROL_H

#include "plastiqobject.h"

class PlastiQQRadioTunerControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QRadioTunerControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQRadioTunerControl();
};

#endif // PLASTIQQRADIOTUNERCONTROL_H
#ifndef PLASTIQQRADIODATACONTROL_H
#define PLASTIQQRADIODATACONTROL_H

#include "plastiqobject.h"

class PlastiQQRadioDataControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QRadioDataControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQRadioDataControl();
};

#endif // PLASTIQQRADIODATACONTROL_H
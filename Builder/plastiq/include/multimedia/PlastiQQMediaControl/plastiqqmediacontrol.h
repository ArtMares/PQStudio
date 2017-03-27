#ifndef PLASTIQQMEDIACONTROL_H
#define PLASTIQQMEDIACONTROL_H

#include "plastiqobject.h"

class PlastiQQMediaControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMediaControl,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQMediaControl();
};

#endif // PLASTIQQMEDIACONTROL_H
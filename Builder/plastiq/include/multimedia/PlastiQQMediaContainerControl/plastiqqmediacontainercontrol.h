#ifndef PLASTIQQMEDIACONTAINERCONTROL_H
#define PLASTIQQMEDIACONTAINERCONTROL_H

#include "plastiqobject.h"

class PlastiQQMediaContainerControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMediaContainerControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQMediaContainerControl();
};

#endif // PLASTIQQMEDIACONTAINERCONTROL_H
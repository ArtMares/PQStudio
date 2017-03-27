#ifndef PLASTIQQMEDIASTREAMSCONTROL_H
#define PLASTIQQMEDIASTREAMSCONTROL_H

#include "plastiqobject.h"

class PlastiQQMediaStreamsControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMediaStreamsControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQMediaStreamsControl();
};

#endif // PLASTIQQMEDIASTREAMSCONTROL_H
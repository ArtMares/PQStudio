#ifndef PLASTIQQMEDIANETWORKACCESSCONTROL_H
#define PLASTIQQMEDIANETWORKACCESSCONTROL_H

#include "plastiqobject.h"

class PlastiQQMediaNetworkAccessControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMediaNetworkAccessControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQMediaNetworkAccessControl();
};

#endif // PLASTIQQMEDIANETWORKACCESSCONTROL_H
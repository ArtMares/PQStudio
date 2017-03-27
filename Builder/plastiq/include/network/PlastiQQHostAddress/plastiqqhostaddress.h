#ifndef PLASTIQQHOSTADDRESS_H
#define PLASTIQQHOSTADDRESS_H

#include "plastiqobject.h"

class PlastiQQHostAddress : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QHostAddress,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQHostAddress();
};

#endif // PLASTIQQHOSTADDRESS_H
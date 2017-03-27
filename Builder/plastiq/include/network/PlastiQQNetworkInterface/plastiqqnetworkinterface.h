#ifndef PLASTIQQNETWORKINTERFACE_H
#define PLASTIQQNETWORKINTERFACE_H

#include "plastiqobject.h"

class PlastiQQNetworkInterface : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QNetworkInterface,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQNetworkInterface();
};

#endif // PLASTIQQNETWORKINTERFACE_H
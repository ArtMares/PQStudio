#ifndef PLASTIQQNETWORKPROXY_H
#define PLASTIQQNETWORKPROXY_H

#include "plastiqobject.h"

class PlastiQQNetworkProxy : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QNetworkProxy,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQNetworkProxy();
};

#endif // PLASTIQQNETWORKPROXY_H
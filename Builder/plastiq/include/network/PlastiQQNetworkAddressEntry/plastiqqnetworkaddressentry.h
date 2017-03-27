#ifndef PLASTIQQNETWORKADDRESSENTRY_H
#define PLASTIQQNETWORKADDRESSENTRY_H

#include "plastiqobject.h"

class PlastiQQNetworkAddressEntry : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QNetworkAddressEntry,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQNetworkAddressEntry();
};

#endif // PLASTIQQNETWORKADDRESSENTRY_H
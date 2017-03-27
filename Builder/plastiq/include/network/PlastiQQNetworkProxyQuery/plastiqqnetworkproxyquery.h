#ifndef PLASTIQQNETWORKPROXYQUERY_H
#define PLASTIQQNETWORKPROXYQUERY_H

#include "plastiqobject.h"

class PlastiQQNetworkProxyQuery : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QNetworkProxyQuery,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQNetworkProxyQuery();
};

#endif // PLASTIQQNETWORKPROXYQUERY_H
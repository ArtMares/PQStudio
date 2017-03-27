#ifndef PLASTIQQNETWORKSESSION_H
#define PLASTIQQNETWORKSESSION_H

#include "plastiqobject.h"

class PlastiQQNetworkSession : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QNetworkSession,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQNetworkSession();
};

#endif // PLASTIQQNETWORKSESSION_H
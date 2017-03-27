#ifndef PLASTIQQNETWORKREQUEST_H
#define PLASTIQQNETWORKREQUEST_H

#include "plastiqobject.h"

class PlastiQQNetworkRequest : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QNetworkRequest,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQNetworkRequest();
};

#endif // PLASTIQQNETWORKREQUEST_H
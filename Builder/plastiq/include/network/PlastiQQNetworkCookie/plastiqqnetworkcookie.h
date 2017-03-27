#ifndef PLASTIQQNETWORKCOOKIE_H
#define PLASTIQQNETWORKCOOKIE_H

#include "plastiqobject.h"

class PlastiQQNetworkCookie : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QNetworkCookie,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQNetworkCookie();
};

#endif // PLASTIQQNETWORKCOOKIE_H
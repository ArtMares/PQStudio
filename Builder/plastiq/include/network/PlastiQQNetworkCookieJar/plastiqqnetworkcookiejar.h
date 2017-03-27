#ifndef PLASTIQQNETWORKCOOKIEJAR_H
#define PLASTIQQNETWORKCOOKIEJAR_H

#include "plastiqobject.h"

class PlastiQQNetworkCookieJar : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QNetworkCookieJar,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQNetworkCookieJar();
};

#endif // PLASTIQQNETWORKCOOKIEJAR_H
#ifndef PLASTIQQSSLPRESHAREDKEYAUTHENTICATOR_H
#define PLASTIQQSSLPRESHAREDKEYAUTHENTICATOR_H

#include "plastiqobject.h"

class PlastiQQSslPreSharedKeyAuthenticator : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSslPreSharedKeyAuthenticator,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQSslPreSharedKeyAuthenticator();
};

#endif // PLASTIQQSSLPRESHAREDKEYAUTHENTICATOR_H
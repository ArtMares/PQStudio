#ifndef PLASTIQQAUTHENTICATOR_H
#define PLASTIQQAUTHENTICATOR_H

#include "plastiqobject.h"

class PlastiQQAuthenticator : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QAuthenticator,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQAuthenticator();
};

#endif // PLASTIQQAUTHENTICATOR_H
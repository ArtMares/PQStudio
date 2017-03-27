#ifndef PLASTIQQSSLCERTIFICATE_H
#define PLASTIQQSSLCERTIFICATE_H

#include "plastiqobject.h"

class PlastiQQSslCertificate : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSslCertificate,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQSslCertificate();
};

#endif // PLASTIQQSSLCERTIFICATE_H
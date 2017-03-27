#ifndef PLASTIQQSSLCERTIFICATEEXTENSION_H
#define PLASTIQQSSLCERTIFICATEEXTENSION_H

#include "plastiqobject.h"

class PlastiQQSslCertificateExtension : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSslCertificateExtension,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQSslCertificateExtension();
};

#endif // PLASTIQQSSLCERTIFICATEEXTENSION_H
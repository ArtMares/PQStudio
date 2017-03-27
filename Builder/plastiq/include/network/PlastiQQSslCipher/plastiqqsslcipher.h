#ifndef PLASTIQQSSLCIPHER_H
#define PLASTIQQSSLCIPHER_H

#include "plastiqobject.h"

class PlastiQQSslCipher : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSslCipher,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQSslCipher();
};

#endif // PLASTIQQSSLCIPHER_H
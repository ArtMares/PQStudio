#ifndef PLASTIQQCRYPTOGRAPHICHASH_H
#define PLASTIQQCRYPTOGRAPHICHASH_H

#include "plastiqobject.h"

class PlastiQQCryptographicHash : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QCryptographicHash,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQCryptographicHash();
};

#endif // PLASTIQQCRYPTOGRAPHICHASH_H
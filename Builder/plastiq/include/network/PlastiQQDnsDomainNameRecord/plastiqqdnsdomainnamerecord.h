#ifndef PLASTIQQDNSDOMAINNAMERECORD_H
#define PLASTIQQDNSDOMAINNAMERECORD_H

#include "plastiqobject.h"

class PlastiQQDnsDomainNameRecord : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QDnsDomainNameRecord,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQDnsDomainNameRecord();
};

#endif // PLASTIQQDNSDOMAINNAMERECORD_H
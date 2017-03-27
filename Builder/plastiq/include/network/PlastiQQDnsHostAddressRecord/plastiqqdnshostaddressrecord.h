#ifndef PLASTIQQDNSHOSTADDRESSRECORD_H
#define PLASTIQQDNSHOSTADDRESSRECORD_H

#include "plastiqobject.h"

class PlastiQQDnsHostAddressRecord : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QDnsHostAddressRecord,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQDnsHostAddressRecord();
};

#endif // PLASTIQQDNSHOSTADDRESSRECORD_H
#ifndef PLASTIQQDNSTEXTRECORD_H
#define PLASTIQQDNSTEXTRECORD_H

#include "plastiqobject.h"

class PlastiQQDnsTextRecord : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QDnsTextRecord,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQDnsTextRecord();
};

#endif // PLASTIQQDNSTEXTRECORD_H
#ifndef PLASTIQQDNSLOOKUP_H
#define PLASTIQQDNSLOOKUP_H

#include "plastiqobject.h"

class PlastiQQDnsLookup : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QDnsLookup,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQDnsLookup();
};

#endif // PLASTIQQDNSLOOKUP_H
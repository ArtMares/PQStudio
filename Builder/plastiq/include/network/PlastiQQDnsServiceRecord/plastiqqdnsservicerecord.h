#ifndef PLASTIQQDNSSERVICERECORD_H
#define PLASTIQQDNSSERVICERECORD_H

#include "plastiqobject.h"

class PlastiQQDnsServiceRecord : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QDnsServiceRecord,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQDnsServiceRecord();
};

#endif // PLASTIQQDNSSERVICERECORD_H
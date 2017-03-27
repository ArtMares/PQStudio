#ifndef PLASTIQQUUID_H
#define PLASTIQQUUID_H

#include "plastiqobject.h"

class PlastiQQUuid : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QUuid,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQUuid();
};

#endif // PLASTIQQUUID_H
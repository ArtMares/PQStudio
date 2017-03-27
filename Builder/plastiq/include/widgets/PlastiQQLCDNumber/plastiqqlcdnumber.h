#ifndef PLASTIQQLCDNUMBER_H
#define PLASTIQQLCDNUMBER_H

#include "plastiqobject.h"

class PlastiQQLCDNumber : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QLCDNumber,QFrame)
    PLASTIQ_INHERITS(QFrame)
public:    ~PlastiQQLCDNumber();
};

#endif // PLASTIQQLCDNUMBER_H
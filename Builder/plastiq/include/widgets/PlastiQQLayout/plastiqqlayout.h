#ifndef PLASTIQQLAYOUT_H
#define PLASTIQQLAYOUT_H

#include "plastiqobject.h"

class PlastiQQLayout : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QLayout,QObject)
    PLASTIQ_INHERITS(QObject,QLayoutItem)
public:    ~PlastiQQLayout();
};

#endif // PLASTIQQLAYOUT_H
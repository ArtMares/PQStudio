#ifndef PLASTIQQINPUTMETHOD_H
#define PLASTIQQINPUTMETHOD_H

#include "plastiqobject.h"

class PlastiQQInputMethod : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QInputMethod,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQInputMethod();
};

#endif // PLASTIQQINPUTMETHOD_H
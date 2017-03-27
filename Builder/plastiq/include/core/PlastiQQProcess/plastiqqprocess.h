#ifndef PLASTIQQPROCESS_H
#define PLASTIQQPROCESS_H

#include "plastiqobject.h"

class PlastiQQProcess : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QProcess,QIODevice)
    PLASTIQ_INHERITS(QIODevice)
public:    ~PlastiQQProcess();
};

#endif // PLASTIQQPROCESS_H
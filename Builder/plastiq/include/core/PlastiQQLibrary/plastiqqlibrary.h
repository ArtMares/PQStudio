#ifndef PLASTIQQLIBRARY_H
#define PLASTIQQLIBRARY_H

#include "plastiqobject.h"

class PlastiQQLibrary : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QLibrary,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQLibrary();
};

#endif // PLASTIQQLIBRARY_H
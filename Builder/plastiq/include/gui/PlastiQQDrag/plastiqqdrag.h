#ifndef PLASTIQQDRAG_H
#define PLASTIQQDRAG_H

#include "plastiqobject.h"

class PlastiQQDrag : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QDrag,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQDrag();
};

#endif // PLASTIQQDRAG_H
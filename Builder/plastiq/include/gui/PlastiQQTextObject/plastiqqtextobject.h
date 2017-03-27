#ifndef PLASTIQQTEXTOBJECT_H
#define PLASTIQQTEXTOBJECT_H

#include "plastiqobject.h"

class PlastiQQTextObject : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QTextObject,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQTextObject();
};

#endif // PLASTIQQTEXTOBJECT_H
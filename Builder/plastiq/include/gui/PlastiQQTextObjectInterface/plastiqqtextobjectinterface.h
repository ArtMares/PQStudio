#ifndef PLASTIQQTEXTOBJECTINTERFACE_H
#define PLASTIQQTEXTOBJECTINTERFACE_H

#include "plastiqobject.h"

class PlastiQQTextObjectInterface : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextObjectInterface,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTextObjectInterface();
};

#endif // PLASTIQQTEXTOBJECTINTERFACE_H
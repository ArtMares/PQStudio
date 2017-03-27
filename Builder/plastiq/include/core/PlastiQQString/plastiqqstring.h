#ifndef PLASTIQQSTRING_H
#define PLASTIQQSTRING_H

#include "plastiqobject.h"

class PlastiQQString : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QString,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQString();
};

#endif // PLASTIQQSTRING_H
#ifndef PLASTIQQJSONVALUE_H
#define PLASTIQQJSONVALUE_H

#include "plastiqobject.h"

class PlastiQQJsonValue : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QJsonValue,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQJsonValue();
};

#endif // PLASTIQQJSONVALUE_H
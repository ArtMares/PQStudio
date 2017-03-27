#ifndef PLASTIQQJSONOBJECT_H
#define PLASTIQQJSONOBJECT_H

#include "plastiqobject.h"

class PlastiQQJsonObject : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QJsonObject,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQJsonObject();
};

#endif // PLASTIQQJSONOBJECT_H
#ifndef PLASTIQQJSONARRAY_H
#define PLASTIQQJSONARRAY_H

#include "plastiqobject.h"

class PlastiQQJsonArray : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QJsonArray,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQJsonArray();
};

#endif // PLASTIQQJSONARRAY_H
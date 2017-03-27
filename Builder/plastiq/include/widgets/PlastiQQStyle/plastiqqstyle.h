#ifndef PLASTIQQSTYLE_H
#define PLASTIQQSTYLE_H

#include "plastiqobject.h"

class PlastiQQStyle : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QStyle,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQStyle();
};

#endif // PLASTIQQSTYLE_H
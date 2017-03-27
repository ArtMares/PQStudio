#ifndef PLASTIQQCOMMONSTYLE_H
#define PLASTIQQCOMMONSTYLE_H

#include "plastiqobject.h"

class PlastiQQCommonStyle : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCommonStyle,QStyle)
    PLASTIQ_INHERITS(QStyle)
public:    ~PlastiQQCommonStyle();
};

#endif // PLASTIQQCOMMONSTYLE_H
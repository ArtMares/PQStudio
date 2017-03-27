#ifndef PLASTIQQPROXYSTYLE_H
#define PLASTIQQPROXYSTYLE_H

#include "plastiqobject.h"

class PlastiQQProxyStyle : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QProxyStyle,QCommonStyle)
    PLASTIQ_INHERITS(QCommonStyle)
public:    ~PlastiQQProxyStyle();
};

#endif // PLASTIQQPROXYSTYLE_H
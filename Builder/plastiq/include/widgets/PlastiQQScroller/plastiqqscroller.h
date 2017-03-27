#ifndef PLASTIQQSCROLLER_H
#define PLASTIQQSCROLLER_H

#include "plastiqobject.h"

class PlastiQQScroller : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QScroller,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQScroller();
};

#endif // PLASTIQQSCROLLER_H
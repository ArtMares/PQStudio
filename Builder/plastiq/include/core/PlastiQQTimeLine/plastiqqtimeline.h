#ifndef PLASTIQQTIMELINE_H
#define PLASTIQQTIMELINE_H

#include "plastiqobject.h"

class PlastiQQTimeLine : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QTimeLine,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQTimeLine();
};

#endif // PLASTIQQTIMELINE_H
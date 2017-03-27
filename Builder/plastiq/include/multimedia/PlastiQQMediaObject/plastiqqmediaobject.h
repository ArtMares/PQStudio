#ifndef PLASTIQQMEDIAOBJECT_H
#define PLASTIQQMEDIAOBJECT_H

#include "plastiqobject.h"

class PlastiQQMediaObject : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMediaObject,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQMediaObject();
};

#endif // PLASTIQQMEDIAOBJECT_H
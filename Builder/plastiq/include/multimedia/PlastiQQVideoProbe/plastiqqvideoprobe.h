#ifndef PLASTIQQVIDEOPROBE_H
#define PLASTIQQVIDEOPROBE_H

#include "plastiqobject.h"

class PlastiQQVideoProbe : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QVideoProbe,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQVideoProbe();
};

#endif // PLASTIQQVIDEOPROBE_H
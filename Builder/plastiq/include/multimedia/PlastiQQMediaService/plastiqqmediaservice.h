#ifndef PLASTIQQMEDIASERVICE_H
#define PLASTIQQMEDIASERVICE_H

#include "plastiqobject.h"

class PlastiQQMediaService : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMediaService,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQMediaService();
};

#endif // PLASTIQQMEDIASERVICE_H
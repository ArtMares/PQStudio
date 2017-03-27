#ifndef PLASTIQQMEDIARESOURCE_H
#define PLASTIQQMEDIARESOURCE_H

#include "plastiqobject.h"

class PlastiQQMediaResource : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QMediaResource,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQMediaResource();
};

#endif // PLASTIQQMEDIARESOURCE_H
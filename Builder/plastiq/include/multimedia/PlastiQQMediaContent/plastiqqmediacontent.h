#ifndef PLASTIQQMEDIACONTENT_H
#define PLASTIQQMEDIACONTENT_H

#include "plastiqobject.h"

class PlastiQQMediaContent : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QMediaContent,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQMediaContent();
};

#endif // PLASTIQQMEDIACONTENT_H
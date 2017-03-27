#ifndef PLASTIQQURL_H
#define PLASTIQQURL_H

#include "plastiqobject.h"

class PlastiQQUrl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QUrl,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQUrl();
};

#endif // PLASTIQQURL_H
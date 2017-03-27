#ifndef PLASTIQQMIMETYPE_H
#define PLASTIQQMIMETYPE_H

#include "plastiqobject.h"

class PlastiQQMimeType : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QMimeType,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQMimeType();
};

#endif // PLASTIQQMIMETYPE_H
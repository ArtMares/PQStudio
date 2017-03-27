#ifndef PLASTIQQSTRINGREF_H
#define PLASTIQQSTRINGREF_H

#include "plastiqobject.h"

class PlastiQQStringRef : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStringRef,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQStringRef();
};

#endif // PLASTIQQSTRINGREF_H
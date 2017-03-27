#ifndef PLASTIQQREGEXP_H
#define PLASTIQQREGEXP_H

#include "plastiqobject.h"

class PlastiQQRegExp : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QRegExp,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQRegExp();
};

#endif // PLASTIQQREGEXP_H
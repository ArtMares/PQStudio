#ifndef PLASTIQQTEXTFORMAT_H
#define PLASTIQQTEXTFORMAT_H

#include "plastiqobject.h"

class PlastiQQTextFormat : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextFormat,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTextFormat();
};

#endif // PLASTIQQTEXTFORMAT_H
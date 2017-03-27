#ifndef PLASTIQQTEXTCHARFORMAT_H
#define PLASTIQQTEXTCHARFORMAT_H

#include "plastiqobject.h"

class PlastiQQTextCharFormat : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextCharFormat,QTextFormat)
    PLASTIQ_INHERITS(QTextFormat)
public:    ~PlastiQQTextCharFormat();
};

#endif // PLASTIQQTEXTCHARFORMAT_H
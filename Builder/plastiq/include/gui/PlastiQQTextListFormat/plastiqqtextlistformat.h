#ifndef PLASTIQQTEXTLISTFORMAT_H
#define PLASTIQQTEXTLISTFORMAT_H

#include "plastiqobject.h"

class PlastiQQTextListFormat : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextListFormat,QTextFormat)
    PLASTIQ_INHERITS(QTextFormat)
public:    ~PlastiQQTextListFormat();
};

#endif // PLASTIQQTEXTLISTFORMAT_H
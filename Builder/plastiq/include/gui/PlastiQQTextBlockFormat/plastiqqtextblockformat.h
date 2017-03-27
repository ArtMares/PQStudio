#ifndef PLASTIQQTEXTBLOCKFORMAT_H
#define PLASTIQQTEXTBLOCKFORMAT_H

#include "plastiqobject.h"

class PlastiQQTextBlockFormat : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextBlockFormat,QTextFormat)
    PLASTIQ_INHERITS(QTextFormat)
public:    ~PlastiQQTextBlockFormat();
};

#endif // PLASTIQQTEXTBLOCKFORMAT_H
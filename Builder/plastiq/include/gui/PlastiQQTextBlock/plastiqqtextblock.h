#ifndef PLASTIQQTEXTBLOCK_H
#define PLASTIQQTEXTBLOCK_H

#include "plastiqobject.h"

class PlastiQQTextBlock : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextBlock,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTextBlock();
};

#endif // PLASTIQQTEXTBLOCK_H
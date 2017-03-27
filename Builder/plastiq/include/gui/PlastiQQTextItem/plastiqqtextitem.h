#ifndef PLASTIQQTEXTITEM_H
#define PLASTIQQTEXTITEM_H

#include "plastiqobject.h"

class PlastiQQTextItem : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtItem,QTextItem,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTextItem();
};

#endif // PLASTIQQTEXTITEM_H
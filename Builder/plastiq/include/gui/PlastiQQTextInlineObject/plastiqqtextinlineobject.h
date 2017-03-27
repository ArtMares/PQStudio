#ifndef PLASTIQQTEXTINLINEOBJECT_H
#define PLASTIQQTEXTINLINEOBJECT_H

#include "plastiqobject.h"

class PlastiQQTextInlineObject : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextInlineObject,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTextInlineObject();
};

#endif // PLASTIQQTEXTINLINEOBJECT_H
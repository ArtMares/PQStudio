#ifndef PLASTIQQTEXTEDIT_H
#define PLASTIQQTEXTEDIT_H

#include "plastiqobject.h"

class PlastiQQTextEdit : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QTextEdit,QAbstractScrollArea)
    PLASTIQ_INHERITS(QAbstractScrollArea)
public:    ~PlastiQQTextEdit();
};

#endif // PLASTIQQTEXTEDIT_H
#ifndef PLASTIQQPLAINTEXTEDIT_H
#define PLASTIQQPLAINTEXTEDIT_H

#include "plastiqobject.h"

class PlastiQQPlainTextEdit : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QPlainTextEdit,QAbstractScrollArea)
    PLASTIQ_INHERITS(QAbstractScrollArea)
public:    ~PlastiQQPlainTextEdit();
};

#endif // PLASTIQQPLAINTEXTEDIT_H
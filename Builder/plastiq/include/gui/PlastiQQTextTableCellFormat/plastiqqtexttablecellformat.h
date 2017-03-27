#ifndef PLASTIQQTEXTTABLECELLFORMAT_H
#define PLASTIQQTEXTTABLECELLFORMAT_H

#include "plastiqobject.h"

class PlastiQQTextTableCellFormat : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextTableCellFormat,QTextCharFormat)
    PLASTIQ_INHERITS(QTextCharFormat)
public:    ~PlastiQQTextTableCellFormat();
};

#endif // PLASTIQQTEXTTABLECELLFORMAT_H
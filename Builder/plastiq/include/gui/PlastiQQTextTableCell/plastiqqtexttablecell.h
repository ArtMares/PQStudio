#ifndef PLASTIQQTEXTTABLECELL_H
#define PLASTIQQTEXTTABLECELL_H

#include "plastiqobject.h"

class PlastiQQTextTableCell : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextTableCell,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTextTableCell();
};

#endif // PLASTIQQTEXTTABLECELL_H
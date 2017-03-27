#ifndef PLASTIQQTEXTTABLE_H
#define PLASTIQQTEXTTABLE_H

#include "plastiqobject.h"

class PlastiQQTextTable : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextTable,QTextFrame)
    PLASTIQ_INHERITS(QTextFrame)
public:    ~PlastiQQTextTable();
};

#endif // PLASTIQQTEXTTABLE_H
#ifndef PLASTIQQTREEWIDGETITEMITERATOR_H
#define PLASTIQQTREEWIDGETITEMITERATOR_H

#include "plastiqobject.h"

class PlastiQQTreeWidgetItemIterator : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTreeWidgetItemIterator,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTreeWidgetItemIterator();
};

#endif // PLASTIQQTREEWIDGETITEMITERATOR_H
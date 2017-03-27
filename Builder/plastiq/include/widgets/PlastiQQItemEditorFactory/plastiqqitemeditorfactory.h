#ifndef PLASTIQQITEMEDITORFACTORY_H
#define PLASTIQQITEMEDITORFACTORY_H

#include "plastiqobject.h"

class PlastiQQItemEditorFactory : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QItemEditorFactory,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQItemEditorFactory();
};

#endif // PLASTIQQITEMEDITORFACTORY_H
#ifndef PLASTIQQABSTRACTAXIS_H
#define PLASTIQQABSTRACTAXIS_H

#include "plastiqobject.h"

class PlastiQQAbstractAxis : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QAbstractAxis,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQAbstractAxis();
};

#endif // PLASTIQQABSTRACTAXIS_H
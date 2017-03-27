#ifndef PLASTIQQDIRITERATOR_H
#define PLASTIQQDIRITERATOR_H

#include "plastiqobject.h"

class PlastiQQDirIterator : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QDirIterator,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQDirIterator();
};

#endif // PLASTIQQDIRITERATOR_H
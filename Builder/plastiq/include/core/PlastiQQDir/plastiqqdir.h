#ifndef PLASTIQQDIR_H
#define PLASTIQQDIR_H

#include "plastiqobject.h"

class PlastiQQDir : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QDir,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQDir();
};

#endif // PLASTIQQDIR_H
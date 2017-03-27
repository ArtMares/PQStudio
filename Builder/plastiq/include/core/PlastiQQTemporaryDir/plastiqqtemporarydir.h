#ifndef PLASTIQQTEMPORARYDIR_H
#define PLASTIQQTEMPORARYDIR_H

#include "plastiqobject.h"

class PlastiQQTemporaryDir : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTemporaryDir,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTemporaryDir();
};

#endif // PLASTIQQTEMPORARYDIR_H
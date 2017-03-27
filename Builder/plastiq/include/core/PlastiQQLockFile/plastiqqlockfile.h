#ifndef PLASTIQQLOCKFILE_H
#define PLASTIQQLOCKFILE_H

#include "plastiqobject.h"

class PlastiQQLockFile : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QLockFile,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQLockFile();
};

#endif // PLASTIQQLOCKFILE_H
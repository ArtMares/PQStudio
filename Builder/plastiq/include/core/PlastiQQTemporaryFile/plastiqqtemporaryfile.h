#ifndef PLASTIQQTEMPORARYFILE_H
#define PLASTIQQTEMPORARYFILE_H

#include "plastiqobject.h"

class PlastiQQTemporaryFile : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTemporaryFile,QFile)
    PLASTIQ_INHERITS(QFile)
public:    ~PlastiQQTemporaryFile();
};

#endif // PLASTIQQTEMPORARYFILE_H
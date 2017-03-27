#ifndef PLASTIQQFILE_H
#define PLASTIQQFILE_H

#include "plastiqobject.h"

class PlastiQQFile : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QFile,QFileDevice)
    PLASTIQ_INHERITS(QFileDevice)
public:    ~PlastiQQFile();
};

#endif // PLASTIQQFILE_H
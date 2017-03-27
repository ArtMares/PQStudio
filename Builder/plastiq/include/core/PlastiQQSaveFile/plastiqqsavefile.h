#ifndef PLASTIQQSAVEFILE_H
#define PLASTIQQSAVEFILE_H

#include "plastiqobject.h"

class PlastiQQSaveFile : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QSaveFile,QFileDevice)
    PLASTIQ_INHERITS(QFileDevice)
public:    ~PlastiQQSaveFile();
};

#endif // PLASTIQQSAVEFILE_H
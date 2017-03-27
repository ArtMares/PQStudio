#ifndef PLASTIQQFILESYSTEMMODEL_H
#define PLASTIQQFILESYSTEMMODEL_H

#include "plastiqobject.h"

class PlastiQQFileSystemModel : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QFileSystemModel,QAbstractItemModel)
    PLASTIQ_INHERITS(QAbstractItemModel)
public:    ~PlastiQQFileSystemModel();
};

#endif // PLASTIQQFILESYSTEMMODEL_H
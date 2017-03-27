#ifndef PLASTIQQMETADATAREADERCONTROL_H
#define PLASTIQQMETADATAREADERCONTROL_H

#include "plastiqobject.h"

class PlastiQQMetaDataReaderControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMetaDataReaderControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQMetaDataReaderControl();
};

#endif // PLASTIQQMETADATAREADERCONTROL_H
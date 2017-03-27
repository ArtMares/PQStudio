#ifndef PLASTIQQMETADATAWRITERCONTROL_H
#define PLASTIQQMETADATAWRITERCONTROL_H

#include "plastiqobject.h"

class PlastiQQMetaDataWriterControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QMetaDataWriterControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQMetaDataWriterControl();
};

#endif // PLASTIQQMETADATAWRITERCONTROL_H
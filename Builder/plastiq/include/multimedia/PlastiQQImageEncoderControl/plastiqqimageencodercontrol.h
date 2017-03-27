#ifndef PLASTIQQIMAGEENCODERCONTROL_H
#define PLASTIQQIMAGEENCODERCONTROL_H

#include "plastiqobject.h"

class PlastiQQImageEncoderControl : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QImageEncoderControl,QMediaControl)
    PLASTIQ_INHERITS(QMediaControl)
public:    ~PlastiQQImageEncoderControl();
};

#endif // PLASTIQQIMAGEENCODERCONTROL_H
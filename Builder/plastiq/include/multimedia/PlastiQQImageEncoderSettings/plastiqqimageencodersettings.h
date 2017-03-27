#ifndef PLASTIQQIMAGEENCODERSETTINGS_H
#define PLASTIQQIMAGEENCODERSETTINGS_H

#include "plastiqobject.h"

class PlastiQQImageEncoderSettings : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QImageEncoderSettings,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQImageEncoderSettings();
};

#endif // PLASTIQQIMAGEENCODERSETTINGS_H
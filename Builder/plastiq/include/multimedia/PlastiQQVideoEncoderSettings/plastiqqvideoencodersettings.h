#ifndef PLASTIQQVIDEOENCODERSETTINGS_H
#define PLASTIQQVIDEOENCODERSETTINGS_H

#include "plastiqobject.h"

class PlastiQQVideoEncoderSettings : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QVideoEncoderSettings,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQVideoEncoderSettings();
};

#endif // PLASTIQQVIDEOENCODERSETTINGS_H
#ifndef PLASTIQQRUBBERBAND_H
#define PLASTIQQRUBBERBAND_H

#include "plastiqobject.h"

class PlastiQQRubberBand : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QRubberBand,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQRubberBand();
};

#endif // PLASTIQQRUBBERBAND_H
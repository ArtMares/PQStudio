#ifndef PLASTIQQRADIOTUNER_H
#define PLASTIQQRADIOTUNER_H

#include "plastiqobject.h"

class PlastiQQRadioTuner : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QRadioTuner,QMediaObject)
    PLASTIQ_INHERITS(QMediaObject)
public:    ~PlastiQQRadioTuner();
};

#endif // PLASTIQQRADIOTUNER_H
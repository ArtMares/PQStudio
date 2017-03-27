#ifndef PLASTIQQRADIODATA_H
#define PLASTIQQRADIODATA_H

#include "plastiqobject.h"

class PlastiQQRadioData : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QRadioData,QObject)
    PLASTIQ_INHERITS(QObject,QMediaBindableInterface)
public:    ~PlastiQQRadioData();
};

#endif // PLASTIQQRADIODATA_H
#ifndef PLASTIQQCANDLESTICKSET_H
#define PLASTIQQCANDLESTICKSET_H

#include "plastiqobject.h"

class PlastiQQCandlestickSet : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QCandlestickSet,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQCandlestickSet();
};

#endif // PLASTIQQCANDLESTICKSET_H
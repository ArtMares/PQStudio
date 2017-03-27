#ifndef PLASTIQQBYTEARRAYMATCHER_H
#define PLASTIQQBYTEARRAYMATCHER_H

#include "plastiqobject.h"

class PlastiQQByteArrayMatcher : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QByteArrayMatcher,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQByteArrayMatcher();
};

#endif // PLASTIQQBYTEARRAYMATCHER_H
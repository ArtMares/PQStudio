#ifndef PLASTIQQSTRINGMATCHER_H
#define PLASTIQQSTRINGMATCHER_H

#include "plastiqobject.h"

class PlastiQQStringMatcher : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QStringMatcher,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQStringMatcher();
};

#endif // PLASTIQQSTRINGMATCHER_H
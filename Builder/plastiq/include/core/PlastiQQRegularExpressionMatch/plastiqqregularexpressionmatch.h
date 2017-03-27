#ifndef PLASTIQQREGULAREXPRESSIONMATCH_H
#define PLASTIQQREGULAREXPRESSIONMATCH_H

#include "plastiqobject.h"

class PlastiQQRegularExpressionMatch : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QRegularExpressionMatch,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQRegularExpressionMatch();
};

#endif // PLASTIQQREGULAREXPRESSIONMATCH_H
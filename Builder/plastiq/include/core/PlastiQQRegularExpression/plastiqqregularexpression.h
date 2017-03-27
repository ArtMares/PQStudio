#ifndef PLASTIQQREGULAREXPRESSION_H
#define PLASTIQQREGULAREXPRESSION_H

#include "plastiqobject.h"

class PlastiQQRegularExpression : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QRegularExpression,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQRegularExpression();
};

#endif // PLASTIQQREGULAREXPRESSION_H
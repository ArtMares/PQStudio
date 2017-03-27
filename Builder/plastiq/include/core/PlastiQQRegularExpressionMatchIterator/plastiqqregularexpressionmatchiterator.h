#ifndef PLASTIQQREGULAREXPRESSIONMATCHITERATOR_H
#define PLASTIQQREGULAREXPRESSIONMATCHITERATOR_H

#include "plastiqobject.h"

class PlastiQQRegularExpressionMatchIterator : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QRegularExpressionMatchIterator,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQRegularExpressionMatchIterator();
};

#endif // PLASTIQQREGULAREXPRESSIONMATCHITERATOR_H
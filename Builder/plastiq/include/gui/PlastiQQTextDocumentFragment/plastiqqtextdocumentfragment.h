#ifndef PLASTIQQTEXTDOCUMENTFRAGMENT_H
#define PLASTIQQTEXTDOCUMENTFRAGMENT_H

#include "plastiqobject.h"

class PlastiQQTextDocumentFragment : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QTextDocumentFragment,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQTextDocumentFragment();
};

#endif // PLASTIQQTEXTDOCUMENTFRAGMENT_H
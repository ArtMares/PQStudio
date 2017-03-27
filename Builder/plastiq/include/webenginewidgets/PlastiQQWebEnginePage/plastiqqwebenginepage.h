#ifndef PLASTIQQWEBENGINEPAGE_H
#define PLASTIQQWEBENGINEPAGE_H

#include "plastiqobject.h"

class PlastiQQWebEnginePage : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QWebEnginePage,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQWebEnginePage();
};

#endif // PLASTIQQWEBENGINEPAGE_H
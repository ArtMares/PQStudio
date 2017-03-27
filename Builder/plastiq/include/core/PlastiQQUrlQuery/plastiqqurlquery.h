#ifndef PLASTIQQURLQUERY_H
#define PLASTIQQURLQUERY_H

#include "plastiqobject.h"

class PlastiQQUrlQuery : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QUrlQuery,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQUrlQuery();
};

#endif // PLASTIQQURLQUERY_H
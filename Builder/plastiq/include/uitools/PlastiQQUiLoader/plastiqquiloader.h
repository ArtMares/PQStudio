#ifndef PLASTIQQUILOADER_H
#define PLASTIQQUILOADER_H

#include "plastiqobject.h"

class PlastiQQUiLoader : public PlastiQObject {
    PLASTIQ_OBJECT(IsQObject,QUiLoader,QObject)
    PLASTIQ_INHERITS(QObject)
public:    ~PlastiQQUiLoader();
};

#endif // PLASTIQQUILOADER_H
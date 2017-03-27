#ifndef PLASTIQQBYTEARRAY_H
#define PLASTIQQBYTEARRAY_H

#include "plastiqobject.h"

class PlastiQQByteArray : public PlastiQObject {
    PLASTIQ_OBJECT(IsQtObject,QByteArray,Q_NULLPTR)
    PLASTIQ_INHERITS()
public:    ~PlastiQQByteArray();
};

#endif // PLASTIQQBYTEARRAY_H
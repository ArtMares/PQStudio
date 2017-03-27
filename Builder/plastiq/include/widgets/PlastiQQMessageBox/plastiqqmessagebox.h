#ifndef PLASTIQQMESSAGEBOX_H
#define PLASTIQQMESSAGEBOX_H

#include "plastiqobject.h"

class PlastiQQMessageBox : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QMessageBox,QDialog)
    PLASTIQ_INHERITS(QDialog)
public:    ~PlastiQQMessageBox();
};

#endif // PLASTIQQMESSAGEBOX_H
#ifndef PLASTIQQOPENGLWIDGET_H
#define PLASTIQQOPENGLWIDGET_H

#include "plastiqobject.h"

class PlastiQQOpenGLWidget : public PlastiQObject {
    PLASTIQ_OBJECT(IsQWidget,QOpenGLWidget,QWidget)
    PLASTIQ_INHERITS(QWidget)
public:    ~PlastiQQOpenGLWidget();
};

#endif // PLASTIQQOPENGLWIDGET_H
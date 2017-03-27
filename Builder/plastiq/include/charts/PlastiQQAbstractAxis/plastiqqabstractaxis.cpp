#include "plastiqmethod.h"
#include "plastiqqabstractaxis.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QAbstractAxis> 
#include <QColor>
#include <QPen>
#include <QBrush>
#include <QFont>
#include <QString>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractAxis::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractAxis::plastiqMethods = {
    { "alignment()", { "alignment", "", "Qt::Alignment", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "gridLineColor()", { "gridLineColor", "", "QColor", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "gridLinePen()", { "gridLinePen", "", "QPen", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hide()", { "hide", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isGridLineVisible()", { "isGridLineVisible", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isLineVisible()", { "isLineVisible", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMinorGridLineVisible()", { "isMinorGridLineVisible", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isReverse()", { "isReverse", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isTitleVisible()", { "isTitleVisible", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVisible()", { "isVisible", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelsAngle()", { "labelsAngle", "", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelsBrush()", { "labelsBrush", "", "QBrush", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelsColor()", { "labelsColor", "", "QColor", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelsFont()", { "labelsFont", "", "QFont", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelsVisible()", { "labelsVisible", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "linePen()", { "linePen", "", "QPen", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "linePenColor()", { "linePenColor", "", "QColor", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minorGridLineColor()", { "minorGridLineColor", "", "QColor", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minorGridLinePen()", { "minorGridLinePen", "", "QPen", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "orientation()", { "orientation", "", "Qt::Orientation", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGridLineColor(QColor&)", { "setGridLineColor", "QColor&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGridLinePen(QPen&)", { "setGridLinePen", "QPen&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGridLineVisible()", { "setGridLineVisible", "", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGridLineVisible(bool)", { "setGridLineVisible", "bool", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelsAngle(int)", { "setLabelsAngle", "int", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelsBrush(QBrush&)", { "setLabelsBrush", "QBrush&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelsColor(QColor)", { "setLabelsColor", "QColor", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelsFont(QFont&)", { "setLabelsFont", "QFont&", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelsVisible()", { "setLabelsVisible", "", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelsVisible(bool)", { "setLabelsVisible", "bool", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLinePen(QPen&)", { "setLinePen", "QPen&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLinePenColor(QColor)", { "setLinePenColor", "QColor", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLineVisible()", { "setLineVisible", "", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLineVisible(bool)", { "setLineVisible", "bool", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMax(QVariant)", { "setMax", "QVariant&", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMin(QVariant)", { "setMin", "QVariant&", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinorGridLineColor(QColor&)", { "setMinorGridLineColor", "QColor&", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinorGridLinePen(QPen&)", { "setMinorGridLinePen", "QPen&", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinorGridLineVisible()", { "setMinorGridLineVisible", "", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinorGridLineVisible(bool)", { "setMinorGridLineVisible", "bool", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRange(QVariant,QVariant)", { "setRange", "QVariant&,QVariant&", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setReverse()", { "setReverse", "", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setReverse(bool)", { "setReverse", "bool", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShadesBorderColor(QColor)", { "setShadesBorderColor", "QColor", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShadesBrush(QBrush&)", { "setShadesBrush", "QBrush&", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShadesColor(QColor)", { "setShadesColor", "QColor", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShadesPen(QPen&)", { "setShadesPen", "QPen&", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShadesVisible()", { "setShadesVisible", "", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShadesVisible(bool)", { "setShadesVisible", "bool", "void", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTitleBrush(QBrush&)", { "setTitleBrush", "QBrush&", "void", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTitleFont(QFont&)", { "setTitleFont", "QFont&", "void", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTitleText(QString)", { "setTitleText", "QString&", "void", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTitleVisible()", { "setTitleVisible", "", "void", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTitleVisible(bool)", { "setTitleVisible", "bool", "void", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVisible()", { "setVisible", "", "void", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVisible(bool)", { "setVisible", "bool", "void", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shadesBorderColor()", { "shadesBorderColor", "", "QColor", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shadesBrush()", { "shadesBrush", "", "QBrush", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shadesColor()", { "shadesColor", "", "QColor", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shadesPen()", { "shadesPen", "", "QPen", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shadesVisible()", { "shadesVisible", "", "bool", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "show()", { "show", "", "void", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "titleBrush()", { "titleBrush", "", "QBrush", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "titleFont()", { "titleFont", "", "QFont", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "titleText()", { "titleText", "", "QString", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "AxisType", 65, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractAxis::plastiqSignals = {
    { "colorChanged(QColor)", { "colorChanged", "QColor", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "gridLineColorChanged(QColor&)", { "gridLineColorChanged", "QColor&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "gridLinePenChanged(QPen&)", { "gridLinePenChanged", "QPen&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "gridVisibleChanged(bool)", { "gridVisibleChanged", "bool", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelsAngleChanged(int)", { "labelsAngleChanged", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelsBrushChanged(QBrush&)", { "labelsBrushChanged", "QBrush&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelsColorChanged(QColor)", { "labelsColorChanged", "QColor", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelsFontChanged(QFont&)", { "labelsFontChanged", "QFont&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelsVisibleChanged(bool)", { "labelsVisibleChanged", "bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "linePenChanged(QPen&)", { "linePenChanged", "QPen&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "lineVisibleChanged(bool)", { "lineVisibleChanged", "bool", "void", 10, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "minorGridLineColorChanged(QColor&)", { "minorGridLineColorChanged", "QColor&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "minorGridLinePenChanged(QPen&)", { "minorGridLinePenChanged", "QPen&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "minorGridVisibleChanged(bool)", { "minorGridVisibleChanged", "bool", "void", 13, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "reverseChanged(bool)", { "reverseChanged", "bool", "void", 14, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "shadesBorderColorChanged(QColor)", { "shadesBorderColorChanged", "QColor", "void", 15, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "shadesBrushChanged(QBrush&)", { "shadesBrushChanged", "QBrush&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "shadesColorChanged(QColor)", { "shadesColorChanged", "QColor", "void", 17, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "shadesPenChanged(QPen&)", { "shadesPenChanged", "QPen&", "void", 18, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "shadesVisibleChanged(bool)", { "shadesVisibleChanged", "bool", "void", 19, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "titleBrushChanged(QBrush&)", { "titleBrushChanged", "QBrush&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "titleFontChanged(QFont&)", { "titleFontChanged", "QFont&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "titleTextChanged(QString)", { "titleTextChanged", "QString&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "titleVisibleChanged(bool)", { "titleVisibleChanged", "bool", "void", 23, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "visibleChanged(bool)", { "visibleChanged", "bool", "void", 24, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractAxis::plastiqProperties = {
    { "alignment", { "alignment", "long", "", "alignment" } },
    { "color", { "color", "QColor", "setLinePenColor", "linePenColor" } },
    { "gridLineColor", { "gridLineColor", "QColor", "setGridLineColor", "gridLineColor" } },
    { "gridLinePen", { "gridLinePen", "QPen", "setGridLinePen", "gridLinePen" } },
    { "gridVisible", { "gridVisible", "bool", "setGridLineVisible", "isGridLineVisible" } },
    { "labelsAngle", { "labelsAngle", "int", "setLabelsAngle", "labelsAngle" } },
    { "labelsBrush", { "labelsBrush", "QBrush", "setLabelsBrush", "labelsBrush" } },
    { "labelsColor", { "labelsColor", "QColor", "setLabelsColor", "labelsColor" } },
    { "labelsFont", { "labelsFont", "QFont", "setLabelsFont", "labelsFont" } },
    { "labelsVisible", { "labelsVisible", "bool", "setLabelsVisible", "labelsVisible" } },
    { "linePen", { "linePen", "QPen", "setLinePen", "linePen" } },
    { "lineVisible", { "lineVisible", "bool", "setLineVisible", "isLineVisible" } },
    { "minorGridLineColor", { "minorGridLineColor", "QColor", "setMinorGridLineColor", "minorGridLineColor" } },
    { "minorGridLinePen", { "minorGridLinePen", "QPen", "setMinorGridLinePen", "minorGridLinePen" } },
    { "minorGridVisible", { "minorGridVisible", "bool", "setMinorGridLineVisible", "isMinorGridLineVisible" } },
    { "orientation", { "orientation", "long", "", "orientation" } },
    { "reverse", { "reverse", "bool", "setReverse", "isReverse" } },
    { "shadesBorderColor", { "shadesBorderColor", "QColor", "setShadesBorderColor", "shadesBorderColor" } },
    { "shadesBrush", { "shadesBrush", "QBrush", "setShadesBrush", "shadesBrush" } },
    { "shadesColor", { "shadesColor", "QColor", "setShadesColor", "shadesColor" } },
    { "shadesPen", { "shadesPen", "QPen", "setShadesPen", "shadesPen" } },
    { "shadesVisible", { "shadesVisible", "bool", "setShadesVisible", "shadesVisible" } },
    { "titleBrush", { "titleBrush", "QBrush", "setTitleBrush", "titleBrush" } },
    { "titleFont", { "titleFont", "QFont", "setTitleFont", "titleFont" } },
    { "titleText", { "titleText", "QString", "setTitleText", "titleText" } },
    { "titleVisible", { "titleVisible", "bool", "setTitleVisible", "isTitleVisible" } },
    { "visible", { "visible", "bool", "setVisible", "isVisible" } },

};

QHash<QByteArray, long> PlastiQQAbstractAxis::plastiqConstants = {

    /* QAbstractAxis::AxisType */
   { "AxisTypeNoAxis", QAbstractAxis::AxisTypeNoAxis },
   { "AxisTypeValue", QAbstractAxis::AxisTypeValue },
   { "AxisTypeBarCategory", QAbstractAxis::AxisTypeBarCategory },
   { "AxisTypeCategory", QAbstractAxis::AxisTypeCategory },
   { "AxisTypeDateTime", QAbstractAxis::AxisTypeDateTime },
   { "AxisTypeLogValue", QAbstractAxis::AxisTypeLogValue },

};

QVector<PlastiQMetaObject*> PlastiQQAbstractAxis::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractAxis::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAbstractAxis::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QAbstractAxis", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractAxis::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAbstractAxis::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAbstractAxis *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAbstractAxis *p = new PlastiQQAbstractAxis();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractAxis *p = new PlastiQQAbstractAxis();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 66) {
            id -= 66;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractAxis *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractAxis*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->alignment(); // HACK for Qt::Alignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { /* COPY OBJECT */
            QColor *_r = new QColor(o->gridLineColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QPen *_r = new QPen(o->gridLinePen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: o->hide();
                stack[0].type = PlastiQ::Void; break;
        case 4: { bool _r = o->isGridLineVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isLineVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->isMinorGridLineVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->isReverse();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isTitleVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { int _r = o->labelsAngle();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->labelsBrush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QColor *_r = new QColor(o->labelsColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { /* COPY OBJECT */
            QFont *_r = new QFont(o->labelsFont());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { bool _r = o->labelsVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { /* COPY OBJECT */
            QPen *_r = new QPen(o->linePen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { /* COPY OBJECT */
            QColor *_r = new QColor(o->linePenColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { /* COPY OBJECT */
            QColor *_r = new QColor(o->minorGridLineColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { /* COPY OBJECT */
            QPen *_r = new QPen(o->minorGridLinePen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: { qint64 _r = o->orientation(); // HACK for Qt::Orientation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 20: o->setGridLineColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setGridLinePen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setGridLineVisible();
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setGridLineVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setLabelsAngle(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setLabelsBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setLabelsColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setLabelsFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setLabelsVisible();
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setLabelsVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setLinePen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setLinePenColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setLineVisible();
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setLineVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setMax(stack[1].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setMin(stack[1].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setMinorGridLineColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setMinorGridLinePen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setMinorGridLineVisible();
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setMinorGridLineVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setRange(stack[1].s_variant,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setReverse();
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setReverse(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 43: o->setShadesBorderColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 44: o->setShadesBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 45: o->setShadesColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 46: o->setShadesPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 47: o->setShadesVisible();
                stack[0].type = PlastiQ::Void; break;
        case 48: o->setShadesVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 49: o->setTitleBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 50: o->setTitleFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 51: o->setTitleText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 52: o->setTitleVisible();
                stack[0].type = PlastiQ::Void; break;
        case 53: o->setTitleVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 54: o->setVisible();
                stack[0].type = PlastiQ::Void; break;
        case 55: o->setVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 56: { /* COPY OBJECT */
            QColor *_r = new QColor(o->shadesBorderColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 57: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->shadesBrush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 58: { /* COPY OBJECT */
            QColor *_r = new QColor(o->shadesColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 59: { /* COPY OBJECT */
            QPen *_r = new QPen(o->shadesPen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 60: { bool _r = o->shadesVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 61: o->show();
                stack[0].type = PlastiQ::Void; break;
        case 62: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->titleBrush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 63: { /* COPY OBJECT */
            QFont *_r = new QFont(o->titleFont());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 64: { QString _r = o->titleText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 65: { qint64 _r = o->type(); // HACK for AxisType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 25) {
            id -= 25;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractAxis *o = reinterpret_cast<QAbstractAxis*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAbstractAxis::colorChanged,
            [=](QColor arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "colorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAbstractAxis::gridLineColorChanged,
            [=](const QColor& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "gridLineColorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QAbstractAxis::gridLinePenChanged,
            [=](const QPen& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QPen(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QPen";
                PlastiQ_activate(sender, "gridLinePenChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QAbstractAxis::gridVisibleChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "gridVisibleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QAbstractAxis::labelsAngleChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "labelsAngleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QAbstractAxis::labelsBrushChanged,
            [=](const QBrush& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QBrush(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QBrush";
                PlastiQ_activate(sender, "labelsBrushChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QAbstractAxis::labelsColorChanged,
            [=](QColor arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "labelsColorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QAbstractAxis::labelsFontChanged,
            [=](const QFont& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QFont(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QFont";
                PlastiQ_activate(sender, "labelsFontChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QAbstractAxis::labelsVisibleChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "labelsVisibleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QAbstractAxis::linePenChanged,
            [=](const QPen& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QPen(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QPen";
                PlastiQ_activate(sender, "linePenChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 10: QObject::connect(o, &QAbstractAxis::lineVisibleChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "lineVisibleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 11: QObject::connect(o, &QAbstractAxis::minorGridLineColorChanged,
            [=](const QColor& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "minorGridLineColorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 12: QObject::connect(o, &QAbstractAxis::minorGridLinePenChanged,
            [=](const QPen& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QPen(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QPen";
                PlastiQ_activate(sender, "minorGridLinePenChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 13: QObject::connect(o, &QAbstractAxis::minorGridVisibleChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "minorGridVisibleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 14: QObject::connect(o, &QAbstractAxis::reverseChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "reverseChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 15: QObject::connect(o, &QAbstractAxis::shadesBorderColorChanged,
            [=](QColor arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "shadesBorderColorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 16: QObject::connect(o, &QAbstractAxis::shadesBrushChanged,
            [=](const QBrush& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QBrush(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QBrush";
                PlastiQ_activate(sender, "shadesBrushChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 17: QObject::connect(o, &QAbstractAxis::shadesColorChanged,
            [=](QColor arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "shadesColorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 18: QObject::connect(o, &QAbstractAxis::shadesPenChanged,
            [=](const QPen& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QPen(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QPen";
                PlastiQ_activate(sender, "shadesPenChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 19: QObject::connect(o, &QAbstractAxis::shadesVisibleChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "shadesVisibleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 20: QObject::connect(o, &QAbstractAxis::titleBrushChanged,
            [=](const QBrush& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QBrush(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QBrush";
                PlastiQ_activate(sender, "titleBrushChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 21: QObject::connect(o, &QAbstractAxis::titleFontChanged,
            [=](const QFont& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QFont(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QFont";
                PlastiQ_activate(sender, "titleFontChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 22: QObject::connect(o, &QAbstractAxis::titleTextChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "titleTextChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 23: QObject::connect(o, &QAbstractAxis::titleVisibleChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "titleVisibleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 24: QObject::connect(o, &QAbstractAxis::visibleChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "visibleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractAxis *o = reinterpret_cast<QAbstractAxis*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractAxis *o = reinterpret_cast<QAbstractAxis*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractAxis *o = reinterpret_cast<QAbstractAxis*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractAxis::~PlastiQQAbstractAxis() {
    QAbstractAxis* o = reinterpret_cast<QAbstractAxis*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

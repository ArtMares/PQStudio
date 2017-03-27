#include "plastiqmethod.h"
#include "plastiqqpieslice.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QPieSlice> 
#include <QColor>
#include <QBrush>
#include <QString>
#include <QFont>
#include <QPen>
#include <QPieSeries>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQPieSlice::plastiqConstructors = {
    { "QPieSlice()", { "QPieSlice", "", "QPieSlice*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPieSlice(QObject*)", { "QPieSlice", "QObject*", "QPieSlice*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPieSlice(QString,double)", { "QPieSlice", "QString,qreal", "QPieSlice*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPieSlice(QString,double,QObject*)", { "QPieSlice", "QString,qreal,QObject*", "QPieSlice*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPieSlice::plastiqMethods = {
    { "angleSpan()", { "angleSpan", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "borderColor()", { "borderColor", "", "QColor", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "borderWidth()", { "borderWidth", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brush()", { "brush", "", "QBrush", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "color()", { "color", "", "QColor", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "explodeDistanceFactor()", { "explodeDistanceFactor", "", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isExploded()", { "isExploded", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isLabelVisible()", { "isLabelVisible", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "label()", { "label", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelArmLengthFactor()", { "labelArmLengthFactor", "", "qreal", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelBrush()", { "labelBrush", "", "QBrush", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelColor()", { "labelColor", "", "QColor", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelFont()", { "labelFont", "", "QFont", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelPosition()", { "labelPosition", "", "LabelPosition", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pen()", { "pen", "", "QPen", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "percentage()", { "percentage", "", "qreal", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "series()", { "series", "", "QPieSeries*", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBorderColor(QColor)", { "setBorderColor", "QColor", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBorderWidth(int)", { "setBorderWidth", "int", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrush(QBrush&)", { "setBrush", "QBrush&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColor(QColor)", { "setColor", "QColor", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setExplodeDistanceFactor(double)", { "setExplodeDistanceFactor", "qreal", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setExploded()", { "setExploded", "", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setExploded(bool)", { "setExploded", "bool", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabel(QString)", { "setLabel", "QString", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelArmLengthFactor(double)", { "setLabelArmLengthFactor", "qreal", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelBrush(QBrush&)", { "setLabelBrush", "QBrush&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelColor(QColor)", { "setLabelColor", "QColor", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelFont(QFont&)", { "setLabelFont", "QFont&", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelPosition(enum)", { "setLabelPosition", "LabelPosition", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelVisible()", { "setLabelVisible", "", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelVisible(bool)", { "setLabelVisible", "bool", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPen(QPen&)", { "setPen", "QPen&", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setValue(double)", { "setValue", "qreal", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startAngle()", { "startAngle", "", "qreal", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value()", { "value", "", "qreal", 35, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPieSlice::plastiqSignals = {
    { "angleSpanChanged()", { "angleSpanChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "borderColorChanged()", { "borderColorChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "borderWidthChanged()", { "borderWidthChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "brushChanged()", { "brushChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "clicked()", { "clicked", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "colorChanged()", { "colorChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "doubleClicked()", { "doubleClicked", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "hovered(bool)", { "hovered", "bool", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelBrushChanged()", { "labelBrushChanged", "", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelChanged()", { "labelChanged", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelColorChanged()", { "labelColorChanged", "", "void", 10, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelFontChanged()", { "labelFontChanged", "", "void", 11, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelVisibleChanged()", { "labelVisibleChanged", "", "void", 12, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "penChanged()", { "penChanged", "", "void", 13, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "percentageChanged()", { "percentageChanged", "", "void", 14, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pressed()", { "pressed", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "released()", { "released", "", "void", 16, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "startAngleChanged()", { "startAngleChanged", "", "void", 17, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "valueChanged()", { "valueChanged", "", "void", 18, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQPieSlice::plastiqProperties = {
    { "angleSpan", { "angleSpan", "qreal", "angleSpanChanged", "angleSpan" } },
    { "borderColor", { "borderColor", "QColor", "setBorderColor", "borderColor" } },
    { "borderWidth", { "borderWidth", "int", "setBorderWidth", "borderWidth" } },
    { "brush", { "brush", "QBrush", "setBrush", "brush" } },
    { "color", { "color", "QColor", "setColor", "color" } },
    { "explodeDistanceFactor", { "explodeDistanceFactor", "qreal", "setExplodeDistanceFactor", "explodeDistanceFactor" } },
    { "exploded", { "exploded", "bool", "setExploded", "isExploded" } },
    { "label", { "label", "QString", "setLabel", "label" } },
    { "labelArmLengthFactor", { "labelArmLengthFactor", "qreal", "setLabelArmLengthFactor", "labelArmLengthFactor" } },
    { "labelBrush", { "labelBrush", "QBrush", "setLabelBrush", "labelBrush" } },
    { "labelColor", { "labelColor", "QColor", "setLabelColor", "labelColor" } },
    { "labelFont", { "labelFont", "QFont", "setLabelFont", "labelFont" } },
    { "labelPosition", { "labelPosition", "long", "setLabelPosition", "labelPosition" } },
    { "labelVisible", { "labelVisible", "bool", "setLabelVisible", "isLabelVisible" } },
    { "pen", { "pen", "QPen", "setPen", "pen" } },
    { "percentage", { "percentage", "qreal", "percentageChanged", "percentage" } },
    { "startAngle", { "startAngle", "qreal", "startAngleChanged", "startAngle" } },
    { "value", { "value", "qreal", "setValue", "value" } },

};

QHash<QByteArray, long> PlastiQQPieSlice::plastiqConstants = {

    /* QPieSlice::LabelPosition */
   { "LabelOutside", QPieSlice::LabelOutside },
   { "LabelInsideHorizontal", QPieSlice::LabelInsideHorizontal },
   { "LabelInsideTangential", QPieSlice::LabelInsideTangential },
   { "LabelInsideNormal", QPieSlice::LabelInsideNormal },

};

QVector<PlastiQMetaObject*> PlastiQQPieSlice::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPieSlice::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQPieSlice::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QPieSlice", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPieSlice::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPieSlice::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPieSlice *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPieSlice(); break;
        case 1: o = new QPieSlice(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new QPieSlice(stack[1].s_string,
                    stack[2].s_double); break;
        case 3: o = new QPieSlice(stack[1].s_string,
                    stack[2].s_double,
                    reinterpret_cast<QObject*>(stack[3].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPieSlice *p = new PlastiQQPieSlice();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPieSlice *p = new PlastiQQPieSlice();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 36) {
            id -= 36;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPieSlice *o = sc ? Q_NULLPTR : reinterpret_cast<QPieSlice*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->angleSpan();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { /* COPY OBJECT */
            QColor *_r = new QColor(o->borderColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { int _r = o->borderWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QColor *_r = new QColor(o->color());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { double _r = o->explodeDistanceFactor();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: { bool _r = o->isExploded();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->isLabelVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { QString _r = o->label();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { double _r = o->labelArmLengthFactor();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 10: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->labelBrush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QColor *_r = new QColor(o->labelColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QFont *_r = new QFont(o->labelFont());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { qint64 _r = o->labelPosition(); // HACK for LabelPosition 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 14: { /* COPY OBJECT */
            QPen *_r = new QPen(o->pen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { double _r = o->percentage();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 16: { QPieSeries* _r = o->series();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QPieSeries"; } break;
        case 17: o->setBorderColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setBorderWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setExplodeDistanceFactor(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setExploded();
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setExploded(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setLabel(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setLabelArmLengthFactor(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setLabelBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setLabelColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setLabelFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setLabelPosition(QPieSlice::LabelPosition(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setLabelVisible();
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setLabelVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setValue(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 34: { double _r = o->startAngle();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 35: { double _r = o->value();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 19) {
            id -= 19;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QPieSlice *o = reinterpret_cast<QPieSlice*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QPieSlice::angleSpanChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "angleSpanChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QPieSlice::borderColorChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "borderColorChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QPieSlice::borderWidthChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "borderWidthChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QPieSlice::brushChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "brushChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QPieSlice::clicked,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "clicked", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QPieSlice::colorChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "colorChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QPieSlice::doubleClicked,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "doubleClicked", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QPieSlice::hovered,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "hovered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QPieSlice::labelBrushChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "labelBrushChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QPieSlice::labelChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "labelChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 10: QObject::connect(o, &QPieSlice::labelColorChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "labelColorChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 11: QObject::connect(o, &QPieSlice::labelFontChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "labelFontChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 12: QObject::connect(o, &QPieSlice::labelVisibleChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "labelVisibleChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 13: QObject::connect(o, &QPieSlice::penChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "penChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 14: QObject::connect(o, &QPieSlice::percentageChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "percentageChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 15: QObject::connect(o, &QPieSlice::pressed,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "pressed", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 16: QObject::connect(o, &QPieSlice::released,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "released", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 17: QObject::connect(o, &QPieSlice::startAngleChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "startAngleChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 18: QObject::connect(o, &QPieSlice::valueChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "valueChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QPieSlice *o = reinterpret_cast<QPieSlice*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QPieSlice *o = reinterpret_cast<QPieSlice*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QPieSlice *o = reinterpret_cast<QPieSlice*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPieSlice::~PlastiQQPieSlice() {
    QPieSlice* o = reinterpret_cast<QPieSlice*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

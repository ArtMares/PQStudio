#include "plastiqmethod.h"
#include "plastiqqbarset.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QBarSet> 
#include <QColor>
#include <QBrush>
#include <QString>
#include <QFont>
#include <QPen>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQBarSet::plastiqConstructors = {
    { "QBarSet(const QString)", { "QBarSet", "QString", "QBarSet*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBarSet(const QString,QObject*)", { "QBarSet", "QString,QObject*", "QBarSet*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBarSet::plastiqMethods = {
    { "append(const qreal)", { "append", "qreal", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(QList<qreal>&)", { "append", "QList<qreal>&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "at(const int)", { "at", "int", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "borderColor()", { "borderColor", "", "QColor", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brush()", { "brush", "", "QBrush", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "color()", { "color", "", "QColor", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(const int,const qreal)", { "insert", "int,qreal", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "label()", { "label", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelBrush()", { "labelBrush", "", "QBrush", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelColor()", { "labelColor", "", "QColor", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelFont()", { "labelFont", "", "QFont", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pen()", { "pen", "", "QPen", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(const int)", { "remove", "int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(const int,const int)", { "remove", "int,int", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replace(const int,const qreal)", { "replace", "int,qreal", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBorderColor(QColor)", { "setBorderColor", "QColor", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrush(QBrush&)", { "setBrush", "QBrush&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColor(QColor)", { "setColor", "QColor", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabel(const QString)", { "setLabel", "QString", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelBrush(QBrush&)", { "setLabelBrush", "QBrush&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelColor(QColor)", { "setLabelColor", "QColor", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelFont(QFont&)", { "setLabelFont", "QFont&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPen(QPen&)", { "setPen", "QPen&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sum()", { "sum", "", "qreal", 24, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBarSet::plastiqSignals = {
    { "borderColorChanged(QColor)", { "borderColorChanged", "QColor", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "brushChanged()", { "brushChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "clicked(int)", { "clicked", "int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "colorChanged(QColor)", { "colorChanged", "QColor", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "doubleClicked(int)", { "doubleClicked", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "hovered(bool,int)", { "hovered", "bool,int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelBrushChanged()", { "labelBrushChanged", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelChanged()", { "labelChanged", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelColorChanged(QColor)", { "labelColorChanged", "QColor", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelFontChanged()", { "labelFontChanged", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "penChanged()", { "penChanged", "", "void", 10, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pressed(int)", { "pressed", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "released(int)", { "released", "int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "valueChanged(int)", { "valueChanged", "int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "valuesAdded(int,int)", { "valuesAdded", "int,int", "void", 14, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "valuesRemoved(int,int)", { "valuesRemoved", "int,int", "void", 15, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQBarSet::plastiqProperties = {
    { "borderColor", { "borderColor", "QColor", "setBorderColor", "borderColor" } },
    { "brush", { "brush", "QBrush", "setBrush", "brush" } },
    { "color", { "color", "QColor", "setColor", "color" } },
    { "label", { "label", "QString", "setLabel", "label" } },
    { "labelBrush", { "labelBrush", "QBrush", "setLabelBrush", "labelBrush" } },
    { "labelColor", { "labelColor", "QColor", "setLabelColor", "labelColor" } },
    { "labelFont", { "labelFont", "QFont", "setLabelFont", "labelFont" } },
    { "pen", { "pen", "QPen", "setPen", "pen" } },

};

QHash<QByteArray, long> PlastiQQBarSet::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQBarSet::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQBarSet::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQBarSet::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QBarSet", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQBarSet::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQBarSet::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QBarSet *o = Q_NULLPTR;

        switch(id) {
        /*case 0: o = new QBarSet(UNSUPPORTED_TYPE_const QString); break;*/
        /*case 1: o = new QBarSet(UNSUPPORTED_TYPE_const QString,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQBarSet *p = new PlastiQQBarSet();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQBarSet *p = new PlastiQQBarSet();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 25) {
            id -= 25;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QBarSet *o = sc ? Q_NULLPTR : reinterpret_cast<QBarSet*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->append(UNSUPPORTED_TYPE_const qreal) | ret: `void` */ break;
        case 1: o->append((*reinterpret_cast< QList<qreal>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: /* o->at(UNSUPPORTED_TYPE_const int) | ret: `qreal` */ break;
        case 3: { /* COPY OBJECT */
            QColor *_r = new QColor(o->borderColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QColor *_r = new QColor(o->color());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: /* o->insert(UNSUPPORTED_TYPE_const int,
                    UNSUPPORTED_TYPE_const qreal) | ret: `void` */ break;
        case 8: { QString _r = o->label();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->labelBrush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QColor *_r = new QColor(o->labelColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QFont *_r = new QFont(o->labelFont());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QPen *_r = new QPen(o->pen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: /* o->remove(UNSUPPORTED_TYPE_const int) | ret: `void` */ break;
        case 14: /* o->remove(UNSUPPORTED_TYPE_const int,
                    UNSUPPORTED_TYPE_const int) | ret: `void` */ break;
        case 15: /* o->replace(UNSUPPORTED_TYPE_const int,
                    UNSUPPORTED_TYPE_const qreal) | ret: `void` */ break;
        case 16: o->setBorderColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 19: /* o->setLabel(UNSUPPORTED_TYPE_const QString) | ret: `void` */ break;
        case 20: o->setLabelBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setLabelColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setLabelFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 24: { double _r = o->sum();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 16) {
            id -= 16;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QBarSet *o = reinterpret_cast<QBarSet*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QBarSet::borderColorChanged,
            [=](QColor arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "borderColorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QBarSet::brushChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "brushChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QBarSet::clicked,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "clicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QBarSet::colorChanged,
            [=](QColor arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "colorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QBarSet::doubleClicked,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "doubleClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QBarSet::hovered,
            [=](bool arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "hovered", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QBarSet::labelBrushChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "labelBrushChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QBarSet::labelChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "labelChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QBarSet::labelColorChanged,
            [=](QColor arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QColor(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QColor";
                PlastiQ_activate(sender, "labelColorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QBarSet::labelFontChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "labelFontChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 10: QObject::connect(o, &QBarSet::penChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "penChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 11: QObject::connect(o, &QBarSet::pressed,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "pressed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 12: QObject::connect(o, &QBarSet::released,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "released", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 13: QObject::connect(o, &QBarSet::valueChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "valueChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 14: QObject::connect(o, &QBarSet::valuesAdded,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "valuesAdded", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 15: QObject::connect(o, &QBarSet::valuesRemoved,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "valuesRemoved", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QBarSet *o = reinterpret_cast<QBarSet*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QBarSet *o = reinterpret_cast<QBarSet*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QBarSet *o = reinterpret_cast<QBarSet*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQBarSet::~PlastiQQBarSet() {
    QBarSet* o = reinterpret_cast<QBarSet*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

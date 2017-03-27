#include "plastiqmethod.h"
#include "plastiqqboxset.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QBoxSet> 
#include <QBrush>
#include <QString>
#include <QPen>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQBoxSet::plastiqConstructors = {
    { "QBoxSet()", { "QBoxSet", "", "QBoxSet*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBoxSet(const QString)", { "QBoxSet", "QString", "QBoxSet*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBoxSet(const QString,QObject*)", { "QBoxSet", "QString,QObject*", "QBoxSet*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBoxSet(const qreal,const qreal,const qreal,const qreal,const qreal)", { "QBoxSet", "qreal,qreal,qreal,qreal,qreal", "QBoxSet*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBoxSet(const qreal,const qreal,const qreal,const qreal,const qreal,const QString)", { "QBoxSet", "qreal,qreal,qreal,qreal,qreal,QString", "QBoxSet*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBoxSet(const qreal,const qreal,const qreal,const qreal,const qreal,const QString,QObject*)", { "QBoxSet", "qreal,qreal,qreal,qreal,qreal,QString,QObject*", "QBoxSet*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBoxSet::plastiqMethods = {
    { "append(const qreal)", { "append", "qreal", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "append(QList<qreal>&)", { "append", "QList<qreal>&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "at(const int)", { "at", "int", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brush()", { "brush", "", "QBrush", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "label()", { "label", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pen()", { "pen", "", "QPen", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrush(QBrush&)", { "setBrush", "QBrush&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabel(const QString)", { "setLabel", "QString", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPen(QPen&)", { "setPen", "QPen&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setValue(const int,const qreal)", { "setValue", "int,qreal", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBoxSet::plastiqSignals = {
    { "brushChanged()", { "brushChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "cleared()", { "cleared", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "clicked()", { "clicked", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "doubleClicked()", { "doubleClicked", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "hovered(bool)", { "hovered", "bool", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "penChanged()", { "penChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pressed()", { "pressed", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "released()", { "released", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "valueChanged(int)", { "valueChanged", "int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "valuesChanged()", { "valuesChanged", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQBoxSet::plastiqProperties = {
    { "brush", { "brush", "QBrush", "setBrush", "brush" } },
    { "pen", { "pen", "QPen", "setPen", "pen" } },

};

QHash<QByteArray, long> PlastiQQBoxSet::plastiqConstants = {

    /* QBoxSet::ValuePositions */
   { "LowerExtreme", QBoxSet::LowerExtreme },
   { "LowerQuartile", QBoxSet::LowerQuartile },
   { "Median", QBoxSet::Median },
   { "UpperQuartile", QBoxSet::UpperQuartile },
   { "UpperExtreme", QBoxSet::UpperExtreme },

};

QVector<PlastiQMetaObject*> PlastiQQBoxSet::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQBoxSet::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQBoxSet::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QBoxSet", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQBoxSet::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQBoxSet::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QBoxSet *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QBoxSet(); break;
        /*case 1: o = new QBoxSet(UNSUPPORTED_TYPE_const QString); break;*/
        /*case 2: o = new QBoxSet(UNSUPPORTED_TYPE_const QString,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;*/
        /*case 3: o = new QBoxSet(UNSUPPORTED_TYPE_const qreal,
                    UNSUPPORTED_TYPE_const qreal,
                    UNSUPPORTED_TYPE_const qreal,
                    UNSUPPORTED_TYPE_const qreal,
                    UNSUPPORTED_TYPE_const qreal); break;*/
        /*case 4: o = new QBoxSet(UNSUPPORTED_TYPE_const qreal,
                    UNSUPPORTED_TYPE_const qreal,
                    UNSUPPORTED_TYPE_const qreal,
                    UNSUPPORTED_TYPE_const qreal,
                    UNSUPPORTED_TYPE_const qreal,
                    UNSUPPORTED_TYPE_const QString); break;*/
        /*case 5: o = new QBoxSet(UNSUPPORTED_TYPE_const qreal,
                    UNSUPPORTED_TYPE_const qreal,
                    UNSUPPORTED_TYPE_const qreal,
                    UNSUPPORTED_TYPE_const qreal,
                    UNSUPPORTED_TYPE_const qreal,
                    UNSUPPORTED_TYPE_const QString,
                    reinterpret_cast<QObject*>(stack[7].s_voidp)); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQBoxSet *p = new PlastiQQBoxSet();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQBoxSet *p = new PlastiQQBoxSet();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QBoxSet *o = sc ? Q_NULLPTR : reinterpret_cast<QBoxSet*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->append(UNSUPPORTED_TYPE_const qreal) | ret: `void` */ break;
        case 1: o->append((*reinterpret_cast< QList<qreal>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: /* o->at(UNSUPPORTED_TYPE_const int) | ret: `qreal` */ break;
        case 3: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 5: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { QString _r = o->label();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { /* COPY OBJECT */
            QPen *_r = new QPen(o->pen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: o->setBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 9: /* o->setLabel(UNSUPPORTED_TYPE_const QString) | ret: `void` */ break;
        case 10: o->setPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: /* o->setValue(UNSUPPORTED_TYPE_const int,
                    UNSUPPORTED_TYPE_const qreal) | ret: `void` */ break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 10) {
            id -= 10;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QBoxSet *o = reinterpret_cast<QBoxSet*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QBoxSet::brushChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "brushChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QBoxSet::cleared,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "cleared", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QBoxSet::clicked,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "clicked", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QBoxSet::doubleClicked,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "doubleClicked", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QBoxSet::hovered,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "hovered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QBoxSet::penChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "penChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QBoxSet::pressed,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "pressed", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QBoxSet::released,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "released", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QBoxSet::valueChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "valueChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QBoxSet::valuesChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "valuesChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QBoxSet *o = reinterpret_cast<QBoxSet*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QBoxSet *o = reinterpret_cast<QBoxSet*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QBoxSet *o = reinterpret_cast<QBoxSet*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQBoxSet::~PlastiQQBoxSet() {
    QBoxSet* o = reinterpret_cast<QBoxSet*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

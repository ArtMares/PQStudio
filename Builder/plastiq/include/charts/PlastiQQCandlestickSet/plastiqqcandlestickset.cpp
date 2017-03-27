#include "plastiqmethod.h"
#include "plastiqqcandlestickset.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QCandlestickSet> 
#include <QBrush>
#include <QPen>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQCandlestickSet::plastiqConstructors = {
    { "QCandlestickSet()", { "QCandlestickSet", "", "QCandlestickSet*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCandlestickSet(double)", { "QCandlestickSet", "qreal", "QCandlestickSet*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCandlestickSet(double,QObject*)", { "QCandlestickSet", "qreal,QObject*", "QCandlestickSet*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCandlestickSet(double,double,double,double)", { "QCandlestickSet", "qreal,qreal,qreal,qreal", "QCandlestickSet*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCandlestickSet(double,double,double,double,double)", { "QCandlestickSet", "qreal,qreal,qreal,qreal,qreal", "QCandlestickSet*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCandlestickSet(double,double,double,double,double,QObject*)", { "QCandlestickSet", "qreal,qreal,qreal,qreal,qreal,QObject*", "QCandlestickSet*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCandlestickSet::plastiqMethods = {
    { "brush()", { "brush", "", "QBrush", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "close()", { "close", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "high()", { "high", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "low()", { "low", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "open()", { "open", "", "qreal", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pen()", { "pen", "", "QPen", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrush(QBrush&)", { "setBrush", "QBrush&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setClose(double)", { "setClose", "qreal", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHigh(double)", { "setHigh", "qreal", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLow(double)", { "setLow", "qreal", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOpen(double)", { "setOpen", "qreal", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPen(QPen&)", { "setPen", "QPen&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTimestamp(double)", { "setTimestamp", "qreal", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timestamp()", { "timestamp", "", "qreal", 13, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCandlestickSet::plastiqSignals = {
    { "brushChanged()", { "brushChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "clicked()", { "clicked", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "closeChanged()", { "closeChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "doubleClicked()", { "doubleClicked", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "highChanged()", { "highChanged", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "hovered(bool)", { "hovered", "bool", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "lowChanged()", { "lowChanged", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "openChanged()", { "openChanged", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "penChanged()", { "penChanged", "", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pressed()", { "pressed", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "released()", { "released", "", "void", 10, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "timestampChanged()", { "timestampChanged", "", "void", 11, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCandlestickSet::plastiqProperties = {
    { "brush", { "brush", "QBrush", "setBrush", "brush" } },
    { "close", { "close", "qreal", "setClose", "close" } },
    { "high", { "high", "qreal", "setHigh", "high" } },
    { "low", { "low", "qreal", "setLow", "low" } },
    { "open", { "open", "qreal", "setOpen", "open" } },
    { "pen", { "pen", "QPen", "setPen", "pen" } },
    { "timestamp", { "timestamp", "qreal", "setTimestamp", "timestamp" } },

};

QHash<QByteArray, long> PlastiQQCandlestickSet::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCandlestickSet::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCandlestickSet::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCandlestickSet::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QCandlestickSet", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCandlestickSet::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCandlestickSet::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCandlestickSet *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QCandlestickSet(); break;
        case 1: o = new QCandlestickSet(stack[1].s_double); break;
        case 2: o = new QCandlestickSet(stack[1].s_double,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;
        case 3: o = new QCandlestickSet(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double); break;
        case 4: o = new QCandlestickSet(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double); break;
        case 5: o = new QCandlestickSet(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double,
                    reinterpret_cast<QObject*>(stack[6].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCandlestickSet *p = new PlastiQQCandlestickSet();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCandlestickSet *p = new PlastiQQCandlestickSet();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 14) {
            id -= 14;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCandlestickSet *o = sc ? Q_NULLPTR : reinterpret_cast<QCandlestickSet*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brush());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { double _r = o->close();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { double _r = o->high();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { double _r = o->low();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { double _r = o->open();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 5: { /* COPY OBJECT */
            QPen *_r = new QPen(o->pen());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: o->setBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setClose(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setHigh(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setLow(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setOpen(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setPen((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setTimestamp(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 13: { double _r = o->timestamp();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 12) {
            id -= 12;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCandlestickSet *o = reinterpret_cast<QCandlestickSet*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCandlestickSet::brushChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "brushChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QCandlestickSet::clicked,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "clicked", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QCandlestickSet::closeChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "closeChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QCandlestickSet::doubleClicked,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "doubleClicked", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QCandlestickSet::highChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "highChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QCandlestickSet::hovered,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "hovered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QCandlestickSet::lowChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "lowChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QCandlestickSet::openChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "openChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, static_cast<void (QCandlestickSet::*)()>(&QCandlestickSet::penChanged),
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "penChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QCandlestickSet::pressed,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "pressed", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 10: QObject::connect(o, &QCandlestickSet::released,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "released", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 11: QObject::connect(o, &QCandlestickSet::timestampChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "timestampChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCandlestickSet *o = reinterpret_cast<QCandlestickSet*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCandlestickSet *o = reinterpret_cast<QCandlestickSet*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCandlestickSet *o = reinterpret_cast<QCandlestickSet*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCandlestickSet::~PlastiQQCandlestickSet() {
    QCandlestickSet* o = reinterpret_cast<QCandlestickSet*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

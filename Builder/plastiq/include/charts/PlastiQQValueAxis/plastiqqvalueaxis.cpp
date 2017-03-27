#include "plastiqmethod.h"
#include "plastiqqvalueaxis.h"

#include "charts/PlastiQQAbstractAxis/plastiqqabstractaxis.h"
#include <QValueAxis> 
#include <QString>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQValueAxis::plastiqConstructors = {
    { "QValueAxis()", { "QValueAxis", "", "QValueAxis*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QValueAxis(QObject*)", { "QValueAxis", "QObject*", "QValueAxis*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQValueAxis::plastiqMethods = {
    { "labelFormat()", { "labelFormat", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "max()", { "max", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "min()", { "min", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minorTickCount()", { "minorTickCount", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelFormat(QString)", { "setLabelFormat", "QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMax(double)", { "setMax", "qreal", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMin(double)", { "setMin", "qreal", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinorTickCount(int)", { "setMinorTickCount", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRange(double,double)", { "setRange", "qreal,qreal", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTickCount(int)", { "setTickCount", "int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tickCount()", { "tickCount", "", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "applyNiceNumbers()", { "applyNiceNumbers", "", "void", 11, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQValueAxis::plastiqSignals = {
    { "labelFormatChanged(QString)", { "labelFormatChanged", "QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "maxChanged(double)", { "maxChanged", "qreal", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "minChanged(double)", { "minChanged", "qreal", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "minorTickCountChanged(int)", { "minorTickCountChanged", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "rangeChanged(double,double)", { "rangeChanged", "qreal,qreal", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "tickCountChanged(int)", { "tickCountChanged", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQValueAxis::plastiqProperties = {
    { "labelFormat", { "labelFormat", "QString", "setLabelFormat", "labelFormat" } },
    { "max", { "max", "qreal", "setMax", "max" } },
    { "min", { "min", "qreal", "setMin", "min" } },
    { "minorTickCount", { "minorTickCount", "int", "setMinorTickCount", "minorTickCount" } },
    { "tickCount", { "tickCount", "int", "setTickCount", "tickCount" } },

};

QHash<QByteArray, long> PlastiQQValueAxis::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQValueAxis::plastiqInherits = { &PlastiQQAbstractAxis::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQValueAxis::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQValueAxis::plastiq_static_metaObject = {
    { &PlastiQQAbstractAxis::plastiq_static_metaObject, &plastiqInherits, "QValueAxis", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQValueAxis::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQValueAxis::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QValueAxis *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QValueAxis(); break;
        case 1: o = new QValueAxis(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQValueAxis *p = new PlastiQQValueAxis();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQValueAxis *p = new PlastiQQValueAxis();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            PlastiQQAbstractAxis::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QValueAxis *o = sc ? Q_NULLPTR : reinterpret_cast<QValueAxis*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->labelFormat();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { double _r = o->max();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { double _r = o->min();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { int _r = o->minorTickCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: o->setLabelFormat(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setMax(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setMin(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setMinorTickCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setRange(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setTickCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: { int _r = o->tickCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: o->applyNiceNumbers();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 6) {
            id -= 6;
            PlastiQQAbstractAxis::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QValueAxis *o = reinterpret_cast<QValueAxis*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QValueAxis::labelFormatChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "labelFormatChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QValueAxis::maxChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "maxChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QValueAxis::minChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "minChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QValueAxis::minorTickCountChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "minorTickCountChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QValueAxis::rangeChanged,
            [=](qreal arg0, qreal arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                    cstack[1].s_double = arg1;
                    cstack[1].type = PlastiQ::Double; cstack[1].name = "qreal";
                PlastiQ_activate(sender, "rangeChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QValueAxis::tickCountChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "tickCountChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QValueAxis *o = reinterpret_cast<QValueAxis*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QValueAxis *o = reinterpret_cast<QValueAxis*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QValueAxis *o = reinterpret_cast<QValueAxis*>(object->plastiq_data());

        if(className == "QAbstractAxis") {
            stack[0].s_voidp = static_cast<QAbstractAxis*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQValueAxis::~PlastiQQValueAxis() {
    QValueAxis* o = reinterpret_cast<QValueAxis*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

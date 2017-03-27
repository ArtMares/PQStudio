#include "plastiqmethod.h"
#include "plastiqqlogvalueaxis.h"

#include "charts/PlastiQQAbstractAxis/plastiqqabstractaxis.h"
#include <QLogValueAxis> 
#include <QString>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQLogValueAxis::plastiqConstructors = {
    { "QLogValueAxis()", { "QLogValueAxis", "", "QLogValueAxis*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLogValueAxis(QObject*)", { "QLogValueAxis", "QObject*", "QLogValueAxis*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLogValueAxis::plastiqMethods = {
    { "base()", { "base", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelFormat()", { "labelFormat", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "max()", { "max", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "min()", { "min", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBase(double)", { "setBase", "qreal", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabelFormat(QString)", { "setLabelFormat", "QString&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMax(double)", { "setMax", "qreal", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMin(double)", { "setMin", "qreal", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRange(double,double)", { "setRange", "qreal,qreal", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLogValueAxis::plastiqSignals = {
    { "baseChanged(double)", { "baseChanged", "qreal", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "labelFormatChanged(QString)", { "labelFormatChanged", "QString&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "maxChanged(double)", { "maxChanged", "qreal", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "minChanged(double)", { "minChanged", "qreal", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "rangeChanged(double,double)", { "rangeChanged", "qreal,qreal", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQLogValueAxis::plastiqProperties = {
    { "base", { "base", "qreal", "setBase", "base" } },
    { "labelFormat", { "labelFormat", "QString", "setLabelFormat", "labelFormat" } },
    { "max", { "max", "qreal", "setMax", "max" } },
    { "min", { "min", "qreal", "setMin", "min" } },

};

QHash<QByteArray, long> PlastiQQLogValueAxis::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQLogValueAxis::plastiqInherits = { &PlastiQQAbstractAxis::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQLogValueAxis::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQLogValueAxis::plastiq_static_metaObject = {
    { &PlastiQQAbstractAxis::plastiq_static_metaObject, &plastiqInherits, "QLogValueAxis", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLogValueAxis::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQLogValueAxis::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QLogValueAxis *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QLogValueAxis(); break;
        case 1: o = new QLogValueAxis(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQLogValueAxis *p = new PlastiQQLogValueAxis();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLogValueAxis *p = new PlastiQQLogValueAxis();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            PlastiQQAbstractAxis::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLogValueAxis *o = sc ? Q_NULLPTR : reinterpret_cast<QLogValueAxis*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->base();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { QString _r = o->labelFormat();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { double _r = o->max();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { double _r = o->min();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: o->setBase(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setLabelFormat(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setMax(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setMin(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setRange(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 5) {
            id -= 5;
            PlastiQQAbstractAxis::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QLogValueAxis *o = reinterpret_cast<QLogValueAxis*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QLogValueAxis::baseChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "baseChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QLogValueAxis::labelFormatChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "labelFormatChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QLogValueAxis::maxChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "maxChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QLogValueAxis::minChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "minChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QLogValueAxis::rangeChanged,
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


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QLogValueAxis *o = reinterpret_cast<QLogValueAxis*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QLogValueAxis *o = reinterpret_cast<QLogValueAxis*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QLogValueAxis *o = reinterpret_cast<QLogValueAxis*>(object->plastiq_data());

        if(className == "QAbstractAxis") {
            stack[0].s_voidp = static_cast<QAbstractAxis*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQLogValueAxis::~PlastiQQLogValueAxis() {
    QLogValueAxis* o = reinterpret_cast<QLogValueAxis*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

#include "plastiqmethod.h"
#include "plastiqqdatetimeaxis.h"

#include "charts/PlastiQQAbstractAxis/plastiqqabstractaxis.h"
#include <QDateTimeAxis> 
#include <QString>
#include <QDateTime>
using namespace QtCharts;

QHash<QByteArray, PlastiQMethod> PlastiQQDateTimeAxis::plastiqConstructors = {
    { "QDateTimeAxis()", { "QDateTimeAxis", "", "QDateTimeAxis*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDateTimeAxis(QObject*)", { "QDateTimeAxis", "QObject*", "QDateTimeAxis*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDateTimeAxis::plastiqMethods = {
    { "format()", { "format", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "max()", { "max", "", "QDateTime", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "min()", { "min", "", "QDateTime", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFormat(QString)", { "setFormat", "QString", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMax(QDateTime)", { "setMax", "QDateTime", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMin(QDateTime)", { "setMin", "QDateTime", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRange(QDateTime,QDateTime)", { "setRange", "QDateTime,QDateTime", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTickCount(int)", { "setTickCount", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tickCount()", { "tickCount", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDateTimeAxis::plastiqSignals = {
    { "formatChanged(QString)", { "formatChanged", "QString", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "maxChanged(QDateTime)", { "maxChanged", "QDateTime", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "minChanged(QDateTime)", { "minChanged", "QDateTime", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "rangeChanged(QDateTime,QDateTime)", { "rangeChanged", "QDateTime,QDateTime", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "tickCountChanged(int)", { "tickCountChanged", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQDateTimeAxis::plastiqProperties = {
    { "format", { "format", "QString", "setFormat", "format" } },
    { "max", { "max", "QDateTime", "setMax", "max" } },
    { "min", { "min", "QDateTime", "setMin", "min" } },
    { "tickCount", { "tickCount", "int", "setTickCount", "tickCount" } },

};

QHash<QByteArray, long> PlastiQQDateTimeAxis::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDateTimeAxis::plastiqInherits = { &PlastiQQAbstractAxis::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQDateTimeAxis::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQDateTimeAxis::plastiq_static_metaObject = {
    { &PlastiQQAbstractAxis::plastiq_static_metaObject, &plastiqInherits, "QDateTimeAxis", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDateTimeAxis::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDateTimeAxis::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDateTimeAxis *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDateTimeAxis(); break;
        case 1: o = new QDateTimeAxis(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDateTimeAxis *p = new PlastiQQDateTimeAxis();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDateTimeAxis *p = new PlastiQQDateTimeAxis();
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
        QDateTimeAxis *o = sc ? Q_NULLPTR : reinterpret_cast<QDateTimeAxis*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->format();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->max());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->min());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: o->setFormat(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setMax((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setMin((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setRange((*reinterpret_cast< QDateTime(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QDateTime(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setTickCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: { int _r = o->tickCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 5) {
            id -= 5;
            PlastiQQAbstractAxis::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QDateTimeAxis *o = reinterpret_cast<QDateTimeAxis*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QDateTimeAxis::formatChanged,
            [=](QString arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = arg0;
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "formatChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QDateTimeAxis::maxChanged,
            [=](QDateTime arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QDateTime(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QDateTime";
                PlastiQ_activate(sender, "maxChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QDateTimeAxis::minChanged,
            [=](QDateTime arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QDateTime(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QDateTime";
                PlastiQ_activate(sender, "minChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QDateTimeAxis::rangeChanged,
            [=](QDateTime arg0, QDateTime arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = new QDateTime(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QDateTime";
                    cstack[1].s_voidp = new QDateTime(arg1) /* COPY OBJECT */;
                    cstack[1].type = PlastiQ::QtObject; cstack[1].name = "QDateTime";
                PlastiQ_activate(sender, "rangeChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QDateTimeAxis::tickCountChanged,
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
        QDateTimeAxis *o = reinterpret_cast<QDateTimeAxis*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QDateTimeAxis *o = reinterpret_cast<QDateTimeAxis*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QDateTimeAxis *o = reinterpret_cast<QDateTimeAxis*>(object->plastiq_data());

        if(className == "QAbstractAxis") {
            stack[0].s_voidp = static_cast<QAbstractAxis*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQDateTimeAxis::~PlastiQQDateTimeAxis() {
    QDateTimeAxis* o = reinterpret_cast<QDateTimeAxis*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

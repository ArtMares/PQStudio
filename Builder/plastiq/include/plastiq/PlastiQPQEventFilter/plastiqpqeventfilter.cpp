#include "plastiqpqeventfilter.h"
#include "pqeventfilter.h"
#include "plastiqmethod.h"
#include "core/PlastiQQObject/plastiqqobject.h"

#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQPQEventFilter::plastiqConstructors = {
    { "PQEventFilter()", { "PQEventFilter", "", "PQEventFilter*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "PQEventFilter(QObject*)", { "PQEventFilter", "PQEventFilter*", "PQEventFilter*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
};

QHash<QByteArray, PlastiQMethod> PlastiQPQEventFilter::plastiqMethods = {
    { "addEventType(long)", { "addEventType", "long", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeEventType(long)", { "removeEventType", "long", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "eventFilter(QObject*,QEvent*)", { "eventFilter", "QObject*,QEvent*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
};

QHash<QByteArray, PlastiQMethod> PlastiQPQEventFilter::plastiqSignals = {
    { "event(QObject*,QEvent*)", { "event", "QObject*,QEvent*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
};

QHash<QByteArray, PlastiQProperty> PlastiQPQEventFilter::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQPQEventFilter::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQPQEventFilter::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQPQEventFilter::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQPQEventFilter::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "PQEventFilter", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQPQEventFilter::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQPQEventFilter::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PQEventFilter *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PQEventFilter(); break;
        case 1: o = new PQEventFilter(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        PlastiQPQEventFilter *p = new PlastiQPQEventFilter();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQPQEventFilter *p = new PlastiQPQEventFilter();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        PQEventFilter *o = sc ? Q_NULLPTR : reinterpret_cast<PQEventFilter*>(object->plastiq_data());

        switch(id) {
        case 0:
            o->addEventType(QEvent::Type(stack[1].s_long));
            stack[0].type = PlastiQ::Void;
            break;

        case 1:
            o->removeEventType(QEvent::Type(stack[1].s_long));
            stack[0].type = PlastiQ::Void;
            break;

        case 2:
            /** eventFilter(QObject*,QEvent*) */
            /* NOTHING */
            stack[0].type = PlastiQ::Void;
            break;

        default: stack[0].type = PlastiQ::Error;;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        PQEventFilter *o = reinterpret_cast<PQEventFilter*>(object->plastiq_data());
        //PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &PQEventFilter::event,
            [=](QObject *arg0, QEvent *arg1, bool *prevent) {
                PMOGStack cstack = new PMOGStackItem[10];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg1);
                    cstack[0].type = PlastiQ::QEventStar;
                    cstack[0].name = "QEvent";

                    PMOGStackItem wstack;
                    wstack.s_voidp = reinterpret_cast<void*>(arg0);
                    wstack.name = arg0->metaObject()->className();
                    wstack.type = PlastiQ::QObjectStar;

                PQObjectWrapper *sender = PlastiQ_getWrapper(wstack);
                *prevent = PlastiQ_activate(sender, "event", receiver, slot.constData(), 1, cstack);

                delete [] cstack;
                cstack = 0;
                });
            break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        PQEventFilter *o = reinterpret_cast<PQEventFilter*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        PQEventFilter *o = reinterpret_cast<PQEventFilter*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
}

PlastiQPQEventFilter::~PlastiQPQEventFilter() {
    PQEventFilter* o = reinterpret_cast<PQEventFilter*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

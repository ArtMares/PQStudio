#include "plastiqmethod.h"
#include "plastiqqchildevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QChildEvent> 
#include <QObject>

QHash<QByteArray, PlastiQMethod> PlastiQQChildEvent::plastiqConstructors = {
    { "QChildEvent(Type,QObject*)", { "QChildEvent", "Type,QObject*", "QChildEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQChildEvent::plastiqMethods = {
    { "added()", { "added", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "child()", { "child", "", "QObject*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "polished()", { "polished", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removed()", { "removed", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQChildEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQChildEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQChildEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQChildEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQChildEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQChildEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QChildEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQChildEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQChildEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QChildEvent *o = Q_NULLPTR;

        switch(id) {
        /*case 0: o = new QChildEvent(UNSUPPORTED_TYPE_Type,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQChildEvent *p = new PlastiQQChildEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQChildEvent *p = new PlastiQQChildEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            PlastiQQEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QChildEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QChildEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->added();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { QObject* _r = o->child();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 2: { bool _r = o->polished();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->removed();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QChildEvent *o = reinterpret_cast<QChildEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQChildEvent::~PlastiQQChildEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

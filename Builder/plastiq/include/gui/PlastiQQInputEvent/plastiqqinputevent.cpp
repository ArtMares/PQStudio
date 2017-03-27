#include "plastiqmethod.h"
#include "plastiqqinputevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QInputEvent> 

QHash<QByteArray, PlastiQMethod> PlastiQQInputEvent::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQInputEvent::plastiqMethods = {
    { "modifiers()", { "modifiers", "", "Qt::KeyboardModifiers", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "timestamp()", { "timestamp", "", "ulong", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQInputEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQInputEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQInputEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQInputEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQInputEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQInputEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QInputEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQInputEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQInputEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QInputEvent *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQInputEvent *p = new PlastiQQInputEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQInputEvent *p = new PlastiQQInputEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            PlastiQQEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QInputEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QInputEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->modifiers(); // HACK for Qt::KeyboardModifiers 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { long _r = o->timestamp();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;

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
        QInputEvent *o = reinterpret_cast<QInputEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQInputEvent::~PlastiQQInputEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

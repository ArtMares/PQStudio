#include "plastiqmethod.h"
#include "plastiqqdynamicpropertychangeevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QDynamicPropertyChangeEvent> 
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQDynamicPropertyChangeEvent::plastiqConstructors = {
    { "QDynamicPropertyChangeEvent(QByteArray)", { "QDynamicPropertyChangeEvent", "QByteArray&", "QDynamicPropertyChangeEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDynamicPropertyChangeEvent::plastiqMethods = {
    { "propertyName()", { "propertyName", "", "QByteArray", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDynamicPropertyChangeEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDynamicPropertyChangeEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDynamicPropertyChangeEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDynamicPropertyChangeEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQDynamicPropertyChangeEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQDynamicPropertyChangeEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QDynamicPropertyChangeEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDynamicPropertyChangeEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDynamicPropertyChangeEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDynamicPropertyChangeEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDynamicPropertyChangeEvent(stack[1].s_bytearray); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDynamicPropertyChangeEvent *p = new PlastiQQDynamicPropertyChangeEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDynamicPropertyChangeEvent *p = new PlastiQQDynamicPropertyChangeEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 1) {
            id -= 1;
            PlastiQQEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDynamicPropertyChangeEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QDynamicPropertyChangeEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { QByteArray _r = o->propertyName();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;

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
        QDynamicPropertyChangeEvent *o = reinterpret_cast<QDynamicPropertyChangeEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQDynamicPropertyChangeEvent::~PlastiQQDynamicPropertyChangeEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

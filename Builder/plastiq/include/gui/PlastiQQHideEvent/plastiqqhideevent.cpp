#include "plastiqmethod.h"
#include "plastiqqhideevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QHideEvent> 

QHash<QByteArray, PlastiQMethod> PlastiQQHideEvent::plastiqConstructors = {
    { "QHideEvent()", { "QHideEvent", "", "QHideEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHideEvent::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQHideEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQHideEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQHideEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQHideEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQHideEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQHideEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QHideEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQHideEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQHideEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QHideEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QHideEvent(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQHideEvent *p = new PlastiQQHideEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQHideEvent *p = new PlastiQQHideEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QHideEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QHideEvent*>(object->plastiq_data());

        switch(id) {

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
        QHideEvent *o = reinterpret_cast<QHideEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQHideEvent::~PlastiQQHideEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

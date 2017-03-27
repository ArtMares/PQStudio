#include "plastiqmethod.h"
#include "plastiqqwindowstatechangeevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QWindowStateChangeEvent> 

QHash<QByteArray, PlastiQMethod> PlastiQQWindowStateChangeEvent::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQWindowStateChangeEvent::plastiqMethods = {
    { "oldState()", { "oldState", "", "Qt::WindowStates", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWindowStateChangeEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWindowStateChangeEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWindowStateChangeEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWindowStateChangeEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWindowStateChangeEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQWindowStateChangeEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QWindowStateChangeEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWindowStateChangeEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWindowStateChangeEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWindowStateChangeEvent *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWindowStateChangeEvent *p = new PlastiQQWindowStateChangeEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWindowStateChangeEvent *p = new PlastiQQWindowStateChangeEvent();
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
        QWindowStateChangeEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QWindowStateChangeEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->oldState(); // HACK for Qt::WindowStates 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

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
        QWindowStateChangeEvent *o = reinterpret_cast<QWindowStateChangeEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWindowStateChangeEvent::~PlastiQQWindowStateChangeEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

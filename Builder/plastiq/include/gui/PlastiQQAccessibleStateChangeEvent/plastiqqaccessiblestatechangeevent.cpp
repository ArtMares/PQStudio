#include "plastiqmethod.h"
#include "plastiqqaccessiblestatechangeevent.h"

#include "gui/PlastiQQAccessibleEvent/plastiqqaccessibleevent.h"
#include <QAccessibleStateChangeEvent> 

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleStateChangeEvent::plastiqConstructors = {
    { "QAccessibleStateChangeEvent(QObject*,QAccessible::State)", { "QAccessibleStateChangeEvent", "QObject*,QAccessible::State", "QAccessibleStateChangeEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAccessibleStateChangeEvent(QAccessibleInterface*,QAccessible::State)", { "QAccessibleStateChangeEvent", "QAccessibleInterface*,QAccessible::State", "QAccessibleStateChangeEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleStateChangeEvent::plastiqMethods = {
    { "changedStates()", { "changedStates", "", "QAccessible::State", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleStateChangeEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessibleStateChangeEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessibleStateChangeEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAccessibleStateChangeEvent::plastiqInherits = { &PlastiQQAccessibleEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAccessibleStateChangeEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQAccessibleStateChangeEvent::plastiq_static_metaObject = {
    { &PlastiQQAccessibleEvent::plastiq_static_metaObject, &plastiqInherits, "QAccessibleStateChangeEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessibleStateChangeEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAccessibleStateChangeEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAccessibleStateChangeEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAccessibleStateChangeEvent(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    (*reinterpret_cast< QAccessible::State(*) >(stack[2].s_voidp))); break;
        case 1: o = new QAccessibleStateChangeEvent(reinterpret_cast<QAccessibleInterface*>(stack[1].s_voidp),
                    (*reinterpret_cast< QAccessible::State(*) >(stack[2].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAccessibleStateChangeEvent *p = new PlastiQQAccessibleStateChangeEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessibleStateChangeEvent *p = new PlastiQQAccessibleStateChangeEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 1) {
            id -= 1;
            PlastiQQAccessibleEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAccessibleStateChangeEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessibleStateChangeEvent*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->changedStates() | ret: `QAccessible::State` */ break;

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
        QAccessibleStateChangeEvent *o = reinterpret_cast<QAccessibleStateChangeEvent*>(object->plastiq_data());

        if(className == "QAccessibleEvent") {
            stack[0].s_voidp = static_cast<QAccessibleEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAccessibleStateChangeEvent::~PlastiQQAccessibleStateChangeEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

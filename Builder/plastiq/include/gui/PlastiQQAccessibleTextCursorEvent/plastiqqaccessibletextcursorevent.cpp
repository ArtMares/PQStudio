#include "plastiqmethod.h"
#include "plastiqqaccessibletextcursorevent.h"

#include "gui/PlastiQQAccessibleEvent/plastiqqaccessibleevent.h"
#include <QAccessibleTextCursorEvent> 

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextCursorEvent::plastiqConstructors = {
    { "QAccessibleTextCursorEvent(QObject*,int)", { "QAccessibleTextCursorEvent", "QObject*,int", "QAccessibleTextCursorEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAccessibleTextCursorEvent(QAccessibleInterface*,int)", { "QAccessibleTextCursorEvent", "QAccessibleInterface*,int", "QAccessibleTextCursorEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextCursorEvent::plastiqMethods = {
    { "cursorPosition()", { "cursorPosition", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCursorPosition(int)", { "setCursorPosition", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextCursorEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessibleTextCursorEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessibleTextCursorEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAccessibleTextCursorEvent::plastiqInherits = { &PlastiQQAccessibleEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAccessibleTextCursorEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQAccessibleTextCursorEvent::plastiq_static_metaObject = {
    { &PlastiQQAccessibleEvent::plastiq_static_metaObject, &plastiqInherits, "QAccessibleTextCursorEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessibleTextCursorEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAccessibleTextCursorEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAccessibleTextCursorEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAccessibleTextCursorEvent(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_int); break;
        case 1: o = new QAccessibleTextCursorEvent(reinterpret_cast<QAccessibleInterface*>(stack[1].s_voidp),
                    stack[2].s_int); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAccessibleTextCursorEvent *p = new PlastiQQAccessibleTextCursorEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessibleTextCursorEvent *p = new PlastiQQAccessibleTextCursorEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            PlastiQQAccessibleEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAccessibleTextCursorEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessibleTextCursorEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->cursorPosition();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: o->setCursorPosition(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;

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
        QAccessibleTextCursorEvent *o = reinterpret_cast<QAccessibleTextCursorEvent*>(object->plastiq_data());

        if(className == "QAccessibleEvent") {
            stack[0].s_voidp = static_cast<QAccessibleEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAccessibleTextCursorEvent::~PlastiQQAccessibleTextCursorEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

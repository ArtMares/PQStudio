#include "plastiqmethod.h"
#include "plastiqqaccessibletextinsertevent.h"

#include "gui/PlastiQQAccessibleTextCursorEvent/plastiqqaccessibletextcursorevent.h"
#include <QAccessibleTextInsertEvent> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextInsertEvent::plastiqConstructors = {
    { "QAccessibleTextInsertEvent(QObject*,int,QString)", { "QAccessibleTextInsertEvent", "QObject*,int,QString&", "QAccessibleTextInsertEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAccessibleTextInsertEvent(QAccessibleInterface*,int,QString)", { "QAccessibleTextInsertEvent", "QAccessibleInterface*,int,QString&", "QAccessibleTextInsertEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextInsertEvent::plastiqMethods = {
    { "changePosition()", { "changePosition", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textInserted()", { "textInserted", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextInsertEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessibleTextInsertEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessibleTextInsertEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAccessibleTextInsertEvent::plastiqInherits = { &PlastiQQAccessibleTextCursorEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAccessibleTextInsertEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQAccessibleTextInsertEvent::plastiq_static_metaObject = {
    { &PlastiQQAccessibleTextCursorEvent::plastiq_static_metaObject, &plastiqInherits, "QAccessibleTextInsertEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessibleTextInsertEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAccessibleTextInsertEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAccessibleTextInsertEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAccessibleTextInsertEvent(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_string); break;
        case 1: o = new QAccessibleTextInsertEvent(reinterpret_cast<QAccessibleInterface*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_string); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAccessibleTextInsertEvent *p = new PlastiQQAccessibleTextInsertEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessibleTextInsertEvent *p = new PlastiQQAccessibleTextInsertEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            PlastiQQAccessibleTextCursorEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAccessibleTextInsertEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessibleTextInsertEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->changePosition();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { QString _r = o->textInserted();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

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
        QAccessibleTextInsertEvent *o = reinterpret_cast<QAccessibleTextInsertEvent*>(object->plastiq_data());

        if(className == "QAccessibleTextCursorEvent") {
            stack[0].s_voidp = static_cast<QAccessibleTextCursorEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAccessibleTextInsertEvent::~PlastiQQAccessibleTextInsertEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

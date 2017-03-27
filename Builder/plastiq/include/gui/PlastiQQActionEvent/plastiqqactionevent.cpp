#include "plastiqmethod.h"
#include "plastiqqactionevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QActionEvent> 
#include <QAction>

QHash<QByteArray, PlastiQMethod> PlastiQQActionEvent::plastiqConstructors = {
    { "QActionEvent(int,QAction*)", { "QActionEvent", "int,QAction*", "QActionEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QActionEvent(int,QAction*,QAction*)", { "QActionEvent", "int,QAction*,QAction*", "QActionEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQActionEvent::plastiqMethods = {
    { "action()", { "action", "", "QAction*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "before()", { "before", "", "QAction*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQActionEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQActionEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQActionEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQActionEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQActionEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQActionEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QActionEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQActionEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQActionEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QActionEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QActionEvent(stack[1].s_int,
                    reinterpret_cast<QAction*>(stack[2].s_voidp)); break;
        case 1: o = new QActionEvent(stack[1].s_int,
                    reinterpret_cast<QAction*>(stack[2].s_voidp),
                    reinterpret_cast<QAction*>(stack[3].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQActionEvent *p = new PlastiQQActionEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQActionEvent *p = new PlastiQQActionEvent();
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
        QActionEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QActionEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { QAction* _r = o->action();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 1: { QAction* _r = o->before();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;

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
        QActionEvent *o = reinterpret_cast<QActionEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQActionEvent::~PlastiQQActionEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

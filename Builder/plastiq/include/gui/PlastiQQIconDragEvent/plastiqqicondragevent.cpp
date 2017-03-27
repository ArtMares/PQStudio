#include "plastiqmethod.h"
#include "plastiqqicondragevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QIconDragEvent> 

QHash<QByteArray, PlastiQMethod> PlastiQQIconDragEvent::plastiqConstructors = {
    { "QIconDragEvent()", { "QIconDragEvent", "", "QIconDragEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQIconDragEvent::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQIconDragEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQIconDragEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQIconDragEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQIconDragEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQIconDragEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQIconDragEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QIconDragEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQIconDragEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQIconDragEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QIconDragEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QIconDragEvent(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQIconDragEvent *p = new PlastiQQIconDragEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQIconDragEvent *p = new PlastiQQIconDragEvent();
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
        QIconDragEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QIconDragEvent*>(object->plastiq_data());

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
        QIconDragEvent *o = reinterpret_cast<QIconDragEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQIconDragEvent::~PlastiQQIconDragEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

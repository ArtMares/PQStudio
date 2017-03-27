#include "plastiqmethod.h"
#include "plastiqqdragleaveevent.h"

#include <QDragLeaveEvent> 

QHash<QByteArray, PlastiQMethod> PlastiQQDragLeaveEvent::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQDragLeaveEvent::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQDragLeaveEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDragLeaveEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDragLeaveEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDragLeaveEvent::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQDragLeaveEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQDragLeaveEvent::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QDragLeaveEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDragLeaveEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDragLeaveEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDragLeaveEvent *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDragLeaveEvent *p = new PlastiQQDragLeaveEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDragLeaveEvent *p = new PlastiQQDragLeaveEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDragLeaveEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QDragLeaveEvent*>(object->plastiq_data());

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
        QDragLeaveEvent *o = reinterpret_cast<QDragLeaveEvent*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQDragLeaveEvent::~PlastiQQDragLeaveEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

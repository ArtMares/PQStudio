#include "plastiqmethod.h"
#include "plastiqqshowevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QShowEvent> 

QHash<QByteArray, PlastiQMethod> PlastiQQShowEvent::plastiqConstructors = {
    { "QShowEvent()", { "QShowEvent", "", "QShowEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQShowEvent::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQShowEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQShowEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQShowEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQShowEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQShowEvent::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQShowEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QShowEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQShowEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQShowEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QShowEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QShowEvent(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQShowEvent *p = new PlastiQQShowEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQShowEvent *p = new PlastiQQShowEvent();
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
        QShowEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QShowEvent*>(object->plastiq_data());

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
        QShowEvent *o = reinterpret_cast<QShowEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQShowEvent::~PlastiQQShowEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

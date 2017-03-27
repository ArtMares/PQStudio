#include "plastiqmethod.h"
#include "plastiqqexposeevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QExposeEvent> 
#include <QRegion>

QHash<QByteArray, PlastiQMethod> PlastiQQExposeEvent::plastiqConstructors = {
    { "QExposeEvent(QRegion&)", { "QExposeEvent", "QRegion&", "QExposeEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQExposeEvent::plastiqMethods = {
    { "region()", { "region", "", "const QRegion&", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQExposeEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQExposeEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQExposeEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQExposeEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQExposeEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQExposeEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QExposeEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQExposeEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQExposeEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QExposeEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QExposeEvent((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQExposeEvent *p = new PlastiQQExposeEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQExposeEvent *p = new PlastiQQExposeEvent();
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
        QExposeEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QExposeEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QRegion *_r = new QRegion(o->region());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegion";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QExposeEvent *o = reinterpret_cast<QExposeEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQExposeEvent::~PlastiQQExposeEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

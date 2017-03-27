#include "plastiqmethod.h"
#include "plastiqqmoveevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QMoveEvent> 
#include <QPoint>

QHash<QByteArray, PlastiQMethod> PlastiQQMoveEvent::plastiqConstructors = {
    { "QMoveEvent(QPoint&,QPoint&)", { "QMoveEvent", "QPoint&,QPoint&", "QMoveEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMoveEvent::plastiqMethods = {
    { "oldPos()", { "oldPos", "", "const QPoint&", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "const QPoint&", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMoveEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMoveEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMoveEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMoveEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMoveEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQMoveEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QMoveEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMoveEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMoveEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMoveEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QMoveEvent((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMoveEvent *p = new PlastiQQMoveEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMoveEvent *p = new PlastiQQMoveEvent();
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
        QMoveEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QMoveEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->oldPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->pos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
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
        QMoveEvent *o = reinterpret_cast<QMoveEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMoveEvent::~PlastiQQMoveEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

#include "plastiqmethod.h"
#include "plastiqqgraphicsscenemoveevent.h"

#include "widgets/PlastiQQGraphicsSceneEvent/plastiqqgraphicssceneevent.h"
#include <QGraphicsSceneMoveEvent> 
#include <QPointF>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneMoveEvent::plastiqConstructors = {
    { "QGraphicsSceneMoveEvent()", { "QGraphicsSceneMoveEvent", "", "QGraphicsSceneMoveEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneMoveEvent::plastiqMethods = {
    { "newPos()", { "newPos", "", "QPointF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "oldPos()", { "oldPos", "", "QPointF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneMoveEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsSceneMoveEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsSceneMoveEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsSceneMoveEvent::plastiqInherits = { &PlastiQQGraphicsSceneEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsSceneMoveEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQGraphicsSceneMoveEvent::plastiq_static_metaObject = {
    { &PlastiQQGraphicsSceneEvent::plastiq_static_metaObject, &plastiqInherits, "QGraphicsSceneMoveEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsSceneMoveEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsSceneMoveEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsSceneMoveEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QGraphicsSceneMoveEvent(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsSceneMoveEvent *p = new PlastiQQGraphicsSceneMoveEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsSceneMoveEvent *p = new PlastiQQGraphicsSceneMoveEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            PlastiQQGraphicsSceneEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsSceneMoveEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsSceneMoveEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->newPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->oldPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
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
        QGraphicsSceneMoveEvent *o = reinterpret_cast<QGraphicsSceneMoveEvent*>(object->plastiq_data());

        if(className == "QGraphicsSceneEvent") {
            stack[0].s_voidp = static_cast<QGraphicsSceneEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsSceneMoveEvent::~PlastiQQGraphicsSceneMoveEvent() {
    QGraphicsSceneMoveEvent* o = reinterpret_cast<QGraphicsSceneMoveEvent*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

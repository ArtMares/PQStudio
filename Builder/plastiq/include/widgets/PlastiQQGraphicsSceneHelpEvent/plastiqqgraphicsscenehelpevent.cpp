#include "plastiqmethod.h"
#include "plastiqqgraphicsscenehelpevent.h"

#include "widgets/PlastiQQGraphicsSceneEvent/plastiqqgraphicssceneevent.h"
#include <QGraphicsSceneHelpEvent> 
#include <QPointF>
#include <QPoint>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneHelpEvent::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneHelpEvent::plastiqMethods = {
    { "scenePos()", { "scenePos", "", "QPointF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screenPos()", { "screenPos", "", "QPoint", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneHelpEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsSceneHelpEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsSceneHelpEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsSceneHelpEvent::plastiqInherits = { &PlastiQQGraphicsSceneEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsSceneHelpEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQGraphicsSceneHelpEvent::plastiq_static_metaObject = {
    { &PlastiQQGraphicsSceneEvent::plastiq_static_metaObject, &plastiqInherits, "QGraphicsSceneHelpEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsSceneHelpEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsSceneHelpEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsSceneHelpEvent *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsSceneHelpEvent *p = new PlastiQQGraphicsSceneHelpEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsSceneHelpEvent *p = new PlastiQQGraphicsSceneHelpEvent();
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
        QGraphicsSceneHelpEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsSceneHelpEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->scenePos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->screenPos());
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
        QGraphicsSceneHelpEvent *o = reinterpret_cast<QGraphicsSceneHelpEvent*>(object->plastiq_data());

        if(className == "QGraphicsSceneEvent") {
            stack[0].s_voidp = static_cast<QGraphicsSceneEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsSceneHelpEvent::~PlastiQQGraphicsSceneHelpEvent() {
    QGraphicsSceneHelpEvent* o = reinterpret_cast<QGraphicsSceneHelpEvent*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

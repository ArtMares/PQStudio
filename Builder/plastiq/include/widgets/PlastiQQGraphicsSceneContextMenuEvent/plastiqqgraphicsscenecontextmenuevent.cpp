#include "plastiqmethod.h"
#include "plastiqqgraphicsscenecontextmenuevent.h"

#include "widgets/PlastiQQGraphicsSceneEvent/plastiqqgraphicssceneevent.h"
#include <QGraphicsSceneContextMenuEvent> 
#include <QPointF>
#include <QPoint>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneContextMenuEvent::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneContextMenuEvent::plastiqMethods = {
    { "modifiers()", { "modifiers", "", "Qt::KeyboardModifiers", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "QPointF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "reason()", { "reason", "", "Reason", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scenePos()", { "scenePos", "", "QPointF", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screenPos()", { "screenPos", "", "QPoint", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneContextMenuEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsSceneContextMenuEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsSceneContextMenuEvent::plastiqConstants = {

    /* QGraphicsSceneContextMenuEvent::Reason */
   { "Mouse", QGraphicsSceneContextMenuEvent::Mouse },
   { "Keyboard", QGraphicsSceneContextMenuEvent::Keyboard },
   { "Other", QGraphicsSceneContextMenuEvent::Other },

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsSceneContextMenuEvent::plastiqInherits = { &PlastiQQGraphicsSceneEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsSceneContextMenuEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQGraphicsSceneContextMenuEvent::plastiq_static_metaObject = {
    { &PlastiQQGraphicsSceneEvent::plastiq_static_metaObject, &plastiqInherits, "QGraphicsSceneContextMenuEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsSceneContextMenuEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsSceneContextMenuEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsSceneContextMenuEvent *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsSceneContextMenuEvent *p = new PlastiQQGraphicsSceneContextMenuEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsSceneContextMenuEvent *p = new PlastiQQGraphicsSceneContextMenuEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQGraphicsSceneEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsSceneContextMenuEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsSceneContextMenuEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->modifiers(); // HACK for Qt::KeyboardModifiers 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->pos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { qint64 _r = o->reason(); // HACK for Reason 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->scenePos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
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
        QGraphicsSceneContextMenuEvent *o = reinterpret_cast<QGraphicsSceneContextMenuEvent*>(object->plastiq_data());

        if(className == "QGraphicsSceneEvent") {
            stack[0].s_voidp = static_cast<QGraphicsSceneEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsSceneContextMenuEvent::~PlastiQQGraphicsSceneContextMenuEvent() {
    QGraphicsSceneContextMenuEvent* o = reinterpret_cast<QGraphicsSceneContextMenuEvent*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

#include "plastiqmethod.h"
#include "plastiqqgraphicsscenehoverevent.h"

#include "widgets/PlastiQQGraphicsSceneEvent/plastiqqgraphicssceneevent.h"
#include <QGraphicsSceneHoverEvent> 
#include <QPointF>
#include <QPoint>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneHoverEvent::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneHoverEvent::plastiqMethods = {
    { "lastPos()", { "lastPos", "", "QPointF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastScenePos()", { "lastScenePos", "", "QPointF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastScreenPos()", { "lastScreenPos", "", "QPoint", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "modifiers()", { "modifiers", "", "Qt::KeyboardModifiers", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "QPointF", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scenePos()", { "scenePos", "", "QPointF", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screenPos()", { "screenPos", "", "QPoint", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneHoverEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsSceneHoverEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsSceneHoverEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsSceneHoverEvent::plastiqInherits = { &PlastiQQGraphicsSceneEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsSceneHoverEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQGraphicsSceneHoverEvent::plastiq_static_metaObject = {
    { &PlastiQQGraphicsSceneEvent::plastiq_static_metaObject, &plastiqInherits, "QGraphicsSceneHoverEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsSceneHoverEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsSceneHoverEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsSceneHoverEvent *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsSceneHoverEvent *p = new PlastiQQGraphicsSceneHoverEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsSceneHoverEvent *p = new PlastiQQGraphicsSceneHoverEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQGraphicsSceneEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsSceneHoverEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsSceneHoverEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->lastPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->lastScenePos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->lastScreenPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { qint64 _r = o->modifiers(); // HACK for Qt::KeyboardModifiers 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->pos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->scenePos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
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
        QGraphicsSceneHoverEvent *o = reinterpret_cast<QGraphicsSceneHoverEvent*>(object->plastiq_data());

        if(className == "QGraphicsSceneEvent") {
            stack[0].s_voidp = static_cast<QGraphicsSceneEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsSceneHoverEvent::~PlastiQQGraphicsSceneHoverEvent() {
    QGraphicsSceneHoverEvent* o = reinterpret_cast<QGraphicsSceneHoverEvent*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

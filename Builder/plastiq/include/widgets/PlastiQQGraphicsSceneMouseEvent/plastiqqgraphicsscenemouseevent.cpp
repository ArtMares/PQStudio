#include "plastiqmethod.h"
#include "plastiqqgraphicsscenemouseevent.h"

#include "widgets/PlastiQQGraphicsSceneEvent/plastiqqgraphicssceneevent.h"
#include <QGraphicsSceneMouseEvent> 
#include <QPointF>
#include <QPoint>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneMouseEvent::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneMouseEvent::plastiqMethods = {
    { "button()", { "button", "", "Qt::MouseButton", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "buttonDownPos(enum)", { "buttonDownPos", "Qt::MouseButton", "QPointF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "buttonDownScenePos(enum)", { "buttonDownScenePos", "Qt::MouseButton", "QPointF", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "buttonDownScreenPos(enum)", { "buttonDownScreenPos", "Qt::MouseButton", "QPoint", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "buttons()", { "buttons", "", "Qt::MouseButtons", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flags()", { "flags", "", "Qt::MouseEventFlags", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastPos()", { "lastPos", "", "QPointF", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastScenePos()", { "lastScenePos", "", "QPointF", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastScreenPos()", { "lastScreenPos", "", "QPoint", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "modifiers()", { "modifiers", "", "Qt::KeyboardModifiers", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "QPointF", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scenePos()", { "scenePos", "", "QPointF", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screenPos()", { "screenPos", "", "QPoint", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "source()", { "source", "", "Qt::MouseEventSource", 13, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneMouseEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsSceneMouseEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsSceneMouseEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsSceneMouseEvent::plastiqInherits = { &PlastiQQGraphicsSceneEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsSceneMouseEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQGraphicsSceneMouseEvent::plastiq_static_metaObject = {
    { &PlastiQQGraphicsSceneEvent::plastiq_static_metaObject, &plastiqInherits, "QGraphicsSceneMouseEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsSceneMouseEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsSceneMouseEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsSceneMouseEvent *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsSceneMouseEvent *p = new PlastiQQGraphicsSceneMouseEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsSceneMouseEvent *p = new PlastiQQGraphicsSceneMouseEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 14) {
            id -= 14;
            PlastiQQGraphicsSceneEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsSceneMouseEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsSceneMouseEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->button(); // HACK for Qt::MouseButton 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->buttonDownPos(Qt::MouseButton(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->buttonDownScenePos(Qt::MouseButton(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->buttonDownScreenPos(Qt::MouseButton(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { qint64 _r = o->buttons(); // HACK for Qt::MouseButtons 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { qint64 _r = o->flags(); // HACK for Qt::MouseEventFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->lastPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->lastScenePos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->lastScreenPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { qint64 _r = o->modifiers(); // HACK for Qt::KeyboardModifiers 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->pos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->scenePos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->screenPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { qint64 _r = o->source(); // HACK for Qt::MouseEventSource 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

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
        QGraphicsSceneMouseEvent *o = reinterpret_cast<QGraphicsSceneMouseEvent*>(object->plastiq_data());

        if(className == "QGraphicsSceneEvent") {
            stack[0].s_voidp = static_cast<QGraphicsSceneEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsSceneMouseEvent::~PlastiQQGraphicsSceneMouseEvent() {
    QGraphicsSceneMouseEvent* o = reinterpret_cast<QGraphicsSceneMouseEvent*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

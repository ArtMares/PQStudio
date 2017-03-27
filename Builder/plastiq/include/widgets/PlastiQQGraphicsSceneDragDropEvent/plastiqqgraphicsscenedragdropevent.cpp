#include "plastiqmethod.h"
#include "plastiqqgraphicsscenedragdropevent.h"

#include "widgets/PlastiQQGraphicsSceneEvent/plastiqqgraphicssceneevent.h"
#include <QGraphicsSceneDragDropEvent> 
#include <QMimeData>
#include <QPointF>
#include <QPoint>
#include <QWidget>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneDragDropEvent::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneDragDropEvent::plastiqMethods = {
    { "acceptProposedAction()", { "acceptProposedAction", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "buttons()", { "buttons", "", "Qt::MouseButtons", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dropAction()", { "dropAction", "", "Qt::DropAction", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeData()", { "mimeData", "", "const QMimeData*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "modifiers()", { "modifiers", "", "Qt::KeyboardModifiers", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "QPointF", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "possibleActions()", { "possibleActions", "", "Qt::DropActions", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "proposedAction()", { "proposedAction", "", "Qt::DropAction", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scenePos()", { "scenePos", "", "QPointF", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "screenPos()", { "screenPos", "", "QPoint", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDropAction(enum)", { "setDropAction", "Qt::DropAction", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "source()", { "source", "", "QWidget*", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsSceneDragDropEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsSceneDragDropEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsSceneDragDropEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsSceneDragDropEvent::plastiqInherits = { &PlastiQQGraphicsSceneEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsSceneDragDropEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQGraphicsSceneDragDropEvent::plastiq_static_metaObject = {
    { &PlastiQQGraphicsSceneEvent::plastiq_static_metaObject, &plastiqInherits, "QGraphicsSceneDragDropEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsSceneDragDropEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsSceneDragDropEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsSceneDragDropEvent *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsSceneDragDropEvent *p = new PlastiQQGraphicsSceneDragDropEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsSceneDragDropEvent *p = new PlastiQQGraphicsSceneDragDropEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            PlastiQQGraphicsSceneEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsSceneDragDropEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsSceneDragDropEvent*>(object->plastiq_data());

        switch(id) {
        case 0: o->acceptProposedAction();
                stack[0].type = PlastiQ::Void; break;
        case 1: { qint64 _r = o->buttons(); // HACK for Qt::MouseButtons 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { qint64 _r = o->dropAction(); // HACK for Qt::DropAction 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { QMimeData* _r = const_cast<QMimeData*>(o->mimeData());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMimeData"; } break;
        case 4: { qint64 _r = o->modifiers(); // HACK for Qt::KeyboardModifiers 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->pos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { qint64 _r = o->possibleActions(); // HACK for Qt::DropActions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: { qint64 _r = o->proposedAction(); // HACK for Qt::DropAction 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->scenePos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->screenPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: o->setDropAction(Qt::DropAction(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 11: { QWidget* _r = o->source();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;

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
        QGraphicsSceneDragDropEvent *o = reinterpret_cast<QGraphicsSceneDragDropEvent*>(object->plastiq_data());

        if(className == "QGraphicsSceneEvent") {
            stack[0].s_voidp = static_cast<QGraphicsSceneEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsSceneDragDropEvent::~PlastiQQGraphicsSceneDragDropEvent() {
    QGraphicsSceneDragDropEvent* o = reinterpret_cast<QGraphicsSceneDragDropEvent*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

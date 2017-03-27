#include "plastiqmethod.h"
#include "plastiqqgestureevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QGestureEvent> 
#include <QGesture>
#include <QPointF>
#include <QWidget>

QHash<QByteArray, PlastiQMethod> PlastiQQGestureEvent::plastiqConstructors = {
    { "QGestureEvent(QList<QGesture*>&)", { "QGestureEvent", "QList<QGesture*>&", "QGestureEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGestureEvent::plastiqMethods = {
    { "accept(QGesture*)", { "accept", "QGesture*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "accept(enum)", { "accept", "Qt::GestureType", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "gesture(enum)", { "gesture", "Qt::GestureType", "QGesture*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ignore(QGesture*)", { "ignore", "QGesture*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ignore(enum)", { "ignore", "Qt::GestureType", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAccepted(QGesture*)", { "isAccepted", "QGesture*", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAccepted(enum)", { "isAccepted", "Qt::GestureType", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapToGraphicsScene(QPointF&)", { "mapToGraphicsScene", "QPointF&", "QPointF", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAccepted(QGesture*,bool)", { "setAccepted", "QGesture*,bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAccepted(enum,bool)", { "setAccepted", "Qt::GestureType,bool", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "widget()", { "widget", "", "QWidget*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGestureEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGestureEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGestureEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGestureEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGestureEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQGestureEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QGestureEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGestureEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGestureEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGestureEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QGestureEvent((*reinterpret_cast< QList<QGesture*>(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGestureEvent *p = new PlastiQQGestureEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGestureEvent *p = new PlastiQQGestureEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 11) {
            id -= 11;
            PlastiQQEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGestureEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QGestureEvent*>(object->plastiq_data());

        switch(id) {
        case 0: o->accept(reinterpret_cast<QGesture*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->accept(Qt::GestureType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 2: { QGesture* _r = o->gesture(Qt::GestureType(stack[1].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QGesture"; } break;
        case 3: o->ignore(reinterpret_cast<QGesture*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->ignore(Qt::GestureType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 5: { bool _r = o->isAccepted(reinterpret_cast<QGesture*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->isAccepted(Qt::GestureType(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->mapToGraphicsScene((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: o->setAccepted(reinterpret_cast<QGesture*>(stack[1].s_voidp),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setAccepted(Qt::GestureType(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 10: { QWidget* _r = o->widget();
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
        QGestureEvent *o = reinterpret_cast<QGestureEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGestureEvent::~PlastiQQGestureEvent() {
    QGestureEvent* o = reinterpret_cast<QGestureEvent*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

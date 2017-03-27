#include "plastiqmethod.h"
#include "plastiqqscroller.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QScroller> 
#include <QPointF>
#include <QScrollerProperties>
#include <QObject>

QHash<QByteArray, PlastiQMethod> PlastiQQScroller::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQScroller::plastiqMethods = {
    { "finalPosition()", { "finalPosition", "", "QPointF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "handleInput(enum,QPointF&)", { "handleInput", "Input,QPointF&", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "handleInput(enum,QPointF&,long)", { "handleInput", "Input,QPointF&,qint64", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelPerMeter()", { "pixelPerMeter", "", "QPointF", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scrollerProperties()", { "scrollerProperties", "", "QScrollerProperties", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSnapPositionsX(QList<qreal>&)", { "setSnapPositionsX", "QList<qreal>&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSnapPositionsX(double,double)", { "setSnapPositionsX", "qreal,qreal", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSnapPositionsY(QList<qreal>&)", { "setSnapPositionsY", "QList<qreal>&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSnapPositionsY(double,double)", { "setSnapPositionsY", "qreal,qreal", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "State", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stop()", { "stop", "", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "target()", { "target", "", "QObject*", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "velocity()", { "velocity", "", "QPointF", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabGesture(QObject*)", { "grabGesture", "QObject*", "Qt::GestureType", 13, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "grabGesture(QObject*,enum)", { "grabGesture", "QObject*,ScrollerGestureType", "Qt::GestureType", 14, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "grabbedGesture(QObject*)", { "grabbedGesture", "QObject*", "Qt::GestureType", 15, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "hasScroller(QObject*)", { "hasScroller", "QObject*", "bool", 16, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "scroller(QObject*)", { "scroller", "QObject*", "QScroller*", 17, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "ungrabGesture(QObject*)", { "ungrabGesture", "QObject*", "void", 18, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "ensureVisible(QRectF&,double,double)", { "ensureVisible", "QRectF&,qreal,qreal", "void", 19, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "ensureVisible(QRectF&,double,double,int)", { "ensureVisible", "QRectF&,qreal,qreal,int", "void", 20, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "resendPrepareEvent()", { "resendPrepareEvent", "", "void", 21, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "scrollTo(QPointF&)", { "scrollTo", "QPointF&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "scrollTo(QPointF&,int)", { "scrollTo", "QPointF&,int", "void", 23, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setScrollerProperties(QScrollerProperties&)", { "setScrollerProperties", "QScrollerProperties&", "void", 24, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQScroller::plastiqSignals = {
    { "scrollerPropertiesChanged(QScrollerProperties&)", { "scrollerPropertiesChanged", "QScrollerProperties&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum)", { "stateChanged", "QScroller::State", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQScroller::plastiqProperties = {
    { "scrollerProperties", { "scrollerProperties", "QScrollerProperties", "setScrollerProperties", "scrollerProperties" } },
    { "state", { "state", "long", "stateChanged", "state" } },

};

QHash<QByteArray, long> PlastiQQScroller::plastiqConstants = {

    /* QScroller::Input */
   { "InputPress", QScroller::InputPress },
   { "InputMove", QScroller::InputMove },
   { "InputRelease", QScroller::InputRelease },

    /* QScroller::ScrollerGestureType */
   { "TouchGesture", QScroller::TouchGesture },
   { "LeftMouseButtonGesture", QScroller::LeftMouseButtonGesture },
   { "RightMouseButtonGesture", QScroller::RightMouseButtonGesture },
   { "MiddleMouseButtonGesture", QScroller::MiddleMouseButtonGesture },

    /* QScroller::State */
   { "Inactive", QScroller::Inactive },
   { "Pressed", QScroller::Pressed },
   { "Dragging", QScroller::Dragging },
   { "Scrolling", QScroller::Scrolling },

};

QVector<PlastiQMetaObject*> PlastiQQScroller::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQScroller::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQScroller::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QScroller", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQScroller::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQScroller::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QScroller *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQScroller *p = new PlastiQQScroller();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQScroller *p = new PlastiQQScroller();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 25) {
            id -= 25;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QScroller *o = sc ? Q_NULLPTR : reinterpret_cast<QScroller*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->finalPosition());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { bool _r = o->handleInput(QScroller::Input(stack[1].s_int64),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->handleInput(QScroller::Input(stack[1].s_int64),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    stack[3].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->pixelPerMeter());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QScrollerProperties *_r = new QScrollerProperties(o->scrollerProperties());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QScrollerProperties";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: o->setSnapPositionsX((*reinterpret_cast< QList<qreal>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setSnapPositionsX(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setSnapPositionsY((*reinterpret_cast< QList<qreal>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setSnapPositionsY(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 9: { qint64 _r = o->state(); // HACK for State 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: o->stop();
                stack[0].type = PlastiQ::Void; break;
        case 11: { QObject* _r = o->target();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 12: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->velocity());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { qint64 _r = sc ? QScroller::grabGesture(reinterpret_cast<QObject*>(stack[1].s_voidp)) : o->grabGesture(reinterpret_cast<QObject*>(stack[1].s_voidp)); // HACK for Qt::GestureType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 14: { qint64 _r = sc ? QScroller::grabGesture(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    QScroller::ScrollerGestureType(stack[2].s_int64)) : o->grabGesture(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    QScroller::ScrollerGestureType(stack[2].s_int64)); // HACK for Qt::GestureType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 15: { qint64 _r = sc ? QScroller::grabbedGesture(reinterpret_cast<QObject*>(stack[1].s_voidp)) : o->grabbedGesture(reinterpret_cast<QObject*>(stack[1].s_voidp)); // HACK for Qt::GestureType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 16: { bool _r = sc ? QScroller::hasScroller(reinterpret_cast<QObject*>(stack[1].s_voidp)) : o->hasScroller(reinterpret_cast<QObject*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { QScroller* _r = sc ? QScroller::scroller(reinterpret_cast<QObject*>(stack[1].s_voidp)) : o->scroller(reinterpret_cast<QObject*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QScroller"; } break;
        case 18: if(sc) { QScroller::ungrabGesture(reinterpret_cast<QObject*>(stack[1].s_voidp)); } else { o->ungrabGesture(reinterpret_cast<QObject*>(stack[1].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 19: o->ensureVisible((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    stack[3].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->ensureVisible((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->resendPrepareEvent();
                stack[0].type = PlastiQ::Void; break;
        case 22: o->scrollTo((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->scrollTo((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setScrollerProperties((*reinterpret_cast< QScrollerProperties(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QScroller *o = reinterpret_cast<QScroller*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QScroller::scrollerPropertiesChanged,
            [=](const QScrollerProperties& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QScrollerProperties(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QScrollerProperties";
                PlastiQ_activate(sender, "scrollerPropertiesChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QScroller::stateChanged,
            [=](QScroller::State arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QScroller::State";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QScroller *o = reinterpret_cast<QScroller*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QScroller *o = reinterpret_cast<QScroller*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QScroller *o = reinterpret_cast<QScroller*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQScroller::~PlastiQQScroller() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

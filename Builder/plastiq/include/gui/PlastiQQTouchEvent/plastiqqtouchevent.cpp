#include "plastiqmethod.h"
#include "plastiqqtouchevent.h"

#include "gui/PlastiQQInputEvent/plastiqqinputevent.h"
#include <QTouchEvent> 
#include <QTouchDevice>
#include <QObject>
#include <QWindow>

QHash<QByteArray, PlastiQMethod> PlastiQQTouchEvent::plastiqConstructors = {
    { "QTouchEvent(enum)", { "QTouchEvent", "QEvent::Type", "QTouchEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTouchEvent(enum,QTouchDevice*)", { "QTouchEvent", "QEvent::Type,QTouchDevice*", "QTouchEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTouchEvent(enum,QTouchDevice*,enum)", { "QTouchEvent", "QEvent::Type,QTouchDevice*,Qt::KeyboardModifiers", "QTouchEvent*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTouchEvent(enum,QTouchDevice*,enum,enum)", { "QTouchEvent", "QEvent::Type,QTouchDevice*,Qt::KeyboardModifiers,Qt::TouchPointStates", "QTouchEvent*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTouchEvent(enum,QTouchDevice*,enum,enum,QList<QTouchEvent::TouchPoint>&)", { "QTouchEvent", "QEvent::Type,QTouchDevice*,Qt::KeyboardModifiers,Qt::TouchPointStates,QList<QTouchEvent::TouchPoint>&", "QTouchEvent*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTouchEvent::plastiqMethods = {
    { "device()", { "device", "", "QTouchDevice*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "target()", { "target", "", "QObject*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "touchPointStates()", { "touchPointStates", "", "Qt::TouchPointStates", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "window()", { "window", "", "QWindow*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTouchEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTouchEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTouchEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTouchEvent::plastiqInherits = { &PlastiQQInputEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTouchEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQTouchEvent::plastiq_static_metaObject = {
    { &PlastiQQInputEvent::plastiq_static_metaObject, &plastiqInherits, "QTouchEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTouchEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTouchEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTouchEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTouchEvent(QEvent::Type(stack[1].s_int64)); break;
        case 1: o = new QTouchEvent(QEvent::Type(stack[1].s_int64),
                    reinterpret_cast<QTouchDevice*>(stack[2].s_voidp)); break;
        case 2: o = new QTouchEvent(QEvent::Type(stack[1].s_int64),
                    reinterpret_cast<QTouchDevice*>(stack[2].s_voidp),
                    Qt::KeyboardModifiers(stack[3].s_int64)); break;
        case 3: o = new QTouchEvent(QEvent::Type(stack[1].s_int64),
                    reinterpret_cast<QTouchDevice*>(stack[2].s_voidp),
                    Qt::KeyboardModifiers(stack[3].s_int64),
                    Qt::TouchPointStates(stack[4].s_int64)); break;
        case 4: o = new QTouchEvent(QEvent::Type(stack[1].s_int64),
                    reinterpret_cast<QTouchDevice*>(stack[2].s_voidp),
                    Qt::KeyboardModifiers(stack[3].s_int64),
                    Qt::TouchPointStates(stack[4].s_int64),
                    (*reinterpret_cast< QList<QTouchEvent::TouchPoint>(*) >(stack[5].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTouchEvent *p = new PlastiQQTouchEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTouchEvent *p = new PlastiQQTouchEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            PlastiQQInputEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTouchEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QTouchEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { QTouchDevice* _r = o->device();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTouchDevice"; } break;
        case 1: { QObject* _r = o->target();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 2: { qint64 _r = o->touchPointStates(); // HACK for Qt::TouchPointStates 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { QWindow* _r = o->window();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWindow"; } break;

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
        QTouchEvent *o = reinterpret_cast<QTouchEvent*>(object->plastiq_data());

        if(className == "QInputEvent") {
            stack[0].s_voidp = static_cast<QInputEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTouchEvent::~PlastiQQTouchEvent() {
    QTouchEvent* o = reinterpret_cast<QTouchEvent*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

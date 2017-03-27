#include "plastiqmethod.h"
#include "plastiqqgesture.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QGesture> 
#include <QPointF>

QHash<QByteArray, PlastiQMethod> PlastiQQGesture::plastiqConstructors = {
    { "QGesture()", { "QGesture", "", "QGesture*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGesture(QObject*)", { "QGesture", "QObject*", "QGesture*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGesture::plastiqMethods = {
    { "gestureCancelPolicy()", { "gestureCancelPolicy", "", "GestureCancelPolicy", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "gestureType()", { "gestureType", "", "Qt::GestureType", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasHotSpot()", { "hasHotSpot", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hotSpot()", { "hotSpot", "", "QPointF", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGestureCancelPolicy(enum)", { "setGestureCancelPolicy", "GestureCancelPolicy", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHotSpot(QPointF&)", { "setHotSpot", "QPointF&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "Qt::GestureState", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unsetHotSpot()", { "unsetHotSpot", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGesture::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGesture::plastiqProperties = {
    { "gestureCancelPolicy", { "gestureCancelPolicy", "long", "setGestureCancelPolicy", "gestureCancelPolicy" } },
    { "gestureType", { "gestureType", "long", "", "gestureType" } },
    { "hasHotSpot", { "hasHotSpot", "bool", "", "hasHotSpot" } },
    { "hotSpot", { "hotSpot", "QPointF", "setHotSpot", "hotSpot" } },
    { "state", { "state", "long", "", "state" } },

};

QHash<QByteArray, long> PlastiQQGesture::plastiqConstants = {

    /* QGesture::GestureCancelPolicy */
   { "CancelNone", QGesture::CancelNone },
   { "CancelAllInContext", QGesture::CancelAllInContext },

};

QVector<PlastiQMetaObject*> PlastiQQGesture::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGesture::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQGesture::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QGesture", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGesture::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGesture::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGesture *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QGesture(); break;
        case 1: o = new QGesture(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGesture *p = new PlastiQQGesture();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGesture *p = new PlastiQQGesture();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGesture *o = sc ? Q_NULLPTR : reinterpret_cast<QGesture*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->gestureCancelPolicy(); // HACK for GestureCancelPolicy 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { qint64 _r = o->gestureType(); // HACK for Qt::GestureType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { bool _r = o->hasHotSpot();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->hotSpot());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: o->setGestureCancelPolicy(QGesture::GestureCancelPolicy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setHotSpot((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: { qint64 _r = o->state(); // HACK for Qt::GestureState 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: o->unsetHotSpot();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QGesture *o = reinterpret_cast<QGesture*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QGesture *o = reinterpret_cast<QGesture*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QGesture *o = reinterpret_cast<QGesture*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QGesture *o = reinterpret_cast<QGesture*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGesture::~PlastiQQGesture() {
    QGesture* o = reinterpret_cast<QGesture*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

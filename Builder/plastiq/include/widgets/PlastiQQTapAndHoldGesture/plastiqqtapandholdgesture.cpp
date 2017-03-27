#include "plastiqmethod.h"
#include "plastiqqtapandholdgesture.h"

#include "widgets/PlastiQQGesture/plastiqqgesture.h"
#include <QTapAndHoldGesture> 
#include <QPointF>

QHash<QByteArray, PlastiQMethod> PlastiQQTapAndHoldGesture::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQTapAndHoldGesture::plastiqMethods = {
    { "position()", { "position", "", "QPointF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPosition(QPointF&)", { "setPosition", "QPointF&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTimeout(int)", { "setTimeout", "int", "void", 2, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "timeout()", { "timeout", "", "int", 3, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTapAndHoldGesture::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTapAndHoldGesture::plastiqProperties = {
    { "position", { "position", "QPointF", "setPosition", "position" } },

};

QHash<QByteArray, long> PlastiQQTapAndHoldGesture::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTapAndHoldGesture::plastiqInherits = { &PlastiQQGesture::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTapAndHoldGesture::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQTapAndHoldGesture::plastiq_static_metaObject = {
    { &PlastiQQGesture::plastiq_static_metaObject, &plastiqInherits, "QTapAndHoldGesture", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTapAndHoldGesture::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTapAndHoldGesture::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTapAndHoldGesture *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTapAndHoldGesture *p = new PlastiQQTapAndHoldGesture();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTapAndHoldGesture *p = new PlastiQQTapAndHoldGesture();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            PlastiQQGesture::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTapAndHoldGesture *o = sc ? Q_NULLPTR : reinterpret_cast<QTapAndHoldGesture*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->position());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: o->setPosition((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: if(sc) { QTapAndHoldGesture::setTimeout(stack[1].s_int); } else { o->setTimeout(stack[1].s_int); }
                stack[0].type = PlastiQ::Void; break;
        case 3: { int _r = sc ? QTapAndHoldGesture::timeout() : o->timeout();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQGesture::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QTapAndHoldGesture *o = reinterpret_cast<QTapAndHoldGesture*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QTapAndHoldGesture *o = reinterpret_cast<QTapAndHoldGesture*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTapAndHoldGesture *o = reinterpret_cast<QTapAndHoldGesture*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTapAndHoldGesture *o = reinterpret_cast<QTapAndHoldGesture*>(object->plastiq_data());

        if(className == "QGesture") {
            stack[0].s_voidp = static_cast<QGesture*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTapAndHoldGesture::~PlastiQQTapAndHoldGesture() {
    QTapAndHoldGesture* o = reinterpret_cast<QTapAndHoldGesture*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

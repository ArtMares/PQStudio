#include "plastiqmethod.h"
#include "plastiqqpangesture.h"

#include "widgets/PlastiQQGesture/plastiqqgesture.h"
#include <QPanGesture> 
#include <QPointF>

QHash<QByteArray, PlastiQMethod> PlastiQQPanGesture::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQPanGesture::plastiqMethods = {
    { "acceleration()", { "acceleration", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "delta()", { "delta", "", "QPointF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastOffset()", { "lastOffset", "", "QPointF", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "offset()", { "offset", "", "QPointF", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAcceleration(double)", { "setAcceleration", "qreal", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLastOffset(QPointF&)", { "setLastOffset", "QPointF&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOffset(QPointF&)", { "setOffset", "QPointF&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPanGesture::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPanGesture::plastiqProperties = {
    { "acceleration", { "acceleration", "qreal", "setAcceleration", "acceleration" } },
    { "delta", { "delta", "QPointF", "", "delta" } },
    { "lastOffset", { "lastOffset", "QPointF", "setLastOffset", "lastOffset" } },
    { "offset", { "offset", "QPointF", "setOffset", "offset" } },

};

QHash<QByteArray, long> PlastiQQPanGesture::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPanGesture::plastiqInherits = { &PlastiQQGesture::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPanGesture::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQPanGesture::plastiq_static_metaObject = {
    { &PlastiQQGesture::plastiq_static_metaObject, &plastiqInherits, "QPanGesture", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPanGesture::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPanGesture::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPanGesture *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPanGesture *p = new PlastiQQPanGesture();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPanGesture *p = new PlastiQQPanGesture();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQGesture::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPanGesture *o = sc ? Q_NULLPTR : reinterpret_cast<QPanGesture*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->acceleration();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->delta());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->lastOffset());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->offset());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: o->setAcceleration(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setLastOffset((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setOffset((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQGesture::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QPanGesture *o = reinterpret_cast<QPanGesture*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QPanGesture *o = reinterpret_cast<QPanGesture*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QPanGesture *o = reinterpret_cast<QPanGesture*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QPanGesture *o = reinterpret_cast<QPanGesture*>(object->plastiq_data());

        if(className == "QGesture") {
            stack[0].s_voidp = static_cast<QGesture*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPanGesture::~PlastiQQPanGesture() {
    QPanGesture* o = reinterpret_cast<QPanGesture*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

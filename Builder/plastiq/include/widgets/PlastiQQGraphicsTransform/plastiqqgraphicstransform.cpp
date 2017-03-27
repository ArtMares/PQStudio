#include "plastiqmethod.h"
#include "plastiqqgraphicstransform.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QGraphicsTransform> 

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsTransform::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsTransform::plastiqMethods = {
    { "applyTo(QMatrix4x4*)", { "applyTo", "QMatrix4x4*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsTransform::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsTransform::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGraphicsTransform::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsTransform::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsTransform::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQGraphicsTransform::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QGraphicsTransform", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsTransform::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsTransform::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsTransform *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsTransform *p = new PlastiQQGraphicsTransform();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsTransform *p = new PlastiQQGraphicsTransform();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 1) {
            id -= 1;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsTransform *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsTransform*>(object->plastiq_data());

        switch(id) {
        case 0: o->applyTo(reinterpret_cast<QMatrix4x4*>(stack[1].s_voidp));
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

        QGraphicsTransform *o = reinterpret_cast<QGraphicsTransform*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QGraphicsTransform *o = reinterpret_cast<QGraphicsTransform*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QGraphicsTransform *o = reinterpret_cast<QGraphicsTransform*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QGraphicsTransform *o = reinterpret_cast<QGraphicsTransform*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsTransform::~PlastiQQGraphicsTransform() {
    QGraphicsTransform* o = reinterpret_cast<QGraphicsTransform*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

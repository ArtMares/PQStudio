#include "plastiqmethod.h"
#include "plastiqqgraphicsanchor.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QGraphicsAnchor> 

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsAnchor::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsAnchor::plastiqMethods = {
    { "setSizePolicy(enum)", { "setSizePolicy", "QSizePolicy::Policy", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSpacing(double)", { "setSpacing", "qreal", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizePolicy()", { "sizePolicy", "", "QSizePolicy::Policy", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "spacing()", { "spacing", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unsetSpacing()", { "unsetSpacing", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsAnchor::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsAnchor::plastiqProperties = {
    { "sizePolicy", { "sizePolicy", "long", "setSizePolicy", "sizePolicy" } },
    { "spacing", { "spacing", "qreal", "setSpacing", "spacing" } },

};

QHash<QByteArray, long> PlastiQQGraphicsAnchor::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsAnchor::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsAnchor::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQGraphicsAnchor::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QGraphicsAnchor", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsAnchor::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsAnchor::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsAnchor *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsAnchor *p = new PlastiQQGraphicsAnchor();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsAnchor *p = new PlastiQQGraphicsAnchor();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsAnchor *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsAnchor*>(object->plastiq_data());

        switch(id) {
        case 0: o->setSizePolicy(QSizePolicy::Policy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->setSpacing(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 2: { qint64 _r = o->sizePolicy(); // HACK for QSizePolicy::Policy 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { double _r = o->spacing();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: o->unsetSpacing();
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

        QGraphicsAnchor *o = reinterpret_cast<QGraphicsAnchor*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QGraphicsAnchor *o = reinterpret_cast<QGraphicsAnchor*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QGraphicsAnchor *o = reinterpret_cast<QGraphicsAnchor*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QGraphicsAnchor *o = reinterpret_cast<QGraphicsAnchor*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsAnchor::~PlastiQQGraphicsAnchor() {
    QGraphicsAnchor* o = reinterpret_cast<QGraphicsAnchor*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

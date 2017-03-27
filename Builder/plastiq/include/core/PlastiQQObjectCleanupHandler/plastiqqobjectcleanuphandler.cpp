#include "plastiqmethod.h"
#include "plastiqqobjectcleanuphandler.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QObjectCleanupHandler> 
#include <QObject>

QHash<QByteArray, PlastiQMethod> PlastiQQObjectCleanupHandler::plastiqConstructors = {
    { "QObjectCleanupHandler()", { "QObjectCleanupHandler", "", "QObjectCleanupHandler*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQObjectCleanupHandler::plastiqMethods = {
    { "add(QObject*)", { "add", "QObject*", "QObject*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QObject*)", { "remove", "QObject*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQObjectCleanupHandler::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQObjectCleanupHandler::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQObjectCleanupHandler::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQObjectCleanupHandler::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQObjectCleanupHandler::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQObjectCleanupHandler::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QObjectCleanupHandler", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQObjectCleanupHandler::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQObjectCleanupHandler::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QObjectCleanupHandler *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QObjectCleanupHandler(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQObjectCleanupHandler *p = new PlastiQQObjectCleanupHandler();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQObjectCleanupHandler *p = new PlastiQQObjectCleanupHandler();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QObjectCleanupHandler *o = sc ? Q_NULLPTR : reinterpret_cast<QObjectCleanupHandler*>(object->plastiq_data());

        switch(id) {
        case 0: { QObject* _r = o->add(reinterpret_cast<QObject*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 1: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: o->remove(reinterpret_cast<QObject*>(stack[1].s_voidp));
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

        QObjectCleanupHandler *o = reinterpret_cast<QObjectCleanupHandler*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QObjectCleanupHandler *o = reinterpret_cast<QObjectCleanupHandler*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QObjectCleanupHandler *o = reinterpret_cast<QObjectCleanupHandler*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QObjectCleanupHandler *o = reinterpret_cast<QObjectCleanupHandler*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQObjectCleanupHandler::~PlastiQQObjectCleanupHandler() {
    QObjectCleanupHandler* o = reinterpret_cast<QObjectCleanupHandler*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

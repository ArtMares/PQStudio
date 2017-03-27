#include "plastiqmethod.h"
#include "plastiqqiconengineplugin.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QIconEnginePlugin> 
#include <QIconEngine>

QHash<QByteArray, PlastiQMethod> PlastiQQIconEnginePlugin::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQIconEnginePlugin::plastiqMethods = {
    { "create()", { "create", "", "QIconEngine*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "create(QString)", { "create", "QString&", "QIconEngine*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQIconEnginePlugin::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQIconEnginePlugin::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQIconEnginePlugin::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQIconEnginePlugin::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQIconEnginePlugin::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQIconEnginePlugin::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QIconEnginePlugin", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQIconEnginePlugin::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQIconEnginePlugin::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QIconEnginePlugin *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQIconEnginePlugin *p = new PlastiQQIconEnginePlugin();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQIconEnginePlugin *p = new PlastiQQIconEnginePlugin();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QIconEnginePlugin *o = sc ? Q_NULLPTR : reinterpret_cast<QIconEnginePlugin*>(object->plastiq_data());

        switch(id) {
        case 0: { QIconEngine* _r = o->create();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QIconEngine"; } break;
        case 1: { QIconEngine* _r = o->create(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QIconEngine"; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QIconEnginePlugin *o = reinterpret_cast<QIconEnginePlugin*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QIconEnginePlugin *o = reinterpret_cast<QIconEnginePlugin*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QIconEnginePlugin *o = reinterpret_cast<QIconEnginePlugin*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QIconEnginePlugin *o = reinterpret_cast<QIconEnginePlugin*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQIconEnginePlugin::~PlastiQQIconEnginePlugin() {
    QIconEnginePlugin* o = reinterpret_cast<QIconEnginePlugin*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

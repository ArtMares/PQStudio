#include "plastiqmethod.h"
#include "plastiqqmediaserviceproviderplugin.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QMediaServiceProviderPlugin> 
#include <QMediaService>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceProviderPlugin::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceProviderPlugin::plastiqMethods = {
    { "create(QString)", { "create", "QString&", "QMediaService*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceProviderPlugin::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaServiceProviderPlugin::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaServiceProviderPlugin::plastiqConstants = {

};

const PlastiQ::ObjectType PlastiQQMediaServiceProviderPlugin::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMediaServiceProviderPlugin::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, "QMediaServiceProviderPlugin", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaServiceProviderPlugin::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaServiceProviderPlugin::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaServiceProviderPlugin *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        PlastiQQMediaServiceProviderPlugin *p = new PlastiQQMediaServiceProviderPlugin();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaServiceProviderPlugin *p = new PlastiQQMediaServiceProviderPlugin();
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
        QMediaServiceProviderPlugin *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaServiceProviderPlugin*>(object->plastiq_data());

        switch(id) {
        case 0: { QMediaService* _r = o->create(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMediaService"; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMediaServiceProviderPlugin *o = reinterpret_cast<QMediaServiceProviderPlugin*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMediaServiceProviderPlugin *o = reinterpret_cast<QMediaServiceProviderPlugin*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMediaServiceProviderPlugin *o = reinterpret_cast<QMediaServiceProviderPlugin*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
}

PlastiQQMediaServiceProviderPlugin::~PlastiQQMediaServiceProviderPlugin() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

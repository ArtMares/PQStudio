#include "plastiqmethod.h"
#include "plastiqqstyleplugin.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QStylePlugin> 
#include <QStyle>

QHash<QByteArray, PlastiQMethod> PlastiQQStylePlugin::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStylePlugin::plastiqMethods = {
    { "create(QString)", { "create", "QString&", "QStyle*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStylePlugin::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStylePlugin::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStylePlugin::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQStylePlugin::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStylePlugin::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQStylePlugin::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QStylePlugin", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStylePlugin::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStylePlugin::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStylePlugin *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStylePlugin *p = new PlastiQQStylePlugin();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStylePlugin *p = new PlastiQQStylePlugin();
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
        QStylePlugin *o = sc ? Q_NULLPTR : reinterpret_cast<QStylePlugin*>(object->plastiq_data());

        switch(id) {
        case 0: { QStyle* _r = o->create(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QStyle"; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QStylePlugin *o = reinterpret_cast<QStylePlugin*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QStylePlugin *o = reinterpret_cast<QStylePlugin*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QStylePlugin *o = reinterpret_cast<QStylePlugin*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QStylePlugin *o = reinterpret_cast<QStylePlugin*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStylePlugin::~PlastiQQStylePlugin() {
    QStylePlugin* o = reinterpret_cast<QStylePlugin*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

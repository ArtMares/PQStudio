#include "plastiqmethod.h"
#include "plastiqqimageioplugin.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QImageIOPlugin> 
#include <QImageIOHandler>

QHash<QByteArray, PlastiQMethod> PlastiQQImageIOPlugin::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQImageIOPlugin::plastiqMethods = {
    { "capabilities(QIODevice*,QByteArray)", { "capabilities", "QIODevice*,QByteArray&", "Capabilities", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "create(QIODevice*)", { "create", "QIODevice*", "QImageIOHandler*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "create(QIODevice*,QByteArray)", { "create", "QIODevice*,QByteArray&", "QImageIOHandler*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQImageIOPlugin::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQImageIOPlugin::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQImageIOPlugin::plastiqConstants = {

    /* QImageIOPlugin::Capability */
   { "CanRead", QImageIOPlugin::CanRead },
   { "CanWrite", QImageIOPlugin::CanWrite },
   { "CanReadIncremental", QImageIOPlugin::CanReadIncremental },

};

QVector<PlastiQMetaObject*> PlastiQQImageIOPlugin::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQImageIOPlugin::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQImageIOPlugin::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QImageIOPlugin", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQImageIOPlugin::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQImageIOPlugin::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QImageIOPlugin *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQImageIOPlugin *p = new PlastiQQImageIOPlugin();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQImageIOPlugin *p = new PlastiQQImageIOPlugin();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QImageIOPlugin *o = sc ? Q_NULLPTR : reinterpret_cast<QImageIOPlugin*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->capabilities(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    stack[2].s_bytearray); // HACK for Capabilities 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { QImageIOHandler* _r = o->create(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QImageIOHandler"; } break;
        case 2: { QImageIOHandler* _r = o->create(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    stack[2].s_bytearray);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QImageIOHandler"; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QImageIOPlugin *o = reinterpret_cast<QImageIOPlugin*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QImageIOPlugin *o = reinterpret_cast<QImageIOPlugin*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QImageIOPlugin *o = reinterpret_cast<QImageIOPlugin*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QImageIOPlugin *o = reinterpret_cast<QImageIOPlugin*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQImageIOPlugin::~PlastiQQImageIOPlugin() {
    QImageIOPlugin* o = reinterpret_cast<QImageIOPlugin*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

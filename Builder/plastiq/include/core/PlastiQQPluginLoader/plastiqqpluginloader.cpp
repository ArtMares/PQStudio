#include "plastiqmethod.h"
#include "plastiqqpluginloader.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QPluginLoader> 
#include <QString>
#include <QObject>
#include <QJsonObject>
#include <QObjectList>

QHash<QByteArray, PlastiQMethod> PlastiQQPluginLoader::plastiqConstructors = {
    { "QPluginLoader()", { "QPluginLoader", "", "QPluginLoader*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPluginLoader(QObject*)", { "QPluginLoader", "QObject*", "QPluginLoader*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPluginLoader(QString)", { "QPluginLoader", "QString&", "QPluginLoader*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPluginLoader(QString,QObject*)", { "QPluginLoader", "QString&,QObject*", "QPluginLoader*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPluginLoader::plastiqMethods = {
    { "errorString()", { "errorString", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileName()", { "fileName", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "instance()", { "instance", "", "QObject*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isLoaded()", { "isLoaded", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load()", { "load", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loadHints()", { "loadHints", "", "QLibrary::LoadHints", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "metaData()", { "metaData", "", "QJsonObject", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFileName(QString)", { "setFileName", "QString&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLoadHints(enum)", { "setLoadHints", "QLibrary::LoadHints", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unload()", { "unload", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "staticInstances()", { "staticInstances", "", "QObjectList", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPluginLoader::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPluginLoader::plastiqProperties = {
    { "fileName", { "fileName", "QString", "setFileName", "fileName" } },
    { "loadHints", { "loadHints", "long", "setLoadHints", "loadHints" } },

};

QHash<QByteArray, long> PlastiQQPluginLoader::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPluginLoader::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPluginLoader::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQPluginLoader::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QPluginLoader", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPluginLoader::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPluginLoader::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPluginLoader *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPluginLoader(); break;
        case 1: o = new QPluginLoader(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new QPluginLoader(stack[1].s_string); break;
        case 3: o = new QPluginLoader(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPluginLoader *p = new PlastiQQPluginLoader();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPluginLoader *p = new PlastiQQPluginLoader();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 11) {
            id -= 11;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPluginLoader *o = sc ? Q_NULLPTR : reinterpret_cast<QPluginLoader*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = o->fileName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { QObject* _r = o->instance();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 3: { bool _r = o->isLoaded();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->load();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { qint64 _r = o->loadHints(); // HACK for QLibrary::LoadHints 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { /* COPY OBJECT */
            QJsonObject *_r = new QJsonObject(o->metaData());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonObject";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: o->setFileName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setLoadHints(QLibrary::LoadHints(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 9: { bool _r = o->unload();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { /* COPY OBJECT */
            QObjectList *_r = sc ? new QObjectList(QPluginLoader::staticInstances()) : new QObjectList(o->staticInstances());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QObjectList";
            stack[0].type = PlastiQ::QtObject;
        } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QPluginLoader *o = reinterpret_cast<QPluginLoader*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QPluginLoader *o = reinterpret_cast<QPluginLoader*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QPluginLoader *o = reinterpret_cast<QPluginLoader*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QPluginLoader *o = reinterpret_cast<QPluginLoader*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPluginLoader::~PlastiQQPluginLoader() {
    QPluginLoader* o = reinterpret_cast<QPluginLoader*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

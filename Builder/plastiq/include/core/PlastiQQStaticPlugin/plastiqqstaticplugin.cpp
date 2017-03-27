#include "plastiqmethod.h"
#include "plastiqqstaticplugin.h"

#include <QStaticPlugin> 
#include <QObject>
#include <QJsonObject>

QHash<QByteArray, PlastiQMethod> PlastiQQStaticPlugin::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStaticPlugin::plastiqMethods = {
    { "instance()", { "instance", "", "QObject*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "metaData()", { "metaData", "", "QJsonObject", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rawMetaData()", { "rawMetaData", "", "const char*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStaticPlugin::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStaticPlugin::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStaticPlugin::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQStaticPlugin::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQStaticPlugin::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStaticPlugin::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QStaticPlugin", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStaticPlugin::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStaticPlugin::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStaticPlugin *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStaticPlugin *p = new PlastiQQStaticPlugin();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStaticPlugin *p = new PlastiQQStaticPlugin();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStaticPlugin *o = sc ? Q_NULLPTR : reinterpret_cast<QStaticPlugin*>(object->plastiq_data());

        switch(id) {
        case 0: { QObject* _r = o->instance();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 1: { /* COPY OBJECT */
            QJsonObject *_r = new QJsonObject(o->metaData());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QJsonObject";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { char* _r = const_cast<char*>(o->rawMetaData());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "char"; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QStaticPlugin *o = reinterpret_cast<QStaticPlugin*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQStaticPlugin::~PlastiQQStaticPlugin() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

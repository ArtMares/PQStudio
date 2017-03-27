#include "plastiqmethod.h"
#include "plastiqqnetworkproxyfactory.h"

#include <QNetworkProxyFactory> 

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkProxyFactory::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkProxyFactory::plastiqMethods = {
    { "setApplicationProxyFactory(QNetworkProxyFactory*)", { "setApplicationProxyFactory", "QNetworkProxyFactory*", "void", 0, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setUseSystemConfiguration(bool)", { "setUseSystemConfiguration", "bool", "void", 1, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "usesSystemConfiguration()", { "usesSystemConfiguration", "", "bool", 2, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkProxyFactory::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQNetworkProxyFactory::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQNetworkProxyFactory::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQNetworkProxyFactory::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQNetworkProxyFactory::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQNetworkProxyFactory::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QNetworkProxyFactory", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQNetworkProxyFactory::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQNetworkProxyFactory::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QNetworkProxyFactory *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQNetworkProxyFactory *p = new PlastiQQNetworkProxyFactory();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQNetworkProxyFactory *p = new PlastiQQNetworkProxyFactory();
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
        QNetworkProxyFactory *o = sc ? Q_NULLPTR : reinterpret_cast<QNetworkProxyFactory*>(object->plastiq_data());

        switch(id) {
        case 0: if(sc) { QNetworkProxyFactory::setApplicationProxyFactory(reinterpret_cast<QNetworkProxyFactory*>(stack[1].s_voidp)); } else { o->setApplicationProxyFactory(reinterpret_cast<QNetworkProxyFactory*>(stack[1].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 1: if(sc) { QNetworkProxyFactory::setUseSystemConfiguration(stack[1].s_bool); } else { o->setUseSystemConfiguration(stack[1].s_bool); }
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r = sc ? QNetworkProxyFactory::usesSystemConfiguration() : o->usesSystemConfiguration();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

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
        QNetworkProxyFactory *o = reinterpret_cast<QNetworkProxyFactory*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQNetworkProxyFactory::~PlastiQQNetworkProxyFactory() {
    QNetworkProxyFactory* o = reinterpret_cast<QNetworkProxyFactory*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

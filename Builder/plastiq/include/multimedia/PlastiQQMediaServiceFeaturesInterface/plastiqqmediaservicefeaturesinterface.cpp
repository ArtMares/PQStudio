#include "plastiqmethod.h"
#include "plastiqqmediaservicefeaturesinterface.h"

#include <QMediaServiceFeaturesInterface> 

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceFeaturesInterface::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceFeaturesInterface::plastiqMethods = {
    { "supportedFeatures(QByteArray)", { "supportedFeatures", "QByteArray&", "QMediaServiceProviderHint::Features", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceFeaturesInterface::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaServiceFeaturesInterface::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaServiceFeaturesInterface::plastiqConstants = {

};

const PlastiQ::ObjectType PlastiQQMediaServiceFeaturesInterface::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMediaServiceFeaturesInterface::plastiq_static_metaObject = {
    { Q_NULLPTR, "QMediaServiceFeaturesInterface", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaServiceFeaturesInterface::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaServiceFeaturesInterface::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaServiceFeaturesInterface *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        PlastiQQMediaServiceFeaturesInterface *p = new PlastiQQMediaServiceFeaturesInterface();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaServiceFeaturesInterface *p = new PlastiQQMediaServiceFeaturesInterface();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 1) {
            id -= 1;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        QMediaServiceFeaturesInterface *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaServiceFeaturesInterface*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->supportedFeatures(stack[1].s_bytearray) | ret: `QMediaServiceProviderHint::Features` */ break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
}

PlastiQQMediaServiceFeaturesInterface::~PlastiQQMediaServiceFeaturesInterface() {
    QMediaServiceFeaturesInterface* o = reinterpret_cast<QMediaServiceFeaturesInterface*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

#include "plastiqmethod.h"
#include "plastiqqmediaservicedefaultdeviceinterface.h"

#include <QMediaServiceDefaultDeviceInterface> 

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceDefaultDeviceInterface::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceDefaultDeviceInterface::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceDefaultDeviceInterface::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaServiceDefaultDeviceInterface::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaServiceDefaultDeviceInterface::plastiqConstants = {

};

const PlastiQ::ObjectType PlastiQQMediaServiceDefaultDeviceInterface::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMediaServiceDefaultDeviceInterface::plastiq_static_metaObject = {
    { Q_NULLPTR, "QMediaServiceDefaultDeviceInterface", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaServiceDefaultDeviceInterface::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaServiceDefaultDeviceInterface::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaServiceDefaultDeviceInterface *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        PlastiQQMediaServiceDefaultDeviceInterface *p = new PlastiQQMediaServiceDefaultDeviceInterface();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaServiceDefaultDeviceInterface *p = new PlastiQQMediaServiceDefaultDeviceInterface();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        QMediaServiceDefaultDeviceInterface *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaServiceDefaultDeviceInterface*>(object->plastiq_data());

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
}

PlastiQQMediaServiceDefaultDeviceInterface::~PlastiQQMediaServiceDefaultDeviceInterface() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

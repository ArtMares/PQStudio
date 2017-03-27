#include "plastiqmethod.h"
#include "plastiqqmediaservicesupporteddevicesinterface.h"

#include <QMediaServiceSupportedDevicesInterface> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceSupportedDevicesInterface::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceSupportedDevicesInterface::plastiqMethods = {
    { "deviceDescription(QByteArray,QByteArray)", { "deviceDescription", "QByteArray&,QByteArray&", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceSupportedDevicesInterface::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaServiceSupportedDevicesInterface::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaServiceSupportedDevicesInterface::plastiqConstants = {

};

const PlastiQ::ObjectType PlastiQQMediaServiceSupportedDevicesInterface::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMediaServiceSupportedDevicesInterface::plastiq_static_metaObject = {
    { Q_NULLPTR, "QMediaServiceSupportedDevicesInterface", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaServiceSupportedDevicesInterface::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaServiceSupportedDevicesInterface::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaServiceSupportedDevicesInterface *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        PlastiQQMediaServiceSupportedDevicesInterface *p = new PlastiQQMediaServiceSupportedDevicesInterface();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaServiceSupportedDevicesInterface *p = new PlastiQQMediaServiceSupportedDevicesInterface();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 1) {
            id -= 1;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        QMediaServiceSupportedDevicesInterface *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaServiceSupportedDevicesInterface*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->deviceDescription(stack[1].s_bytearray,
                    stack[2].s_bytearray);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
}

PlastiQQMediaServiceSupportedDevicesInterface::~PlastiQQMediaServiceSupportedDevicesInterface() {
    QMediaServiceSupportedDevicesInterface* o = reinterpret_cast<QMediaServiceSupportedDevicesInterface*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

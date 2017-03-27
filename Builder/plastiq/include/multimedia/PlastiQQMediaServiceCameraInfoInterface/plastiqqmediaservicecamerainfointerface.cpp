#include "plastiqmethod.h"
#include "plastiqqmediaservicecamerainfointerface.h"

#include <QMediaServiceCameraInfoInterface> 

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceCameraInfoInterface::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceCameraInfoInterface::plastiqMethods = {
    { "cameraOrientation(QByteArray)", { "cameraOrientation", "QByteArray&", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cameraPosition(QByteArray)", { "cameraPosition", "QByteArray&", "QCamera::Position", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaServiceCameraInfoInterface::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaServiceCameraInfoInterface::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaServiceCameraInfoInterface::plastiqConstants = {

};

const PlastiQ::ObjectType PlastiQQMediaServiceCameraInfoInterface::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMediaServiceCameraInfoInterface::plastiq_static_metaObject = {
    { Q_NULLPTR, "QMediaServiceCameraInfoInterface", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaServiceCameraInfoInterface::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaServiceCameraInfoInterface::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaServiceCameraInfoInterface *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        PlastiQQMediaServiceCameraInfoInterface *p = new PlastiQQMediaServiceCameraInfoInterface();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaServiceCameraInfoInterface *p = new PlastiQQMediaServiceCameraInfoInterface();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        QMediaServiceCameraInfoInterface *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaServiceCameraInfoInterface*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->cameraOrientation(stack[1].s_bytearray);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { long _r = o->cameraPosition(stack[1].s_bytearray); // HACK for QCamera::Position 
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
}

PlastiQQMediaServiceCameraInfoInterface::~PlastiQQMediaServiceCameraInfoInterface() {
    QMediaServiceCameraInfoInterface* o = reinterpret_cast<QMediaServiceCameraInfoInterface*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

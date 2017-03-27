#include "plastiqmethod.h"
#include "plastiqqtouchdevice.h"

#include <QTouchDevice> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQTouchDevice::plastiqConstructors = {
    { "QTouchDevice()", { "QTouchDevice", "", "QTouchDevice*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTouchDevice::plastiqMethods = {
    { "capabilities()", { "capabilities", "", "Capabilities", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumTouchPoints()", { "maximumTouchPoints", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCapabilities(enum)", { "setCapabilities", "Capabilities", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMaximumTouchPoints(int)", { "setMaximumTouchPoints", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setName(QString)", { "setName", "QString&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setType(enum)", { "setType", "DeviceType", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "DeviceType", 7, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTouchDevice::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTouchDevice::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTouchDevice::plastiqConstants = {

    /* QTouchDevice::CapabilityFlag */
   { "Position", QTouchDevice::Position },
   { "Area", QTouchDevice::Area },
   { "Pressure", QTouchDevice::Pressure },
   { "Velocity", QTouchDevice::Velocity },
   { "RawPositions", QTouchDevice::RawPositions },
   { "NormalizedPosition", QTouchDevice::NormalizedPosition },
   { "MouseEmulation", QTouchDevice::MouseEmulation },

    /* QTouchDevice::DeviceType */
   { "TouchScreen", QTouchDevice::TouchScreen },
   { "TouchPad", QTouchDevice::TouchPad },

};

QVector<PlastiQMetaObject*> PlastiQQTouchDevice::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTouchDevice::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTouchDevice::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTouchDevice", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTouchDevice::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTouchDevice::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTouchDevice *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTouchDevice(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTouchDevice *p = new PlastiQQTouchDevice();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTouchDevice *p = new PlastiQQTouchDevice();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTouchDevice *o = sc ? Q_NULLPTR : reinterpret_cast<QTouchDevice*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->capabilities(); // HACK for Capabilities 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { int _r = o->maximumTouchPoints();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: o->setCapabilities(QTouchDevice::Capabilities(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setMaximumTouchPoints(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setType(QTouchDevice::DeviceType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 7: { qint64 _r = o->type(); // HACK for DeviceType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

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
        QTouchDevice *o = reinterpret_cast<QTouchDevice*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTouchDevice::~PlastiQQTouchDevice() {
    QTouchDevice* o = reinterpret_cast<QTouchDevice*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

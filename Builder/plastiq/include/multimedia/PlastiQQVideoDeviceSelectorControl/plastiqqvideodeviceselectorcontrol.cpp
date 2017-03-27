#include "plastiqmethod.h"
#include "plastiqqvideodeviceselectorcontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QVideoDeviceSelectorControl> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQVideoDeviceSelectorControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoDeviceSelectorControl::plastiqMethods = {
    { "defaultDevice()", { "defaultDevice", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "deviceCount()", { "deviceCount", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "deviceDescription(int)", { "deviceDescription", "int", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "deviceName(int)", { "deviceName", "int", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectedDevice()", { "selectedDevice", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelectedDevice(int)", { "setSelectedDevice", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoDeviceSelectorControl::plastiqSignals = {
    { "devicesChanged()", { "devicesChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "selectedDeviceChanged(int)", { "selectedDeviceChanged", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "selectedDeviceChanged(QString)", { "selectedDeviceChanged", "QString&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQVideoDeviceSelectorControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQVideoDeviceSelectorControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVideoDeviceSelectorControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQVideoDeviceSelectorControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQVideoDeviceSelectorControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QVideoDeviceSelectorControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVideoDeviceSelectorControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVideoDeviceSelectorControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVideoDeviceSelectorControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVideoDeviceSelectorControl *p = new PlastiQQVideoDeviceSelectorControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVideoDeviceSelectorControl *p = new PlastiQQVideoDeviceSelectorControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QVideoDeviceSelectorControl *o = sc ? Q_NULLPTR : reinterpret_cast<QVideoDeviceSelectorControl*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->defaultDevice();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->deviceCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { QString _r = o->deviceDescription(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { QString _r = o->deviceName(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { int _r = o->selectedDevice();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: o->setSelectedDevice(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 3) {
            id -= 3;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QVideoDeviceSelectorControl *o = reinterpret_cast<QVideoDeviceSelectorControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QVideoDeviceSelectorControl::devicesChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "devicesChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, static_cast<void (QVideoDeviceSelectorControl::*)(int)>(&QVideoDeviceSelectorControl::selectedDeviceChanged),
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "selectedDeviceChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, static_cast<void (QVideoDeviceSelectorControl::*)(const QString&)>(&QVideoDeviceSelectorControl::selectedDeviceChanged),
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "selectedDeviceChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QVideoDeviceSelectorControl *o = reinterpret_cast<QVideoDeviceSelectorControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QVideoDeviceSelectorControl *o = reinterpret_cast<QVideoDeviceSelectorControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QVideoDeviceSelectorControl *o = reinterpret_cast<QVideoDeviceSelectorControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQVideoDeviceSelectorControl::~PlastiQQVideoDeviceSelectorControl() {
    QVideoDeviceSelectorControl* o = reinterpret_cast<QVideoDeviceSelectorControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

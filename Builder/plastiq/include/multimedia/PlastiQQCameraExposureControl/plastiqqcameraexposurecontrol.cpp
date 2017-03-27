#include "plastiqmethod.h"
#include "plastiqqcameraexposurecontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QCameraExposureControl> 
#include <QVariant>
#include <QVariantList>

QHash<QByteArray, PlastiQMethod> PlastiQQCameraExposureControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraExposureControl::plastiqMethods = {
    { "actualValue(enum)", { "actualValue", "ExposureParameter", "QVariant", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isParameterSupported(enum)", { "isParameterSupported", "ExposureParameter", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "requestedValue(enum)", { "requestedValue", "ExposureParameter", "QVariant", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setValue(enum,QVariant)", { "setValue", "ExposureParameter,QVariant&", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedParameterRange(enum,bool*)", { "supportedParameterRange", "ExposureParameter,bool*", "QVariantList", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraExposureControl::plastiqSignals = {
    { "actualValueChanged(int)", { "actualValueChanged", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "parameterRangeChanged(int)", { "parameterRangeChanged", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "requestedValueChanged(int)", { "requestedValueChanged", "int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraExposureControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCameraExposureControl::plastiqConstants = {

    /* QCameraExposureControl::ExposureParameter */
   { "ISO", QCameraExposureControl::ISO },
   { "Aperture", QCameraExposureControl::Aperture },
   { "ShutterSpeed", QCameraExposureControl::ShutterSpeed },
   { "ExposureCompensation", QCameraExposureControl::ExposureCompensation },
   { "FlashPower", QCameraExposureControl::FlashPower },
   { "FlashCompensation", QCameraExposureControl::FlashCompensation },
   { "TorchPower", QCameraExposureControl::TorchPower },
   { "SpotMeteringPoint", QCameraExposureControl::SpotMeteringPoint },
   { "ExposureMode", QCameraExposureControl::ExposureMode },
   { "MeteringMode", QCameraExposureControl::MeteringMode },
   { "ExtendedExposureParameter", QCameraExposureControl::ExtendedExposureParameter },

};

QVector<PlastiQMetaObject*> PlastiQQCameraExposureControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCameraExposureControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCameraExposureControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QCameraExposureControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraExposureControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraExposureControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraExposureControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraExposureControl *p = new PlastiQQCameraExposureControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraExposureControl *p = new PlastiQQCameraExposureControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCameraExposureControl *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraExposureControl*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->actualValue(QCameraExposureControl::ExposureParameter(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { bool _r = o->isParameterSupported(QCameraExposureControl::ExposureParameter(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->requestedValue(QCameraExposureControl::ExposureParameter(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { bool _r = o->setValue(QCameraExposureControl::ExposureParameter(stack[1].s_int64),
                    stack[2].s_variant);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: /* UNSUPPORTED_RETURN_VALUE o->supportedParameterRange(QCameraExposureControl::ExposureParameter(stack[1].s_int64),
                    reinterpret_cast<bool*>(stack[2].s_voidp)) | ret: `QVariantList` */ break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 3) {
            id -= 3;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCameraExposureControl *o = reinterpret_cast<QCameraExposureControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCameraExposureControl::actualValueChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "actualValueChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QCameraExposureControl::parameterRangeChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "parameterRangeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QCameraExposureControl::requestedValueChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "requestedValueChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCameraExposureControl *o = reinterpret_cast<QCameraExposureControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCameraExposureControl *o = reinterpret_cast<QCameraExposureControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCameraExposureControl *o = reinterpret_cast<QCameraExposureControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCameraExposureControl::~PlastiQQCameraExposureControl() {
    QCameraExposureControl* o = reinterpret_cast<QCameraExposureControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

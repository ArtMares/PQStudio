#include "plastiqmethod.h"
#include "plastiqqcameraimageprocessingcontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QCameraImageProcessingControl> 
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQCameraImageProcessingControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraImageProcessingControl::plastiqMethods = {
    { "isParameterSupported(enum)", { "isParameterSupported", "ProcessingParameter", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isParameterValueSupported(enum,QVariant)", { "isParameterValueSupported", "ProcessingParameter,QVariant&", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parameter(enum)", { "parameter", "ProcessingParameter", "QVariant", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setParameter(enum,QVariant)", { "setParameter", "ProcessingParameter,QVariant&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraImageProcessingControl::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraImageProcessingControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCameraImageProcessingControl::plastiqConstants = {

    /* QCameraImageProcessingControl::ProcessingParameter */
   { "WhiteBalancePreset", QCameraImageProcessingControl::WhiteBalancePreset },
   { "ColorTemperature", QCameraImageProcessingControl::ColorTemperature },
   { "Contrast", QCameraImageProcessingControl::Contrast },
   { "Saturation", QCameraImageProcessingControl::Saturation },
   { "Brightness", QCameraImageProcessingControl::Brightness },
   { "Sharpening", QCameraImageProcessingControl::Sharpening },
   { "Denoising", QCameraImageProcessingControl::Denoising },
   { "ContrastAdjustment", QCameraImageProcessingControl::ContrastAdjustment },
   { "SaturationAdjustment", QCameraImageProcessingControl::SaturationAdjustment },
   { "BrightnessAdjustment", QCameraImageProcessingControl::BrightnessAdjustment },
   { "SharpeningAdjustment", QCameraImageProcessingControl::SharpeningAdjustment },
   { "DenoisingAdjustment", QCameraImageProcessingControl::DenoisingAdjustment },
   { "ColorFilter", QCameraImageProcessingControl::ColorFilter },
   { "ExtendedParameter", QCameraImageProcessingControl::ExtendedParameter },

};

QVector<PlastiQMetaObject*> PlastiQQCameraImageProcessingControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCameraImageProcessingControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCameraImageProcessingControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QCameraImageProcessingControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraImageProcessingControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraImageProcessingControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraImageProcessingControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraImageProcessingControl *p = new PlastiQQCameraImageProcessingControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraImageProcessingControl *p = new PlastiQQCameraImageProcessingControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCameraImageProcessingControl *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraImageProcessingControl*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isParameterSupported(QCameraImageProcessingControl::ProcessingParameter(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->isParameterValueSupported(QCameraImageProcessingControl::ProcessingParameter(stack[1].s_int64),
                    stack[2].s_variant);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->parameter(QCameraImageProcessingControl::ProcessingParameter(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: o->setParameter(QCameraImageProcessingControl::ProcessingParameter(stack[1].s_int64),
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCameraImageProcessingControl *o = reinterpret_cast<QCameraImageProcessingControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCameraImageProcessingControl *o = reinterpret_cast<QCameraImageProcessingControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCameraImageProcessingControl *o = reinterpret_cast<QCameraImageProcessingControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCameraImageProcessingControl *o = reinterpret_cast<QCameraImageProcessingControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCameraImageProcessingControl::~PlastiQQCameraImageProcessingControl() {
    QCameraImageProcessingControl* o = reinterpret_cast<QCameraImageProcessingControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

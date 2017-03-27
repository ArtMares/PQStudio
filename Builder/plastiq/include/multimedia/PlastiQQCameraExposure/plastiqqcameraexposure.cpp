#include "plastiqmethod.h"
#include "plastiqqcameraexposure.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QCameraExposure> 
#include <QPointF>

QHash<QByteArray, PlastiQMethod> PlastiQQCameraExposure::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraExposure::plastiqMethods = {
    { "aperture()", { "aperture", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exposureCompensation()", { "exposureCompensation", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exposureMode()", { "exposureMode", "", "ExposureMode", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flashMode()", { "flashMode", "", "FlashModes", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAvailable()", { "isAvailable", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isExposureModeSupported(enum)", { "isExposureModeSupported", "ExposureMode", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFlashModeSupported(enum)", { "isFlashModeSupported", "FlashModes", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFlashReady()", { "isFlashReady", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMeteringModeSupported(enum)", { "isMeteringModeSupported", "MeteringMode", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isoSensitivity()", { "isoSensitivity", "", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "meteringMode()", { "meteringMode", "", "MeteringMode", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "requestedAperture()", { "requestedAperture", "", "qreal", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "requestedIsoSensitivity()", { "requestedIsoSensitivity", "", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "requestedShutterSpeed()", { "requestedShutterSpeed", "", "qreal", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSpotMeteringPoint(QPointF&)", { "setSpotMeteringPoint", "QPointF&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shutterSpeed()", { "shutterSpeed", "", "qreal", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "spotMeteringPoint()", { "spotMeteringPoint", "", "QPointF", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoAperture()", { "setAutoAperture", "", "void", 17, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setAutoIsoSensitivity()", { "setAutoIsoSensitivity", "", "void", 18, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setAutoShutterSpeed()", { "setAutoShutterSpeed", "", "void", 19, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setExposureCompensation(double)", { "setExposureCompensation", "qreal", "void", 20, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setExposureMode(enum)", { "setExposureMode", "ExposureMode", "void", 21, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setFlashMode(enum)", { "setFlashMode", "FlashModes", "void", 22, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setManualAperture(double)", { "setManualAperture", "qreal", "void", 23, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setManualIsoSensitivity(int)", { "setManualIsoSensitivity", "int", "void", 24, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setManualShutterSpeed(double)", { "setManualShutterSpeed", "qreal", "void", 25, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMeteringMode(enum)", { "setMeteringMode", "MeteringMode", "void", 26, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraExposure::plastiqSignals = {
    { "apertureChanged(double)", { "apertureChanged", "qreal", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "apertureRangeChanged()", { "apertureRangeChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "exposureCompensationChanged(double)", { "exposureCompensationChanged", "qreal", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "flashReady(bool)", { "flashReady", "bool", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "isoSensitivityChanged(int)", { "isoSensitivityChanged", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "shutterSpeedChanged(double)", { "shutterSpeedChanged", "qreal", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "shutterSpeedRangeChanged()", { "shutterSpeedRangeChanged", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraExposure::plastiqProperties = {
    { "aperture", { "aperture", "qreal", "apertureChanged", "aperture" } },
    { "exposureCompensation", { "exposureCompensation", "qreal", "setExposureCompensation", "exposureCompensation" } },
    { "exposureMode", { "exposureMode", "long", "setExposureMode", "exposureMode" } },
    { "flashMode", { "flashMode", "long", "setFlashMode", "flashMode" } },
    { "flashReady", { "flashReady", "bool", "flashReady", "isFlashReady" } },
    { "isoSensitivity", { "isoSensitivity", "int", "isoSensitivityChanged", "isoSensitivity" } },
    { "meteringMode", { "meteringMode", "long", "setMeteringMode", "meteringMode" } },
    { "shutterSpeed", { "shutterSpeed", "qreal", "shutterSpeedChanged", "shutterSpeed" } },

};

QHash<QByteArray, long> PlastiQQCameraExposure::plastiqConstants = {

    /* QCameraExposure::ExposureMode */
   { "ExposureAuto", QCameraExposure::ExposureAuto },
   { "ExposureManual", QCameraExposure::ExposureManual },
   { "ExposurePortrait", QCameraExposure::ExposurePortrait },
   { "ExposureNight", QCameraExposure::ExposureNight },
   { "ExposureBacklight", QCameraExposure::ExposureBacklight },
   { "ExposureSpotlight", QCameraExposure::ExposureSpotlight },
   { "ExposureSports", QCameraExposure::ExposureSports },
   { "ExposureSnow", QCameraExposure::ExposureSnow },
   { "ExposureBeach", QCameraExposure::ExposureBeach },
   { "ExposureLargeAperture", QCameraExposure::ExposureLargeAperture },
   { "ExposureSmallAperture", QCameraExposure::ExposureSmallAperture },
   { "ExposureAction", QCameraExposure::ExposureAction },
   { "ExposureLandscape", QCameraExposure::ExposureLandscape },
   { "ExposureNightPortrait", QCameraExposure::ExposureNightPortrait },
   { "ExposureTheatre", QCameraExposure::ExposureTheatre },
   { "ExposureSunset", QCameraExposure::ExposureSunset },
   { "ExposureSteadyPhoto", QCameraExposure::ExposureSteadyPhoto },
   { "ExposureFireworks", QCameraExposure::ExposureFireworks },
   { "ExposureParty", QCameraExposure::ExposureParty },
   { "ExposureCandlelight", QCameraExposure::ExposureCandlelight },
   { "ExposureBarcode", QCameraExposure::ExposureBarcode },
   { "ExposureModeVendor", QCameraExposure::ExposureModeVendor },

    /* QCameraExposure::FlashMode */
   { "FlashAuto", QCameraExposure::FlashAuto },
   { "FlashOff", QCameraExposure::FlashOff },
   { "FlashOn", QCameraExposure::FlashOn },
   { "FlashRedEyeReduction", QCameraExposure::FlashRedEyeReduction },
   { "FlashFill", QCameraExposure::FlashFill },
   { "FlashTorch", QCameraExposure::FlashTorch },
   { "FlashVideoLight", QCameraExposure::FlashVideoLight },
   { "FlashSlowSyncFrontCurtain", QCameraExposure::FlashSlowSyncFrontCurtain },
   { "FlashSlowSyncRearCurtain", QCameraExposure::FlashSlowSyncRearCurtain },
   { "FlashManual", QCameraExposure::FlashManual },

    /* QCameraExposure::MeteringMode */
   { "MeteringMatrix", QCameraExposure::MeteringMatrix },
   { "MeteringAverage", QCameraExposure::MeteringAverage },
   { "MeteringSpot", QCameraExposure::MeteringSpot },

};

QVector<PlastiQMetaObject*> PlastiQQCameraExposure::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCameraExposure::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCameraExposure::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QCameraExposure", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraExposure::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraExposure::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraExposure *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraExposure *p = new PlastiQQCameraExposure();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraExposure *p = new PlastiQQCameraExposure();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 27) {
            id -= 27;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCameraExposure *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraExposure*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->aperture();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { double _r = o->exposureCompensation();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { qint64 _r = o->exposureMode(); // HACK for ExposureMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { qint64 _r = o->flashMode(); // HACK for FlashModes 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { bool _r = o->isAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isExposureModeSupported(QCameraExposure::ExposureMode(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->isFlashModeSupported(QCameraExposure::FlashModes(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->isFlashReady();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isMeteringModeSupported(QCameraExposure::MeteringMode(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { int _r = o->isoSensitivity();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { qint64 _r = o->meteringMode(); // HACK for MeteringMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: { double _r = o->requestedAperture();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 12: { int _r = o->requestedIsoSensitivity();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { double _r = o->requestedShutterSpeed();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 14: o->setSpotMeteringPoint((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 15: { double _r = o->shutterSpeed();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 16: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->spotMeteringPoint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: o->setAutoAperture();
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setAutoIsoSensitivity();
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setAutoShutterSpeed();
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setExposureCompensation(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setExposureMode(QCameraExposure::ExposureMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setFlashMode(QCameraExposure::FlashModes(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setManualAperture(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setManualIsoSensitivity(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setManualShutterSpeed(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setMeteringMode(QCameraExposure::MeteringMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 7) {
            id -= 7;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCameraExposure *o = reinterpret_cast<QCameraExposure*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCameraExposure::apertureChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "apertureChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QCameraExposure::apertureRangeChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "apertureRangeChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QCameraExposure::exposureCompensationChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "exposureCompensationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QCameraExposure::flashReady,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "flashReady", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QCameraExposure::isoSensitivityChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "isoSensitivityChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QCameraExposure::shutterSpeedChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "shutterSpeedChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QCameraExposure::shutterSpeedRangeChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "shutterSpeedRangeChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCameraExposure *o = reinterpret_cast<QCameraExposure*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCameraExposure *o = reinterpret_cast<QCameraExposure*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCameraExposure *o = reinterpret_cast<QCameraExposure*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCameraExposure::~PlastiQQCameraExposure() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

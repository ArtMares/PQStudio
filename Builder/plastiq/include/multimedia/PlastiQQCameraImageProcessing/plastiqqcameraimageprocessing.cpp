#include "plastiqmethod.h"
#include "plastiqqcameraimageprocessing.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QCameraImageProcessing> 

QHash<QByteArray, PlastiQMethod> PlastiQQCameraImageProcessing::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraImageProcessing::plastiqMethods = {
    { "brightness()", { "brightness", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "colorFilter()", { "colorFilter", "", "ColorFilter", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contrast()", { "contrast", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "denoisingLevel()", { "denoisingLevel", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAvailable()", { "isAvailable", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isColorFilterSupported(enum)", { "isColorFilterSupported", "ColorFilter", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isWhiteBalanceModeSupported(enum)", { "isWhiteBalanceModeSupported", "WhiteBalanceMode", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "manualWhiteBalance()", { "manualWhiteBalance", "", "qreal", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "saturation()", { "saturation", "", "qreal", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrightness(double)", { "setBrightness", "qreal", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColorFilter(enum)", { "setColorFilter", "ColorFilter", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContrast(double)", { "setContrast", "qreal", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDenoisingLevel(double)", { "setDenoisingLevel", "qreal", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setManualWhiteBalance(double)", { "setManualWhiteBalance", "qreal", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSaturation(double)", { "setSaturation", "qreal", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSharpeningLevel(double)", { "setSharpeningLevel", "qreal", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWhiteBalanceMode(enum)", { "setWhiteBalanceMode", "WhiteBalanceMode", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sharpeningLevel()", { "sharpeningLevel", "", "qreal", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "whiteBalanceMode()", { "whiteBalanceMode", "", "WhiteBalanceMode", 18, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraImageProcessing::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraImageProcessing::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCameraImageProcessing::plastiqConstants = {

    /* QCameraImageProcessing::ColorFilter */
   { "ColorFilterNone", QCameraImageProcessing::ColorFilterNone },
   { "ColorFilterGrayscale", QCameraImageProcessing::ColorFilterGrayscale },
   { "ColorFilterNegative", QCameraImageProcessing::ColorFilterNegative },
   { "ColorFilterSolarize", QCameraImageProcessing::ColorFilterSolarize },
   { "ColorFilterSepia", QCameraImageProcessing::ColorFilterSepia },
   { "ColorFilterPosterize", QCameraImageProcessing::ColorFilterPosterize },
   { "ColorFilterWhiteboard", QCameraImageProcessing::ColorFilterWhiteboard },
   { "ColorFilterBlackboard", QCameraImageProcessing::ColorFilterBlackboard },
   { "ColorFilterAqua", QCameraImageProcessing::ColorFilterAqua },
   { "ColorFilterVendor", QCameraImageProcessing::ColorFilterVendor },

    /* QCameraImageProcessing::WhiteBalanceMode */
   { "WhiteBalanceAuto", QCameraImageProcessing::WhiteBalanceAuto },
   { "WhiteBalanceManual", QCameraImageProcessing::WhiteBalanceManual },
   { "WhiteBalanceSunlight", QCameraImageProcessing::WhiteBalanceSunlight },
   { "WhiteBalanceCloudy", QCameraImageProcessing::WhiteBalanceCloudy },
   { "WhiteBalanceShade", QCameraImageProcessing::WhiteBalanceShade },
   { "WhiteBalanceTungsten", QCameraImageProcessing::WhiteBalanceTungsten },
   { "WhiteBalanceFluorescent", QCameraImageProcessing::WhiteBalanceFluorescent },
   { "WhiteBalanceFlash", QCameraImageProcessing::WhiteBalanceFlash },
   { "WhiteBalanceSunset", QCameraImageProcessing::WhiteBalanceSunset },
   { "WhiteBalanceVendor", QCameraImageProcessing::WhiteBalanceVendor },

};

QVector<PlastiQMetaObject*> PlastiQQCameraImageProcessing::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCameraImageProcessing::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCameraImageProcessing::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QCameraImageProcessing", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraImageProcessing::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraImageProcessing::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraImageProcessing *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraImageProcessing *p = new PlastiQQCameraImageProcessing();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraImageProcessing *p = new PlastiQQCameraImageProcessing();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 19) {
            id -= 19;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCameraImageProcessing *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraImageProcessing*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->brightness();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { qint64 _r = o->colorFilter(); // HACK for ColorFilter 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { double _r = o->contrast();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { double _r = o->denoisingLevel();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { bool _r = o->isAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isColorFilterSupported(QCameraImageProcessing::ColorFilter(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->isWhiteBalanceModeSupported(QCameraImageProcessing::WhiteBalanceMode(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { double _r = o->manualWhiteBalance();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 8: { double _r = o->saturation();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 9: o->setBrightness(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setColorFilter(QCameraImageProcessing::ColorFilter(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setContrast(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setDenoisingLevel(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setManualWhiteBalance(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setSaturation(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setSharpeningLevel(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setWhiteBalanceMode(QCameraImageProcessing::WhiteBalanceMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 17: { double _r = o->sharpeningLevel();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 18: { qint64 _r = o->whiteBalanceMode(); // HACK for WhiteBalanceMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCameraImageProcessing *o = reinterpret_cast<QCameraImageProcessing*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCameraImageProcessing *o = reinterpret_cast<QCameraImageProcessing*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCameraImageProcessing *o = reinterpret_cast<QCameraImageProcessing*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCameraImageProcessing *o = reinterpret_cast<QCameraImageProcessing*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCameraImageProcessing::~PlastiQQCameraImageProcessing() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

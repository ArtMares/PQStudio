#include "plastiqmethod.h"
#include "plastiqqcamerafocus.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QCameraFocus> 
#include <QPointF>
#include <QCameraFocusZoneList>

QHash<QByteArray, PlastiQMethod> PlastiQQCameraFocus::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraFocus::plastiqMethods = {
    { "customFocusPoint()", { "customFocusPoint", "", "QPointF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "digitalZoom()", { "digitalZoom", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focusMode()", { "focusMode", "", "FocusModes", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focusPointMode()", { "focusPointMode", "", "FocusPointMode", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focusZones()", { "focusZones", "", "QCameraFocusZoneList", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAvailable()", { "isAvailable", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFocusModeSupported(enum)", { "isFocusModeSupported", "FocusModes", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFocusPointModeSupported(enum)", { "isFocusPointModeSupported", "FocusPointMode", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumDigitalZoom()", { "maximumDigitalZoom", "", "qreal", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumOpticalZoom()", { "maximumOpticalZoom", "", "qreal", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "opticalZoom()", { "opticalZoom", "", "qreal", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCustomFocusPoint(QPointF&)", { "setCustomFocusPoint", "QPointF&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocusMode(enum)", { "setFocusMode", "FocusModes", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocusPointMode(enum)", { "setFocusPointMode", "FocusPointMode", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "zoomTo(double,double)", { "zoomTo", "qreal,qreal", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraFocus::plastiqSignals = {
    { "digitalZoomChanged(double)", { "digitalZoomChanged", "qreal", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "focusZonesChanged()", { "focusZonesChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "maximumDigitalZoomChanged(double)", { "maximumDigitalZoomChanged", "qreal", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "maximumOpticalZoomChanged(double)", { "maximumOpticalZoomChanged", "qreal", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "opticalZoomChanged(double)", { "opticalZoomChanged", "qreal", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraFocus::plastiqProperties = {
    { "customFocusPoint", { "customFocusPoint", "QPointF", "setCustomFocusPoint", "customFocusPoint" } },
    { "digitalZoom", { "digitalZoom", "qreal", "digitalZoomChanged", "digitalZoom" } },
    { "focusMode", { "focusMode", "long", "setFocusMode", "focusMode" } },
    { "focusPointMode", { "focusPointMode", "long", "setFocusPointMode", "focusPointMode" } },
    { "focusZones", { "focusZones", "QCameraFocusZoneList", "focusZonesChanged", "focusZones" } },
    { "opticalZoom", { "opticalZoom", "qreal", "opticalZoomChanged", "opticalZoom" } },

};

QHash<QByteArray, long> PlastiQQCameraFocus::plastiqConstants = {

    /* QCameraFocus::FocusMode */
   { "ManualFocus", QCameraFocus::ManualFocus },
   { "HyperfocalFocus", QCameraFocus::HyperfocalFocus },
   { "InfinityFocus", QCameraFocus::InfinityFocus },
   { "AutoFocus", QCameraFocus::AutoFocus },
   { "ContinuousFocus", QCameraFocus::ContinuousFocus },
   { "MacroFocus", QCameraFocus::MacroFocus },

    /* QCameraFocus::FocusPointMode */
   { "FocusPointAuto", QCameraFocus::FocusPointAuto },
   { "FocusPointCenter", QCameraFocus::FocusPointCenter },
   { "FocusPointFaceDetection", QCameraFocus::FocusPointFaceDetection },
   { "FocusPointCustom", QCameraFocus::FocusPointCustom },

};

QVector<PlastiQMetaObject*> PlastiQQCameraFocus::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCameraFocus::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCameraFocus::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QCameraFocus", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraFocus::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraFocus::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraFocus *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraFocus *p = new PlastiQQCameraFocus();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraFocus *p = new PlastiQQCameraFocus();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 15) {
            id -= 15;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCameraFocus *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraFocus*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->customFocusPoint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { double _r = o->digitalZoom();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { qint64 _r = o->focusMode(); // HACK for FocusModes 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { qint64 _r = o->focusPointMode(); // HACK for FocusPointMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: /* UNSUPPORTED_RETURN_VALUE o->focusZones() | ret: `QCameraFocusZoneList` */ break;
        case 5: { bool _r = o->isAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->isFocusModeSupported(QCameraFocus::FocusModes(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->isFocusPointModeSupported(QCameraFocus::FocusPointMode(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { double _r = o->maximumDigitalZoom();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 9: { double _r = o->maximumOpticalZoom();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 10: { double _r = o->opticalZoom();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 11: o->setCustomFocusPoint((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setFocusMode(QCameraFocus::FocusModes(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setFocusPointMode(QCameraFocus::FocusPointMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->zoomTo(stack[1].s_double,
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 5) {
            id -= 5;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCameraFocus *o = reinterpret_cast<QCameraFocus*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCameraFocus::digitalZoomChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "digitalZoomChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QCameraFocus::focusZonesChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "focusZonesChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QCameraFocus::maximumDigitalZoomChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "maximumDigitalZoomChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QCameraFocus::maximumOpticalZoomChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "maximumOpticalZoomChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QCameraFocus::opticalZoomChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "opticalZoomChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCameraFocus *o = reinterpret_cast<QCameraFocus*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCameraFocus *o = reinterpret_cast<QCameraFocus*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCameraFocus *o = reinterpret_cast<QCameraFocus*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCameraFocus::~PlastiQQCameraFocus() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

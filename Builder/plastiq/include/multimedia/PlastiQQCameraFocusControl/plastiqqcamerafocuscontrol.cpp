#include "plastiqmethod.h"
#include "plastiqqcamerafocuscontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QCameraFocusControl> 
#include <QPointF>
#include <QCameraFocusZoneList>

QHash<QByteArray, PlastiQMethod> PlastiQQCameraFocusControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraFocusControl::plastiqMethods = {
    { "customFocusPoint()", { "customFocusPoint", "", "QPointF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focusMode()", { "focusMode", "", "QCameraFocus::FocusModes", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focusPointMode()", { "focusPointMode", "", "QCameraFocus::FocusPointMode", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focusZones()", { "focusZones", "", "QCameraFocusZoneList", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFocusModeSupported(enum)", { "isFocusModeSupported", "QCameraFocus::FocusModes", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFocusPointModeSupported(enum)", { "isFocusPointModeSupported", "QCameraFocus::FocusPointMode", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCustomFocusPoint(QPointF&)", { "setCustomFocusPoint", "QPointF&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocusMode(enum)", { "setFocusMode", "QCameraFocus::FocusModes", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocusPointMode(enum)", { "setFocusPointMode", "QCameraFocus::FocusPointMode", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraFocusControl::plastiqSignals = {
    { "customFocusPointChanged(QPointF&)", { "customFocusPointChanged", "QPointF&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "focusModeChanged(enum)", { "focusModeChanged", "QCameraFocus::FocusModes", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "focusPointModeChanged(enum)", { "focusPointModeChanged", "QCameraFocus::FocusPointMode", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "focusZonesChanged()", { "focusZonesChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraFocusControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCameraFocusControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCameraFocusControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCameraFocusControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCameraFocusControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QCameraFocusControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraFocusControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraFocusControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraFocusControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraFocusControl *p = new PlastiQQCameraFocusControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraFocusControl *p = new PlastiQQCameraFocusControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCameraFocusControl *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraFocusControl*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->customFocusPoint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { qint64 _r = o->focusMode(); // HACK for QCameraFocus::FocusModes 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { qint64 _r = o->focusPointMode(); // HACK for QCameraFocus::FocusPointMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: /* UNSUPPORTED_RETURN_VALUE o->focusZones() | ret: `QCameraFocusZoneList` */ break;
        case 4: { bool _r = o->isFocusModeSupported(QCameraFocus::FocusModes(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isFocusPointModeSupported(QCameraFocus::FocusPointMode(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: o->setCustomFocusPoint((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setFocusMode(QCameraFocus::FocusModes(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setFocusPointMode(QCameraFocus::FocusPointMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCameraFocusControl *o = reinterpret_cast<QCameraFocusControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCameraFocusControl::customFocusPointChanged,
            [=](const QPointF& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QPointF(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QPointF";
                PlastiQ_activate(sender, "customFocusPointChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QCameraFocusControl::focusModeChanged,
            [=](QCameraFocus::FocusModes arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QCameraFocus::FocusModes";
                PlastiQ_activate(sender, "focusModeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QCameraFocusControl::focusPointModeChanged,
            [=](QCameraFocus::FocusPointMode arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QCameraFocus::FocusPointMode";
                PlastiQ_activate(sender, "focusPointModeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QCameraFocusControl::focusZonesChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "focusZonesChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCameraFocusControl *o = reinterpret_cast<QCameraFocusControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCameraFocusControl *o = reinterpret_cast<QCameraFocusControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCameraFocusControl *o = reinterpret_cast<QCameraFocusControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCameraFocusControl::~PlastiQQCameraFocusControl() {
    QCameraFocusControl* o = reinterpret_cast<QCameraFocusControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

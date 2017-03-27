#include "plastiqmethod.h"
#include "plastiqqcameracontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QCameraControl> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQCameraControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraControl::plastiqMethods = {
    { "canChangeProperty(enum,enum)", { "canChangeProperty", "PropertyChangeType,QCamera::Status", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "captureMode()", { "captureMode", "", "QCamera::CaptureModes", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCaptureModeSupported(enum)", { "isCaptureModeSupported", "QCamera::CaptureModes", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCaptureMode(enum)", { "setCaptureMode", "QCamera::CaptureModes", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setState(enum)", { "setState", "QCamera::State", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "QCamera::State", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "status()", { "status", "", "QCamera::Status", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraControl::plastiqSignals = {
    { "captureModeChanged(enum)", { "captureModeChanged", "QCamera::CaptureModes", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "error(int,QString)", { "error", "int,QString&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum)", { "stateChanged", "QCamera::State", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "statusChanged(enum)", { "statusChanged", "QCamera::Status", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCameraControl::plastiqConstants = {

    /* QCameraControl::PropertyChangeType */
   { "CaptureMode", QCameraControl::CaptureMode },
   { "ImageEncodingSettings", QCameraControl::ImageEncodingSettings },
   { "VideoEncodingSettings", QCameraControl::VideoEncodingSettings },
   { "Viewfinder", QCameraControl::Viewfinder },
   { "ViewfinderSettings", QCameraControl::ViewfinderSettings },

};

QVector<PlastiQMetaObject*> PlastiQQCameraControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCameraControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCameraControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QCameraControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraControl *p = new PlastiQQCameraControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraControl *p = new PlastiQQCameraControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCameraControl *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraControl*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->canChangeProperty(QCameraControl::PropertyChangeType(stack[1].s_int64),
                    QCamera::Status(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { qint64 _r = o->captureMode(); // HACK for QCamera::CaptureModes 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { bool _r = o->isCaptureModeSupported(QCamera::CaptureModes(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: o->setCaptureMode(QCamera::CaptureModes(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setState(QCamera::State(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 5: { qint64 _r = o->state(); // HACK for QCamera::State 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { qint64 _r = o->status(); // HACK for QCamera::Status 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCameraControl *o = reinterpret_cast<QCameraControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCameraControl::captureModeChanged,
            [=](QCamera::CaptureModes arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QCamera::CaptureModes";
                PlastiQ_activate(sender, "captureModeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QCameraControl::error,
            [=](int arg0, const QString& arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_string = const_cast<QString&>(arg1);
                    cstack[1].type = PlastiQ::String; cstack[1].name = "QString";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QCameraControl::stateChanged,
            [=](QCamera::State arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QCamera::State";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QCameraControl::statusChanged,
            [=](QCamera::Status arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QCamera::Status";
                PlastiQ_activate(sender, "statusChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCameraControl *o = reinterpret_cast<QCameraControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCameraControl *o = reinterpret_cast<QCameraControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCameraControl *o = reinterpret_cast<QCameraControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCameraControl::~PlastiQQCameraControl() {
    QCameraControl* o = reinterpret_cast<QCameraControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

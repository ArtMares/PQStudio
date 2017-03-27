#include "plastiqmethod.h"
#include "plastiqqcamera.h"

#include "multimedia/PlastiQQMediaObject/plastiqqmediaobject.h"
#include <QCamera> 
#include <QString>
#include <QCameraExposure>
#include <QCameraFocus>
#include <QCameraImageProcessing>
#include <QCameraViewfinderSettings>

QHash<QByteArray, PlastiQMethod> PlastiQQCamera::plastiqConstructors = {
    { "QCamera()", { "QCamera", "", "QCamera*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCamera(QObject*)", { "QCamera", "QObject*", "QCamera*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCamera(QByteArray)", { "QCamera", "QByteArray&", "QCamera*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCamera(QByteArray,QObject*)", { "QCamera", "QByteArray&,QObject*", "QCamera*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCamera(QCameraInfo&)", { "QCamera", "QCameraInfo&", "QCamera*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCamera(QCameraInfo&,QObject*)", { "QCamera", "QCameraInfo&,QObject*", "QCamera*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCamera(enum)", { "QCamera", "QCamera::Position", "QCamera*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCamera(enum,QObject*)", { "QCamera", "QCamera::Position,QObject*", "QCamera*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCamera::plastiqMethods = {
    { "captureMode()", { "captureMode", "", "CaptureModes", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "Error", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exposure()", { "exposure", "", "QCameraExposure*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focus()", { "focus", "", "QCameraFocus*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "imageProcessing()", { "imageProcessing", "", "QCameraImageProcessing*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCaptureModeSupported(enum)", { "isCaptureModeSupported", "CaptureModes", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lockStatus()", { "lockStatus", "", "QCamera::LockStatus", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lockStatus(enum)", { "lockStatus", "QCamera::LockType", "QCamera::LockStatus", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "requestedLocks()", { "requestedLocks", "", "QCamera::LockTypes", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setViewfinder(QVideoWidget*)", { "setViewfinder", "QVideoWidget*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setViewfinder(QGraphicsVideoItem*)", { "setViewfinder", "QGraphicsVideoItem*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setViewfinder(QAbstractVideoSurface*)", { "setViewfinder", "QAbstractVideoSurface*", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setViewfinderSettings(QCameraViewfinderSettings&)", { "setViewfinderSettings", "QCameraViewfinderSettings&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "State", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "status()", { "status", "", "Status", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedLocks()", { "supportedLocks", "", "QCamera::LockTypes", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "viewfinderSettings()", { "viewfinderSettings", "", "QCameraViewfinderSettings", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load()", { "load", "", "void", 18, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "searchAndLock()", { "searchAndLock", "", "void", 19, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "searchAndLock(enum)", { "searchAndLock", "QCamera::LockTypes", "void", 20, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setCaptureMode(enum)", { "setCaptureMode", "QCamera::CaptureModes", "void", 21, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "start()", { "start", "", "void", 22, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "stop()", { "stop", "", "void", 23, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "unload()", { "unload", "", "void", 24, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "unlock()", { "unlock", "", "void", 25, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "unlock(enum)", { "unlock", "QCamera::LockTypes", "void", 26, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCamera::plastiqSignals = {
    { "captureModeChanged(enum)", { "captureModeChanged", "QCamera::CaptureModes", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "error(enum)", { "error", "QCamera::Error", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "lockFailed()", { "lockFailed", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "lockStatusChanged(enum,enum)", { "lockStatusChanged", "QCamera::LockStatus,QCamera::LockChangeReason", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "lockStatusChanged(enum,enum,enum)", { "lockStatusChanged", "QCamera::LockType,QCamera::LockStatus,QCamera::LockChangeReason", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "locked()", { "locked", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum)", { "stateChanged", "QCamera::State", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "statusChanged(enum)", { "statusChanged", "QCamera::Status", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCamera::plastiqProperties = {
    { "captureMode", { "captureMode", "long", "setCaptureMode", "captureMode" } },
    { "lockStatus", { "lockStatus", "long", "", "lockStatus" } },
    { "state", { "state", "long", "stateChanged", "state" } },
    { "status", { "status", "long", "statusChanged", "status" } },

};

QHash<QByteArray, long> PlastiQQCamera::plastiqConstants = {

    /* QCamera::CaptureMode */
   { "CaptureViewfinder", QCamera::CaptureViewfinder },
   { "CaptureStillImage", QCamera::CaptureStillImage },
   { "CaptureVideo", QCamera::CaptureVideo },

    /* QCamera::Error */
   { "NoError", QCamera::NoError },
   { "CameraError", QCamera::CameraError },
   { "InvalidRequestError", QCamera::InvalidRequestError },
   { "ServiceMissingError", QCamera::ServiceMissingError },
   { "NotSupportedFeatureError", QCamera::NotSupportedFeatureError },

    /* QCamera::LockChangeReason */
   { "UserRequest", QCamera::UserRequest },
   { "LockAcquired", QCamera::LockAcquired },
   { "LockFailed", QCamera::LockFailed },
   { "LockLost", QCamera::LockLost },
   { "LockTemporaryLost", QCamera::LockTemporaryLost },

    /* QCamera::LockStatus */
   { "Unlocked", QCamera::Unlocked },
   { "Searching", QCamera::Searching },
   { "Locked", QCamera::Locked },

    /* QCamera::LockType */
   { "NoLock", QCamera::NoLock },
   { "LockExposure", QCamera::LockExposure },
   { "LockWhiteBalance", QCamera::LockWhiteBalance },
   { "LockFocus", QCamera::LockFocus },

    /* QCamera::Position */
   { "UnspecifiedPosition", QCamera::UnspecifiedPosition },
   { "BackFace", QCamera::BackFace },
   { "FrontFace", QCamera::FrontFace },

    /* QCamera::State */
   { "UnloadedState", QCamera::UnloadedState },
   { "LoadedState", QCamera::LoadedState },
   { "ActiveState", QCamera::ActiveState },

    /* QCamera::Status */
   { "UnavailableStatus", QCamera::UnavailableStatus },
   { "UnloadedStatus", QCamera::UnloadedStatus },
   { "LoadingStatus", QCamera::LoadingStatus },
   { "UnloadingStatus", QCamera::UnloadingStatus },
   { "LoadedStatus", QCamera::LoadedStatus },
   { "StandbyStatus", QCamera::StandbyStatus },
   { "StartingStatus", QCamera::StartingStatus },
   { "StoppingStatus", QCamera::StoppingStatus },
   { "ActiveStatus", QCamera::ActiveStatus },

};

QVector<PlastiQMetaObject*> PlastiQQCamera::plastiqInherits = { &PlastiQQMediaObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCamera::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCamera::plastiq_static_metaObject = {
    { &PlastiQQMediaObject::plastiq_static_metaObject, &plastiqInherits, "QCamera", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCamera::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCamera::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCamera *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QCamera(); break;
        case 1: o = new QCamera(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new QCamera(stack[1].s_bytearray); break;
        case 3: o = new QCamera(stack[1].s_bytearray,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;
        case 4: o = new QCamera((*reinterpret_cast< QCameraInfo(*) >(stack[1].s_voidp))); break;
        case 5: o = new QCamera((*reinterpret_cast< QCameraInfo(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;
        case 6: o = new QCamera(QCamera::Position(stack[1].s_int64)); break;
        case 7: o = new QCamera(QCamera::Position(stack[1].s_int64),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCamera *p = new PlastiQQCamera();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCamera *p = new PlastiQQCamera();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 27) {
            id -= 27;
            PlastiQQMediaObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCamera *o = sc ? Q_NULLPTR : reinterpret_cast<QCamera*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->captureMode(); // HACK for CaptureModes 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { qint64 _r = o->error(); // HACK for Error 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { QCameraExposure* _r = o->exposure();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QCameraExposure"; } break;
        case 4: { QCameraFocus* _r = o->focus();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QCameraFocus"; } break;
        case 5: { QCameraImageProcessing* _r = o->imageProcessing();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QCameraImageProcessing"; } break;
        case 6: { bool _r = o->isCaptureModeSupported(QCamera::CaptureModes(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { qint64 _r = o->lockStatus(); // HACK for QCamera::LockStatus 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { qint64 _r = o->lockStatus(QCamera::LockType(stack[1].s_int64)); // HACK for QCamera::LockStatus 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { qint64 _r = o->requestedLocks(); // HACK for QCamera::LockTypes 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: o->setViewfinder(reinterpret_cast<QVideoWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setViewfinder(reinterpret_cast<QGraphicsVideoItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setViewfinder(reinterpret_cast<QAbstractVideoSurface*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setViewfinderSettings((*reinterpret_cast< QCameraViewfinderSettings(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: { qint64 _r = o->state(); // HACK for State 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 15: { qint64 _r = o->status(); // HACK for Status 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 16: { qint64 _r = o->supportedLocks(); // HACK for QCamera::LockTypes 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 17: { /* COPY OBJECT */
            QCameraViewfinderSettings *_r = new QCameraViewfinderSettings(o->viewfinderSettings());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QCameraViewfinderSettings";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: o->load();
                stack[0].type = PlastiQ::Void; break;
        case 19: o->searchAndLock();
                stack[0].type = PlastiQ::Void; break;
        case 20: o->searchAndLock(QCamera::LockTypes(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setCaptureMode(QCamera::CaptureModes(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->start();
                stack[0].type = PlastiQ::Void; break;
        case 23: o->stop();
                stack[0].type = PlastiQ::Void; break;
        case 24: o->unload();
                stack[0].type = PlastiQ::Void; break;
        case 25: o->unlock();
                stack[0].type = PlastiQ::Void; break;
        case 26: o->unlock(QCamera::LockTypes(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 8) {
            id -= 8;
            PlastiQQMediaObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCamera *o = reinterpret_cast<QCamera*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCamera::captureModeChanged,
            [=](QCamera::CaptureModes arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QCamera::CaptureModes";
                PlastiQ_activate(sender, "captureModeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, static_cast<void (QCamera::*)(QCamera::Error)>(&QCamera::error),
            [=](QCamera::Error arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QCamera::Error";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QCamera::lockFailed,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "lockFailed", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, static_cast<void (QCamera::*)(QCamera::LockStatus,QCamera::LockChangeReason)>(&QCamera::lockStatusChanged),
            [=](QCamera::LockStatus arg0, QCamera::LockChangeReason arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QCamera::LockStatus";
                    cstack[1].s_int64 = arg1;
                    cstack[1].type = PlastiQ::Enum; cstack[1].name = "QCamera::LockChangeReason";
                PlastiQ_activate(sender, "lockStatusChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, static_cast<void (QCamera::*)(QCamera::LockType,QCamera::LockStatus,QCamera::LockChangeReason)>(&QCamera::lockStatusChanged),
            [=](QCamera::LockType arg0, QCamera::LockStatus arg1, QCamera::LockChangeReason arg2) {
                PMOGStack cstack = new PMOGStackItem[3];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QCamera::LockType";
                    cstack[1].s_int64 = arg1;
                    cstack[1].type = PlastiQ::Enum; cstack[1].name = "QCamera::LockStatus";
                    cstack[2].s_int64 = arg2;
                    cstack[2].type = PlastiQ::Enum; cstack[2].name = "QCamera::LockChangeReason";
                PlastiQ_activate(sender, "lockStatusChanged", receiver, slot.constData(), 3, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QCamera::locked,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "locked", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QCamera::stateChanged,
            [=](QCamera::State arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QCamera::State";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QCamera::statusChanged,
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
        QCamera *o = reinterpret_cast<QCamera*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCamera *o = reinterpret_cast<QCamera*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCamera *o = reinterpret_cast<QCamera*>(object->plastiq_data());

        if(className == "QMediaObject") {
            stack[0].s_voidp = static_cast<QMediaObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCamera::~PlastiQQCamera() {
    QCamera* o = reinterpret_cast<QCamera*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

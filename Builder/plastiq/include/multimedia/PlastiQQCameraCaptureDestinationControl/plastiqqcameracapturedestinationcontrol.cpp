#include "plastiqmethod.h"
#include "plastiqqcameracapturedestinationcontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QCameraCaptureDestinationControl> 

QHash<QByteArray, PlastiQMethod> PlastiQQCameraCaptureDestinationControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraCaptureDestinationControl::plastiqMethods = {
    { "captureDestination()", { "captureDestination", "", "QCameraImageCapture::CaptureDestinations", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCaptureDestinationSupported(enum)", { "isCaptureDestinationSupported", "QCameraImageCapture::CaptureDestinations", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCaptureDestination(enum)", { "setCaptureDestination", "QCameraImageCapture::CaptureDestinations", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraCaptureDestinationControl::plastiqSignals = {
    { "captureDestinationChanged(enum)", { "captureDestinationChanged", "QCameraImageCapture::CaptureDestinations", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraCaptureDestinationControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCameraCaptureDestinationControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCameraCaptureDestinationControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCameraCaptureDestinationControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCameraCaptureDestinationControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QCameraCaptureDestinationControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraCaptureDestinationControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraCaptureDestinationControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraCaptureDestinationControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraCaptureDestinationControl *p = new PlastiQQCameraCaptureDestinationControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraCaptureDestinationControl *p = new PlastiQQCameraCaptureDestinationControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCameraCaptureDestinationControl *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraCaptureDestinationControl*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->captureDestination(); // HACK for QCameraImageCapture::CaptureDestinations 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { bool _r = o->isCaptureDestinationSupported(QCameraImageCapture::CaptureDestinations(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: o->setCaptureDestination(QCameraImageCapture::CaptureDestinations(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCameraCaptureDestinationControl *o = reinterpret_cast<QCameraCaptureDestinationControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCameraCaptureDestinationControl::captureDestinationChanged,
            [=](QCameraImageCapture::CaptureDestinations arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QCameraImageCapture::CaptureDestinations";
                PlastiQ_activate(sender, "captureDestinationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCameraCaptureDestinationControl *o = reinterpret_cast<QCameraCaptureDestinationControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCameraCaptureDestinationControl *o = reinterpret_cast<QCameraCaptureDestinationControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCameraCaptureDestinationControl *o = reinterpret_cast<QCameraCaptureDestinationControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCameraCaptureDestinationControl::~PlastiQQCameraCaptureDestinationControl() {
    QCameraCaptureDestinationControl* o = reinterpret_cast<QCameraCaptureDestinationControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

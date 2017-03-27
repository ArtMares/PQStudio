#include "plastiqmethod.h"
#include "plastiqqcameracapturebufferformatcontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QCameraCaptureBufferFormatControl> 

QHash<QByteArray, PlastiQMethod> PlastiQQCameraCaptureBufferFormatControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraCaptureBufferFormatControl::plastiqMethods = {
    { "bufferFormat()", { "bufferFormat", "", "QVideoFrame::PixelFormat", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBufferFormat(enum)", { "setBufferFormat", "QVideoFrame::PixelFormat", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraCaptureBufferFormatControl::plastiqSignals = {
    { "bufferFormatChanged(enum)", { "bufferFormatChanged", "QVideoFrame::PixelFormat", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraCaptureBufferFormatControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCameraCaptureBufferFormatControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCameraCaptureBufferFormatControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCameraCaptureBufferFormatControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCameraCaptureBufferFormatControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QCameraCaptureBufferFormatControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraCaptureBufferFormatControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraCaptureBufferFormatControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraCaptureBufferFormatControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraCaptureBufferFormatControl *p = new PlastiQQCameraCaptureBufferFormatControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraCaptureBufferFormatControl *p = new PlastiQQCameraCaptureBufferFormatControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCameraCaptureBufferFormatControl *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraCaptureBufferFormatControl*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->bufferFormat(); // HACK for QVideoFrame::PixelFormat 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: o->setBufferFormat(QVideoFrame::PixelFormat(stack[1].s_int64));
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

        QCameraCaptureBufferFormatControl *o = reinterpret_cast<QCameraCaptureBufferFormatControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCameraCaptureBufferFormatControl::bufferFormatChanged,
            [=](QVideoFrame::PixelFormat arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QVideoFrame::PixelFormat";
                PlastiQ_activate(sender, "bufferFormatChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCameraCaptureBufferFormatControl *o = reinterpret_cast<QCameraCaptureBufferFormatControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCameraCaptureBufferFormatControl *o = reinterpret_cast<QCameraCaptureBufferFormatControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCameraCaptureBufferFormatControl *o = reinterpret_cast<QCameraCaptureBufferFormatControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCameraCaptureBufferFormatControl::~PlastiQQCameraCaptureBufferFormatControl() {
    QCameraCaptureBufferFormatControl* o = reinterpret_cast<QCameraCaptureBufferFormatControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

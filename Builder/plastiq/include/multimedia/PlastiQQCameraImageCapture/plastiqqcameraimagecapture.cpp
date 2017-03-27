#include "plastiqmethod.h"
#include "plastiqqcameraimagecapture.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include "multimedia/PlastiQQMediaBindableInterface/plastiqqmediabindableinterface.h"
#include <QCameraImageCapture> 
#include <QImageEncoderSettings>
#include <QString>
#include <QStringList>
#include <QMediaObject>
#include <QVideoFrame>
#include <QImage>
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQCameraImageCapture::plastiqConstructors = {
    { "QCameraImageCapture(QMediaObject*)", { "QCameraImageCapture", "QMediaObject*", "QCameraImageCapture*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCameraImageCapture(QMediaObject*,QObject*)", { "QCameraImageCapture", "QMediaObject*,QObject*", "QCameraImageCapture*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraImageCapture::plastiqMethods = {
    { "availability()", { "availability", "", "QMultimedia::AvailabilityStatus", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bufferFormat()", { "bufferFormat", "", "QVideoFrame::PixelFormat", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "captureDestination()", { "captureDestination", "", "CaptureDestinations", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "encodingSettings()", { "encodingSettings", "", "QImageEncoderSettings", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "Error", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "imageCodecDescription(QString)", { "imageCodecDescription", "QString&", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAvailable()", { "isAvailable", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCaptureDestinationSupported(enum)", { "isCaptureDestinationSupported", "CaptureDestinations", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isReadyForCapture()", { "isReadyForCapture", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBufferFormat(const QVideoFrame::PixelFormat)", { "setBufferFormat", "QVideoFrame::PixelFormat", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCaptureDestination(enum)", { "setCaptureDestination", "CaptureDestinations", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEncodingSettings(QImageEncoderSettings&)", { "setEncodingSettings", "QImageEncoderSettings&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedImageCodecs()", { "supportedImageCodecs", "", "QStringList", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMediaObject(QMediaObject*)", { "setMediaObject", "QMediaObject*", "bool", 14, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "cancelCapture()", { "cancelCapture", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "capture()", { "capture", "", "int", 16, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "capture(QString)", { "capture", "QString&", "int", 17, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraImageCapture::plastiqSignals = {
    { "bufferFormatChanged(enum)", { "bufferFormatChanged", "QVideoFrame::PixelFormat", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "captureDestinationChanged(enum)", { "captureDestinationChanged", "QCameraImageCapture::CaptureDestinations", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "error(int,enum,QString)", { "error", "int,QCameraImageCapture::Error,QString&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "imageAvailable(int,QVideoFrame&)", { "imageAvailable", "int,QVideoFrame&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "imageCaptured(int,QImage&)", { "imageCaptured", "int,QImage&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "imageExposed(int)", { "imageExposed", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "imageMetadataAvailable(int,QString,QVariant)", { "imageMetadataAvailable", "int,QString&,QVariant&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "imageSaved(int,QString)", { "imageSaved", "int,QString&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "readyForCaptureChanged(bool)", { "readyForCaptureChanged", "bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraImageCapture::plastiqProperties = {
    { "readyForCapture", { "readyForCapture", "bool", "readyForCaptureChanged", "isReadyForCapture" } },

};

QHash<QByteArray, long> PlastiQQCameraImageCapture::plastiqConstants = {

    /* QCameraImageCapture::CaptureDestination */
   { "CaptureToFile", QCameraImageCapture::CaptureToFile },
   { "CaptureToBuffer", QCameraImageCapture::CaptureToBuffer },

    /* QCameraImageCapture::DriveMode */
   { "SingleImageCapture", QCameraImageCapture::SingleImageCapture },

    /* QCameraImageCapture::Error */
   { "NoError", QCameraImageCapture::NoError },
   { "NotReadyError", QCameraImageCapture::NotReadyError },
   { "ResourceError", QCameraImageCapture::ResourceError },
   { "OutOfSpaceError", QCameraImageCapture::OutOfSpaceError },
   { "NotSupportedFeatureError", QCameraImageCapture::NotSupportedFeatureError },
   { "FormatError", QCameraImageCapture::FormatError },

};

QVector<PlastiQMetaObject*> PlastiQQCameraImageCapture::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject, &PlastiQQMediaBindableInterface::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCameraImageCapture::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCameraImageCapture::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QCameraImageCapture", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraImageCapture::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQCameraImageCaptureWrapper : public QCameraImageCapture {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQCameraImageCaptureWrapper(QMediaObject *mediaObject, QObject *parent = Q_NULLPTR)
         : QCameraImageCapture(mediaObject,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    bool setMediaObject(QMediaObject *mediaObject) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool setMediaObject(QMediaObject*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(mediaObject);
            stack[1].name = QByteArrayLiteral("QMediaObject");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QCameraImageCapture::setMediaObject(mediaObject);
    }

    bool PlastiQParentCall_setMediaObject(QMediaObject *mediaObject) {
        return QCameraImageCapture::setMediaObject(mediaObject);
    }

    bool event(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QCameraImageCapture::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QCameraImageCapture::event(e);
    }

    bool eventFilter(QObject *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(event);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QCameraImageCapture::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QCameraImageCapture::eventFilter(watched,event);
    }

    const QMetaObject* metaObject() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("const QMetaObject* metaObject()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMetaObject* _r = reinterpret_cast<QMetaObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QCameraImageCapture::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QCameraImageCapture::metaObject();
    }

    void childEvent(QChildEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QCameraImageCapture::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QCameraImageCapture::childEvent(event);
    }

    void connectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void connectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QCameraImageCapture::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QCameraImageCapture::connectNotify(signal);
    }

    void customEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void customEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QCameraImageCapture::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QCameraImageCapture::customEvent(event);
    }

    void disconnectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void disconnectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QCameraImageCapture::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QCameraImageCapture::disconnectNotify(signal);
    }

    void timerEvent(QTimerEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QCameraImageCapture::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QCameraImageCapture::timerEvent(event);
    }

};

void PlastiQQCameraImageCapture::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQCameraImageCaptureWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQCameraImageCaptureWrapper(reinterpret_cast<QMediaObject*>(stack[1].s_voidp)); break;
        case 1: o = new PlastiQQCameraImageCaptureWrapper(reinterpret_cast<QMediaObject*>(stack[1].s_voidp),
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQCameraImageCapture *p = new PlastiQQCameraImageCapture();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraImageCapture *p = new PlastiQQCameraImageCapture();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 18) {
            id -= 18;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCameraImageCapture *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraImageCapture*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->availability() | ret: `QMultimedia::AvailabilityStatus` */ break;
        case 1: { qint64 _r = o->bufferFormat(); // HACK for QVideoFrame::PixelFormat 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { qint64 _r = o->captureDestination(); // HACK for CaptureDestinations 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { /* COPY OBJECT */
            QImageEncoderSettings *_r = new QImageEncoderSettings(o->encodingSettings());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImageEncoderSettings";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { qint64 _r = o->error(); // HACK for Error 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { QString _r = o->imageCodecDescription(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { bool _r = o->isAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isCaptureDestinationSupported(QCameraImageCapture::CaptureDestinations(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isReadyForCapture();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: /* o->setBufferFormat(UNSUPPORTED_TYPE_const QVideoFrame::PixelFormat) | ret: `void` */ break;
        case 11: o->setCaptureDestination(QCameraImageCapture::CaptureDestinations(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setEncodingSettings((*reinterpret_cast< QImageEncoderSettings(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 13: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->supportedImageCodecs());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { bool _r;
                if (isWrapper) _r = ((PlastiQQCameraImageCaptureWrapper*)o)->PlastiQParentCall_setMediaObject(reinterpret_cast<QMediaObject*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: o->cancelCapture();
                stack[0].type = PlastiQ::Void; break;
        case 16: { int _r = o->capture();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 17: { int _r = o->capture(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 9) {
            id -= 9;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCameraImageCapture *o = reinterpret_cast<QCameraImageCapture*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCameraImageCapture::bufferFormatChanged,
            [=](QVideoFrame::PixelFormat arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QVideoFrame::PixelFormat";
                PlastiQ_activate(sender, "bufferFormatChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QCameraImageCapture::captureDestinationChanged,
            [=](QCameraImageCapture::CaptureDestinations arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QCameraImageCapture::CaptureDestinations";
                PlastiQ_activate(sender, "captureDestinationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, static_cast<void (QCameraImageCapture::*)(int,QCameraImageCapture::Error,const QString&)>(&QCameraImageCapture::error),
            [=](int arg0, QCameraImageCapture::Error arg1, const QString& arg2) {
                PMOGStack cstack = new PMOGStackItem[3];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int64 = arg1;
                    cstack[1].type = PlastiQ::Enum; cstack[1].name = "QCameraImageCapture::Error";
                    cstack[2].s_string = const_cast<QString&>(arg2);
                    cstack[2].type = PlastiQ::String; cstack[2].name = "QString";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 3, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QCameraImageCapture::imageAvailable,
            [=](int arg0, const QVideoFrame& arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_voidp = new QVideoFrame(arg1) /* COPY OBJECT */;
                    cstack[1].type = PlastiQ::QtObject; cstack[1].name = "QVideoFrame";
                PlastiQ_activate(sender, "imageAvailable", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QCameraImageCapture::imageCaptured,
            [=](int arg0, const QImage& arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_voidp = new QImage(arg1) /* COPY OBJECT */;
                    cstack[1].type = PlastiQ::QtObject; cstack[1].name = "QImage";
                PlastiQ_activate(sender, "imageCaptured", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QCameraImageCapture::imageExposed,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "imageExposed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QCameraImageCapture::imageMetadataAvailable,
            [=](int arg0, const QString& arg1, const QVariant& arg2) {
                PMOGStack cstack = new PMOGStackItem[3];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_string = const_cast<QString&>(arg1);
                    cstack[1].type = PlastiQ::String; cstack[1].name = "QString";
                    cstack[2].s_voidp = new QVariant(arg2) /* COPY OBJECT */;
                    cstack[2].type = PlastiQ::QtObject; cstack[2].name = "QVariant";
                PlastiQ_activate(sender, "imageMetadataAvailable", receiver, slot.constData(), 3, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QCameraImageCapture::imageSaved,
            [=](int arg0, const QString& arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_string = const_cast<QString&>(arg1);
                    cstack[1].type = PlastiQ::String; cstack[1].name = "QString";
                PlastiQ_activate(sender, "imageSaved", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QCameraImageCapture::readyForCaptureChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "readyForCaptureChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QCameraImageCapture *o = reinterpret_cast<QCameraImageCapture*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCameraImageCapture *o = reinterpret_cast<QCameraImageCapture*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCameraImageCapture *o = reinterpret_cast<QCameraImageCapture*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else if(className == "QMediaBindableInterface") {
            stack[0].s_voidp = static_cast<QMediaBindableInterface*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCameraImageCapture::~PlastiQQCameraImageCapture() {
    QCameraImageCapture* o = reinterpret_cast<QCameraImageCapture*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

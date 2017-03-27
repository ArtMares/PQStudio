#include "plastiqmethod.h"
#include "plastiqqcameraimagecapturecontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QCameraImageCaptureControl> 
#include <QString>
#include <QVideoFrame>
#include <QImage>
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQCameraImageCaptureControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraImageCaptureControl::plastiqMethods = {
    { "cancelCapture()", { "cancelCapture", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capture(QString)", { "capture", "QString&", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "driveMode()", { "driveMode", "", "QCameraImageCapture::DriveMode", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isReadyForCapture()", { "isReadyForCapture", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDriveMode(enum)", { "setDriveMode", "QCameraImageCapture::DriveMode", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCameraImageCaptureControl::plastiqSignals = {
    { "error(int,int,QString)", { "error", "int,int,QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "imageAvailable(int,QVideoFrame&)", { "imageAvailable", "int,QVideoFrame&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "imageCaptured(int,QImage&)", { "imageCaptured", "int,QImage&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "imageExposed(int)", { "imageExposed", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "imageMetadataAvailable(int,QString,QVariant)", { "imageMetadataAvailable", "int,QString&,QVariant&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "imageSaved(int,QString)", { "imageSaved", "int,QString&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "readyForCaptureChanged(bool)", { "readyForCaptureChanged", "bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQCameraImageCaptureControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCameraImageCaptureControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCameraImageCaptureControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQCameraImageCaptureControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQCameraImageCaptureControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QCameraImageCaptureControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCameraImageCaptureControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCameraImageCaptureControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCameraImageCaptureControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCameraImageCaptureControl *p = new PlastiQQCameraImageCaptureControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCameraImageCaptureControl *p = new PlastiQQCameraImageCaptureControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCameraImageCaptureControl *o = sc ? Q_NULLPTR : reinterpret_cast<QCameraImageCaptureControl*>(object->plastiq_data());

        switch(id) {
        case 0: o->cancelCapture();
                stack[0].type = PlastiQ::Void; break;
        case 1: { int _r = o->capture(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { qint64 _r = o->driveMode(); // HACK for QCameraImageCapture::DriveMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { bool _r = o->isReadyForCapture();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: o->setDriveMode(QCameraImageCapture::DriveMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 7) {
            id -= 7;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QCameraImageCaptureControl *o = reinterpret_cast<QCameraImageCaptureControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QCameraImageCaptureControl::error,
            [=](int arg0, int arg1, const QString& arg2) {
                PMOGStack cstack = new PMOGStackItem[3];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                    cstack[2].s_string = const_cast<QString&>(arg2);
                    cstack[2].type = PlastiQ::String; cstack[2].name = "QString";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 3, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QCameraImageCaptureControl::imageAvailable,
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

        case 2: QObject::connect(o, &QCameraImageCaptureControl::imageCaptured,
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

        case 3: QObject::connect(o, &QCameraImageCaptureControl::imageExposed,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "imageExposed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QCameraImageCaptureControl::imageMetadataAvailable,
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

        case 5: QObject::connect(o, &QCameraImageCaptureControl::imageSaved,
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

        case 6: QObject::connect(o, &QCameraImageCaptureControl::readyForCaptureChanged,
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
        QCameraImageCaptureControl *o = reinterpret_cast<QCameraImageCaptureControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QCameraImageCaptureControl *o = reinterpret_cast<QCameraImageCaptureControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QCameraImageCaptureControl *o = reinterpret_cast<QCameraImageCaptureControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQCameraImageCaptureControl::~PlastiQQCameraImageCaptureControl() {
    QCameraImageCaptureControl* o = reinterpret_cast<QCameraImageCaptureControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

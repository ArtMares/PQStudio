#include "plastiqmethod.h"
#include "plastiqqvideoframe.h"

#include <QVideoFrame> 
#include <QVariantMap>
#include <QVariant>
#include <QSize>

QHash<QByteArray, PlastiQMethod> PlastiQQVideoFrame::plastiqConstructors = {
    { "QVideoFrame()", { "QVideoFrame", "", "QVideoFrame*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVideoFrame(QAbstractVideoBuffer*,QSize&,enum)", { "QVideoFrame", "QAbstractVideoBuffer*,QSize&,PixelFormat", "QVideoFrame*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVideoFrame(int,QSize&,int,enum)", { "QVideoFrame", "int,QSize&,int,PixelFormat", "QVideoFrame*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVideoFrame(QImage&)", { "QVideoFrame", "QImage&", "QVideoFrame*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVideoFrame(QVideoFrame&)", { "QVideoFrame", "QVideoFrame&", "QVideoFrame*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoFrame::plastiqMethods = {
    { "availableMetaData()", { "availableMetaData", "", "QVariantMap", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bits()", { "bits", "", "uchar*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bits(int)", { "bits", "int", "uchar*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bytesPerLine()", { "bytesPerLine", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bytesPerLine(int)", { "bytesPerLine", "int", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endTime()", { "endTime", "", "qint64", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fieldType()", { "fieldType", "", "FieldType", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "handle()", { "handle", "", "QVariant", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "handleType()", { "handleType", "", "QAbstractVideoBuffer::HandleType", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "height()", { "height", "", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMapped()", { "isMapped", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isReadable()", { "isReadable", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isWritable()", { "isWritable", "", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "map(enum)", { "map", "QAbstractVideoBuffer::MapMode", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapMode()", { "mapMode", "", "QAbstractVideoBuffer::MapMode", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mappedBytes()", { "mappedBytes", "", "int", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "metaData(QString)", { "metaData", "QString&", "QVariant", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelFormat()", { "pixelFormat", "", "PixelFormat", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "planeCount()", { "planeCount", "", "int", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEndTime(long)", { "setEndTime", "qint64", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFieldType(enum)", { "setFieldType", "FieldType", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMetaData(QString,QVariant)", { "setMetaData", "QString&,QVariant&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStartTime(long)", { "setStartTime", "qint64", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "QSize", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startTime()", { "startTime", "", "qint64", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unmap()", { "unmap", "", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "int", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "imageFormatFromPixelFormat(enum)", { "imageFormatFromPixelFormat", "PixelFormat", "QImage::Format", 28, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "pixelFormatFromImageFormat(enum)", { "pixelFormatFromImageFormat", "QImage::Format", "PixelFormat", 29, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoFrame::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQVideoFrame::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQVideoFrame::plastiqConstants = {

    /* QVideoFrame::FieldType */
   { "ProgressiveFrame", QVideoFrame::ProgressiveFrame },
   { "TopField", QVideoFrame::TopField },
   { "BottomField", QVideoFrame::BottomField },
   { "InterlacedFrame", QVideoFrame::InterlacedFrame },

    /* QVideoFrame::PixelFormat */
   { "Format_Invalid", QVideoFrame::Format_Invalid },
   { "Format_ARGB32", QVideoFrame::Format_ARGB32 },
   { "Format_ARGB32_Premultiplied", QVideoFrame::Format_ARGB32_Premultiplied },
   { "Format_RGB32", QVideoFrame::Format_RGB32 },
   { "Format_RGB24", QVideoFrame::Format_RGB24 },
   { "Format_RGB565", QVideoFrame::Format_RGB565 },
   { "Format_RGB555", QVideoFrame::Format_RGB555 },
   { "Format_ARGB8565_Premultiplied", QVideoFrame::Format_ARGB8565_Premultiplied },
   { "Format_BGRA32", QVideoFrame::Format_BGRA32 },
   { "Format_BGRA32_Premultiplied", QVideoFrame::Format_BGRA32_Premultiplied },
   { "Format_BGR32", QVideoFrame::Format_BGR32 },
   { "Format_BGR24", QVideoFrame::Format_BGR24 },
   { "Format_BGR565", QVideoFrame::Format_BGR565 },
   { "Format_BGR555", QVideoFrame::Format_BGR555 },
   { "Format_BGRA5658_Premultiplied", QVideoFrame::Format_BGRA5658_Premultiplied },
   { "Format_AYUV444", QVideoFrame::Format_AYUV444 },
   { "Format_AYUV444_Premultiplied", QVideoFrame::Format_AYUV444_Premultiplied },
   { "Format_YUV444", QVideoFrame::Format_YUV444 },
   { "Format_YUV420P", QVideoFrame::Format_YUV420P },
   { "Format_YV12", QVideoFrame::Format_YV12 },
   { "Format_UYVY", QVideoFrame::Format_UYVY },
   { "Format_YUYV", QVideoFrame::Format_YUYV },
   { "Format_NV12", QVideoFrame::Format_NV12 },
   { "Format_NV21", QVideoFrame::Format_NV21 },
   { "Format_IMC1", QVideoFrame::Format_IMC1 },
   { "Format_IMC2", QVideoFrame::Format_IMC2 },
   { "Format_IMC3", QVideoFrame::Format_IMC3 },
   { "Format_IMC4", QVideoFrame::Format_IMC4 },
   { "Format_Y8", QVideoFrame::Format_Y8 },
   { "Format_Y16", QVideoFrame::Format_Y16 },
   { "Format_Jpeg", QVideoFrame::Format_Jpeg },
   { "Format_CameraRaw", QVideoFrame::Format_CameraRaw },
   { "Format_AdobeDng", QVideoFrame::Format_AdobeDng },
   { "Format_User", QVideoFrame::Format_User },

};

QVector<PlastiQMetaObject*> PlastiQQVideoFrame::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQVideoFrame::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQVideoFrame::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QVideoFrame", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVideoFrame::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVideoFrame::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVideoFrame *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QVideoFrame(); break;
        case 1: o = new QVideoFrame(reinterpret_cast<QAbstractVideoBuffer*>(stack[1].s_voidp),
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp)),
                    QVideoFrame::PixelFormat(stack[3].s_int64)); break;
        case 2: o = new QVideoFrame(stack[1].s_int,
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp)),
                    stack[3].s_int,
                    QVideoFrame::PixelFormat(stack[4].s_int64)); break;
        case 3: o = new QVideoFrame((*reinterpret_cast< QImage(*) >(stack[1].s_voidp))); break;
        case 4: o = new QVideoFrame((*reinterpret_cast< QVideoFrame(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVideoFrame *p = new PlastiQQVideoFrame();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVideoFrame *p = new PlastiQQVideoFrame();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 30) {
            id -= 30;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QVideoFrame *o = sc ? Q_NULLPTR : reinterpret_cast<QVideoFrame*>(object->plastiq_data());

        switch(id) {
        case 0: /* UNSUPPORTED_RETURN_VALUE o->availableMetaData() | ret: `QVariantMap` */ break;
        case 1: { uchar* _r = o->bits();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "uchar"; } break;
        case 2: { uchar* _r = o->bits(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "uchar"; } break;
        case 3: { int _r = o->bytesPerLine();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->bytesPerLine(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { long _r = o->endTime();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 6: { qint64 _r = o->fieldType(); // HACK for FieldType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->handle());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { qint64 _r = o->handleType(); // HACK for QAbstractVideoBuffer::HandleType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { int _r = o->height();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { bool _r = o->isMapped();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = o->isReadable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { bool _r = o->isWritable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { bool _r = o->map(QAbstractVideoBuffer::MapMode(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { qint64 _r = o->mapMode(); // HACK for QAbstractVideoBuffer::MapMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 16: { int _r = o->mappedBytes();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 17: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->metaData(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { qint64 _r = o->pixelFormat(); // HACK for PixelFormat 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 19: { int _r = o->planeCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 20: o->setEndTime(stack[1].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setFieldType(QVideoFrame::FieldType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setMetaData(stack[1].s_string,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setStartTime(stack[1].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 24: { /* COPY OBJECT */
            QSize *_r = new QSize(o->size());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 25: { long _r = o->startTime();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 26: o->unmap();
                stack[0].type = PlastiQ::Void; break;
        case 27: { int _r = o->width();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 28: { qint64 _r = sc ? QVideoFrame::imageFormatFromPixelFormat(QVideoFrame::PixelFormat(stack[1].s_int64)) : o->imageFormatFromPixelFormat(QVideoFrame::PixelFormat(stack[1].s_int64)); // HACK for QImage::Format 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 29: { qint64 _r = sc ? QVideoFrame::pixelFormatFromImageFormat(QImage::Format(stack[1].s_int64)) : o->pixelFormatFromImageFormat(QImage::Format(stack[1].s_int64)); // HACK for PixelFormat 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QVideoFrame *o = reinterpret_cast<QVideoFrame*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQVideoFrame::~PlastiQQVideoFrame() {
    QVideoFrame* o = reinterpret_cast<QVideoFrame*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

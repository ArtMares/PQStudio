#include "plastiqmethod.h"
#include "plastiqqimagereader.h"

#include <QImageReader> 
#include <QColor>
#include <QRect>
#include <QIODevice>
#include <QString>
#include <QByteArray>
#include <QImage>
#include <QSize>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQImageReader::plastiqConstructors = {
    { "QImageReader()", { "QImageReader", "", "QImageReader*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImageReader(QIODevice*)", { "QImageReader", "QIODevice*", "QImageReader*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImageReader(QIODevice*,QByteArray)", { "QImageReader", "QIODevice*,QByteArray&", "QImageReader*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImageReader(QString)", { "QImageReader", "QString&", "QImageReader*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImageReader(QString,QByteArray)", { "QImageReader", "QString&,QByteArray&", "QImageReader*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQImageReader::plastiqMethods = {
    { "autoDetectImageFormat()", { "autoDetectImageFormat", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "autoTransform()", { "autoTransform", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "backgroundColor()", { "backgroundColor", "", "QColor", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canRead()", { "canRead", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clipRect()", { "clipRect", "", "QRect", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentImageNumber()", { "currentImageNumber", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentImageRect()", { "currentImageRect", "", "QRect", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "decideFormatFromContent()", { "decideFormatFromContent", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "device()", { "device", "", "QIODevice*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "ImageReaderError", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileName()", { "fileName", "", "QString", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "format()", { "format", "", "QByteArray", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "gamma()", { "gamma", "", "float", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "imageCount()", { "imageCount", "", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "imageFormat()", { "imageFormat", "", "QImage::Format", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "jumpToImage(int)", { "jumpToImage", "int", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "jumpToNextImage()", { "jumpToNextImage", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loopCount()", { "loopCount", "", "int", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nextImageDelay()", { "nextImageDelay", "", "int", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "quality()", { "quality", "", "int", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "read()", { "read", "", "QImage", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "read(QImage*)", { "read", "QImage*", "bool", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaledClipRect()", { "scaledClipRect", "", "QRect", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaledSize()", { "scaledSize", "", "QSize", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoDetectImageFormat(bool)", { "setAutoDetectImageFormat", "bool", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoTransform(bool)", { "setAutoTransform", "bool", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackgroundColor(QColor&)", { "setBackgroundColor", "QColor&", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setClipRect(QRect&)", { "setClipRect", "QRect&", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDecideFormatFromContent(bool)", { "setDecideFormatFromContent", "bool", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDevice(QIODevice*)", { "setDevice", "QIODevice*", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFileName(QString)", { "setFileName", "QString&", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFormat(QByteArray)", { "setFormat", "QByteArray&", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGamma(double)", { "setGamma", "float", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setQuality(int)", { "setQuality", "int", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setScaledClipRect(QRect&)", { "setScaledClipRect", "QRect&", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setScaledSize(QSize&)", { "setScaledSize", "QSize&", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "QSize", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "subType()", { "subType", "", "QByteArray", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportsAnimation()", { "supportsAnimation", "", "bool", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportsOption(enum)", { "supportsOption", "QImageIOHandler::ImageOption", "bool", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text(QString)", { "text", "QString&", "QString", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textKeys()", { "textKeys", "", "QStringList", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transformation()", { "transformation", "", "QImageIOHandler::Transformations", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "imageFormat(QString)", { "imageFormat", "QString&", "QByteArray", 44, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "imageFormat(QIODevice*)", { "imageFormat", "QIODevice*", "QByteArray", 45, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQImageReader::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQImageReader::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQImageReader::plastiqConstants = {

    /* QImageReader::ImageReaderError */
   { "UnknownError", QImageReader::UnknownError },
   { "FileNotFoundError", QImageReader::FileNotFoundError },
   { "DeviceError", QImageReader::DeviceError },
   { "UnsupportedFormatError", QImageReader::UnsupportedFormatError },
   { "InvalidDataError", QImageReader::InvalidDataError },

};

QVector<PlastiQMetaObject*> PlastiQQImageReader::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQImageReader::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQImageReader::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QImageReader", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQImageReader::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQImageReader::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QImageReader *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QImageReader(); break;
        case 1: o = new QImageReader(reinterpret_cast<QIODevice*>(stack[1].s_voidp)); break;
        case 2: o = new QImageReader(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    stack[2].s_bytearray); break;
        case 3: o = new QImageReader(stack[1].s_string); break;
        case 4: o = new QImageReader(stack[1].s_string,
                    stack[2].s_bytearray); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQImageReader *p = new PlastiQQImageReader();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQImageReader *p = new PlastiQQImageReader();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 46) {
            id -= 46;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QImageReader *o = sc ? Q_NULLPTR : reinterpret_cast<QImageReader*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->autoDetectImageFormat();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->autoTransform();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { /* COPY OBJECT */
            QColor *_r = new QColor(o->backgroundColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { bool _r = o->canRead();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { /* COPY OBJECT */
            QRect *_r = new QRect(o->clipRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { int _r = o->currentImageNumber();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { /* COPY OBJECT */
            QRect *_r = new QRect(o->currentImageRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { bool _r = o->decideFormatFromContent();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { QIODevice* _r = o->device();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QIODevice"; } break;
        case 9: { qint64 _r = o->error(); // HACK for ImageReaderError 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: { QString _r = o->fileName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 12: { QByteArray _r = o->format();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 13: { double _r = o->gamma();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 14: { int _r = o->imageCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: { qint64 _r = o->imageFormat(); // HACK for QImage::Format 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 16: { bool _r = o->jumpToImage(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = o->jumpToNextImage();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { int _r = o->loopCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 19: { int _r = o->nextImageDelay();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 20: { int _r = o->quality();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 21: { /* COPY OBJECT */
            QImage *_r = new QImage(o->read());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 22: { bool _r = o->read(reinterpret_cast<QImage*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 23: { /* COPY OBJECT */
            QRect *_r = new QRect(o->scaledClipRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 24: { /* COPY OBJECT */
            QSize *_r = new QSize(o->scaledSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 25: o->setAutoDetectImageFormat(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setAutoTransform(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setBackgroundColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setClipRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setDecideFormatFromContent(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setDevice(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setFileName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setFormat(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setGamma(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setQuality(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setScaledClipRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setScaledSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 37: { /* COPY OBJECT */
            QSize *_r = new QSize(o->size());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 38: { QByteArray _r = o->subType();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 39: { bool _r = o->supportsAnimation();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 40: { bool _r = o->supportsOption(QImageIOHandler::ImageOption(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 41: { QString _r = o->text(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 42: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->textKeys());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 43: { qint64 _r = o->transformation(); // HACK for QImageIOHandler::Transformations 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 44: { QByteArray _r = sc ? QImageReader::imageFormat(stack[1].s_string) : o->imageFormat(stack[1].s_string);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 45: { QByteArray _r = sc ? QImageReader::imageFormat(reinterpret_cast<QIODevice*>(stack[1].s_voidp)) : o->imageFormat(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;

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
        QImageReader *o = reinterpret_cast<QImageReader*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQImageReader::~PlastiQQImageReader() {
    QImageReader* o = reinterpret_cast<QImageReader*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

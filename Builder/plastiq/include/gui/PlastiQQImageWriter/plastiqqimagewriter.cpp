#include "plastiqmethod.h"
#include "plastiqqimagewriter.h"

#include <QImageWriter> 
#include <QIODevice>
#include <QString>
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQImageWriter::plastiqConstructors = {
    { "QImageWriter()", { "QImageWriter", "", "QImageWriter*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImageWriter(QIODevice*,QByteArray)", { "QImageWriter", "QIODevice*,QByteArray&", "QImageWriter*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImageWriter(QString)", { "QImageWriter", "QString&", "QImageWriter*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImageWriter(QString,QByteArray)", { "QImageWriter", "QString&,QByteArray&", "QImageWriter*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQImageWriter::plastiqMethods = {
    { "canWrite()", { "canWrite", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compression()", { "compression", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "device()", { "device", "", "QIODevice*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "ImageWriterError", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileName()", { "fileName", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "format()", { "format", "", "QByteArray", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "gamma()", { "gamma", "", "float", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "optimizedWrite()", { "optimizedWrite", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "progressiveScanWrite()", { "progressiveScanWrite", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "quality()", { "quality", "", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCompression(int)", { "setCompression", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDevice(QIODevice*)", { "setDevice", "QIODevice*", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFileName(QString)", { "setFileName", "QString&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFormat(QByteArray)", { "setFormat", "QByteArray&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGamma(double)", { "setGamma", "float", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOptimizedWrite(bool)", { "setOptimizedWrite", "bool", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setProgressiveScanWrite(bool)", { "setProgressiveScanWrite", "bool", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setQuality(int)", { "setQuality", "int", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSubType(QByteArray)", { "setSubType", "QByteArray&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setText(QString,QString)", { "setText", "QString&,QString&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTransformation(enum)", { "setTransformation", "QImageIOHandler::Transformations", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "subType()", { "subType", "", "QByteArray", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportsOption(enum)", { "supportsOption", "QImageIOHandler::ImageOption", "bool", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transformation()", { "transformation", "", "QImageIOHandler::Transformations", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "write(QImage&)", { "write", "QImage&", "bool", 25, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQImageWriter::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQImageWriter::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQImageWriter::plastiqConstants = {

    /* QImageWriter::ImageWriterError */
   { "UnknownError", QImageWriter::UnknownError },
   { "DeviceError", QImageWriter::DeviceError },
   { "UnsupportedFormatError", QImageWriter::UnsupportedFormatError },

};

QVector<PlastiQMetaObject*> PlastiQQImageWriter::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQImageWriter::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQImageWriter::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QImageWriter", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQImageWriter::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQImageWriter::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QImageWriter *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QImageWriter(); break;
        case 1: o = new QImageWriter(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    stack[2].s_bytearray); break;
        case 2: o = new QImageWriter(stack[1].s_string); break;
        case 3: o = new QImageWriter(stack[1].s_string,
                    stack[2].s_bytearray); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQImageWriter *p = new PlastiQQImageWriter();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQImageWriter *p = new PlastiQQImageWriter();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 26) {
            id -= 26;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QImageWriter *o = sc ? Q_NULLPTR : reinterpret_cast<QImageWriter*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->canWrite();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { int _r = o->compression();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { QIODevice* _r = o->device();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QIODevice"; } break;
        case 3: { qint64 _r = o->error(); // HACK for ImageWriterError 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { QString _r = o->fileName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { QByteArray _r = o->format();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 7: { double _r = o->gamma();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 8: { bool _r = o->optimizedWrite();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->progressiveScanWrite();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { int _r = o->quality();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: o->setCompression(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setDevice(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setFileName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setFormat(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setGamma(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setOptimizedWrite(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setProgressiveScanWrite(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setQuality(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setSubType(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setText(stack[1].s_string,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setTransformation(QImageIOHandler::Transformations(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 22: { QByteArray _r = o->subType();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 23: { bool _r = o->supportsOption(QImageIOHandler::ImageOption(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: { qint64 _r = o->transformation(); // HACK for QImageIOHandler::Transformations 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 25: { bool _r = o->write((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

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
        QImageWriter *o = reinterpret_cast<QImageWriter*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQImageWriter::~PlastiQQImageWriter() {
    QImageWriter* o = reinterpret_cast<QImageWriter*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

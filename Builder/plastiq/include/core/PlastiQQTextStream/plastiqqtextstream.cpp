#include "plastiqmethod.h"
#include "plastiqqtextstream.h"

#include <QTextStream> 
#include <QTextCodec>
#include <QIODevice>
#include <QLocale>
#include <QChar>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQTextStream::plastiqConstructors = {
    { "QTextStream()", { "QTextStream", "", "QTextStream*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextStream(QIODevice*)", { "QTextStream", "QIODevice*", "QTextStream*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextStream(FILE*)", { "QTextStream", "FILE*", "QTextStream*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextStream(FILE*,enum)", { "QTextStream", "FILE*,QIODevice::OpenMode", "QTextStream*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextStream(QString*)", { "QTextStream", "QString*", "QTextStream*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextStream(QString*,enum)", { "QTextStream", "QString*,QIODevice::OpenMode", "QTextStream*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextStream(QByteArray*)", { "QTextStream", "QByteArray*", "QTextStream*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextStream(QByteArray*,enum)", { "QTextStream", "QByteArray*,QIODevice::OpenMode", "QTextStream*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextStream(QByteArray)", { "QTextStream", "QByteArray&", "QTextStream*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextStream(QByteArray,enum)", { "QTextStream", "QByteArray&,QIODevice::OpenMode", "QTextStream*", 9, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextStream::plastiqMethods = {
    { "atEnd()", { "atEnd", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "autoDetectUnicode()", { "autoDetectUnicode", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "codec()", { "codec", "", "QTextCodec*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "device()", { "device", "", "QIODevice*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fieldAlignment()", { "fieldAlignment", "", "FieldAlignment", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fieldWidth()", { "fieldWidth", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flush()", { "flush", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "generateByteOrderMark()", { "generateByteOrderMark", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "integerBase()", { "integerBase", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "locale()", { "locale", "", "QLocale", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "numberFlags()", { "numberFlags", "", "NumberFlags", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "padChar()", { "padChar", "", "QChar", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "qint64", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "read(long)", { "read", "qint64", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readAll()", { "readAll", "", "QString", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readLine()", { "readLine", "", "QString", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readLine(long)", { "readLine", "qint64", "QString", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readLineInto(QString*)", { "readLineInto", "QString*", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "readLineInto(QString*,long)", { "readLineInto", "QString*,qint64", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "realNumberNotation()", { "realNumberNotation", "", "RealNumberNotation", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "realNumberPrecision()", { "realNumberPrecision", "", "int", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "reset()", { "reset", "", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resetStatus()", { "resetStatus", "", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "seek(long)", { "seek", "qint64", "bool", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoDetectUnicode(bool)", { "setAutoDetectUnicode", "bool", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCodec(QTextCodec*)", { "setCodec", "QTextCodec*", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCodec(const char*)", { "setCodec", "char*", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDevice(QIODevice*)", { "setDevice", "QIODevice*", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFieldAlignment(enum)", { "setFieldAlignment", "FieldAlignment", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFieldWidth(int)", { "setFieldWidth", "int", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGenerateByteOrderMark(bool)", { "setGenerateByteOrderMark", "bool", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIntegerBase(int)", { "setIntegerBase", "int", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLocale(QLocale&)", { "setLocale", "QLocale&", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNumberFlags(enum)", { "setNumberFlags", "NumberFlags", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPadChar(QChar)", { "setPadChar", "QChar", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRealNumberNotation(enum)", { "setRealNumberNotation", "RealNumberNotation", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRealNumberPrecision(int)", { "setRealNumberPrecision", "int", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStatus(enum)", { "setStatus", "Status", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setString(QString*)", { "setString", "QString*", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setString(QString*,enum)", { "setString", "QString*,QIODevice::OpenMode", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "skipWhiteSpace()", { "skipWhiteSpace", "", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "status()", { "status", "", "Status", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "string()", { "string", "", "QString*", 42, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextStream::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextStream::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextStream::plastiqConstants = {

    /* QTextStream::FieldAlignment */
   { "AlignLeft", QTextStream::AlignLeft },
   { "AlignRight", QTextStream::AlignRight },
   { "AlignCenter", QTextStream::AlignCenter },
   { "AlignAccountingStyle", QTextStream::AlignAccountingStyle },

    /* QTextStream::NumberFlag */
   { "ShowBase", QTextStream::ShowBase },
   { "ForcePoint", QTextStream::ForcePoint },
   { "ForceSign", QTextStream::ForceSign },
   { "UppercaseBase", QTextStream::UppercaseBase },
   { "UppercaseDigits", QTextStream::UppercaseDigits },

    /* QTextStream::RealNumberNotation */
   { "SmartNotation", QTextStream::SmartNotation },
   { "FixedNotation", QTextStream::FixedNotation },
   { "ScientificNotation", QTextStream::ScientificNotation },

    /* QTextStream::Status */
   { "Ok", QTextStream::Ok },
   { "ReadPastEnd", QTextStream::ReadPastEnd },
   { "ReadCorruptData", QTextStream::ReadCorruptData },
   { "WriteFailed", QTextStream::WriteFailed },

};

QVector<PlastiQMetaObject*> PlastiQQTextStream::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextStream::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextStream::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextStream", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextStream::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextStream::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextStream *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextStream(); break;
        case 1: o = new QTextStream(reinterpret_cast<QIODevice*>(stack[1].s_voidp)); break;
        case 2: o = new QTextStream(reinterpret_cast<FILE*>(stack[1].s_voidp)); break;
        case 3: o = new QTextStream(reinterpret_cast<FILE*>(stack[1].s_voidp),
                    QIODevice::OpenMode(stack[2].s_int64)); break;
        case 4: o = new QTextStream(reinterpret_cast<QString*>(stack[1].s_voidp)); break;
        case 5: o = new QTextStream(reinterpret_cast<QString*>(stack[1].s_voidp),
                    QIODevice::OpenMode(stack[2].s_int64)); break;
        case 6: o = new QTextStream(reinterpret_cast<QByteArray*>(stack[1].s_voidp)); break;
        case 7: o = new QTextStream(reinterpret_cast<QByteArray*>(stack[1].s_voidp),
                    QIODevice::OpenMode(stack[2].s_int64)); break;
        case 8: o = new QTextStream(stack[1].s_bytearray); break;
        case 9: o = new QTextStream(stack[1].s_bytearray,
                    QIODevice::OpenMode(stack[2].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextStream *p = new PlastiQQTextStream();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextStream *p = new PlastiQQTextStream();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 43) {
            id -= 43;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextStream *o = sc ? Q_NULLPTR : reinterpret_cast<QTextStream*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->atEnd();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->autoDetectUnicode();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { QTextCodec* _r = o->codec();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "QTextCodec"; } break;
        case 3: { QIODevice* _r = o->device();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QIODevice"; } break;
        case 4: { qint64 _r = o->fieldAlignment(); // HACK for FieldAlignment 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { int _r = o->fieldWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: o->flush();
                stack[0].type = PlastiQ::Void; break;
        case 7: { bool _r = o->generateByteOrderMark();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { int _r = o->integerBase();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { /* COPY OBJECT */
            QLocale *_r = new QLocale(o->locale());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLocale";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { qint64 _r = o->numberFlags(); // HACK for NumberFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: { /* COPY OBJECT */
            QChar *_r = new QChar(o->padChar());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { long _r = o->pos();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 13: { QString _r = o->read(stack[1].s_long);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: { QString _r = o->readAll();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 15: { QString _r = o->readLine();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 16: { QString _r = o->readLine(stack[1].s_long);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 17: { bool _r = o->readLineInto(reinterpret_cast<QString*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = o->readLineInto(reinterpret_cast<QString*>(stack[1].s_voidp),
                    stack[2].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { qint64 _r = o->realNumberNotation(); // HACK for RealNumberNotation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 20: { int _r = o->realNumberPrecision();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 21: o->reset();
                stack[0].type = PlastiQ::Void; break;
        case 22: o->resetStatus();
                stack[0].type = PlastiQ::Void; break;
        case 23: { bool _r = o->seek(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: o->setAutoDetectUnicode(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setCodec(reinterpret_cast<QTextCodec*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setCodec(reinterpret_cast<const char*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setDevice(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setFieldAlignment(QTextStream::FieldAlignment(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setFieldWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setGenerateByteOrderMark(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setIntegerBase(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setLocale((*reinterpret_cast< QLocale(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setNumberFlags(QTextStream::NumberFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setPadChar((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setRealNumberNotation(QTextStream::RealNumberNotation(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setRealNumberPrecision(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setStatus(QTextStream::Status(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setString(reinterpret_cast<QString*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setString(reinterpret_cast<QString*>(stack[1].s_voidp),
                    QIODevice::OpenMode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 40: o->skipWhiteSpace();
                stack[0].type = PlastiQ::Void; break;
        case 41: { qint64 _r = o->status(); // HACK for Status 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 42: { QString* _r = o->string();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QString"; } break;

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
        QTextStream *o = reinterpret_cast<QTextStream*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextStream::~PlastiQQTextStream() {
    QTextStream* o = reinterpret_cast<QTextStream*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

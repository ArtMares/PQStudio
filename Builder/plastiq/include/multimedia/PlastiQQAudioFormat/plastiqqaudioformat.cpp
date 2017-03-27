#include "plastiqmethod.h"
#include "plastiqqaudioformat.h"

#include <QAudioFormat> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQAudioFormat::plastiqConstructors = {
    { "QAudioFormat()", { "QAudioFormat", "", "QAudioFormat*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioFormat(QAudioFormat&)", { "QAudioFormat", "QAudioFormat&", "QAudioFormat*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioFormat::plastiqMethods = {
    { "byteOrder()", { "byteOrder", "", "QAudioFormat::Endian", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bytesForDuration(long)", { "bytesForDuration", "qint64", "qint32", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bytesForFrames(int)", { "bytesForFrames", "qint32", "qint32", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bytesPerFrame()", { "bytesPerFrame", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "channelCount()", { "channelCount", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "codec()", { "codec", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "durationForBytes(int)", { "durationForBytes", "qint32", "qint64", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "durationForFrames(int)", { "durationForFrames", "qint32", "qint64", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "framesForBytes(int)", { "framesForBytes", "qint32", "qint32", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "framesForDuration(long)", { "framesForDuration", "qint64", "qint32", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sampleRate()", { "sampleRate", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sampleSize()", { "sampleSize", "", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sampleType()", { "sampleType", "", "QAudioFormat::SampleType", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setByteOrder(enum)", { "setByteOrder", "QAudioFormat::Endian", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setChannelCount(int)", { "setChannelCount", "int", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCodec(QString)", { "setCodec", "QString&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSampleRate(int)", { "setSampleRate", "int", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSampleSize(int)", { "setSampleSize", "int", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSampleType(enum)", { "setSampleType", "QAudioFormat::SampleType", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioFormat::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAudioFormat::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAudioFormat::plastiqConstants = {

    /* QAudioFormat::Endian */
   { "BigEndian", QAudioFormat::BigEndian },
   { "LittleEndian", QAudioFormat::LittleEndian },

    /* QAudioFormat::SampleType */
   { "Unknown", QAudioFormat::Unknown },
   { "SignedInt", QAudioFormat::SignedInt },
   { "UnSignedInt", QAudioFormat::UnSignedInt },
   { "Float", QAudioFormat::Float },

};

QVector<PlastiQMetaObject*> PlastiQQAudioFormat::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQAudioFormat::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAudioFormat::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QAudioFormat", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAudioFormat::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAudioFormat::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAudioFormat *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAudioFormat(); break;
        case 1: o = new QAudioFormat((*reinterpret_cast< QAudioFormat(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAudioFormat *p = new PlastiQQAudioFormat();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAudioFormat *p = new PlastiQQAudioFormat();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 20) {
            id -= 20;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAudioFormat *o = sc ? Q_NULLPTR : reinterpret_cast<QAudioFormat*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->byteOrder(); // HACK for QAudioFormat::Endian 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { int _r = o->bytesForDuration(stack[1].s_long);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->bytesForFrames(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->bytesPerFrame();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->channelCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { QString _r = o->codec();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { long _r = o->durationForBytes(stack[1].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 7: { long _r = o->durationForFrames(stack[1].s_int);
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 8: { int _r = o->framesForBytes(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { int _r = o->framesForDuration(stack[1].s_long);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { int _r = o->sampleRate();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { int _r = o->sampleSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { qint64 _r = o->sampleType(); // HACK for QAudioFormat::SampleType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 14: o->setByteOrder(QAudioFormat::Endian(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setChannelCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setCodec(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setSampleRate(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setSampleSize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setSampleType(QAudioFormat::SampleType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;

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
        QAudioFormat *o = reinterpret_cast<QAudioFormat*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQAudioFormat::~PlastiQQAudioFormat() {
    QAudioFormat* o = reinterpret_cast<QAudioFormat*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

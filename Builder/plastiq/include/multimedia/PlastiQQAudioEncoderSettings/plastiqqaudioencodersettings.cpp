#include "plastiqmethod.h"
#include "plastiqqaudioencodersettings.h"

#include <QAudioEncoderSettings> 
#include <QString>
#include <QVariant>
#include <QVariantMap>

QHash<QByteArray, PlastiQMethod> PlastiQQAudioEncoderSettings::plastiqConstructors = {
    { "QAudioEncoderSettings()", { "QAudioEncoderSettings", "", "QAudioEncoderSettings*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAudioEncoderSettings(QAudioEncoderSettings&)", { "QAudioEncoderSettings", "QAudioEncoderSettings&", "QAudioEncoderSettings*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioEncoderSettings::plastiqMethods = {
    { "bitRate()", { "bitRate", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "channelCount()", { "channelCount", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "codec()", { "codec", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "encodingMode()", { "encodingMode", "", "QMultimedia::EncodingMode", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "encodingOption(QString)", { "encodingOption", "QString&", "QVariant", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "encodingOptions()", { "encodingOptions", "", "QVariantMap", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "quality()", { "quality", "", "QMultimedia::EncodingQuality", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sampleRate()", { "sampleRate", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBitRate(int)", { "setBitRate", "int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setChannelCount(int)", { "setChannelCount", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCodec(QString)", { "setCodec", "QString&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEncodingMode(QMultimedia::EncodingMode)", { "setEncodingMode", "QMultimedia::EncodingMode", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEncodingOption(QString,QVariant)", { "setEncodingOption", "QString&,QVariant&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEncodingOptions(QVariantMap&)", { "setEncodingOptions", "QVariantMap&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setQuality(QMultimedia::EncodingQuality)", { "setQuality", "QMultimedia::EncodingQuality", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSampleRate(int)", { "setSampleRate", "int", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAudioEncoderSettings::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAudioEncoderSettings::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAudioEncoderSettings::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAudioEncoderSettings::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQAudioEncoderSettings::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAudioEncoderSettings::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QAudioEncoderSettings", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAudioEncoderSettings::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQAudioEncoderSettings::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QAudioEncoderSettings *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QAudioEncoderSettings(); break;
        case 1: o = new QAudioEncoderSettings((*reinterpret_cast< QAudioEncoderSettings(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQAudioEncoderSettings *p = new PlastiQQAudioEncoderSettings();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAudioEncoderSettings *p = new PlastiQQAudioEncoderSettings();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 17) {
            id -= 17;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAudioEncoderSettings *o = sc ? Q_NULLPTR : reinterpret_cast<QAudioEncoderSettings*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->bitRate();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->channelCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { QString _r = o->codec();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: /* o->encodingMode() | ret: `QMultimedia::EncodingMode` */ break;
        case 4: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->encodingOption(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: /* UNSUPPORTED_RETURN_VALUE o->encodingOptions() | ret: `QVariantMap` */ break;
        case 6: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: /* o->quality() | ret: `QMultimedia::EncodingQuality` */ break;
        case 8: { int _r = o->sampleRate();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: o->setBitRate(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setChannelCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setCodec(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 12: /* o->setEncodingMode(UNSUPPORTED_TYPE_QMultimedia::EncodingMode) | ret: `void` */ break;
        case 13: o->setEncodingOption(stack[1].s_string,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setEncodingOptions((*reinterpret_cast< QVariantMap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 15: /* o->setQuality(UNSUPPORTED_TYPE_QMultimedia::EncodingQuality) | ret: `void` */ break;
        case 16: o->setSampleRate(stack[1].s_int);
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
        QAudioEncoderSettings *o = reinterpret_cast<QAudioEncoderSettings*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQAudioEncoderSettings::~PlastiQQAudioEncoderSettings() {
    QAudioEncoderSettings* o = reinterpret_cast<QAudioEncoderSettings*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

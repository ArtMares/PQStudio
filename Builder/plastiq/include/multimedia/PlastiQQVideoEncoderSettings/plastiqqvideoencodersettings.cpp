#include "plastiqmethod.h"
#include "plastiqqvideoencodersettings.h"

#include <QVideoEncoderSettings> 
#include <QString>
#include <QVariant>
#include <QVariantMap>
#include <QSize>

QHash<QByteArray, PlastiQMethod> PlastiQQVideoEncoderSettings::plastiqConstructors = {
    { "QVideoEncoderSettings()", { "QVideoEncoderSettings", "", "QVideoEncoderSettings*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVideoEncoderSettings(QVideoEncoderSettings&)", { "QVideoEncoderSettings", "QVideoEncoderSettings&", "QVideoEncoderSettings*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoEncoderSettings::plastiqMethods = {
    { "bitRate()", { "bitRate", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "codec()", { "codec", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "encodingMode()", { "encodingMode", "", "QMultimedia::EncodingMode", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "encodingOption(QString)", { "encodingOption", "QString&", "QVariant", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "encodingOptions()", { "encodingOptions", "", "QVariantMap", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameRate()", { "frameRate", "", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "quality()", { "quality", "", "QMultimedia::EncodingQuality", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resolution()", { "resolution", "", "QSize", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBitRate(int)", { "setBitRate", "int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCodec(QString)", { "setCodec", "QString&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEncodingMode(QMultimedia::EncodingMode)", { "setEncodingMode", "QMultimedia::EncodingMode", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEncodingOption(QString,QVariant)", { "setEncodingOption", "QString&,QVariant&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEncodingOptions(QVariantMap&)", { "setEncodingOptions", "QVariantMap&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFrameRate(double)", { "setFrameRate", "qreal", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setQuality(QMultimedia::EncodingQuality)", { "setQuality", "QMultimedia::EncodingQuality", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setResolution(QSize&)", { "setResolution", "QSize&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setResolution(int,int)", { "setResolution", "int,int", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoEncoderSettings::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQVideoEncoderSettings::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQVideoEncoderSettings::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVideoEncoderSettings::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQVideoEncoderSettings::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQVideoEncoderSettings::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QVideoEncoderSettings", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVideoEncoderSettings::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVideoEncoderSettings::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVideoEncoderSettings *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QVideoEncoderSettings(); break;
        case 1: o = new QVideoEncoderSettings((*reinterpret_cast< QVideoEncoderSettings(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVideoEncoderSettings *p = new PlastiQQVideoEncoderSettings();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVideoEncoderSettings *p = new PlastiQQVideoEncoderSettings();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 18) {
            id -= 18;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QVideoEncoderSettings *o = sc ? Q_NULLPTR : reinterpret_cast<QVideoEncoderSettings*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->bitRate();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { QString _r = o->codec();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: /* o->encodingMode() | ret: `QMultimedia::EncodingMode` */ break;
        case 3: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->encodingOption(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: /* UNSUPPORTED_RETURN_VALUE o->encodingOptions() | ret: `QVariantMap` */ break;
        case 5: { double _r = o->frameRate();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: /* o->quality() | ret: `QMultimedia::EncodingQuality` */ break;
        case 8: { /* COPY OBJECT */
            QSize *_r = new QSize(o->resolution());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: o->setBitRate(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setCodec(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 11: /* o->setEncodingMode(UNSUPPORTED_TYPE_QMultimedia::EncodingMode) | ret: `void` */ break;
        case 12: o->setEncodingOption(stack[1].s_string,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setEncodingOptions((*reinterpret_cast< QVariantMap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setFrameRate(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 15: /* o->setQuality(UNSUPPORTED_TYPE_QMultimedia::EncodingQuality) | ret: `void` */ break;
        case 16: o->setResolution((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setResolution(stack[1].s_int,
                    stack[2].s_int);
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
        QVideoEncoderSettings *o = reinterpret_cast<QVideoEncoderSettings*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQVideoEncoderSettings::~PlastiQQVideoEncoderSettings() {
    QVideoEncoderSettings* o = reinterpret_cast<QVideoEncoderSettings*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

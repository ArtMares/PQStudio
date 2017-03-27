#include "plastiqmethod.h"
#include "plastiqqimageencodersettings.h"

#include <QImageEncoderSettings> 
#include <QString>
#include <QVariant>
#include <QVariantMap>
#include <QSize>

QHash<QByteArray, PlastiQMethod> PlastiQQImageEncoderSettings::plastiqConstructors = {
    { "QImageEncoderSettings()", { "QImageEncoderSettings", "", "QImageEncoderSettings*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImageEncoderSettings(QImageEncoderSettings&)", { "QImageEncoderSettings", "QImageEncoderSettings&", "QImageEncoderSettings*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQImageEncoderSettings::plastiqMethods = {
    { "codec()", { "codec", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "encodingOption(QString)", { "encodingOption", "QString&", "QVariant", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "encodingOptions()", { "encodingOptions", "", "QVariantMap", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "quality()", { "quality", "", "QMultimedia::EncodingQuality", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resolution()", { "resolution", "", "QSize", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCodec(QString)", { "setCodec", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEncodingOption(QString,QVariant)", { "setEncodingOption", "QString&,QVariant&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEncodingOptions(QVariantMap&)", { "setEncodingOptions", "QVariantMap&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setQuality(QMultimedia::EncodingQuality)", { "setQuality", "QMultimedia::EncodingQuality", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setResolution(QSize&)", { "setResolution", "QSize&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setResolution(int,int)", { "setResolution", "int,int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQImageEncoderSettings::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQImageEncoderSettings::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQImageEncoderSettings::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQImageEncoderSettings::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQImageEncoderSettings::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQImageEncoderSettings::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QImageEncoderSettings", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQImageEncoderSettings::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQImageEncoderSettings::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QImageEncoderSettings *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QImageEncoderSettings(); break;
        case 1: o = new QImageEncoderSettings((*reinterpret_cast< QImageEncoderSettings(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQImageEncoderSettings *p = new PlastiQQImageEncoderSettings();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQImageEncoderSettings *p = new PlastiQQImageEncoderSettings();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QImageEncoderSettings *o = sc ? Q_NULLPTR : reinterpret_cast<QImageEncoderSettings*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->codec();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->encodingOption(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: /* UNSUPPORTED_RETURN_VALUE o->encodingOptions() | ret: `QVariantMap` */ break;
        case 3: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: /* o->quality() | ret: `QMultimedia::EncodingQuality` */ break;
        case 5: { /* COPY OBJECT */
            QSize *_r = new QSize(o->resolution());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: o->setCodec(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setEncodingOption(stack[1].s_string,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setEncodingOptions((*reinterpret_cast< QVariantMap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 9: /* o->setQuality(UNSUPPORTED_TYPE_QMultimedia::EncodingQuality) | ret: `void` */ break;
        case 10: o->setResolution((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setResolution(stack[1].s_int,
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
        QImageEncoderSettings *o = reinterpret_cast<QImageEncoderSettings*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQImageEncoderSettings::~PlastiQQImageEncoderSettings() {
    QImageEncoderSettings* o = reinterpret_cast<QImageEncoderSettings*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

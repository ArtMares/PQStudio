#include "plastiqmethod.h"
#include "plastiqqmediaresource.h"

#include <QMediaResource> 
#include <QString>
#include <QNetworkRequest>
#include <QSize>
#include <QUrl>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaResource::plastiqConstructors = {
    { "QMediaResource()", { "QMediaResource", "", "QMediaResource*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaResource(QUrl&)", { "QMediaResource", "QUrl&", "QMediaResource*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaResource(QUrl&,QString)", { "QMediaResource", "QUrl&,QString&", "QMediaResource*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaResource(QNetworkRequest&)", { "QMediaResource", "QNetworkRequest&", "QMediaResource*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaResource(QNetworkRequest&,QString)", { "QMediaResource", "QNetworkRequest&,QString&", "QMediaResource*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaResource(QMediaResource&)", { "QMediaResource", "QMediaResource&", "QMediaResource*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaResource::plastiqMethods = {
    { "audioBitRate()", { "audioBitRate", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "audioCodec()", { "audioCodec", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "channelCount()", { "channelCount", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dataSize()", { "dataSize", "", "qint64", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "language()", { "language", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeType()", { "mimeType", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "request()", { "request", "", "QNetworkRequest", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resolution()", { "resolution", "", "QSize", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sampleRate()", { "sampleRate", "", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAudioBitRate(int)", { "setAudioBitRate", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAudioCodec(QString)", { "setAudioCodec", "QString&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setChannelCount(int)", { "setChannelCount", "int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDataSize(const qint64)", { "setDataSize", "qint64", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLanguage(QString)", { "setLanguage", "QString&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setResolution(QSize&)", { "setResolution", "QSize&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setResolution(int,int)", { "setResolution", "int,int", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSampleRate(int)", { "setSampleRate", "int", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVideoBitRate(int)", { "setVideoBitRate", "int", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVideoCodec(QString)", { "setVideoCodec", "QString&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "url()", { "url", "", "QUrl", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "videoBitRate()", { "videoBitRate", "", "int", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "videoCodec()", { "videoCodec", "", "QString", 22, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaResource::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaResource::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaResource::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMediaResource::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQMediaResource::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMediaResource::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QMediaResource", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaResource::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaResource::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaResource *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QMediaResource(); break;
        case 1: o = new QMediaResource((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp))); break;
        case 2: o = new QMediaResource((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)),
                    stack[2].s_string); break;
        case 3: o = new QMediaResource((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp))); break;
        case 4: o = new QMediaResource((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp)),
                    stack[2].s_string); break;
        case 5: o = new QMediaResource((*reinterpret_cast< QMediaResource(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMediaResource *p = new PlastiQQMediaResource();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaResource *p = new PlastiQQMediaResource();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 23) {
            id -= 23;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMediaResource *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaResource*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->audioBitRate();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { QString _r = o->audioCodec();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { int _r = o->channelCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { long _r = o->dataSize();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 4: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { QString _r = o->language();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { QString _r = o->mimeType();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { /* COPY OBJECT */
            QNetworkRequest *_r = new QNetworkRequest(o->request());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkRequest";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QSize *_r = new QSize(o->resolution());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { int _r = o->sampleRate();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: o->setAudioBitRate(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setAudioCodec(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setChannelCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 13: /* o->setDataSize(UNSUPPORTED_TYPE_const qint64) | ret: `void` */ break;
        case 14: o->setLanguage(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setResolution((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setResolution(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setSampleRate(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setVideoBitRate(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setVideoCodec(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 20: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->url());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: { int _r = o->videoBitRate();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 22: { QString _r = o->videoCodec();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

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
        QMediaResource *o = reinterpret_cast<QMediaResource*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQMediaResource::~PlastiQQMediaResource() {
    QMediaResource* o = reinterpret_cast<QMediaResource*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

#include "plastiqmethod.h"
#include "plastiqqmediaplayer.h"

#include "multimedia/PlastiQQMediaObject/plastiqqmediaobject.h"
#include <QMediaPlayer> 
#include <QMediaContent>
#include <QNetworkConfiguration>
#include <QString>
#include <QIODevice>
#include <QMediaPlaylist>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaPlayer::plastiqConstructors = {
    { "QMediaPlayer()", { "QMediaPlayer", "", "QMediaPlayer*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaPlayer(QObject*)", { "QMediaPlayer", "QObject*", "QMediaPlayer*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaPlayer(QObject*,enum)", { "QMediaPlayer", "QObject*,Flags", "QMediaPlayer*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaPlayer::plastiqMethods = {
    { "audioRole()", { "audioRole", "", "QAudio::Role", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bufferStatus()", { "bufferStatus", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentMedia()", { "currentMedia", "", "QMediaContent", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentNetworkConfiguration()", { "currentNetworkConfiguration", "", "QNetworkConfiguration", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "duration()", { "duration", "", "qint64", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "Error", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAudioAvailable()", { "isAudioAvailable", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMuted()", { "isMuted", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSeekable()", { "isSeekable", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVideoAvailable()", { "isVideoAvailable", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "media()", { "media", "", "QMediaContent", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mediaStatus()", { "mediaStatus", "", "MediaStatus", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mediaStream()", { "mediaStream", "", "const QIODevice*", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "playbackRate()", { "playbackRate", "", "qreal", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "playlist()", { "playlist", "", "QMediaPlaylist*", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "position()", { "position", "", "qint64", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAudioRole(QAudio::Role)", { "setAudioRole", "QAudio::Role", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVideoOutput(QVideoWidget*)", { "setVideoOutput", "QVideoWidget*", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVideoOutput(QGraphicsVideoItem*)", { "setVideoOutput", "QGraphicsVideoItem*", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVideoOutput(QAbstractVideoSurface*)", { "setVideoOutput", "QAbstractVideoSurface*", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "State", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "volume()", { "volume", "", "int", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasSupport(QString)", { "hasSupport", "QString&", "QMultimedia::SupportEstimate", 23, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "hasSupport(QString,QStringList&)", { "hasSupport", "QString&,QStringList&", "QMultimedia::SupportEstimate", 24, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "hasSupport(QString,QStringList&,enum)", { "hasSupport", "QString&,QStringList&,Flags", "QMultimedia::SupportEstimate", 25, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "pause()", { "pause", "", "void", 26, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "play()", { "play", "", "void", 27, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMedia(QMediaContent&)", { "setMedia", "QMediaContent&", "void", 28, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMedia(QMediaContent&,QIODevice*)", { "setMedia", "QMediaContent&,QIODevice*", "void", 29, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMuted(bool)", { "setMuted", "bool", "void", 30, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setNetworkConfigurations(QList<QNetworkConfiguration>&)", { "setNetworkConfigurations", "QList<QNetworkConfiguration>&", "void", 31, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setPlaybackRate(double)", { "setPlaybackRate", "qreal", "void", 32, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setPlaylist(QMediaPlaylist*)", { "setPlaylist", "QMediaPlaylist*", "void", 33, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setPosition(long)", { "setPosition", "qint64", "void", 34, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setVolume(int)", { "setVolume", "int", "void", 35, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "stop()", { "stop", "", "void", 36, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaPlayer::plastiqSignals = {
    { "audioAvailableChanged(bool)", { "audioAvailableChanged", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "audioRoleChanged(QAudio::Role)", { "audioRoleChanged", "QAudio::Role", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "bufferStatusChanged(int)", { "bufferStatusChanged", "int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "currentMediaChanged(QMediaContent&)", { "currentMediaChanged", "QMediaContent&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "durationChanged(long)", { "durationChanged", "qint64", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "error(enum)", { "error", "QMediaPlayer::Error", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "mediaChanged(QMediaContent&)", { "mediaChanged", "QMediaContent&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "mediaStatusChanged(enum)", { "mediaStatusChanged", "QMediaPlayer::MediaStatus", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "mutedChanged(bool)", { "mutedChanged", "bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "networkConfigurationChanged(QNetworkConfiguration&)", { "networkConfigurationChanged", "QNetworkConfiguration&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "playbackRateChanged(double)", { "playbackRateChanged", "qreal", "void", 10, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "positionChanged(long)", { "positionChanged", "qint64", "void", 11, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "seekableChanged(bool)", { "seekableChanged", "bool", "void", 12, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum)", { "stateChanged", "QMediaPlayer::State", "void", 13, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "videoAvailableChanged(bool)", { "videoAvailableChanged", "bool", "void", 14, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "volumeChanged(int)", { "volumeChanged", "int", "void", 15, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaPlayer::plastiqProperties = {
    { "audioAvailable", { "audioAvailable", "bool", "audioAvailableChanged", "isAudioAvailable" } },
    { "audioRole", { "audioRole", "QAudio::Role", "setAudioRole", "audioRole" } },
    { "bufferStatus", { "bufferStatus", "int", "bufferStatusChanged", "bufferStatus" } },
    { "currentMedia", { "currentMedia", "QMediaContent", "currentMediaChanged", "currentMedia" } },
    { "duration", { "duration", "qint64", "durationChanged", "duration" } },
    { "error", { "error", "QString", "", "errorString" } },
    { "media", { "media", "QMediaContent", "setMedia", "media" } },
    { "mediaStatus", { "mediaStatus", "long", "mediaStatusChanged", "mediaStatus" } },
    { "muted", { "muted", "bool", "setMuted", "isMuted" } },
    { "playbackRate", { "playbackRate", "qreal", "setPlaybackRate", "playbackRate" } },
    { "playlist", { "playlist", "QMediaPlaylist*", "setPlaylist", "playlist" } },
    { "position", { "position", "qint64", "setPosition", "position" } },
    { "seekable", { "seekable", "bool", "seekableChanged", "isSeekable" } },
    { "state", { "state", "long", "stateChanged", "state" } },
    { "videoAvailable", { "videoAvailable", "bool", "videoAvailableChanged", "isVideoAvailable" } },
    { "volume", { "volume", "int", "setVolume", "volume" } },

};

QHash<QByteArray, long> PlastiQQMediaPlayer::plastiqConstants = {

    /* QMediaPlayer::Error */
   { "NoError", QMediaPlayer::NoError },
   { "ResourceError", QMediaPlayer::ResourceError },
   { "FormatError", QMediaPlayer::FormatError },
   { "NetworkError", QMediaPlayer::NetworkError },
   { "AccessDeniedError", QMediaPlayer::AccessDeniedError },
   { "ServiceMissingError", QMediaPlayer::ServiceMissingError },
   { "MediaIsPlaylist", QMediaPlayer::MediaIsPlaylist },

    /* QMediaPlayer::Flag */
   { "LowLatency", QMediaPlayer::LowLatency },
   { "StreamPlayback", QMediaPlayer::StreamPlayback },
   { "VideoSurface", QMediaPlayer::VideoSurface },

    /* QMediaPlayer::MediaStatus */
   { "UnknownMediaStatus", QMediaPlayer::UnknownMediaStatus },
   { "NoMedia", QMediaPlayer::NoMedia },
   { "LoadingMedia", QMediaPlayer::LoadingMedia },
   { "LoadedMedia", QMediaPlayer::LoadedMedia },
   { "StalledMedia", QMediaPlayer::StalledMedia },
   { "BufferingMedia", QMediaPlayer::BufferingMedia },
   { "BufferedMedia", QMediaPlayer::BufferedMedia },
   { "EndOfMedia", QMediaPlayer::EndOfMedia },
   { "InvalidMedia", QMediaPlayer::InvalidMedia },

    /* QMediaPlayer::State */
   { "StoppedState", QMediaPlayer::StoppedState },
   { "PlayingState", QMediaPlayer::PlayingState },
   { "PausedState", QMediaPlayer::PausedState },

};

QVector<PlastiQMetaObject*> PlastiQQMediaPlayer::plastiqInherits = { &PlastiQQMediaObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMediaPlayer::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMediaPlayer::plastiq_static_metaObject = {
    { &PlastiQQMediaObject::plastiq_static_metaObject, &plastiqInherits, "QMediaPlayer", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaPlayer::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaPlayer::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaPlayer *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QMediaPlayer(); break;
        case 1: o = new QMediaPlayer(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new QMediaPlayer(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    QMediaPlayer::Flags(stack[2].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMediaPlayer *p = new PlastiQQMediaPlayer();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaPlayer *p = new PlastiQQMediaPlayer();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 37) {
            id -= 37;
            PlastiQQMediaObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMediaPlayer *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaPlayer*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->audioRole() | ret: `QAudio::Role` */ break;
        case 1: { int _r = o->bufferStatus();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { /* COPY OBJECT */
            QMediaContent *_r = new QMediaContent(o->currentMedia());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMediaContent";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QNetworkConfiguration *_r = new QNetworkConfiguration(o->currentNetworkConfiguration());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkConfiguration";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { long _r = o->duration();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 5: { qint64 _r = o->error(); // HACK for Error 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { bool _r = o->isAudioAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isMuted();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isSeekable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->isVideoAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { /* COPY OBJECT */
            QMediaContent *_r = new QMediaContent(o->media());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMediaContent";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { qint64 _r = o->mediaStatus(); // HACK for MediaStatus 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 13: { QIODevice* _r = const_cast<QIODevice*>(o->mediaStream());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QIODevice"; } break;
        case 14: { double _r = o->playbackRate();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 15: { QMediaPlaylist* _r = o->playlist();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMediaPlaylist"; } break;
        case 16: { long _r = o->position();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 17: /* o->setAudioRole(UNSUPPORTED_TYPE_QAudio::Role) | ret: `void` */ break;
        case 18: o->setVideoOutput(reinterpret_cast<QVideoWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setVideoOutput(reinterpret_cast<QGraphicsVideoItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setVideoOutput(reinterpret_cast<QAbstractVideoSurface*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 21: { qint64 _r = o->state(); // HACK for State 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 22: { int _r = o->volume();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 23: /* o->hasSupport(stack[1].s_string) | ret: `QMultimedia::SupportEstimate` */ break;
        case 24: /* o->hasSupport(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp))) | ret: `QMultimedia::SupportEstimate` */ break;
        case 25: /* o->hasSupport(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)),
                    QMediaPlayer::Flags(stack[3].s_int64)) | ret: `QMultimedia::SupportEstimate` */ break;
        case 26: o->pause();
                stack[0].type = PlastiQ::Void; break;
        case 27: o->play();
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setMedia((*reinterpret_cast< QMediaContent(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setMedia((*reinterpret_cast< QMediaContent(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QIODevice*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setMuted(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setNetworkConfigurations((*reinterpret_cast< QList<QNetworkConfiguration>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setPlaybackRate(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setPlaylist(reinterpret_cast<QMediaPlaylist*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setPosition(stack[1].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setVolume(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 36: o->stop();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 16) {
            id -= 16;
            PlastiQQMediaObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMediaPlayer *o = reinterpret_cast<QMediaPlayer*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMediaPlayer::audioAvailableChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "audioAvailableChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QMediaPlayer::audioRoleChanged,
            [=](QAudio::Role arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&arg0);
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QAudio::Role";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "audioRoleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QMediaPlayer::bufferStatusChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "bufferStatusChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QMediaPlayer::currentMediaChanged,
            [=](const QMediaContent& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QMediaContent(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QMediaContent";
                PlastiQ_activate(sender, "currentMediaChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QMediaPlayer::durationChanged,
            [=](qint64 arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_long = arg0;
                    cstack[0].type = PlastiQ::Long; cstack[0].name = "qint64";
                PlastiQ_activate(sender, "durationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, static_cast<void (QMediaPlayer::*)(QMediaPlayer::Error)>(&QMediaPlayer::error),
            [=](QMediaPlayer::Error arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QMediaPlayer::Error";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QMediaPlayer::mediaChanged,
            [=](const QMediaContent& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QMediaContent(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QMediaContent";
                PlastiQ_activate(sender, "mediaChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QMediaPlayer::mediaStatusChanged,
            [=](QMediaPlayer::MediaStatus arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QMediaPlayer::MediaStatus";
                PlastiQ_activate(sender, "mediaStatusChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QMediaPlayer::mutedChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "mutedChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QMediaPlayer::networkConfigurationChanged,
            [=](const QNetworkConfiguration& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QNetworkConfiguration(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QNetworkConfiguration";
                PlastiQ_activate(sender, "networkConfigurationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 10: QObject::connect(o, &QMediaPlayer::playbackRateChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "playbackRateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 11: QObject::connect(o, &QMediaPlayer::positionChanged,
            [=](qint64 arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_long = arg0;
                    cstack[0].type = PlastiQ::Long; cstack[0].name = "qint64";
                PlastiQ_activate(sender, "positionChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 12: QObject::connect(o, &QMediaPlayer::seekableChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "seekableChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 13: QObject::connect(o, &QMediaPlayer::stateChanged,
            [=](QMediaPlayer::State arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QMediaPlayer::State";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 14: QObject::connect(o, &QMediaPlayer::videoAvailableChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "videoAvailableChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 15: QObject::connect(o, &QMediaPlayer::volumeChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "volumeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMediaPlayer *o = reinterpret_cast<QMediaPlayer*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMediaPlayer *o = reinterpret_cast<QMediaPlayer*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMediaPlayer *o = reinterpret_cast<QMediaPlayer*>(object->plastiq_data());

        if(className == "QMediaObject") {
            stack[0].s_voidp = static_cast<QMediaObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMediaPlayer::~PlastiQQMediaPlayer() {
    QMediaPlayer* o = reinterpret_cast<QMediaPlayer*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

#include "plastiqmethod.h"
#include "plastiqqmediaplayercontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QMediaPlayerControl> 
#include <QMediaTimeRange>
#include <QMediaContent>
#include <QIODevice>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaPlayerControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaPlayerControl::plastiqMethods = {
    { "availablePlaybackRanges()", { "availablePlaybackRanges", "", "QMediaTimeRange", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bufferStatus()", { "bufferStatus", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "duration()", { "duration", "", "qint64", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAudioAvailable()", { "isAudioAvailable", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMuted()", { "isMuted", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSeekable()", { "isSeekable", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVideoAvailable()", { "isVideoAvailable", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "media()", { "media", "", "QMediaContent", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mediaStatus()", { "mediaStatus", "", "QMediaPlayer::MediaStatus", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mediaStream()", { "mediaStream", "", "const QIODevice*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pause()", { "pause", "", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "play()", { "play", "", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "playbackRate()", { "playbackRate", "", "qreal", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "position()", { "position", "", "qint64", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMedia(QMediaContent&,QIODevice*)", { "setMedia", "QMediaContent&,QIODevice*", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMuted(bool)", { "setMuted", "bool", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPlaybackRate(double)", { "setPlaybackRate", "qreal", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPosition(long)", { "setPosition", "qint64", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVolume(int)", { "setVolume", "int", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "QMediaPlayer::State", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stop()", { "stop", "", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "volume()", { "volume", "", "int", 21, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaPlayerControl::plastiqSignals = {
    { "audioAvailableChanged(bool)", { "audioAvailableChanged", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "availablePlaybackRangesChanged(QMediaTimeRange&)", { "availablePlaybackRangesChanged", "QMediaTimeRange&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "bufferStatusChanged(int)", { "bufferStatusChanged", "int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "durationChanged(long)", { "durationChanged", "qint64", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "error(int,QString)", { "error", "int,QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "mediaChanged(QMediaContent&)", { "mediaChanged", "QMediaContent&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "mediaStatusChanged(enum)", { "mediaStatusChanged", "QMediaPlayer::MediaStatus", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "mutedChanged(bool)", { "mutedChanged", "bool", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "playbackRateChanged(double)", { "playbackRateChanged", "qreal", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "positionChanged(long)", { "positionChanged", "qint64", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "seekableChanged(bool)", { "seekableChanged", "bool", "void", 10, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum)", { "stateChanged", "QMediaPlayer::State", "void", 11, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "videoAvailableChanged(bool)", { "videoAvailableChanged", "bool", "void", 12, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "volumeChanged(int)", { "volumeChanged", "int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaPlayerControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaPlayerControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMediaPlayerControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMediaPlayerControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMediaPlayerControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QMediaPlayerControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaPlayerControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaPlayerControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaPlayerControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMediaPlayerControl *p = new PlastiQQMediaPlayerControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaPlayerControl *p = new PlastiQQMediaPlayerControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 22) {
            id -= 22;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMediaPlayerControl *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaPlayerControl*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QMediaTimeRange *_r = new QMediaTimeRange(o->availablePlaybackRanges());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMediaTimeRange";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { int _r = o->bufferStatus();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { long _r = o->duration();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 3: { bool _r = o->isAudioAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->isMuted();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isSeekable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->isVideoAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { /* COPY OBJECT */
            QMediaContent *_r = new QMediaContent(o->media());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMediaContent";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { qint64 _r = o->mediaStatus(); // HACK for QMediaPlayer::MediaStatus 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { QIODevice* _r = const_cast<QIODevice*>(o->mediaStream());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QIODevice"; } break;
        case 10: o->pause();
                stack[0].type = PlastiQ::Void; break;
        case 11: o->play();
                stack[0].type = PlastiQ::Void; break;
        case 12: { double _r = o->playbackRate();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 13: { long _r = o->position();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 14: o->setMedia((*reinterpret_cast< QMediaContent(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QIODevice*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setMuted(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setPlaybackRate(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setPosition(stack[1].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setVolume(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 19: { qint64 _r = o->state(); // HACK for QMediaPlayer::State 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 20: o->stop();
                stack[0].type = PlastiQ::Void; break;
        case 21: { int _r = o->volume();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 14) {
            id -= 14;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMediaPlayerControl *o = reinterpret_cast<QMediaPlayerControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMediaPlayerControl::audioAvailableChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "audioAvailableChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QMediaPlayerControl::availablePlaybackRangesChanged,
            [=](const QMediaTimeRange& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QMediaTimeRange(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QMediaTimeRange";
                PlastiQ_activate(sender, "availablePlaybackRangesChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QMediaPlayerControl::bufferStatusChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "bufferStatusChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QMediaPlayerControl::durationChanged,
            [=](qint64 arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_long = arg0;
                    cstack[0].type = PlastiQ::Long; cstack[0].name = "qint64";
                PlastiQ_activate(sender, "durationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QMediaPlayerControl::error,
            [=](int arg0, const QString& arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_string = const_cast<QString&>(arg1);
                    cstack[1].type = PlastiQ::String; cstack[1].name = "QString";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QMediaPlayerControl::mediaChanged,
            [=](const QMediaContent& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QMediaContent(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QMediaContent";
                PlastiQ_activate(sender, "mediaChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QMediaPlayerControl::mediaStatusChanged,
            [=](QMediaPlayer::MediaStatus arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QMediaPlayer::MediaStatus";
                PlastiQ_activate(sender, "mediaStatusChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QMediaPlayerControl::mutedChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "mutedChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QMediaPlayerControl::playbackRateChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "playbackRateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QMediaPlayerControl::positionChanged,
            [=](qint64 arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_long = arg0;
                    cstack[0].type = PlastiQ::Long; cstack[0].name = "qint64";
                PlastiQ_activate(sender, "positionChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 10: QObject::connect(o, &QMediaPlayerControl::seekableChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "seekableChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 11: QObject::connect(o, &QMediaPlayerControl::stateChanged,
            [=](QMediaPlayer::State arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QMediaPlayer::State";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 12: QObject::connect(o, &QMediaPlayerControl::videoAvailableChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "videoAvailableChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 13: QObject::connect(o, &QMediaPlayerControl::volumeChanged,
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
        QMediaPlayerControl *o = reinterpret_cast<QMediaPlayerControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMediaPlayerControl *o = reinterpret_cast<QMediaPlayerControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMediaPlayerControl *o = reinterpret_cast<QMediaPlayerControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMediaPlayerControl::~PlastiQQMediaPlayerControl() {
    QMediaPlayerControl* o = reinterpret_cast<QMediaPlayerControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

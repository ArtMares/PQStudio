#include "plastiqmethod.h"
#include "plastiqqmediaplaylist.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include "multimedia/PlastiQQMediaBindableInterface/plastiqqmediabindableinterface.h"
#include <QMediaPlaylist> 
#include <QMediaContent>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaPlaylist::plastiqConstructors = {
    { "QMediaPlaylist()", { "QMediaPlaylist", "", "QMediaPlaylist*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaPlaylist(QObject*)", { "QMediaPlaylist", "QObject*", "QMediaPlaylist*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaPlaylist::plastiqMethods = {
    { "addMedia(QMediaContent&)", { "addMedia", "QMediaContent&", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addMedia(QList<QMediaContent>&)", { "addMedia", "QList<QMediaContent>&", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentIndex()", { "currentIndex", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentMedia()", { "currentMedia", "", "QMediaContent", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "error()", { "error", "", "Error", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertMedia(int,QMediaContent&)", { "insertMedia", "int,QMediaContent&", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertMedia(int,QList<QMediaContent>&)", { "insertMedia", "int,QList<QMediaContent>&", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isReadOnly()", { "isReadOnly", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QNetworkRequest&)", { "load", "QNetworkRequest&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QNetworkRequest&,const char*)", { "load", "QNetworkRequest&,char*", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QUrl&)", { "load", "QUrl&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QUrl&,const char*)", { "load", "QUrl&,char*", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QIODevice*)", { "load", "QIODevice*", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QIODevice*,const char*)", { "load", "QIODevice*,char*", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "media(int)", { "media", "int", "QMediaContent", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mediaCount()", { "mediaCount", "", "int", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveMedia(int,int)", { "moveMedia", "int,int", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nextIndex()", { "nextIndex", "", "int", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nextIndex(int)", { "nextIndex", "int", "int", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "playbackMode()", { "playbackMode", "", "PlaybackMode", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "previousIndex()", { "previousIndex", "", "int", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "previousIndex(int)", { "previousIndex", "int", "int", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeMedia(int)", { "removeMedia", "int", "bool", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeMedia(int,int)", { "removeMedia", "int,int", "bool", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QUrl&)", { "save", "QUrl&", "bool", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QUrl&,const char*)", { "save", "QUrl&,char*", "bool", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QIODevice*,const char*)", { "save", "QIODevice*,char*", "bool", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPlaybackMode(enum)", { "setPlaybackMode", "PlaybackMode", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "next()", { "next", "", "void", 31, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "previous()", { "previous", "", "void", 32, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setCurrentIndex(int)", { "setCurrentIndex", "int", "void", 33, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "shuffle()", { "shuffle", "", "void", 34, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaPlaylist::plastiqSignals = {
    { "currentIndexChanged(int)", { "currentIndexChanged", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "currentMediaChanged(QMediaContent&)", { "currentMediaChanged", "QMediaContent&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "loadFailed()", { "loadFailed", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "loaded()", { "loaded", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "mediaAboutToBeInserted(int,int)", { "mediaAboutToBeInserted", "int,int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "mediaAboutToBeRemoved(int,int)", { "mediaAboutToBeRemoved", "int,int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "mediaChanged(int,int)", { "mediaChanged", "int,int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "mediaInserted(int,int)", { "mediaInserted", "int,int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "mediaRemoved(int,int)", { "mediaRemoved", "int,int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "playbackModeChanged(enum)", { "playbackModeChanged", "QMediaPlaylist::PlaybackMode", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaPlaylist::plastiqProperties = {
    { "currentIndex", { "currentIndex", "int", "setCurrentIndex", "currentIndex" } },
    { "currentMedia", { "currentMedia", "QMediaContent", "currentMediaChanged", "currentMedia" } },
    { "playbackMode", { "playbackMode", "long", "setPlaybackMode", "playbackMode" } },

};

QHash<QByteArray, long> PlastiQQMediaPlaylist::plastiqConstants = {

    /* QMediaPlaylist::Error */
   { "NoError", QMediaPlaylist::NoError },
   { "FormatError", QMediaPlaylist::FormatError },
   { "FormatNotSupportedError", QMediaPlaylist::FormatNotSupportedError },
   { "NetworkError", QMediaPlaylist::NetworkError },
   { "AccessDeniedError", QMediaPlaylist::AccessDeniedError },

    /* QMediaPlaylist::PlaybackMode */
   { "CurrentItemOnce", QMediaPlaylist::CurrentItemOnce },
   { "CurrentItemInLoop", QMediaPlaylist::CurrentItemInLoop },
   { "Sequential", QMediaPlaylist::Sequential },
   { "Loop", QMediaPlaylist::Loop },
   { "Random", QMediaPlaylist::Random },

};

QVector<PlastiQMetaObject*> PlastiQQMediaPlaylist::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject, &PlastiQQMediaBindableInterface::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMediaPlaylist::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMediaPlaylist::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QMediaPlaylist", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaPlaylist::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaPlaylist::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaPlaylist *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QMediaPlaylist(); break;
        case 1: o = new QMediaPlaylist(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMediaPlaylist *p = new PlastiQQMediaPlaylist();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaPlaylist *p = new PlastiQQMediaPlaylist();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 35) {
            id -= 35;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMediaPlaylist *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaPlaylist*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->addMedia((*reinterpret_cast< QMediaContent(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->addMedia((*reinterpret_cast< QList<QMediaContent>(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->clear();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { int _r = o->currentIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { /* COPY OBJECT */
            QMediaContent *_r = new QMediaContent(o->currentMedia());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMediaContent";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { qint64 _r = o->error(); // HACK for Error 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { bool _r = o->insertMedia(stack[1].s_int,
                    (*reinterpret_cast< QMediaContent(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->insertMedia(stack[1].s_int,
                    (*reinterpret_cast< QList<QMediaContent>(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->isReadOnly();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: o->load((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->load((*reinterpret_cast< QNetworkRequest(*) >(stack[1].s_voidp)),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->load((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->load((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->load(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->load(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 17: { /* COPY OBJECT */
            QMediaContent *_r = new QMediaContent(o->media(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMediaContent";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { int _r = o->mediaCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 19: { bool _r = o->moveMedia(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { int _r = o->nextIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 21: { int _r = o->nextIndex(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 22: { qint64 _r = o->playbackMode(); // HACK for PlaybackMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 23: { int _r = o->previousIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 24: { int _r = o->previousIndex(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 25: { bool _r = o->removeMedia(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 26: { bool _r = o->removeMedia(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 27: { bool _r = o->save((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 28: { bool _r = o->save((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 29: { bool _r = o->save(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 30: o->setPlaybackMode(QMediaPlaylist::PlaybackMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->next();
                stack[0].type = PlastiQ::Void; break;
        case 32: o->previous();
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setCurrentIndex(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->shuffle();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 10) {
            id -= 10;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMediaPlaylist *o = reinterpret_cast<QMediaPlaylist*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMediaPlaylist::currentIndexChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "currentIndexChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QMediaPlaylist::currentMediaChanged,
            [=](const QMediaContent& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QMediaContent(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QMediaContent";
                PlastiQ_activate(sender, "currentMediaChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QMediaPlaylist::loadFailed,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "loadFailed", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QMediaPlaylist::loaded,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "loaded", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QMediaPlaylist::mediaAboutToBeInserted,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "mediaAboutToBeInserted", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QMediaPlaylist::mediaAboutToBeRemoved,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "mediaAboutToBeRemoved", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QMediaPlaylist::mediaChanged,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "mediaChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QMediaPlaylist::mediaInserted,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "mediaInserted", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QMediaPlaylist::mediaRemoved,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "mediaRemoved", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QMediaPlaylist::playbackModeChanged,
            [=](QMediaPlaylist::PlaybackMode arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QMediaPlaylist::PlaybackMode";
                PlastiQ_activate(sender, "playbackModeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMediaPlaylist *o = reinterpret_cast<QMediaPlaylist*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMediaPlaylist *o = reinterpret_cast<QMediaPlaylist*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMediaPlaylist *o = reinterpret_cast<QMediaPlaylist*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else if(className == "QMediaBindableInterface") {
            stack[0].s_voidp = static_cast<QMediaBindableInterface*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMediaPlaylist::~PlastiQQMediaPlaylist() {
    QMediaPlaylist* o = reinterpret_cast<QMediaPlaylist*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

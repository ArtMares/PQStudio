#include "plastiqmethod.h"
#include "plastiqqsoundeffect.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QSoundEffect> 
#include <QString>
#include <QUrl>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQSoundEffect::plastiqConstructors = {
    { "QSoundEffect()", { "QSoundEffect", "", "QSoundEffect*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSoundEffect(QObject*)", { "QSoundEffect", "QObject*", "QSoundEffect*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSoundEffect::plastiqMethods = {
    { "category()", { "category", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isLoaded()", { "isLoaded", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMuted()", { "isMuted", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isPlaying()", { "isPlaying", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loopCount()", { "loopCount", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loopsRemaining()", { "loopsRemaining", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCategory(QString)", { "setCategory", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLoopCount(int)", { "setLoopCount", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMuted(bool)", { "setMuted", "bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSource(QUrl&)", { "setSource", "QUrl&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVolume(double)", { "setVolume", "qreal", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "source()", { "source", "", "QUrl", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "status()", { "status", "", "Status", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "volume()", { "volume", "", "qreal", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedMimeTypes()", { "supportedMimeTypes", "", "QStringList", 14, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "play()", { "play", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "stop()", { "stop", "", "void", 16, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSoundEffect::plastiqSignals = {
    { "categoryChanged()", { "categoryChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "loadedChanged()", { "loadedChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "loopCountChanged()", { "loopCountChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "loopsRemainingChanged()", { "loopsRemainingChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "mutedChanged()", { "mutedChanged", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "playingChanged()", { "playingChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "sourceChanged()", { "sourceChanged", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "statusChanged()", { "statusChanged", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "volumeChanged()", { "volumeChanged", "", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQSoundEffect::plastiqProperties = {
    { "category", { "category", "QString", "setCategory", "category" } },
    { "loops", { "loops", "int", "setLoopCount", "loopCount" } },
    { "loopsRemaining", { "loopsRemaining", "int", "loopsRemainingChanged", "loopsRemaining" } },
    { "muted", { "muted", "bool", "setMuted", "isMuted" } },
    { "playing", { "playing", "bool", "playingChanged", "isPlaying" } },
    { "source", { "source", "QUrl", "setSource", "source" } },
    { "status", { "status", "long", "statusChanged", "status" } },
    { "volume", { "volume", "qreal", "setVolume", "volume" } },

};

QHash<QByteArray, long> PlastiQQSoundEffect::plastiqConstants = {

    /* QSoundEffect::Loop */
   { "Infinite", QSoundEffect::Infinite },

    /* QSoundEffect::Status */
   { "Null", QSoundEffect::Null },
   { "Loading", QSoundEffect::Loading },
   { "Ready", QSoundEffect::Ready },
   { "Error", QSoundEffect::Error },

};

QVector<PlastiQMetaObject*> PlastiQQSoundEffect::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSoundEffect::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQSoundEffect::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QSoundEffect", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSoundEffect::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSoundEffect::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSoundEffect *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSoundEffect(); break;
        case 1: o = new QSoundEffect(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSoundEffect *p = new PlastiQQSoundEffect();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSoundEffect *p = new PlastiQQSoundEffect();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 17) {
            id -= 17;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSoundEffect *o = sc ? Q_NULLPTR : reinterpret_cast<QSoundEffect*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->category();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { bool _r = o->isLoaded();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->isMuted();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->isPlaying();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { int _r = o->loopCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->loopsRemaining();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: o->setCategory(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setLoopCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setMuted(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setSource((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setVolume(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 11: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->source());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { qint64 _r = o->status(); // HACK for Status 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 13: { double _r = o->volume();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 14: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QSoundEffect::supportedMimeTypes()) : new QStringList(o->supportedMimeTypes());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: o->play();
                stack[0].type = PlastiQ::Void; break;
        case 16: o->stop();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 9) {
            id -= 9;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QSoundEffect *o = reinterpret_cast<QSoundEffect*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QSoundEffect::categoryChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "categoryChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QSoundEffect::loadedChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "loadedChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QSoundEffect::loopCountChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "loopCountChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QSoundEffect::loopsRemainingChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "loopsRemainingChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QSoundEffect::mutedChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "mutedChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QSoundEffect::playingChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "playingChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QSoundEffect::sourceChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "sourceChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QSoundEffect::statusChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "statusChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QSoundEffect::volumeChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "volumeChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QSoundEffect *o = reinterpret_cast<QSoundEffect*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QSoundEffect *o = reinterpret_cast<QSoundEffect*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QSoundEffect *o = reinterpret_cast<QSoundEffect*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSoundEffect::~PlastiQQSoundEffect() {
    QSoundEffect* o = reinterpret_cast<QSoundEffect*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

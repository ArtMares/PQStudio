#include "plastiqmethod.h"
#include "plastiqqmovie.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QMovie> 
#include <QColor>
#include <QImage>
#include <QPixmap>
#include <QIODevice>
#include <QString>
#include <QByteArray>
#include <QRect>
#include <QSize>

QHash<QByteArray, PlastiQMethod> PlastiQQMovie::plastiqConstructors = {
    { "QMovie()", { "QMovie", "", "QMovie*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMovie(QObject*)", { "QMovie", "QObject*", "QMovie*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMovie(QIODevice*)", { "QMovie", "QIODevice*", "QMovie*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMovie(QIODevice*,QByteArray)", { "QMovie", "QIODevice*,QByteArray&", "QMovie*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMovie(QIODevice*,QByteArray,QObject*)", { "QMovie", "QIODevice*,QByteArray&,QObject*", "QMovie*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMovie(QString)", { "QMovie", "QString&", "QMovie*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMovie(QString,QByteArray)", { "QMovie", "QString&,QByteArray&", "QMovie*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMovie(QString,QByteArray,QObject*)", { "QMovie", "QString&,QByteArray&,QObject*", "QMovie*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMovie::plastiqMethods = {
    { "backgroundColor()", { "backgroundColor", "", "QColor", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cacheMode()", { "cacheMode", "", "CacheMode", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentFrameNumber()", { "currentFrameNumber", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentImage()", { "currentImage", "", "QImage", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentPixmap()", { "currentPixmap", "", "QPixmap", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "device()", { "device", "", "QIODevice*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileName()", { "fileName", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "format()", { "format", "", "QByteArray", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameCount()", { "frameCount", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameRect()", { "frameRect", "", "QRect", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "jumpToFrame(int)", { "jumpToFrame", "int", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loopCount()", { "loopCount", "", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nextFrameDelay()", { "nextFrameDelay", "", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaledSize()", { "scaledSize", "", "QSize", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackgroundColor(QColor&)", { "setBackgroundColor", "QColor&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCacheMode(enum)", { "setCacheMode", "CacheMode", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDevice(QIODevice*)", { "setDevice", "QIODevice*", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFileName(QString)", { "setFileName", "QString&", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFormat(QByteArray)", { "setFormat", "QByteArray&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setScaledSize(QSize&)", { "setScaledSize", "QSize&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "speed()", { "speed", "", "int", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "MovieState", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "jumpToNextFrame()", { "jumpToNextFrame", "", "bool", 23, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setPaused(bool)", { "setPaused", "bool", "void", 24, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setSpeed(int)", { "setSpeed", "int", "void", 25, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "start()", { "start", "", "void", 26, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "stop()", { "stop", "", "void", 27, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMovie::plastiqSignals = {
    { "error(enum)", { "error", "QImageReader::ImageReaderError", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "finished()", { "finished", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "frameChanged(int)", { "frameChanged", "int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "resized(QSize&)", { "resized", "QSize&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "started()", { "started", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "stateChanged(enum)", { "stateChanged", "QMovie::MovieState", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "updated(QRect&)", { "updated", "QRect&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMovie::plastiqProperties = {
    { "cacheMode", { "cacheMode", "long", "setCacheMode", "cacheMode" } },
    { "speed", { "speed", "int", "setSpeed", "speed" } },

};

QHash<QByteArray, long> PlastiQQMovie::plastiqConstants = {

    /* QMovie::CacheMode */
   { "CacheNone", QMovie::CacheNone },
   { "CacheAll", QMovie::CacheAll },

    /* QMovie::MovieState */
   { "NotRunning", QMovie::NotRunning },
   { "Paused", QMovie::Paused },
   { "Running", QMovie::Running },

};

QVector<PlastiQMetaObject*> PlastiQQMovie::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMovie::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMovie::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QMovie", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMovie::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMovie::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMovie *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QMovie(); break;
        case 1: o = new QMovie(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new QMovie(reinterpret_cast<QIODevice*>(stack[1].s_voidp)); break;
        case 3: o = new QMovie(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    stack[2].s_bytearray); break;
        case 4: o = new QMovie(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    stack[2].s_bytearray,
                    reinterpret_cast<QObject*>(stack[3].s_voidp)); break;
        case 5: o = new QMovie(stack[1].s_string); break;
        case 6: o = new QMovie(stack[1].s_string,
                    stack[2].s_bytearray); break;
        case 7: o = new QMovie(stack[1].s_string,
                    stack[2].s_bytearray,
                    reinterpret_cast<QObject*>(stack[3].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMovie *p = new PlastiQQMovie();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMovie *p = new PlastiQQMovie();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 28) {
            id -= 28;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMovie *o = sc ? Q_NULLPTR : reinterpret_cast<QMovie*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QColor *_r = new QColor(o->backgroundColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { qint64 _r = o->cacheMode(); // HACK for CacheMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { int _r = o->currentFrameNumber();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { /* COPY OBJECT */
            QImage *_r = new QImage(o->currentImage());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->currentPixmap());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { QIODevice* _r = o->device();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QIODevice"; } break;
        case 6: { QString _r = o->fileName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { QByteArray _r = o->format();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 8: { int _r = o->frameCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { /* COPY OBJECT */
            QRect *_r = new QRect(o->frameRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = o->jumpToFrame(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { int _r = o->loopCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { int _r = o->nextFrameDelay();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { /* COPY OBJECT */
            QSize *_r = new QSize(o->scaledSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: o->setBackgroundColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setCacheMode(QMovie::CacheMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setDevice(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setFileName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setFormat(stack[1].s_bytearray);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setScaledSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: { int _r = o->speed();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 22: { qint64 _r = o->state(); // HACK for MovieState 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 23: { bool _r = o->jumpToNextFrame();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: o->setPaused(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setSpeed(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->start();
                stack[0].type = PlastiQ::Void; break;
        case 27: o->stop();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 7) {
            id -= 7;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMovie *o = reinterpret_cast<QMovie*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMovie::error,
            [=](QImageReader::ImageReaderError arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QImageReader::ImageReaderError";
                PlastiQ_activate(sender, "error", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QMovie::finished,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "finished", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QMovie::frameChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "frameChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QMovie::resized,
            [=](const QSize& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QSize(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QSize";
                PlastiQ_activate(sender, "resized", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QMovie::started,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "started", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QMovie::stateChanged,
            [=](QMovie::MovieState arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QMovie::MovieState";
                PlastiQ_activate(sender, "stateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QMovie::updated,
            [=](const QRect& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QRect(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QRect";
                PlastiQ_activate(sender, "updated", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMovie *o = reinterpret_cast<QMovie*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMovie *o = reinterpret_cast<QMovie*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMovie *o = reinterpret_cast<QMovie*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMovie::~PlastiQQMovie() {
    QMovie* o = reinterpret_cast<QMovie*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

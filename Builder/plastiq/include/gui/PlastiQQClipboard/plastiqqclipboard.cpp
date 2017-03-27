#include "plastiqmethod.h"
#include "plastiqqclipboard.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QClipboard> 
#include <QImage>
#include <QMimeData>
#include <QPixmap>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQClipboard::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQClipboard::plastiqMethods = {
    { "clear()", { "clear", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear(enum)", { "clear", "Mode", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "image()", { "image", "", "QImage", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "image(enum)", { "image", "Mode", "QImage", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeData()", { "mimeData", "", "const QMimeData*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeData(enum)", { "mimeData", "Mode", "const QMimeData*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ownsClipboard()", { "ownsClipboard", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ownsFindBuffer()", { "ownsFindBuffer", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ownsSelection()", { "ownsSelection", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap()", { "pixmap", "", "QPixmap", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap(enum)", { "pixmap", "Mode", "QPixmap", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setImage(QImage&)", { "setImage", "QImage&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setImage(QImage&,enum)", { "setImage", "QImage&,Mode", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMimeData(QMimeData*)", { "setMimeData", "QMimeData*", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMimeData(QMimeData*,enum)", { "setMimeData", "QMimeData*,Mode", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixmap(QPixmap&)", { "setPixmap", "QPixmap&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixmap(QPixmap&,enum)", { "setPixmap", "QPixmap&,Mode", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setText(QString)", { "setText", "QString&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setText(QString,enum)", { "setText", "QString&,Mode", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportsFindBuffer()", { "supportsFindBuffer", "", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportsSelection()", { "supportsSelection", "", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text(enum)", { "text", "Mode", "QString", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text(QString&)", { "text", "QString&", "QString", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text(QString&,enum)", { "text", "QString&,Mode", "QString", 24, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQClipboard::plastiqSignals = {
    { "changed(enum)", { "changed", "QClipboard::Mode", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "dataChanged()", { "dataChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "findBufferChanged()", { "findBufferChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "selectionChanged()", { "selectionChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQClipboard::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQClipboard::plastiqConstants = {

    /* QClipboard::Mode */
   { "Clipboard", QClipboard::Clipboard },
   { "Selection", QClipboard::Selection },
   { "FindBuffer", QClipboard::FindBuffer },
   { "LastMode", QClipboard::LastMode },

};

QVector<PlastiQMetaObject*> PlastiQQClipboard::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQClipboard::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQClipboard::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QClipboard", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQClipboard::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQClipboard::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QClipboard *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQClipboard *p = new PlastiQQClipboard();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQClipboard *p = new PlastiQQClipboard();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 25) {
            id -= 25;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QClipboard *o = sc ? Q_NULLPTR : reinterpret_cast<QClipboard*>(object->plastiq_data());

        switch(id) {
        case 0: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 1: o->clear(QClipboard::Mode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 2: { /* COPY OBJECT */
            QImage *_r = new QImage(o->image());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QImage *_r = new QImage(o->image(QClipboard::Mode(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { QMimeData* _r = const_cast<QMimeData*>(o->mimeData());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMimeData"; } break;
        case 5: { QMimeData* _r = const_cast<QMimeData*>(o->mimeData(QClipboard::Mode(stack[1].s_int64)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMimeData"; } break;
        case 6: { bool _r = o->ownsClipboard();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->ownsFindBuffer();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->ownsSelection();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap(QClipboard::Mode(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: o->setImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)),
                    QClipboard::Mode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setMimeData(reinterpret_cast<QMimeData*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setMimeData(reinterpret_cast<QMimeData*>(stack[1].s_voidp),
                    QClipboard::Mode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setPixmap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setPixmap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)),
                    QClipboard::Mode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setText(stack[1].s_string,
                    QClipboard::Mode(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 19: { bool _r = o->supportsFindBuffer();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { bool _r = o->supportsSelection();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 22: { QString _r = o->text(QClipboard::Mode(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 23: { QString _r = o->text((*reinterpret_cast< QString(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 24: { QString _r = o->text((*reinterpret_cast< QString(*) >(stack[1].s_voidp)),
                    QClipboard::Mode(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QClipboard *o = reinterpret_cast<QClipboard*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QClipboard::changed,
            [=](QClipboard::Mode arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QClipboard::Mode";
                PlastiQ_activate(sender, "changed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QClipboard::dataChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "dataChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QClipboard::findBufferChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "findBufferChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QClipboard::selectionChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "selectionChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QClipboard *o = reinterpret_cast<QClipboard*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QClipboard *o = reinterpret_cast<QClipboard*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QClipboard *o = reinterpret_cast<QClipboard*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQClipboard::~PlastiQQClipboard() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

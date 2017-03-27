#include "plastiqmethod.h"
#include "plastiqqwinthumbnailtoolbar.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QWinThumbnailToolBar> 
#include <QPixmap>
#include <QWindow>

QHash<QByteArray, PlastiQMethod> PlastiQQWinThumbnailToolBar::plastiqConstructors = {
    { "QWinThumbnailToolBar()", { "QWinThumbnailToolBar", "", "QWinThumbnailToolBar*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWinThumbnailToolBar(QObject*)", { "QWinThumbnailToolBar", "QObject*", "QWinThumbnailToolBar*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWinThumbnailToolBar::plastiqMethods = {
    { "addButton(QWinThumbnailToolButton*)", { "addButton", "QWinThumbnailToolButton*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconicLivePreviewPixmap()", { "iconicLivePreviewPixmap", "", "QPixmap", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconicPixmapNotificationsEnabled()", { "iconicPixmapNotificationsEnabled", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconicThumbnailPixmap()", { "iconicThumbnailPixmap", "", "QPixmap", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeButton(QWinThumbnailToolButton*)", { "removeButton", "QWinThumbnailToolButton*", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setButtons(QList<QWinThumbnailToolButton*>&)", { "setButtons", "QList<QWinThumbnailToolButton*>&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIconicPixmapNotificationsEnabled(bool)", { "setIconicPixmapNotificationsEnabled", "bool", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWindow(QWindow*)", { "setWindow", "QWindow*", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "window()", { "window", "", "QWindow*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 10, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setIconicLivePreviewPixmap(QPixmap&)", { "setIconicLivePreviewPixmap", "QPixmap&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setIconicThumbnailPixmap(QPixmap&)", { "setIconicThumbnailPixmap", "QPixmap&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWinThumbnailToolBar::plastiqSignals = {
    { "iconicLivePreviewPixmapRequested()", { "iconicLivePreviewPixmapRequested", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "iconicThumbnailPixmapRequested()", { "iconicThumbnailPixmapRequested", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQWinThumbnailToolBar::plastiqProperties = {
    { "count", { "count", "int", "", "count" } },
    { "iconicLivePreviewPixmap", { "iconicLivePreviewPixmap", "QPixmap", "setIconicLivePreviewPixmap", "iconicLivePreviewPixmap" } },
    { "iconicPixmapNotificationsEnabled", { "iconicPixmapNotificationsEnabled", "bool", "setIconicPixmapNotificationsEnabled", "iconicPixmapNotificationsEnabled" } },
    { "iconicThumbnailPixmap", { "iconicThumbnailPixmap", "QPixmap", "setIconicThumbnailPixmap", "iconicThumbnailPixmap" } },
    { "window", { "window", "QWindow*", "setWindow", "window" } },

};

QHash<QByteArray, long> PlastiQQWinThumbnailToolBar::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWinThumbnailToolBar::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWinThumbnailToolBar::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQWinThumbnailToolBar::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QWinThumbnailToolBar", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWinThumbnailToolBar::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWinThumbnailToolBar::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWinThumbnailToolBar *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QWinThumbnailToolBar(); break;
        case 1: o = new QWinThumbnailToolBar(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWinThumbnailToolBar *p = new PlastiQQWinThumbnailToolBar();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWinThumbnailToolBar *p = new PlastiQQWinThumbnailToolBar();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 13) {
            id -= 13;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWinThumbnailToolBar *o = sc ? Q_NULLPTR : reinterpret_cast<QWinThumbnailToolBar*>(object->plastiq_data());

        switch(id) {
        case 0: o->addButton(reinterpret_cast<QWinThumbnailToolButton*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->iconicLivePreviewPixmap());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { bool _r = o->iconicPixmapNotificationsEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->iconicThumbnailPixmap());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: o->removeButton(reinterpret_cast<QWinThumbnailToolButton*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setButtons((*reinterpret_cast< QList<QWinThumbnailToolButton*>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setIconicPixmapNotificationsEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setWindow(reinterpret_cast<QWindow*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 9: { QWindow* _r = o->window();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWindow"; } break;
        case 10: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setIconicLivePreviewPixmap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setIconicThumbnailPixmap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QWinThumbnailToolBar *o = reinterpret_cast<QWinThumbnailToolBar*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QWinThumbnailToolBar::iconicLivePreviewPixmapRequested,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "iconicLivePreviewPixmapRequested", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QWinThumbnailToolBar::iconicThumbnailPixmapRequested,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "iconicThumbnailPixmapRequested", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QWinThumbnailToolBar *o = reinterpret_cast<QWinThumbnailToolBar*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QWinThumbnailToolBar *o = reinterpret_cast<QWinThumbnailToolBar*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QWinThumbnailToolBar *o = reinterpret_cast<QWinThumbnailToolBar*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWinThumbnailToolBar::~PlastiQQWinThumbnailToolBar() {
    QWinThumbnailToolBar* o = reinterpret_cast<QWinThumbnailToolBar*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

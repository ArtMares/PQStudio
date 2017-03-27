#include "plastiqmethod.h"
#include "plastiqqwintaskbarbutton.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QWinTaskbarButton> 
#include <QString>
#include <QIcon>
#include <QWinTaskbarProgress>
#include <QWindow>

QHash<QByteArray, PlastiQMethod> PlastiQQWinTaskbarButton::plastiqConstructors = {
    { "QWinTaskbarButton()", { "QWinTaskbarButton", "", "QWinTaskbarButton*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWinTaskbarButton(QObject*)", { "QWinTaskbarButton", "QObject*", "QWinTaskbarButton*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWinTaskbarButton::plastiqMethods = {
    { "overlayAccessibleDescription()", { "overlayAccessibleDescription", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "overlayIcon()", { "overlayIcon", "", "QIcon", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "progress()", { "progress", "", "QWinTaskbarProgress*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWindow(QWindow*)", { "setWindow", "QWindow*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "window()", { "window", "", "QWindow*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearOverlayIcon()", { "clearOverlayIcon", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setOverlayAccessibleDescription(QString)", { "setOverlayAccessibleDescription", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setOverlayIcon(QIcon&)", { "setOverlayIcon", "QIcon&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWinTaskbarButton::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWinTaskbarButton::plastiqProperties = {
    { "overlayAccessibleDescription", { "overlayAccessibleDescription", "QString", "setOverlayAccessibleDescription", "overlayAccessibleDescription" } },
    { "overlayIcon", { "overlayIcon", "QIcon", "setOverlayIcon", "overlayIcon" } },
    { "progress", { "progress", "QWinTaskbarProgressconst*", "", "progress" } },
    { "window", { "window", "QWindow*", "setWindow", "window" } },

};

QHash<QByteArray, long> PlastiQQWinTaskbarButton::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWinTaskbarButton::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWinTaskbarButton::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQWinTaskbarButton::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QWinTaskbarButton", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWinTaskbarButton::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWinTaskbarButton::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWinTaskbarButton *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QWinTaskbarButton(); break;
        case 1: o = new QWinTaskbarButton(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWinTaskbarButton *p = new PlastiQQWinTaskbarButton();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWinTaskbarButton *p = new PlastiQQWinTaskbarButton();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWinTaskbarButton *o = sc ? Q_NULLPTR : reinterpret_cast<QWinTaskbarButton*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->overlayAccessibleDescription();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->overlayIcon());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { QWinTaskbarProgress* _r = o->progress();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWinTaskbarProgress"; } break;
        case 3: o->setWindow(reinterpret_cast<QWindow*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 4: { QWindow* _r = o->window();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWindow"; } break;
        case 5: o->clearOverlayIcon();
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setOverlayAccessibleDescription(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setOverlayIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QWinTaskbarButton *o = reinterpret_cast<QWinTaskbarButton*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QWinTaskbarButton *o = reinterpret_cast<QWinTaskbarButton*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QWinTaskbarButton *o = reinterpret_cast<QWinTaskbarButton*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QWinTaskbarButton *o = reinterpret_cast<QWinTaskbarButton*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWinTaskbarButton::~PlastiQQWinTaskbarButton() {
    QWinTaskbarButton* o = reinterpret_cast<QWinTaskbarButton*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

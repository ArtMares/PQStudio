#include "plastiqmethod.h"
#include "plastiqqwinthumbnailtoolbutton.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QWinThumbnailToolButton> 
#include <QIcon>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQWinThumbnailToolButton::plastiqConstructors = {
    { "QWinThumbnailToolButton()", { "QWinThumbnailToolButton", "", "QWinThumbnailToolButton*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWinThumbnailToolButton(QObject*)", { "QWinThumbnailToolButton", "QObject*", "QWinThumbnailToolButton*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWinThumbnailToolButton::plastiqMethods = {
    { "dismissOnClick()", { "dismissOnClick", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "icon()", { "icon", "", "QIcon", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEnabled()", { "isEnabled", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFlat()", { "isFlat", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isInteractive()", { "isInteractive", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVisible()", { "isVisible", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDismissOnClick(bool)", { "setDismissOnClick", "bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEnabled(bool)", { "setEnabled", "bool", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFlat(bool)", { "setFlat", "bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIcon(QIcon&)", { "setIcon", "QIcon&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInteractive(bool)", { "setInteractive", "bool", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setToolTip(QString)", { "setToolTip", "QString&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVisible(bool)", { "setVisible", "bool", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolTip()", { "toolTip", "", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "click()", { "click", "", "void", 14, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWinThumbnailToolButton::plastiqSignals = {
    { "clicked()", { "clicked", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQWinThumbnailToolButton::plastiqProperties = {
    { "dismissOnClick", { "dismissOnClick", "bool", "setDismissOnClick", "dismissOnClick" } },
    { "enabled", { "enabled", "bool", "setEnabled", "isEnabled" } },
    { "flat", { "flat", "bool", "setFlat", "isFlat" } },
    { "icon", { "icon", "QIcon", "setIcon", "icon" } },
    { "interactive", { "interactive", "bool", "setInteractive", "isInteractive" } },
    { "toolTip", { "toolTip", "QString", "setToolTip", "toolTip" } },
    { "visible", { "visible", "bool", "setVisible", "isVisible" } },

};

QHash<QByteArray, long> PlastiQQWinThumbnailToolButton::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWinThumbnailToolButton::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWinThumbnailToolButton::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQWinThumbnailToolButton::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QWinThumbnailToolButton", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWinThumbnailToolButton::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWinThumbnailToolButton::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWinThumbnailToolButton *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QWinThumbnailToolButton(); break;
        case 1: o = new QWinThumbnailToolButton(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWinThumbnailToolButton *p = new PlastiQQWinThumbnailToolButton();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWinThumbnailToolButton *p = new PlastiQQWinThumbnailToolButton();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 15) {
            id -= 15;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWinThumbnailToolButton *o = sc ? Q_NULLPTR : reinterpret_cast<QWinThumbnailToolButton*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->dismissOnClick();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->icon());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { bool _r = o->isEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->isFlat();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->isInteractive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: o->setDismissOnClick(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setFlat(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setInteractive(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setToolTip(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 13: { QString _r = o->toolTip();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: o->click();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QWinThumbnailToolButton *o = reinterpret_cast<QWinThumbnailToolButton*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QWinThumbnailToolButton::clicked,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "clicked", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QWinThumbnailToolButton *o = reinterpret_cast<QWinThumbnailToolButton*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QWinThumbnailToolButton *o = reinterpret_cast<QWinThumbnailToolButton*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QWinThumbnailToolButton *o = reinterpret_cast<QWinThumbnailToolButton*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWinThumbnailToolButton::~PlastiQQWinThumbnailToolButton() {
    QWinThumbnailToolButton* o = reinterpret_cast<QWinThumbnailToolButton*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

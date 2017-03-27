#include "plastiqmethod.h"
#include "plastiqqinputmethod.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QInputMethod> 
#include <QRectF>
#include <QTransform>
#include <QLocale>
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQInputMethod::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQInputMethod::plastiqMethods = {
    { "anchorRectangle()", { "anchorRectangle", "", "QRectF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorRectangle()", { "cursorRectangle", "", "QRectF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inputDirection()", { "inputDirection", "", "Qt::LayoutDirection", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inputItemClipRectangle()", { "inputItemClipRectangle", "", "QRectF", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inputItemRectangle()", { "inputItemRectangle", "", "QRectF", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inputItemTransform()", { "inputItemTransform", "", "QTransform", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAnimating()", { "isAnimating", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVisible()", { "isVisible", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "keyboardRectangle()", { "keyboardRectangle", "", "QRectF", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "locale()", { "locale", "", "QLocale", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInputItemRectangle(QRectF&)", { "setInputItemRectangle", "QRectF&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setInputItemTransform(QTransform&)", { "setInputItemTransform", "QTransform&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVisible(bool)", { "setVisible", "bool", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "queryFocusObject(enum,QVariant)", { "queryFocusObject", "Qt::InputMethodQuery,QVariant", "QVariant", 13, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "commit()", { "commit", "", "void", 14, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "hide()", { "hide", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "invokeAction(enum,int)", { "invokeAction", "Action,int", "void", 16, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "reset()", { "reset", "", "void", 17, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "show()", { "show", "", "void", 18, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "update(enum)", { "update", "Qt::InputMethodQueries", "void", 19, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQInputMethod::plastiqSignals = {
    { "anchorRectangleChanged()", { "anchorRectangleChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "animatingChanged()", { "animatingChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "cursorRectangleChanged()", { "cursorRectangleChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "inputDirectionChanged(enum)", { "inputDirectionChanged", "Qt::LayoutDirection", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "inputItemClipRectangleChanged()", { "inputItemClipRectangleChanged", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "keyboardRectangleChanged()", { "keyboardRectangleChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "localeChanged()", { "localeChanged", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "visibleChanged()", { "visibleChanged", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQInputMethod::plastiqProperties = {
    { "anchorRectangle", { "anchorRectangle", "QRectF", "anchorRectangleChanged", "anchorRectangle" } },
    { "animating", { "animating", "bool", "animatingChanged", "isAnimating" } },
    { "cursorRectangle", { "cursorRectangle", "QRectF", "cursorRectangleChanged", "cursorRectangle" } },
    { "inputDirection", { "inputDirection", "long", "inputDirectionChanged", "inputDirection" } },
    { "inputItemClipRectangle", { "inputItemClipRectangle", "QRectF", "inputItemClipRectangleChanged", "inputItemClipRectangle" } },
    { "keyboardRectangle", { "keyboardRectangle", "QRectF", "keyboardRectangleChanged", "keyboardRectangle" } },
    { "locale", { "locale", "QLocale", "localeChanged", "locale" } },
    { "visible", { "visible", "bool", "visibleChanged", "isVisible" } },

};

QHash<QByteArray, long> PlastiQQInputMethod::plastiqConstants = {

    /* QInputMethod::Action */
   { "Click", QInputMethod::Click },
   { "ContextMenu", QInputMethod::ContextMenu },

};

QVector<PlastiQMetaObject*> PlastiQQInputMethod::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQInputMethod::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQInputMethod::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QInputMethod", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQInputMethod::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQInputMethod::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QInputMethod *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQInputMethod *p = new PlastiQQInputMethod();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQInputMethod *p = new PlastiQQInputMethod();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 20) {
            id -= 20;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QInputMethod *o = sc ? Q_NULLPTR : reinterpret_cast<QInputMethod*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->anchorRectangle());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->cursorRectangle());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { qint64 _r = o->inputDirection(); // HACK for Qt::LayoutDirection 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->inputItemClipRectangle());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->inputItemRectangle());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->inputItemTransform());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { bool _r = o->isAnimating();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->isVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->keyboardRectangle());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { /* COPY OBJECT */
            QLocale *_r = new QLocale(o->locale());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLocale";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: o->setInputItemRectangle((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setInputItemTransform((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 13: { /* COPY OBJECT */
            QVariant *_r = sc ? new QVariant(QInputMethod::queryFocusObject(Qt::InputMethodQuery(stack[1].s_int64),
                    stack[2].s_variant)) : new QVariant(o->queryFocusObject(Qt::InputMethodQuery(stack[1].s_int64),
                    stack[2].s_variant));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: o->commit();
                stack[0].type = PlastiQ::Void; break;
        case 15: o->hide();
                stack[0].type = PlastiQ::Void; break;
        case 16: o->invokeAction(QInputMethod::Action(stack[1].s_int64),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->reset();
                stack[0].type = PlastiQ::Void; break;
        case 18: o->show();
                stack[0].type = PlastiQ::Void; break;
        case 19: o->update(Qt::InputMethodQueries(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 8) {
            id -= 8;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QInputMethod *o = reinterpret_cast<QInputMethod*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QInputMethod::anchorRectangleChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "anchorRectangleChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QInputMethod::animatingChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "animatingChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QInputMethod::cursorRectangleChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "cursorRectangleChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QInputMethod::inputDirectionChanged,
            [=](Qt::LayoutDirection arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::LayoutDirection";
                PlastiQ_activate(sender, "inputDirectionChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QInputMethod::inputItemClipRectangleChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "inputItemClipRectangleChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QInputMethod::keyboardRectangleChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "keyboardRectangleChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QInputMethod::localeChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "localeChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QInputMethod::visibleChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "visibleChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QInputMethod *o = reinterpret_cast<QInputMethod*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QInputMethod *o = reinterpret_cast<QInputMethod*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QInputMethod *o = reinterpret_cast<QInputMethod*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQInputMethod::~PlastiQQInputMethod() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

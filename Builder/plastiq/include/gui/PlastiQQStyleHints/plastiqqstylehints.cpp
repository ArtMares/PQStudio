#include "plastiqmethod.h"
#include "plastiqqstylehints.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QStyleHints> 
#include <QChar>

QHash<QByteArray, PlastiQMethod> PlastiQQStyleHints::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleHints::plastiqMethods = {
    { "cursorFlashTime()", { "cursorFlashTime", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontSmoothingGamma()", { "fontSmoothingGamma", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "keyboardAutoRepeatRate()", { "keyboardAutoRepeatRate", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "keyboardInputInterval()", { "keyboardInputInterval", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mouseDoubleClickInterval()", { "mouseDoubleClickInterval", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mousePressAndHoldInterval()", { "mousePressAndHoldInterval", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "passwordMaskCharacter()", { "passwordMaskCharacter", "", "QChar", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "passwordMaskDelay()", { "passwordMaskDelay", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFocusOnTouchRelease()", { "setFocusOnTouchRelease", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUseHoverEffects(bool)", { "setUseHoverEffects", "bool", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "showIsFullScreen()", { "showIsFullScreen", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "showIsMaximized()", { "showIsMaximized", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "singleClickActivation()", { "singleClickActivation", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startDragDistance()", { "startDragDistance", "", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startDragTime()", { "startDragTime", "", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startDragVelocity()", { "startDragVelocity", "", "int", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabFocusBehavior()", { "tabFocusBehavior", "", "Qt::TabFocusBehavior", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "useHoverEffects()", { "useHoverEffects", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "useRtlExtensions()", { "useRtlExtensions", "", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleHints::plastiqSignals = {
    { "cursorFlashTimeChanged(int)", { "cursorFlashTimeChanged", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "keyboardInputIntervalChanged(int)", { "keyboardInputIntervalChanged", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "mouseDoubleClickIntervalChanged(int)", { "mouseDoubleClickIntervalChanged", "int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "mousePressAndHoldIntervalChanged(int)", { "mousePressAndHoldIntervalChanged", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "startDragDistanceChanged(int)", { "startDragDistanceChanged", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "startDragTimeChanged(int)", { "startDragTimeChanged", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "tabFocusBehaviorChanged(enum)", { "tabFocusBehaviorChanged", "Qt::TabFocusBehavior", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "useHoverEffectsChanged(bool)", { "useHoverEffectsChanged", "bool", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleHints::plastiqProperties = {
    { "cursorFlashTime", { "cursorFlashTime", "int", "cursorFlashTimeChanged", "cursorFlashTime" } },
    { "fontSmoothingGamma", { "fontSmoothingGamma", "qreal", "", "fontSmoothingGamma" } },
    { "keyboardAutoRepeatRate", { "keyboardAutoRepeatRate", "int", "", "keyboardAutoRepeatRate" } },
    { "keyboardInputInterval", { "keyboardInputInterval", "int", "keyboardInputIntervalChanged", "keyboardInputInterval" } },
    { "mouseDoubleClickInterval", { "mouseDoubleClickInterval", "int", "mouseDoubleClickIntervalChanged", "mouseDoubleClickInterval" } },
    { "mousePressAndHoldInterval", { "mousePressAndHoldInterval", "int", "mousePressAndHoldIntervalChanged", "mousePressAndHoldInterval" } },
    { "passwordMaskCharacter", { "passwordMaskCharacter", "QChar", "", "passwordMaskCharacter" } },
    { "passwordMaskDelay", { "passwordMaskDelay", "int", "", "passwordMaskDelay" } },
    { "setFocusOnTouchRelease", { "setFocusOnTouchRelease", "bool", "", "setFocusOnTouchRelease" } },
    { "showIsFullScreen", { "showIsFullScreen", "bool", "", "showIsFullScreen" } },
    { "showIsMaximized", { "showIsMaximized", "bool", "", "showIsMaximized" } },
    { "singleClickActivation", { "singleClickActivation", "bool", "", "singleClickActivation" } },
    { "startDragDistance", { "startDragDistance", "int", "startDragDistanceChanged", "startDragDistance" } },
    { "startDragTime", { "startDragTime", "int", "startDragTimeChanged", "startDragTime" } },
    { "startDragVelocity", { "startDragVelocity", "int", "", "startDragVelocity" } },
    { "tabFocusBehavior", { "tabFocusBehavior", "long", "tabFocusBehaviorChanged", "tabFocusBehavior" } },
    { "useHoverEffects", { "useHoverEffects", "bool", "setUseHoverEffects", "useHoverEffects" } },
    { "useRtlExtensions", { "useRtlExtensions", "bool", "", "useRtlExtensions" } },

};

QHash<QByteArray, long> PlastiQQStyleHints::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQStyleHints::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStyleHints::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQStyleHints::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QStyleHints", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleHints::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleHints::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleHints *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleHints *p = new PlastiQQStyleHints();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleHints *p = new PlastiQQStyleHints();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 19) {
            id -= 19;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStyleHints *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleHints*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->cursorFlashTime();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { double _r = o->fontSmoothingGamma();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { int _r = o->keyboardAutoRepeatRate();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->keyboardInputInterval();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->mouseDoubleClickInterval();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->mousePressAndHoldInterval();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { /* COPY OBJECT */
            QChar *_r = new QChar(o->passwordMaskCharacter());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { int _r = o->passwordMaskDelay();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { bool _r = o->setFocusOnTouchRelease();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: o->setUseHoverEffects(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 10: { bool _r = o->showIsFullScreen();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = o->showIsMaximized();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { bool _r = o->singleClickActivation();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { int _r = o->startDragDistance();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { int _r = o->startDragTime();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: { int _r = o->startDragVelocity();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 16: { qint64 _r = o->tabFocusBehavior(); // HACK for Qt::TabFocusBehavior 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 17: { bool _r = o->useHoverEffects();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = o->useRtlExtensions();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 8) {
            id -= 8;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QStyleHints *o = reinterpret_cast<QStyleHints*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QStyleHints::cursorFlashTimeChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "cursorFlashTimeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QStyleHints::keyboardInputIntervalChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "keyboardInputIntervalChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QStyleHints::mouseDoubleClickIntervalChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "mouseDoubleClickIntervalChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QStyleHints::mousePressAndHoldIntervalChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "mousePressAndHoldIntervalChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QStyleHints::startDragDistanceChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "startDragDistanceChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QStyleHints::startDragTimeChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "startDragTimeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QStyleHints::tabFocusBehaviorChanged,
            [=](Qt::TabFocusBehavior arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::TabFocusBehavior";
                PlastiQ_activate(sender, "tabFocusBehaviorChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QStyleHints::useHoverEffectsChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "useHoverEffectsChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QStyleHints *o = reinterpret_cast<QStyleHints*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QStyleHints *o = reinterpret_cast<QStyleHints*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QStyleHints *o = reinterpret_cast<QStyleHints*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStyleHints::~PlastiQQStyleHints() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

#include "plastiqmethod.h"
#include "plastiqqwintaskbarprogress.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QWinTaskbarProgress> 

QHash<QByteArray, PlastiQMethod> PlastiQQWinTaskbarProgress::plastiqConstructors = {
    { "QWinTaskbarProgress()", { "QWinTaskbarProgress", "", "QWinTaskbarProgress*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QWinTaskbarProgress(QObject*)", { "QWinTaskbarProgress", "QObject*", "QWinTaskbarProgress*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWinTaskbarProgress::plastiqMethods = {
    { "isPaused()", { "isPaused", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isStopped()", { "isStopped", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVisible()", { "isVisible", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximum()", { "maximum", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimum()", { "minimum", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value()", { "value", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hide()", { "hide", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "pause()", { "pause", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "reset()", { "reset", "", "void", 8, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "resume()", { "resume", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMaximum(int)", { "setMaximum", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMinimum(int)", { "setMinimum", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setPaused(bool)", { "setPaused", "bool", "void", 12, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setRange(int,int)", { "setRange", "int,int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setValue(int)", { "setValue", "int", "void", 14, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setVisible(bool)", { "setVisible", "bool", "void", 15, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "show()", { "show", "", "void", 16, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "stop()", { "stop", "", "void", 17, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWinTaskbarProgress::plastiqSignals = {
    { "maximumChanged(int)", { "maximumChanged", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "minimumChanged(int)", { "minimumChanged", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "valueChanged(int)", { "valueChanged", "int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "visibilityChanged(bool)", { "visibilityChanged", "bool", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQWinTaskbarProgress::plastiqProperties = {
    { "maximum", { "maximum", "int", "setMaximum", "maximum" } },
    { "minimum", { "minimum", "int", "setMinimum", "minimum" } },
    { "paused", { "paused", "bool", "setPaused", "isPaused" } },
    { "stopped", { "stopped", "bool", "", "isStopped" } },
    { "value", { "value", "int", "setValue", "value" } },
    { "visible", { "visible", "bool", "setVisible", "isVisible" } },

};

QHash<QByteArray, long> PlastiQQWinTaskbarProgress::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWinTaskbarProgress::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQWinTaskbarProgress::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQWinTaskbarProgress::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QWinTaskbarProgress", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWinTaskbarProgress::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWinTaskbarProgress::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWinTaskbarProgress *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QWinTaskbarProgress(); break;
        case 1: o = new QWinTaskbarProgress(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWinTaskbarProgress *p = new PlastiQQWinTaskbarProgress();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWinTaskbarProgress *p = new PlastiQQWinTaskbarProgress();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 18) {
            id -= 18;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWinTaskbarProgress *o = sc ? Q_NULLPTR : reinterpret_cast<QWinTaskbarProgress*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isPaused();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->isStopped();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->isVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { int _r = o->maximum();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->minimum();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->value();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: o->hide();
                stack[0].type = PlastiQ::Void; break;
        case 7: o->pause();
                stack[0].type = PlastiQ::Void; break;
        case 8: o->reset();
                stack[0].type = PlastiQ::Void; break;
        case 9: o->resume();
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setMaximum(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setMinimum(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setPaused(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setRange(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setValue(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->show();
                stack[0].type = PlastiQ::Void; break;
        case 17: o->stop();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QWinTaskbarProgress *o = reinterpret_cast<QWinTaskbarProgress*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QWinTaskbarProgress::maximumChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "maximumChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QWinTaskbarProgress::minimumChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "minimumChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QWinTaskbarProgress::valueChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "valueChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QWinTaskbarProgress::visibilityChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "visibilityChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QWinTaskbarProgress *o = reinterpret_cast<QWinTaskbarProgress*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QWinTaskbarProgress *o = reinterpret_cast<QWinTaskbarProgress*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QWinTaskbarProgress *o = reinterpret_cast<QWinTaskbarProgress*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQWinTaskbarProgress::~PlastiQQWinTaskbarProgress() {
    QWinTaskbarProgress* o = reinterpret_cast<QWinTaskbarProgress*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

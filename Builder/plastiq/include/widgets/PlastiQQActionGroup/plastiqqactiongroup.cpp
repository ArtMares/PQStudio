#include "plastiqmethod.h"
#include "plastiqqactiongroup.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QActionGroup> 
#include <QAction>

QHash<QByteArray, PlastiQMethod> PlastiQQActionGroup::plastiqConstructors = {
    { "QActionGroup(QObject*)", { "QActionGroup", "QObject*", "QActionGroup*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQActionGroup::plastiqMethods = {
    { "addAction(QAction*)", { "addAction", "QAction*", "QAction*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QString)", { "addAction", "QString&", "QAction*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QIcon&,QString)", { "addAction", "QIcon&,QString&", "QAction*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "checkedAction()", { "checkedAction", "", "QAction*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEnabled()", { "isEnabled", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isExclusive()", { "isExclusive", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVisible()", { "isVisible", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeAction(QAction*)", { "removeAction", "QAction*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDisabled(bool)", { "setDisabled", "bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setEnabled(bool)", { "setEnabled", "bool", "void", 9, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setExclusive(bool)", { "setExclusive", "bool", "void", 10, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setVisible(bool)", { "setVisible", "bool", "void", 11, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQActionGroup::plastiqSignals = {
    { "hovered(QAction*)", { "hovered", "QAction*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "triggered(QAction*)", { "triggered", "QAction*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQActionGroup::plastiqProperties = {
    { "enabled", { "enabled", "bool", "setEnabled", "isEnabled" } },
    { "exclusive", { "exclusive", "bool", "setExclusive", "isExclusive" } },
    { "visible", { "visible", "bool", "setVisible", "isVisible" } },

};

QHash<QByteArray, long> PlastiQQActionGroup::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQActionGroup::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQActionGroup::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQActionGroup::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QActionGroup", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQActionGroup::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQActionGroup::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QActionGroup *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QActionGroup(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQActionGroup *p = new PlastiQQActionGroup();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQActionGroup *p = new PlastiQQActionGroup();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QActionGroup *o = sc ? Q_NULLPTR : reinterpret_cast<QActionGroup*>(object->plastiq_data());

        switch(id) {
        case 0: { QAction* _r = o->addAction(reinterpret_cast<QAction*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 1: { QAction* _r = o->addAction(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 2: { QAction* _r = o->addAction((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 3: { QAction* _r = o->checkedAction();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 4: { bool _r = o->isEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isExclusive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->isVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: o->removeAction(reinterpret_cast<QAction*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setDisabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setExclusive(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setVisible(stack[1].s_bool);
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

        QActionGroup *o = reinterpret_cast<QActionGroup*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QActionGroup::hovered,
            [=](QAction* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QAction";
                PlastiQ_activate(sender, "hovered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QActionGroup::triggered,
            [=](QAction* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QAction";
                PlastiQ_activate(sender, "triggered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QActionGroup *o = reinterpret_cast<QActionGroup*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QActionGroup *o = reinterpret_cast<QActionGroup*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QActionGroup *o = reinterpret_cast<QActionGroup*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQActionGroup::~PlastiQQActionGroup() {
    QActionGroup* o = reinterpret_cast<QActionGroup*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

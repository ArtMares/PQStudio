#include "plastiqmethod.h"
#include "plastiqqbuttongroup.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QButtonGroup> 
#include <QAbstractButton>

QHash<QByteArray, PlastiQMethod> PlastiQQButtonGroup::plastiqConstructors = {
    { "QButtonGroup()", { "QButtonGroup", "", "QButtonGroup*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QButtonGroup(QObject*)", { "QButtonGroup", "QObject*", "QButtonGroup*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQButtonGroup::plastiqMethods = {
    { "addButton(QAbstractButton*)", { "addButton", "QAbstractButton*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addButton(QAbstractButton*,int)", { "addButton", "QAbstractButton*,int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "button(int)", { "button", "int", "QAbstractButton*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "checkedButton()", { "checkedButton", "", "QAbstractButton*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "checkedId()", { "checkedId", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exclusive()", { "exclusive", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "id(QAbstractButton*)", { "id", "QAbstractButton*", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeButton(QAbstractButton*)", { "removeButton", "QAbstractButton*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setExclusive(bool)", { "setExclusive", "bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setId(QAbstractButton*,int)", { "setId", "QAbstractButton*,int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQButtonGroup::plastiqSignals = {
    { "buttonClicked(QAbstractButton*)", { "buttonClicked", "QAbstractButton*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "buttonClicked(int)", { "buttonClicked", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "buttonPressed(QAbstractButton*)", { "buttonPressed", "QAbstractButton*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "buttonPressed(int)", { "buttonPressed", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "buttonReleased(QAbstractButton*)", { "buttonReleased", "QAbstractButton*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "buttonReleased(int)", { "buttonReleased", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "buttonToggled(QAbstractButton*,bool)", { "buttonToggled", "QAbstractButton*,bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "buttonToggled(int,bool)", { "buttonToggled", "int,bool", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQButtonGroup::plastiqProperties = {
    { "exclusive", { "exclusive", "bool", "setExclusive", "exclusive" } },

};

QHash<QByteArray, long> PlastiQQButtonGroup::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQButtonGroup::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQButtonGroup::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQButtonGroup::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QButtonGroup", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQButtonGroup::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQButtonGroup::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QButtonGroup *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QButtonGroup(); break;
        case 1: o = new QButtonGroup(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQButtonGroup *p = new PlastiQQButtonGroup();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQButtonGroup *p = new PlastiQQButtonGroup();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 10) {
            id -= 10;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QButtonGroup *o = sc ? Q_NULLPTR : reinterpret_cast<QButtonGroup*>(object->plastiq_data());

        switch(id) {
        case 0: o->addButton(reinterpret_cast<QAbstractButton*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addButton(reinterpret_cast<QAbstractButton*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 2: { QAbstractButton* _r = o->button(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractButton"; } break;
        case 3: { QAbstractButton* _r = o->checkedButton();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAbstractButton"; } break;
        case 4: { int _r = o->checkedId();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { bool _r = o->exclusive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { int _r = o->id(reinterpret_cast<QAbstractButton*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: o->removeButton(reinterpret_cast<QAbstractButton*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setExclusive(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setId(reinterpret_cast<QAbstractButton*>(stack[1].s_voidp),
                    stack[2].s_int);
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

        QButtonGroup *o = reinterpret_cast<QButtonGroup*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonClicked),
            [=](QAbstractButton* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QAbstractButton";
                PlastiQ_activate(sender, "buttonClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonClicked),
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "buttonClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonPressed),
            [=](QAbstractButton* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QAbstractButton";
                PlastiQ_activate(sender, "buttonPressed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonPressed),
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "buttonPressed", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, static_cast<void (QButtonGroup::*)(QAbstractButton*)>(&QButtonGroup::buttonReleased),
            [=](QAbstractButton* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QAbstractButton";
                PlastiQ_activate(sender, "buttonReleased", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, static_cast<void (QButtonGroup::*)(int)>(&QButtonGroup::buttonReleased),
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "buttonReleased", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, static_cast<void (QButtonGroup::*)(QAbstractButton*,bool)>(&QButtonGroup::buttonToggled),
            [=](QAbstractButton* arg0, bool arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QAbstractButton";
                    cstack[1].s_bool = arg1;
                    cstack[1].type = PlastiQ::Bool; cstack[1].name = "bool";
                PlastiQ_activate(sender, "buttonToggled", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, static_cast<void (QButtonGroup::*)(int,bool)>(&QButtonGroup::buttonToggled),
            [=](int arg0, bool arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_bool = arg1;
                    cstack[1].type = PlastiQ::Bool; cstack[1].name = "bool";
                PlastiQ_activate(sender, "buttonToggled", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QButtonGroup *o = reinterpret_cast<QButtonGroup*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QButtonGroup *o = reinterpret_cast<QButtonGroup*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QButtonGroup *o = reinterpret_cast<QButtonGroup*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQButtonGroup::~PlastiQQButtonGroup() {
    QButtonGroup* o = reinterpret_cast<QButtonGroup*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

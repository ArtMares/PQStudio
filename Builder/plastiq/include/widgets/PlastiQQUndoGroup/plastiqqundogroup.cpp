#include "plastiqmethod.h"
#include "plastiqqundogroup.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QUndoGroup> 
#include <QUndoStack>
#include <QAction>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQUndoGroup::plastiqConstructors = {
    { "QUndoGroup()", { "QUndoGroup", "", "QUndoGroup*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUndoGroup(QObject*)", { "QUndoGroup", "QObject*", "QUndoGroup*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUndoGroup::plastiqMethods = {
    { "activeStack()", { "activeStack", "", "QUndoStack*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addStack(QUndoStack*)", { "addStack", "QUndoStack*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canRedo()", { "canRedo", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canUndo()", { "canUndo", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createRedoAction(QObject*)", { "createRedoAction", "QObject*", "QAction*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createRedoAction(QObject*,QString)", { "createRedoAction", "QObject*,QString&", "QAction*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createUndoAction(QObject*)", { "createUndoAction", "QObject*", "QAction*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createUndoAction(QObject*,QString)", { "createUndoAction", "QObject*,QString&", "QAction*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isClean()", { "isClean", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "redoText()", { "redoText", "", "QString", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeStack(QUndoStack*)", { "removeStack", "QUndoStack*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "undoText()", { "undoText", "", "QString", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "redo()", { "redo", "", "void", 12, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setActiveStack(QUndoStack*)", { "setActiveStack", "QUndoStack*", "void", 13, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "undo()", { "undo", "", "void", 14, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUndoGroup::plastiqSignals = {
    { "activeStackChanged(QUndoStack*)", { "activeStackChanged", "QUndoStack*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "canRedoChanged(bool)", { "canRedoChanged", "bool", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "canUndoChanged(bool)", { "canUndoChanged", "bool", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "cleanChanged(bool)", { "cleanChanged", "bool", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "indexChanged(int)", { "indexChanged", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "redoTextChanged(QString)", { "redoTextChanged", "QString&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "undoTextChanged(QString)", { "undoTextChanged", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQUndoGroup::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQUndoGroup::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQUndoGroup::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQUndoGroup::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQUndoGroup::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QUndoGroup", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQUndoGroup::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQUndoGroup::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QUndoGroup *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QUndoGroup(); break;
        case 1: o = new QUndoGroup(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQUndoGroup *p = new PlastiQQUndoGroup();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQUndoGroup *p = new PlastiQQUndoGroup();
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
        QUndoGroup *o = sc ? Q_NULLPTR : reinterpret_cast<QUndoGroup*>(object->plastiq_data());

        switch(id) {
        case 0: { QUndoStack* _r = o->activeStack();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QUndoStack"; } break;
        case 1: o->addStack(reinterpret_cast<QUndoStack*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r = o->canRedo();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->canUndo();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { QAction* _r = o->createRedoAction(reinterpret_cast<QObject*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 5: { QAction* _r = o->createRedoAction(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 6: { QAction* _r = o->createUndoAction(reinterpret_cast<QObject*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 7: { QAction* _r = o->createUndoAction(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 8: { bool _r = o->isClean();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { QString _r = o->redoText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: o->removeStack(reinterpret_cast<QUndoStack*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 11: { QString _r = o->undoText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 12: o->redo();
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setActiveStack(reinterpret_cast<QUndoStack*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->undo();
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

        QUndoGroup *o = reinterpret_cast<QUndoGroup*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QUndoGroup::activeStackChanged,
            [=](QUndoStack* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QUndoStack";
                PlastiQ_activate(sender, "activeStackChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QUndoGroup::canRedoChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "canRedoChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QUndoGroup::canUndoChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "canUndoChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QUndoGroup::cleanChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "cleanChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QUndoGroup::indexChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "indexChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QUndoGroup::redoTextChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "redoTextChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QUndoGroup::undoTextChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "undoTextChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QUndoGroup *o = reinterpret_cast<QUndoGroup*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QUndoGroup *o = reinterpret_cast<QUndoGroup*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QUndoGroup *o = reinterpret_cast<QUndoGroup*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQUndoGroup::~PlastiQQUndoGroup() {
    QUndoGroup* o = reinterpret_cast<QUndoGroup*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

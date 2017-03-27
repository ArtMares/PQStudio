#include "plastiqmethod.h"
#include "plastiqqundostack.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QUndoStack> 
#include <QUndoCommand>
#include <QAction>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQUndoStack::plastiqConstructors = {
    { "QUndoStack()", { "QUndoStack", "", "QUndoStack*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUndoStack(QObject*)", { "QUndoStack", "QObject*", "QUndoStack*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUndoStack::plastiqMethods = {
    { "beginMacro(QString)", { "beginMacro", "QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canRedo()", { "canRedo", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canUndo()", { "canUndo", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cleanIndex()", { "cleanIndex", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "command(int)", { "command", "int", "const QUndoCommand*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createRedoAction(QObject*)", { "createRedoAction", "QObject*", "QAction*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createRedoAction(QObject*,QString)", { "createRedoAction", "QObject*,QString&", "QAction*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createUndoAction(QObject*)", { "createUndoAction", "QObject*", "QAction*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createUndoAction(QObject*,QString)", { "createUndoAction", "QObject*,QString&", "QAction*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "endMacro()", { "endMacro", "", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "index()", { "index", "", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isActive()", { "isActive", "", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isClean()", { "isClean", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "push(QUndoCommand*)", { "push", "QUndoCommand*", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "redoText()", { "redoText", "", "QString", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUndoLimit(int)", { "setUndoLimit", "int", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text(int)", { "text", "int", "QString", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "undoLimit()", { "undoLimit", "", "int", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "undoText()", { "undoText", "", "QString", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "redo()", { "redo", "", "void", 21, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "resetClean()", { "resetClean", "", "void", 22, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setActive()", { "setActive", "", "void", 23, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setActive(bool)", { "setActive", "bool", "void", 24, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setClean()", { "setClean", "", "void", 25, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setIndex(int)", { "setIndex", "int", "void", 26, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "undo()", { "undo", "", "void", 27, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUndoStack::plastiqSignals = {
    { "canRedoChanged(bool)", { "canRedoChanged", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "canUndoChanged(bool)", { "canUndoChanged", "bool", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "cleanChanged(bool)", { "cleanChanged", "bool", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "indexChanged(int)", { "indexChanged", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "redoTextChanged(QString)", { "redoTextChanged", "QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "undoTextChanged(QString)", { "undoTextChanged", "QString&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQUndoStack::plastiqProperties = {
    { "active", { "active", "bool", "setActive", "isActive" } },
    { "undoLimit", { "undoLimit", "int", "setUndoLimit", "undoLimit" } },

};

QHash<QByteArray, long> PlastiQQUndoStack::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQUndoStack::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQUndoStack::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQUndoStack::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QUndoStack", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQUndoStack::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQUndoStack::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QUndoStack *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QUndoStack(); break;
        case 1: o = new QUndoStack(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQUndoStack *p = new PlastiQQUndoStack();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQUndoStack *p = new PlastiQQUndoStack();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 28) {
            id -= 28;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QUndoStack *o = sc ? Q_NULLPTR : reinterpret_cast<QUndoStack*>(object->plastiq_data());

        switch(id) {
        case 0: o->beginMacro(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 1: { bool _r = o->canRedo();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->canUndo();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { int _r = o->cleanIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 5: { QUndoCommand* _r = const_cast<QUndoCommand*>(o->command(stack[1].s_int));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QUndoCommand"; } break;
        case 6: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { QAction* _r = o->createRedoAction(reinterpret_cast<QObject*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 8: { QAction* _r = o->createRedoAction(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 9: { QAction* _r = o->createUndoAction(reinterpret_cast<QObject*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 10: { QAction* _r = o->createUndoAction(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    stack[2].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 11: o->endMacro();
                stack[0].type = PlastiQ::Void; break;
        case 12: { int _r = o->index();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { bool _r = o->isActive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { bool _r = o->isClean();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: o->push(reinterpret_cast<QUndoCommand*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 16: { QString _r = o->redoText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 17: o->setUndoLimit(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 18: { QString _r = o->text(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 19: { int _r = o->undoLimit();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 20: { QString _r = o->undoText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 21: o->redo();
                stack[0].type = PlastiQ::Void; break;
        case 22: o->resetClean();
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setActive();
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setActive(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setClean();
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setIndex(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->undo();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 6) {
            id -= 6;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QUndoStack *o = reinterpret_cast<QUndoStack*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QUndoStack::canRedoChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "canRedoChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QUndoStack::canUndoChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "canUndoChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QUndoStack::cleanChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "cleanChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QUndoStack::indexChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "indexChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QUndoStack::redoTextChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "redoTextChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QUndoStack::undoTextChanged,
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
        QUndoStack *o = reinterpret_cast<QUndoStack*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QUndoStack *o = reinterpret_cast<QUndoStack*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QUndoStack *o = reinterpret_cast<QUndoStack*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQUndoStack::~PlastiQQUndoStack() {
    QUndoStack* o = reinterpret_cast<QUndoStack*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

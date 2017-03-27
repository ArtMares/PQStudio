#include "plastiqmethod.h"
#include "plastiqqundocommand.h"

#include <QUndoCommand> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQUndoCommand::plastiqConstructors = {
    { "QUndoCommand()", { "QUndoCommand", "", "QUndoCommand*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUndoCommand(QUndoCommand*)", { "QUndoCommand", "QUndoCommand*", "QUndoCommand*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUndoCommand(QString)", { "QUndoCommand", "QString&", "QUndoCommand*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUndoCommand(QString,QUndoCommand*)", { "QUndoCommand", "QString&,QUndoCommand*", "QUndoCommand*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUndoCommand::plastiqMethods = {
    { "actionText()", { "actionText", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "child(int)", { "child", "int", "const QUndoCommand*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "childCount()", { "childCount", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "id()", { "id", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mergeWith(const QUndoCommand*)", { "mergeWith", "QUndoCommand*", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "redo()", { "redo", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setText(QString)", { "setText", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "undo()", { "undo", "", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUndoCommand::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQUndoCommand::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQUndoCommand::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQUndoCommand::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQUndoCommand::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQUndoCommand::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QUndoCommand", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQUndoCommand::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQUndoCommandWrapper : public QUndoCommand {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQUndoCommandWrapper(QUndoCommand *parent = Q_NULLPTR)
         : QUndoCommand(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQUndoCommandWrapper(const QString &text, QUndoCommand *parent = Q_NULLPTR)
         : QUndoCommand(text,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    int id() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int id()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QUndoCommand::id();
    }

    int PlastiQParentCall_id() const {
        return QUndoCommand::id();
    }

    bool mergeWith(const QUndoCommand *command) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool mergeWith(const QUndoCommand*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<QUndoCommand*>(command));
            stack[1].name = QByteArrayLiteral("QUndoCommand");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QUndoCommand::mergeWith(command);
    }

    bool PlastiQParentCall_mergeWith(const QUndoCommand *command) {
        return QUndoCommand::mergeWith(command);
    }

    void redo() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void redo()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QUndoCommand::redo();
    }

    void PlastiQParentCall_redo() {
        return QUndoCommand::redo();
    }

    void undo() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void undo()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QUndoCommand::undo();
    }

    void PlastiQParentCall_undo() {
        return QUndoCommand::undo();
    }

};

void PlastiQQUndoCommand::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQUndoCommandWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQUndoCommandWrapper(); break;
        case 1: o = new PlastiQQUndoCommandWrapper(reinterpret_cast<QUndoCommand*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQUndoCommandWrapper(stack[1].s_string); break;
        case 3: o = new PlastiQQUndoCommandWrapper(stack[1].s_string,
                    reinterpret_cast<QUndoCommand*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQUndoCommand *p = new PlastiQQUndoCommand();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQUndoCommand *p = new PlastiQQUndoCommand();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QUndoCommand *o = sc ? Q_NULLPTR : reinterpret_cast<QUndoCommand*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->actionText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QUndoCommand* _r = const_cast<QUndoCommand*>(o->child(stack[1].s_int));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QUndoCommand"; } break;
        case 2: { int _r = o->childCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r;
                if (isWrapper) _r = ((PlastiQQUndoCommandWrapper*)o)->PlastiQParentCall_id();
                else _r = o->id();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { bool _r;
                if (isWrapper) _r = ((PlastiQQUndoCommandWrapper*)o)->PlastiQParentCall_mergeWith(reinterpret_cast<const QUndoCommand*>(stack[1].s_voidp));
                else _r = o->mergeWith(reinterpret_cast<const QUndoCommand*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: if (isWrapper) ((PlastiQQUndoCommandWrapper*)o)->PlastiQParentCall_redo();
                else o->redo();
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 8: if (isWrapper) ((PlastiQQUndoCommandWrapper*)o)->PlastiQParentCall_undo();
                else o->undo();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QUndoCommand *o = reinterpret_cast<QUndoCommand*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQUndoCommand::~PlastiQQUndoCommand() {
    QUndoCommand* o = reinterpret_cast<QUndoCommand*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

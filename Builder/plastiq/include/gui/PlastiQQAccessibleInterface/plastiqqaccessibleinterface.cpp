#include "plastiqmethod.h"
#include "plastiqqaccessibleinterface.h"

#include <QAccessibleInterface> 
#include <QAccessibleActionInterface>
#include <QColor>
#include <QObject>
#include <QRect>
#include <QAccessibleTableCellInterface>
#include <QAccessibleTableInterface>
#include <QString>
#include <QAccessibleTextInterface>
#include <QAccessibleValueInterface>
#include <QWindow>

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleInterface::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleInterface::plastiqMethods = {
    { "actionInterface()", { "actionInterface", "", "QAccessibleActionInterface*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "backgroundColor()", { "backgroundColor", "", "QColor", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "child(int)", { "child", "int", "QAccessibleInterface*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "childAt(int,int)", { "childAt", "int,int", "QAccessibleInterface*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "childCount()", { "childCount", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "focusChild()", { "focusChild", "", "QAccessibleInterface*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "foregroundColor()", { "foregroundColor", "", "QColor", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOfChild(const QAccessibleInterface*)", { "indexOfChild", "QAccessibleInterface*", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "interface_cast(enum)", { "interface_cast", "QAccessible::InterfaceType", "void*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "object()", { "object", "", "QObject*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parent()", { "parent", "", "QAccessibleInterface*", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rect()", { "rect", "", "QRect", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "role()", { "role", "", "QAccessible::Role", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setText(enum,QString)", { "setText", "QAccessible::Text,QString&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "state()", { "state", "", "QAccessible::State", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tableCellInterface()", { "tableCellInterface", "", "QAccessibleTableCellInterface*", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tableInterface()", { "tableInterface", "", "QAccessibleTableInterface*", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text(enum)", { "text", "QAccessible::Text", "QString", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textInterface()", { "textInterface", "", "QAccessibleTextInterface*", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "valueInterface()", { "valueInterface", "", "QAccessibleValueInterface*", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "window()", { "window", "", "QWindow*", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "~QAccessibleInterface()", { "~QAccessibleInterface", "", "virtual", 22, PlastiQMethod::Protected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleInterface::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessibleInterface::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessibleInterface::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAccessibleInterface::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQAccessibleInterface::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAccessibleInterface::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QAccessibleInterface", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessibleInterface::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAccessibleInterfaceWrapper : public QAccessibleInterface {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    QColor backgroundColor() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QColor backgroundColor()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QColor _r = QColor(*reinterpret_cast<QColor*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QAccessibleInterface::backgroundColor();
    }

    QColor PlastiQParentCall_backgroundColor() const {
        return QAccessibleInterface::backgroundColor();
    }

    QAccessibleInterface* focusChild() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QAccessibleInterface* focusChild()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QAccessibleInterface* _r = reinterpret_cast<QAccessibleInterface*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QAccessibleInterface::focusChild();
    }

    QAccessibleInterface* PlastiQParentCall_focusChild() const {
        return QAccessibleInterface::focusChild();
    }

    QColor foregroundColor() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QColor foregroundColor()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QColor _r = QColor(*reinterpret_cast<QColor*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QAccessibleInterface::foregroundColor();
    }

    QColor PlastiQParentCall_foregroundColor() const {
        return QAccessibleInterface::foregroundColor();
    }

    void* interface_cast(QAccessible::InterfaceType type) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void* interface_cast(QAccessible::InterfaceType)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = type;
            stack[1].name = QByteArrayLiteral("QAccessible::InterfaceType");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            void* _r = reinterpret_cast<void*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QAccessibleInterface::interface_cast(type);
    }

    void* PlastiQParentCall_interface_cast(QAccessible::InterfaceType type) {
        return QAccessibleInterface::interface_cast(type);
    }

    QWindow* window() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QWindow* window()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QWindow* _r = reinterpret_cast<QWindow*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QAccessibleInterface::window();
    }

    QWindow* PlastiQParentCall_window() const {
        return QAccessibleInterface::window();
    }

};

void PlastiQQAccessibleInterface::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAccessibleInterfaceWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAccessibleInterface *p = new PlastiQQAccessibleInterface();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessibleInterface *p = new PlastiQQAccessibleInterface();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 23) {
            id -= 23;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAccessibleInterface *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessibleInterface*>(object->plastiq_data());

        switch(id) {
        case 0: { QAccessibleActionInterface* _r = o->actionInterface();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "QAccessibleActionInterface"; } break;
        case 1: { /* COPY OBJECT */
            QColor *_r;
                if (isWrapper) _r = new QColor(((PlastiQQAccessibleInterfaceWrapper*)o)->PlastiQParentCall_backgroundColor());
                else _r = new QColor(o->backgroundColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { QAccessibleInterface* _r = o->child(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QAccessibleInterface"; } break;
        case 3: { QAccessibleInterface* _r = o->childAt(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QAccessibleInterface"; } break;
        case 4: { int _r = o->childCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { QAccessibleInterface* _r;
                if (isWrapper) _r = ((PlastiQQAccessibleInterfaceWrapper*)o)->PlastiQParentCall_focusChild();
                else _r = o->focusChild();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QAccessibleInterface"; } break;
        case 6: { /* COPY OBJECT */
            QColor *_r;
                if (isWrapper) _r = new QColor(((PlastiQQAccessibleInterfaceWrapper*)o)->PlastiQParentCall_foregroundColor());
                else _r = new QColor(o->foregroundColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { int _r = o->indexOfChild(reinterpret_cast<const QAccessibleInterface*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { void* _r;
                if (isWrapper) _r = ((PlastiQQAccessibleInterfaceWrapper*)o)->PlastiQParentCall_interface_cast(QAccessible::InterfaceType(stack[1].s_int64));
                else _r = o->interface_cast(QAccessible::InterfaceType(stack[1].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "void"; } break;
        case 9: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { QObject* _r = o->object();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 11: { QAccessibleInterface* _r = o->parent();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QAccessibleInterface"; } break;
        case 12: { /* COPY OBJECT */
            QRect *_r = new QRect(o->rect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { qint64 _r = o->role(); // HACK for QAccessible::Role 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 14: o->setText(QAccessible::Text(stack[1].s_int64),
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 15: /* o->state() | ret: `QAccessible::State` */ break;
        case 16: { QAccessibleTableCellInterface* _r = o->tableCellInterface();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QAccessibleTableCellInterface"; } break;
        case 17: { QAccessibleTableInterface* _r = o->tableInterface();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "QAccessibleTableInterface"; } break;
        case 18: { QString _r = o->text(QAccessible::Text(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 19: { QAccessibleTextInterface* _r = o->textInterface();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QAccessibleTextInterface"; } break;
        case 20: { QAccessibleValueInterface* _r = o->valueInterface();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QAccessibleValueInterface"; } break;
        case 21: { QWindow* _r;
                if (isWrapper) _r = ((PlastiQQAccessibleInterfaceWrapper*)o)->PlastiQParentCall_window();
                else _r = o->window();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWindow"; } break;
        case 22: /* UNSUPPORTED_RETURN_VALUE o->~QAccessibleInterface() | ret: `virtual` */ break;

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
        QAccessibleInterface *o = reinterpret_cast<QAccessibleInterface*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQAccessibleInterface::~PlastiQQAccessibleInterface() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

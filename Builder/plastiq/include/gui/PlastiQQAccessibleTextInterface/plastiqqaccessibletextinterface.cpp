#include "plastiqmethod.h"
#include "plastiqqaccessibletextinterface.h"

#include <QAccessibleTextInterface> 
#include <QString>
#include <QRect>

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextInterface::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextInterface::plastiqMethods = {
    { "addSelection(int,int)", { "addSelection", "int,int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "attributes(int,int*,int*)", { "attributes", "int,int*,int*", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "characterCount()", { "characterCount", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "characterRect(int)", { "characterRect", "int", "QRect", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cursorPosition()", { "cursorPosition", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "offsetAtPoint(QPoint&)", { "offsetAtPoint", "QPoint&", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeSelection(int)", { "removeSelection", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scrollToSubstring(int,int)", { "scrollToSubstring", "int,int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selection(int,int*,int*)", { "selection", "int,int*,int*", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectionCount()", { "selectionCount", "", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCursorPosition(int)", { "setCursorPosition", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelection(int,int,int)", { "setSelection", "int,int,int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text(int,int)", { "text", "int,int", "QString", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textAfterOffset(int,enum,int*,int*)", { "textAfterOffset", "int,QAccessible::TextBoundaryType,int*,int*", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textAtOffset(int,enum,int*,int*)", { "textAtOffset", "int,QAccessible::TextBoundaryType,int*,int*", "QString", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textBeforeOffset(int,enum,int*,int*)", { "textBeforeOffset", "int,QAccessible::TextBoundaryType,int*,int*", "QString", 15, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAccessibleTextInterface::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQAccessibleTextInterface::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQAccessibleTextInterface::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAccessibleTextInterface::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQAccessibleTextInterface::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQAccessibleTextInterface::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QAccessibleTextInterface", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAccessibleTextInterface::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAccessibleTextInterfaceWrapper : public QAccessibleTextInterface {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    QString textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int *startOffset, int *endOffset) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QString textAfterOffset(int,QAccessible::TextBoundaryType,int*,int*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_int = offset;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int64 = boundaryType;
            stack[2].name = QByteArrayLiteral("QAccessible::TextBoundaryType");
            stack[2].type = PlastiQ::Enum;
            stack[3].s_voidp = reinterpret_cast<void*>(startOffset);
            stack[3].name = QByteArrayLiteral("int");
            stack[3].type = PlastiQ::ObjectStar;
            stack[4].s_voidp = reinterpret_cast<void*>(endOffset);
            stack[4].name = QByteArrayLiteral("int");
            stack[4].type = PlastiQ::ObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QString _r = stack[0].s_string;
            delete [] stack;
            return _r;
        }
        else return QAccessibleTextInterface::textAfterOffset(offset,boundaryType,startOffset,endOffset);
    }

    QString PlastiQParentCall_textAfterOffset(int offset, QAccessible::TextBoundaryType boundaryType, int *startOffset, int *endOffset) const {
        return QAccessibleTextInterface::textAfterOffset(offset,boundaryType,startOffset,endOffset);
    }

    QString textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int *startOffset, int *endOffset) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QString textAtOffset(int,QAccessible::TextBoundaryType,int*,int*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_int = offset;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int64 = boundaryType;
            stack[2].name = QByteArrayLiteral("QAccessible::TextBoundaryType");
            stack[2].type = PlastiQ::Enum;
            stack[3].s_voidp = reinterpret_cast<void*>(startOffset);
            stack[3].name = QByteArrayLiteral("int");
            stack[3].type = PlastiQ::ObjectStar;
            stack[4].s_voidp = reinterpret_cast<void*>(endOffset);
            stack[4].name = QByteArrayLiteral("int");
            stack[4].type = PlastiQ::ObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QString _r = stack[0].s_string;
            delete [] stack;
            return _r;
        }
        else return QAccessibleTextInterface::textAtOffset(offset,boundaryType,startOffset,endOffset);
    }

    QString PlastiQParentCall_textAtOffset(int offset, QAccessible::TextBoundaryType boundaryType, int *startOffset, int *endOffset) const {
        return QAccessibleTextInterface::textAtOffset(offset,boundaryType,startOffset,endOffset);
    }

    QString textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int *startOffset, int *endOffset) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QString textBeforeOffset(int,QAccessible::TextBoundaryType,int*,int*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_int = offset;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int64 = boundaryType;
            stack[2].name = QByteArrayLiteral("QAccessible::TextBoundaryType");
            stack[2].type = PlastiQ::Enum;
            stack[3].s_voidp = reinterpret_cast<void*>(startOffset);
            stack[3].name = QByteArrayLiteral("int");
            stack[3].type = PlastiQ::ObjectStar;
            stack[4].s_voidp = reinterpret_cast<void*>(endOffset);
            stack[4].name = QByteArrayLiteral("int");
            stack[4].type = PlastiQ::ObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QString _r = stack[0].s_string;
            delete [] stack;
            return _r;
        }
        else return QAccessibleTextInterface::textBeforeOffset(offset,boundaryType,startOffset,endOffset);
    }

    QString PlastiQParentCall_textBeforeOffset(int offset, QAccessible::TextBoundaryType boundaryType, int *startOffset, int *endOffset) const {
        return QAccessibleTextInterface::textBeforeOffset(offset,boundaryType,startOffset,endOffset);
    }

};

void PlastiQQAccessibleTextInterface::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAccessibleTextInterfaceWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAccessibleTextInterface *p = new PlastiQQAccessibleTextInterface();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAccessibleTextInterface *p = new PlastiQQAccessibleTextInterface();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 16) {
            id -= 16;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAccessibleTextInterface *o = sc ? Q_NULLPTR : reinterpret_cast<QAccessibleTextInterface*>(object->plastiq_data());

        switch(id) {
        case 0: o->addSelection(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 1: { QString _r = o->attributes(stack[1].s_int,
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { int _r = o->characterCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { /* COPY OBJECT */
            QRect *_r = new QRect(o->characterRect(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { int _r = o->cursorPosition();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->offsetAtPoint((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: o->removeSelection(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->scrollToSubstring(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->selection(stack[1].s_int,
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 9: { int _r = o->selectionCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: o->setCursorPosition(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setSelection(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: { QString _r = o->text(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 13: { QString _r;
                if (isWrapper) _r = ((PlastiQQAccessibleTextInterfaceWrapper*)o)->PlastiQParentCall_textAfterOffset(stack[1].s_int,
                    QAccessible::TextBoundaryType(stack[2].s_int64),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                else _r = o->textAfterOffset(stack[1].s_int,
                    QAccessible::TextBoundaryType(stack[2].s_int64),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: { QString _r;
                if (isWrapper) _r = ((PlastiQQAccessibleTextInterfaceWrapper*)o)->PlastiQParentCall_textAtOffset(stack[1].s_int,
                    QAccessible::TextBoundaryType(stack[2].s_int64),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                else _r = o->textAtOffset(stack[1].s_int,
                    QAccessible::TextBoundaryType(stack[2].s_int64),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 15: { QString _r;
                if (isWrapper) _r = ((PlastiQQAccessibleTextInterfaceWrapper*)o)->PlastiQParentCall_textBeforeOffset(stack[1].s_int,
                    QAccessible::TextBoundaryType(stack[2].s_int64),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                else _r = o->textBeforeOffset(stack[1].s_int,
                    QAccessible::TextBoundaryType(stack[2].s_int64),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

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
        QAccessibleTextInterface *o = reinterpret_cast<QAccessibleTextInterface*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQAccessibleTextInterface::~PlastiQQAccessibleTextInterface() {
    QAccessibleTextInterface* o = reinterpret_cast<QAccessibleTextInterface*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

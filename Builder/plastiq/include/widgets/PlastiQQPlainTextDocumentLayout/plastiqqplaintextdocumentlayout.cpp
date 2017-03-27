#include "plastiqmethod.h"
#include "plastiqqplaintextdocumentlayout.h"

#include "gui/PlastiQQAbstractTextDocumentLayout/plastiqqabstracttextdocumentlayout.h"
#include <QPlainTextDocumentLayout> 

QHash<QByteArray, PlastiQMethod> PlastiQQPlainTextDocumentLayout::plastiqConstructors = {
    { "QPlainTextDocumentLayout(QTextDocument*)", { "QPlainTextDocumentLayout", "QTextDocument*", "QPlainTextDocumentLayout*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPlainTextDocumentLayout::plastiqMethods = {
    { "cursorWidth()", { "cursorWidth", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ensureBlockLayout(QTextBlock&)", { "ensureBlockLayout", "QTextBlock&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "requestUpdate()", { "requestUpdate", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCursorWidth(int)", { "setCursorWidth", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "documentChanged(int,int,int)", { "documentChanged", "int,int,int", "void", 4, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPlainTextDocumentLayout::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPlainTextDocumentLayout::plastiqProperties = {
    { "cursorWidth", { "cursorWidth", "int", "setCursorWidth", "cursorWidth" } },

};

QHash<QByteArray, long> PlastiQQPlainTextDocumentLayout::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPlainTextDocumentLayout::plastiqInherits = { &PlastiQQAbstractTextDocumentLayout::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPlainTextDocumentLayout::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPlainTextDocumentLayout::plastiq_static_metaObject = {
    { &PlastiQQAbstractTextDocumentLayout::plastiq_static_metaObject, &plastiqInherits, "QPlainTextDocumentLayout", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPlainTextDocumentLayout::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQPlainTextDocumentLayoutWrapper : public QPlainTextDocumentLayout {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQPlainTextDocumentLayoutWrapper(QTextDocument *document)
         : QPlainTextDocumentLayout(document),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void documentChanged(int from, int charsRemoved, int charsAdded) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void documentChanged(int,int,int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[4];
            stack[1].s_int = from;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            stack[2].s_int = charsRemoved;
            stack[2].name = QByteArrayLiteral("int");
            stack[2].type = PlastiQ::Int;
            stack[3].s_int = charsAdded;
            stack[3].name = QByteArrayLiteral("int");
            stack[3].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPlainTextDocumentLayout::documentChanged(from,charsRemoved,charsAdded);
    }

    void PlastiQParentCall_documentChanged(int from, int charsRemoved, int charsAdded) {
        return QPlainTextDocumentLayout::documentChanged(from,charsRemoved,charsAdded);
    }

};

void PlastiQQPlainTextDocumentLayout::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQPlainTextDocumentLayoutWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQPlainTextDocumentLayoutWrapper(reinterpret_cast<QTextDocument*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQPlainTextDocumentLayout *p = new PlastiQQPlainTextDocumentLayout();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPlainTextDocumentLayout *p = new PlastiQQPlainTextDocumentLayout();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQAbstractTextDocumentLayout::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPlainTextDocumentLayout *o = sc ? Q_NULLPTR : reinterpret_cast<QPlainTextDocumentLayout*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->cursorWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: o->ensureBlockLayout((*reinterpret_cast< QTextBlock(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->requestUpdate();
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setCursorWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 4: if (isWrapper) ((PlastiQQPlainTextDocumentLayoutWrapper*)o)->PlastiQParentCall_documentChanged(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
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
        QPlainTextDocumentLayout *o = reinterpret_cast<QPlainTextDocumentLayout*>(object->plastiq_data());

        if(className == "QAbstractTextDocumentLayout") {
            stack[0].s_voidp = static_cast<QAbstractTextDocumentLayout*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPlainTextDocumentLayout::~PlastiQQPlainTextDocumentLayout() {
    QPlainTextDocumentLayout* o = reinterpret_cast<QPlainTextDocumentLayout*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

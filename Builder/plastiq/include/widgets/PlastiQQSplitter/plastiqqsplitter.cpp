#include "plastiqmethod.h"
#include "plastiqqsplitter.h"

#include "widgets/PlastiQQFrame/plastiqqframe.h"
#include <QSplitter> 
#include <QSplitterHandle>
#include <QByteArray>
#include <QWidget>
#include <QEvent>
#include <QChildEvent>
#include <QResizeEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQSplitter::plastiqConstructors = {
    { "QSplitter()", { "QSplitter", "", "QSplitter*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSplitter(QWidget*)", { "QSplitter", "QWidget*", "QSplitter*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSplitter(enum)", { "QSplitter", "Qt::Orientation", "QSplitter*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSplitter(enum,QWidget*)", { "QSplitter", "Qt::Orientation,QWidget*", "QSplitter*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSplitter::plastiqMethods = {
    { "addWidget(QWidget*)", { "addWidget", "QWidget*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "childrenCollapsible()", { "childrenCollapsible", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getRange(int,int*,int*)", { "getRange", "int,int*,int*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "handle(int)", { "handle", "int", "QSplitterHandle*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "handleWidth()", { "handleWidth", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QWidget*)", { "indexOf", "QWidget*", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertWidget(int,QWidget*)", { "insertWidget", "int,QWidget*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCollapsible(int)", { "isCollapsible", "int", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "opaqueResize()", { "opaqueResize", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "orientation()", { "orientation", "", "Qt::Orientation", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "refresh()", { "refresh", "", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "restoreState(QByteArray)", { "restoreState", "QByteArray&", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "saveState()", { "saveState", "", "QByteArray", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setChildrenCollapsible(bool)", { "setChildrenCollapsible", "bool", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCollapsible(int,bool)", { "setCollapsible", "int,bool", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHandleWidth(int)", { "setHandleWidth", "int", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOpaqueResize()", { "setOpaqueResize", "", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOpaqueResize(bool)", { "setOpaqueResize", "bool", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOrientation(enum)", { "setOrientation", "Qt::Orientation", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSizes(QList<int>&)", { "setSizes", "QList<int>&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStretchFactor(int,int)", { "setStretchFactor", "int,int", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "widget(int)", { "widget", "int", "QWidget*", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "closestLegalPosition(int,int)", { "closestLegalPosition", "int,int", "int", 23, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "createHandle()", { "createHandle", "", "QSplitterHandle*", 24, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "moveSplitter(int,int)", { "moveSplitter", "int,int", "void", 25, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setRubberBand(int)", { "setRubberBand", "int", "void", 26, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 27, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "childEvent(QChildEvent*)", { "childEvent", "QChildEvent*", "void", 28, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 29, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 30, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSplitter::plastiqSignals = {
    { "splitterMoved(int,int)", { "splitterMoved", "int,int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQSplitter::plastiqProperties = {
    { "childrenCollapsible", { "childrenCollapsible", "bool", "setChildrenCollapsible", "childrenCollapsible" } },
    { "handleWidth", { "handleWidth", "int", "setHandleWidth", "handleWidth" } },
    { "opaqueResize", { "opaqueResize", "bool", "setOpaqueResize", "opaqueResize" } },
    { "orientation", { "orientation", "long", "setOrientation", "orientation" } },

};

QHash<QByteArray, long> PlastiQQSplitter::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSplitter::plastiqInherits = { &PlastiQQFrame::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSplitter::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQSplitter::plastiq_static_metaObject = {
    { &PlastiQQFrame::plastiq_static_metaObject, &plastiqInherits, "QSplitter", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSplitter::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQSplitterWrapper : public QSplitter {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQSplitterWrapper(QWidget *parent = Q_NULLPTR)
         : QSplitter(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQSplitterWrapper(Qt::Orientation orientation, QWidget *parent = Q_NULLPTR)
         : QSplitter(orientation,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QSplitterHandle* createHandle() override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSplitterHandle* createHandle()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSplitterHandle* _r = reinterpret_cast<QSplitterHandle*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QSplitter::createHandle();
    }

    QSplitterHandle* PlastiQParentCall_createHandle() {
        return QSplitter::createHandle();
    }

    void changeEvent(QEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void changeEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSplitter::changeEvent(ev);
    }

    void PlastiQParentCall_changeEvent(QEvent *ev) {
        return QSplitter::changeEvent(ev);
    }

    void childEvent(QChildEvent *c) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(c);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QSplitter::childEvent(c);
    }

    void PlastiQParentCall_childEvent(QChildEvent *c) {
        return QSplitter::childEvent(c);
    }

    bool event(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QSplitter::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QSplitter::event(e);
    }

};

void PlastiQQSplitter::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQSplitterWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQSplitterWrapper(); break;
        case 1: o = new PlastiQQSplitterWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQSplitterWrapper(Qt::Orientation(stack[1].s_int64)); break;
        case 3: o = new PlastiQQSplitterWrapper(Qt::Orientation(stack[1].s_int64),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQSplitter *p = new PlastiQQSplitter();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSplitter *p = new PlastiQQSplitter();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 31) {
            id -= 31;
            PlastiQQFrame::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSplitter *o = sc ? Q_NULLPTR : reinterpret_cast<QSplitter*>(object->plastiq_data());

        switch(id) {
        case 0: o->addWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: { bool _r = o->childrenCollapsible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: o->getRange(stack[1].s_int,
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 4: { QSplitterHandle* _r = o->handle(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QSplitterHandle"; } break;
        case 5: { int _r = o->handleWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { int _r = o->indexOf(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: o->insertWidget(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 8: { bool _r = o->isCollapsible(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->opaqueResize();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { qint64 _r = o->orientation(); // HACK for Qt::Orientation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: o->refresh();
                stack[0].type = PlastiQ::Void; break;
        case 12: { bool _r = o->restoreState(stack[1].s_bytearray);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { QByteArray _r = o->saveState();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 14: o->setChildrenCollapsible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setCollapsible(stack[1].s_int,
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setHandleWidth(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setOpaqueResize();
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setOpaqueResize(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setOrientation(Qt::Orientation(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setSizes((*reinterpret_cast< QList<int>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setStretchFactor(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 22: { QWidget* _r = o->widget(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 23: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 24: { QSplitterHandle* _r;
                if (isWrapper) _r = ((PlastiQQSplitterWrapper*)o)->PlastiQParentCall_createHandle();
                else { stack[0].type = PlastiQ::Error; return; }
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QSplitterHandle"; } break;
        case 25: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 26: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 27: if (isWrapper) ((PlastiQQSplitterWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 28: if (isWrapper) ((PlastiQQSplitterWrapper*)o)->PlastiQParentCall_childEvent(reinterpret_cast<QChildEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 29: { bool _r;
                if (isWrapper) _r = ((PlastiQQSplitterWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 30: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQFrame::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QSplitter *o = reinterpret_cast<QSplitter*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QSplitter::splitterMoved,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "splitterMoved", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QSplitter *o = reinterpret_cast<QSplitter*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QSplitter *o = reinterpret_cast<QSplitter*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QSplitter *o = reinterpret_cast<QSplitter*>(object->plastiq_data());

        if(className == "QFrame") {
            stack[0].s_voidp = static_cast<QFrame*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSplitter::~PlastiQQSplitter() {
    QSplitter* o = reinterpret_cast<QSplitter*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

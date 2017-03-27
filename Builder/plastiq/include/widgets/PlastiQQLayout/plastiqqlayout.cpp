#include "plastiqmethod.h"
#include "plastiqqlayout.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include "widgets/PlastiQQLayoutItem/plastiqqlayoutitem.h"
#include <QLayout> 
#include <QMargins>
#include <QRect>
#include <QWidget>
#include <QLayoutItem>
#include <QSize>
#include <QChildEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQLayout::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQLayout::plastiqMethods = {
    { "activate()", { "activate", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addItem(QLayoutItem*)", { "addItem", "QLayoutItem*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addWidget(QWidget*)", { "addWidget", "QWidget*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contentsMargins()", { "contentsMargins", "", "QMargins", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contentsRect()", { "contentsRect", "", "QRect", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getContentsMargins(int*,int*,int*,int*)", { "getContentsMargins", "int*,int*,int*,int*", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QWidget*)", { "indexOf", "QWidget*", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEnabled()", { "isEnabled", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemAt(int)", { "itemAt", "int", "QLayoutItem*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "menuBar()", { "menuBar", "", "QWidget*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parentWidget()", { "parentWidget", "", "QWidget*", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeItem(QLayoutItem*)", { "removeItem", "QLayoutItem*", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeWidget(QWidget*)", { "removeWidget", "QWidget*", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replaceWidget(QWidget*,QWidget*)", { "replaceWidget", "QWidget*,QWidget*", "QLayoutItem*", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replaceWidget(QWidget*,QWidget*,enum)", { "replaceWidget", "QWidget*,QWidget*,Qt::FindChildOptions", "QLayoutItem*", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlignment(QWidget*,enum)", { "setAlignment", "QWidget*,Qt::Alignment", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlignment(QLayout*,enum)", { "setAlignment", "QLayout*,Qt::Alignment", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContentsMargins(int,int,int,int)", { "setContentsMargins", "int,int,int,int", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContentsMargins(QMargins&)", { "setContentsMargins", "QMargins&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEnabled(bool)", { "setEnabled", "bool", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMenuBar(QWidget*)", { "setMenuBar", "QWidget*", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSizeConstraint(enum)", { "setSizeConstraint", "SizeConstraint", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSpacing(int)", { "setSpacing", "int", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeConstraint()", { "sizeConstraint", "", "SizeConstraint", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "spacing()", { "spacing", "", "int", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeAt(int)", { "takeAt", "int", "QLayoutItem*", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "update()", { "update", "", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "closestAcceptableSize(const QWidget*,QSize&)", { "closestAcceptableSize", "QWidget*,QSize&", "QSize", 28, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "addChildLayout(QLayout*)", { "addChildLayout", "QLayout*", "void", 29, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "addChildWidget(QWidget*)", { "addChildWidget", "QWidget*", "void", 30, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "alignmentRect(QRect&)", { "alignmentRect", "QRect&", "QRect", 31, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "childEvent(QChildEvent*)", { "childEvent", "QChildEvent*", "void", 32, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLayout::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQLayout::plastiqProperties = {
    { "sizeConstraint", { "sizeConstraint", "long", "setSizeConstraint", "sizeConstraint" } },
    { "spacing", { "spacing", "int", "setSpacing", "spacing" } },

};

QHash<QByteArray, long> PlastiQQLayout::plastiqConstants = {

    /* QLayout::SizeConstraint */
   { "SetDefaultConstraint", QLayout::SetDefaultConstraint },
   { "SetNoConstraint", QLayout::SetNoConstraint },
   { "SetMinimumSize", QLayout::SetMinimumSize },
   { "SetFixedSize", QLayout::SetFixedSize },
   { "SetMaximumSize", QLayout::SetMaximumSize },
   { "SetMinAndMaxSize", QLayout::SetMinAndMaxSize },

};

QVector<PlastiQMetaObject*> PlastiQQLayout::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject, &PlastiQQLayoutItem::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQLayout::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQLayout::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QLayout", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLayout::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQLayoutWrapper : public QLayout {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    int indexOf(QWidget *widget) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("int indexOf(QWidget*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(widget);
            stack[1].name = QByteArrayLiteral("QWidget");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            int _r = stack[0].s_int;
            delete [] stack;
            return _r;
        }
        else return QLayout::indexOf(widget);
    }

    int PlastiQParentCall_indexOf(QWidget *widget) const {
        return QLayout::indexOf(widget);
    }

    void childEvent(QChildEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLayout::childEvent(e);
    }

    void PlastiQParentCall_childEvent(QChildEvent *e) {
        return QLayout::childEvent(e);
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
        else return QLayout::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QLayout::event(e);
    }

    bool eventFilter(QObject *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(event);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QLayout::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QLayout::eventFilter(watched,event);
    }

    const QMetaObject* metaObject() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("const QMetaObject* metaObject()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMetaObject* _r = reinterpret_cast<QMetaObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QLayout::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QLayout::metaObject();
    }

    void connectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void connectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLayout::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QLayout::connectNotify(signal);
    }

    void customEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void customEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLayout::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QLayout::customEvent(event);
    }

    void disconnectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void disconnectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLayout::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QLayout::disconnectNotify(signal);
    }

    void timerEvent(QTimerEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QLayout::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QLayout::timerEvent(event);
    }

};

void PlastiQQLayout::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQLayoutWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQLayout *p = new PlastiQQLayout();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLayout *p = new PlastiQQLayout();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 33) {
            id -= 33;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLayout *o = sc ? Q_NULLPTR : reinterpret_cast<QLayout*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->activate();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: o->addItem(reinterpret_cast<QLayoutItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->addWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: { /* COPY OBJECT */
            QMargins *_r = new QMargins(o->contentsMargins());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMargins";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QRect *_r = new QRect(o->contentsRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: o->getContentsMargins(reinterpret_cast<int*>(stack[1].s_voidp),
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 7: { int _r;
                if (isWrapper) _r = ((PlastiQQLayoutWrapper*)o)->PlastiQParentCall_indexOf(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                else _r = o->indexOf(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { bool _r = o->isEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { QLayoutItem* _r = o->itemAt(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QLayoutItem"; } break;
        case 10: { QWidget* _r = o->menuBar();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 11: { QWidget* _r = o->parentWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 12: o->removeItem(reinterpret_cast<QLayoutItem*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->removeWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 14: { QLayoutItem* _r = o->replaceWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QLayoutItem"; } break;
        case 15: { QLayoutItem* _r = o->replaceWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    Qt::FindChildOptions(stack[3].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QLayoutItem"; } break;
        case 16: { bool _r = o->setAlignment(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::Alignment(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = o->setAlignment(reinterpret_cast<QLayout*>(stack[1].s_voidp),
                    Qt::Alignment(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: o->setContentsMargins(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setContentsMargins((*reinterpret_cast< QMargins(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setMenuBar(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setSizeConstraint(QLayout::SizeConstraint(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setSpacing(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 24: { qint64 _r = o->sizeConstraint(); // HACK for SizeConstraint 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 25: { int _r = o->spacing();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 26: { QLayoutItem* _r = o->takeAt(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QLayoutItem"; } break;
        case 27: o->update();
                stack[0].type = PlastiQ::Void; break;
        case 28: { /* COPY OBJECT */
            QSize *_r = sc ? new QSize(QLayout::closestAcceptableSize(reinterpret_cast<const QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp)))) : new QSize(o->closestAcceptableSize(reinterpret_cast<const QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QSize(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 29: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 30: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 31: { /* COPY OBJECT */
            QRect *_r; stack[0].type = PlastiQ::Error; } break;
        case 32: if (isWrapper) ((PlastiQQLayoutWrapper*)o)->PlastiQParentCall_childEvent(reinterpret_cast<QChildEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QLayout *o = reinterpret_cast<QLayout*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QLayout *o = reinterpret_cast<QLayout*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QLayout *o = reinterpret_cast<QLayout*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QLayout *o = reinterpret_cast<QLayout*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else if(className == "QLayoutItem") {
            stack[0].s_voidp = static_cast<QLayoutItem*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQLayout::~PlastiQQLayout() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

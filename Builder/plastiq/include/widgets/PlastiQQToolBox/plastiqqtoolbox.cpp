#include "plastiqmethod.h"
#include "plastiqqtoolbox.h"

#include "widgets/PlastiQQFrame/plastiqqframe.h"
#include <QToolBox> 
#include <QWidget>
#include <QIcon>
#include <QString>
#include <QEvent>
#include <QShowEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQToolBox::plastiqConstructors = {
    { "QToolBox()", { "QToolBox", "", "QToolBox*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QToolBox(QWidget*)", { "QToolBox", "QWidget*", "QToolBox*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QToolBox(QWidget*,enum)", { "QToolBox", "QWidget*,Qt::WindowFlags", "QToolBox*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQToolBox::plastiqMethods = {
    { "addItem(QWidget*,QIcon&,QString)", { "addItem", "QWidget*,QIcon&,QString&", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addItem(QWidget*,QString)", { "addItem", "QWidget*,QString&", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentIndex()", { "currentIndex", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentWidget()", { "currentWidget", "", "QWidget*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QWidget*)", { "indexOf", "QWidget*", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertItem(int,QWidget*,QIcon&,QString)", { "insertItem", "int,QWidget*,QIcon&,QString&", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertItem(int,QWidget*,QString)", { "insertItem", "int,QWidget*,QString&", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isItemEnabled(int)", { "isItemEnabled", "int", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemIcon(int)", { "itemIcon", "int", "QIcon", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemText(int)", { "itemText", "int", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemToolTip(int)", { "itemToolTip", "int", "QString", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeItem(int)", { "removeItem", "int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemEnabled(int,bool)", { "setItemEnabled", "int,bool", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemIcon(int,QIcon&)", { "setItemIcon", "int,QIcon&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemText(int,QString)", { "setItemText", "int,QString&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItemToolTip(int,QString)", { "setItemToolTip", "int,QString&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "widget(int)", { "widget", "int", "QWidget*", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "itemInserted(int)", { "itemInserted", "int", "void", 18, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "itemRemoved(int)", { "itemRemoved", "int", "void", 19, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 20, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 21, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 22, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setCurrentIndex(int)", { "setCurrentIndex", "int", "void", 23, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setCurrentWidget(QWidget*)", { "setCurrentWidget", "QWidget*", "void", 24, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQToolBox::plastiqSignals = {
    { "currentChanged(int)", { "currentChanged", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQToolBox::plastiqProperties = {
    { "count", { "count", "int", "", "count" } },
    { "currentIndex", { "currentIndex", "int", "setCurrentIndex", "currentIndex" } },

};

QHash<QByteArray, long> PlastiQQToolBox::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQToolBox::plastiqInherits = { &PlastiQQFrame::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQToolBox::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQToolBox::plastiq_static_metaObject = {
    { &PlastiQQFrame::plastiq_static_metaObject, &plastiqInherits, "QToolBox", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQToolBox::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQToolBoxWrapper : public QToolBox {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQToolBoxWrapper(QWidget *parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags())
         : QToolBox(parent,f),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void itemInserted(int index) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void itemInserted(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = index;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QToolBox::itemInserted(index);
    }

    void PlastiQParentCall_itemInserted(int index) {
        return QToolBox::itemInserted(index);
    }

    void itemRemoved(int index) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void itemRemoved(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = index;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QToolBox::itemRemoved(index);
    }

    void PlastiQParentCall_itemRemoved(int index) {
        return QToolBox::itemRemoved(index);
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
        else return QToolBox::changeEvent(ev);
    }

    void PlastiQParentCall_changeEvent(QEvent *ev) {
        return QToolBox::changeEvent(ev);
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
        else return QToolBox::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QToolBox::event(e);
    }

    void showEvent(QShowEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void showEvent(QShowEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QShowEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QToolBox::showEvent(e);
    }

    void PlastiQParentCall_showEvent(QShowEvent *e) {
        return QToolBox::showEvent(e);
    }

};

void PlastiQQToolBox::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQToolBoxWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQToolBoxWrapper(); break;
        case 1: o = new PlastiQQToolBoxWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQToolBoxWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQToolBox *p = new PlastiQQToolBox();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQToolBox *p = new PlastiQQToolBox();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 25) {
            id -= 25;
            PlastiQQFrame::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QToolBox *o = sc ? Q_NULLPTR : reinterpret_cast<QToolBox*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->addItem(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QIcon(*) >(stack[2].s_voidp)),
                    stack[3].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->addItem(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->currentIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { QWidget* _r = o->currentWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 5: { int _r = o->indexOf(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { int _r = o->insertItem(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    (*reinterpret_cast< QIcon(*) >(stack[3].s_voidp)),
                    stack[4].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { int _r = o->insertItem(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    stack[3].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { bool _r = o->isItemEnabled(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->itemIcon(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { QString _r = o->itemText(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: { QString _r = o->itemToolTip(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 12: o->removeItem(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setItemEnabled(stack[1].s_int,
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setItemIcon(stack[1].s_int,
                    (*reinterpret_cast< QIcon(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setItemText(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setItemToolTip(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 17: { QWidget* _r = o->widget(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 18: if (isWrapper) ((PlastiQQToolBoxWrapper*)o)->PlastiQParentCall_itemInserted(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 19: if (isWrapper) ((PlastiQQToolBoxWrapper*)o)->PlastiQParentCall_itemRemoved(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 20: if (isWrapper) ((PlastiQQToolBoxWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 21: { bool _r;
                if (isWrapper) _r = ((PlastiQQToolBoxWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: if (isWrapper) ((PlastiQQToolBoxWrapper*)o)->PlastiQParentCall_showEvent(reinterpret_cast<QShowEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setCurrentIndex(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setCurrentWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQFrame::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QToolBox *o = reinterpret_cast<QToolBox*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QToolBox::currentChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "currentChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QToolBox *o = reinterpret_cast<QToolBox*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QToolBox *o = reinterpret_cast<QToolBox*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QToolBox *o = reinterpret_cast<QToolBox*>(object->plastiq_data());

        if(className == "QFrame") {
            stack[0].s_voidp = static_cast<QFrame*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQToolBox::~PlastiQQToolBox() {
    QToolBox* o = reinterpret_cast<QToolBox*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

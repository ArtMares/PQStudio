#include "plastiqmethod.h"
#include "plastiqqstackedwidget.h"

#include "widgets/PlastiQQFrame/plastiqqframe.h"
#include <QStackedWidget> 
#include <QWidget>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQStackedWidget::plastiqConstructors = {
    { "QStackedWidget()", { "QStackedWidget", "", "QStackedWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStackedWidget(QWidget*)", { "QStackedWidget", "QWidget*", "QStackedWidget*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStackedWidget::plastiqMethods = {
    { "addWidget(QWidget*)", { "addWidget", "QWidget*", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentIndex()", { "currentIndex", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentWidget()", { "currentWidget", "", "QWidget*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QWidget*)", { "indexOf", "QWidget*", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertWidget(int,QWidget*)", { "insertWidget", "int,QWidget*", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeWidget(QWidget*)", { "removeWidget", "QWidget*", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "widget(int)", { "widget", "int", "QWidget*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 8, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setCurrentIndex(int)", { "setCurrentIndex", "int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setCurrentWidget(QWidget*)", { "setCurrentWidget", "QWidget*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStackedWidget::plastiqSignals = {
    { "currentChanged(int)", { "currentChanged", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "widgetRemoved(int)", { "widgetRemoved", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQStackedWidget::plastiqProperties = {
    { "count", { "count", "int", "", "count" } },
    { "currentIndex", { "currentIndex", "int", "setCurrentIndex", "currentIndex" } },

};

QHash<QByteArray, long> PlastiQQStackedWidget::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQStackedWidget::plastiqInherits = { &PlastiQQFrame::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStackedWidget::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQStackedWidget::plastiq_static_metaObject = {
    { &PlastiQQFrame::plastiq_static_metaObject, &plastiqInherits, "QStackedWidget", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStackedWidget::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQStackedWidgetWrapper : public QStackedWidget {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQStackedWidgetWrapper(QWidget *parent = Q_NULLPTR)
         : QStackedWidget(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


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
        else return QStackedWidget::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QStackedWidget::event(e);
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
        else return QStackedWidget::changeEvent(ev);
    }

    void PlastiQParentCall_changeEvent(QEvent *ev) {
        return QStackedWidget::changeEvent(ev);
    }

};

void PlastiQQStackedWidget::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQStackedWidgetWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQStackedWidgetWrapper(); break;
        case 1: o = new PlastiQQStackedWidgetWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQStackedWidget *p = new PlastiQQStackedWidget();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStackedWidget *p = new PlastiQQStackedWidget();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 11) {
            id -= 11;
            PlastiQQFrame::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStackedWidget *o = sc ? Q_NULLPTR : reinterpret_cast<QStackedWidget*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->addWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->currentIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { QWidget* _r = o->currentWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 4: { int _r = o->indexOf(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->insertWidget(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: o->removeWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 7: { QWidget* _r = o->widget(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 8: { bool _r;
                if (isWrapper) _r = ((PlastiQQStackedWidgetWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: o->setCurrentIndex(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setCurrentWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQFrame::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QStackedWidget *o = reinterpret_cast<QStackedWidget*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QStackedWidget::currentChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "currentChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QStackedWidget::widgetRemoved,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "widgetRemoved", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QStackedWidget *o = reinterpret_cast<QStackedWidget*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QStackedWidget *o = reinterpret_cast<QStackedWidget*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QStackedWidget *o = reinterpret_cast<QStackedWidget*>(object->plastiq_data());

        if(className == "QFrame") {
            stack[0].s_voidp = static_cast<QFrame*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStackedWidget::~PlastiQQStackedWidget() {
    QStackedWidget* o = reinterpret_cast<QStackedWidget*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

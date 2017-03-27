#include "plastiqmethod.h"
#include "plastiqqstatusbar.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QStatusBar> 
#include <QString>
#include <QEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQStatusBar::plastiqConstructors = {
    { "QStatusBar()", { "QStatusBar", "", "QStatusBar*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStatusBar(QWidget*)", { "QStatusBar", "QWidget*", "QStatusBar*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStatusBar::plastiqMethods = {
    { "addPermanentWidget(QWidget*)", { "addPermanentWidget", "QWidget*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPermanentWidget(QWidget*,int)", { "addPermanentWidget", "QWidget*,int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addWidget(QWidget*)", { "addWidget", "QWidget*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addWidget(QWidget*,int)", { "addWidget", "QWidget*,int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentMessage()", { "currentMessage", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertPermanentWidget(int,QWidget*)", { "insertPermanentWidget", "int,QWidget*", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertPermanentWidget(int,QWidget*,int)", { "insertPermanentWidget", "int,QWidget*,int", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertWidget(int,QWidget*)", { "insertWidget", "int,QWidget*", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertWidget(int,QWidget*,int)", { "insertWidget", "int,QWidget*,int", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSizeGripEnabled()", { "isSizeGripEnabled", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeWidget(QWidget*)", { "removeWidget", "QWidget*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSizeGripEnabled(bool)", { "setSizeGripEnabled", "bool", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hideOrShow()", { "hideOrShow", "", "void", 12, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "reformat()", { "reformat", "", "void", 13, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 14, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 15, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 16, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 17, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "clearMessage()", { "clearMessage", "", "void", 18, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showMessage(QString)", { "showMessage", "QString&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showMessage(QString,int)", { "showMessage", "QString&,int", "void", 20, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStatusBar::plastiqSignals = {
    { "messageChanged(QString)", { "messageChanged", "QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQStatusBar::plastiqProperties = {
    { "sizeGripEnabled", { "sizeGripEnabled", "bool", "setSizeGripEnabled", "isSizeGripEnabled" } },

};

QHash<QByteArray, long> PlastiQQStatusBar::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQStatusBar::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQStatusBar::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQStatusBar::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QStatusBar", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStatusBar::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQStatusBarWrapper : public QStatusBar {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQStatusBarWrapper(QWidget *parent = Q_NULLPTR)
         : QStatusBar(parent),
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
        else return QStatusBar::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QStatusBar::event(e);
    }

    void paintEvent(QPaintEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintEvent(QPaintEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QPaintEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStatusBar::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QStatusBar::paintEvent(event);
    }

    void resizeEvent(QResizeEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeEvent(QResizeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QResizeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QStatusBar::resizeEvent(e);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *e) {
        return QStatusBar::resizeEvent(e);
    }

};

void PlastiQQStatusBar::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQStatusBarWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQStatusBarWrapper(); break;
        case 1: o = new PlastiQQStatusBarWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQStatusBar *p = new PlastiQQStatusBar();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStatusBar *p = new PlastiQQStatusBar();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 21) {
            id -= 21;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStatusBar *o = sc ? Q_NULLPTR : reinterpret_cast<QStatusBar*>(object->plastiq_data());

        switch(id) {
        case 0: o->addPermanentWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addPermanentWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 2: o->addWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->addWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 4: { QString _r = o->currentMessage();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { int _r = o->insertPermanentWidget(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { int _r = o->insertPermanentWidget(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    stack[3].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { int _r = o->insertWidget(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { int _r = o->insertWidget(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    stack[3].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { bool _r = o->isSizeGripEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: o->removeWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setSizeGripEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 12: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 13: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 14: { bool _r;
                if (isWrapper) _r = ((PlastiQQStatusBarWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: if (isWrapper) ((PlastiQQStatusBarWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 16: if (isWrapper) ((PlastiQQStatusBarWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 17: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 18: o->clearMessage();
                stack[0].type = PlastiQ::Void; break;
        case 19: o->showMessage(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->showMessage(stack[1].s_string,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QStatusBar *o = reinterpret_cast<QStatusBar*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QStatusBar::messageChanged,
            [=](const QString& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                PlastiQ_activate(sender, "messageChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QStatusBar *o = reinterpret_cast<QStatusBar*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QStatusBar *o = reinterpret_cast<QStatusBar*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QStatusBar *o = reinterpret_cast<QStatusBar*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStatusBar::~PlastiQQStatusBar() {
    QStatusBar* o = reinterpret_cast<QStatusBar*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

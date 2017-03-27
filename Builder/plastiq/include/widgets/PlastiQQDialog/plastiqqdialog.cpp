#include "plastiqmethod.h"
#include "plastiqqdialog.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QDialog> 
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QObject>
#include <QEvent>
#include <QKeyEvent>
#include <QResizeEvent>
#include <QShowEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQDialog::plastiqConstructors = {
    { "QDialog()", { "QDialog", "", "QDialog*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDialog(QWidget*)", { "QDialog", "QWidget*", "QDialog*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDialog(QWidget*,enum)", { "QDialog", "QWidget*,Qt::WindowFlags", "QDialog*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDialog::plastiqMethods = {
    { "isSizeGripEnabled()", { "isSizeGripEnabled", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "result()", { "result", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setModal(bool)", { "setModal", "bool", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setResult(int)", { "setResult", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSizeGripEnabled(bool)", { "setSizeGripEnabled", "bool", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "closeEvent(QCloseEvent*)", { "closeEvent", "QCloseEvent*", "void", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "contextMenuEvent(QContextMenuEvent*)", { "contextMenuEvent", "QContextMenuEvent*", "void", 6, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "eventFilter(QObject*,QEvent*)", { "eventFilter", "QObject*,QEvent*", "bool", 7, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 8, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 9, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 10, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "accept()", { "accept", "", "void", 11, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "done(int)", { "done", "int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "exec()", { "exec", "", "int", 13, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "open()", { "open", "", "void", 14, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "reject()", { "reject", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDialog::plastiqSignals = {
    { "accepted()", { "accepted", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "finished(int)", { "finished", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "rejected()", { "rejected", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQDialog::plastiqProperties = {
    { "modal", { "modal", "bool", "setModal", "isModal" } },
    { "sizeGripEnabled", { "sizeGripEnabled", "bool", "setSizeGripEnabled", "isSizeGripEnabled" } },

};

QHash<QByteArray, long> PlastiQQDialog::plastiqConstants = {

    /* QDialog::DialogCode */
   { "Rejected", QDialog::Rejected },
   { "Accepted", QDialog::Accepted },

};

QVector<PlastiQMetaObject*> PlastiQQDialog::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQDialog::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQDialog::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QDialog", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDialog::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQDialogWrapper : public QDialog {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQDialogWrapper(QWidget *parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags())
         : QDialog(parent,f),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void closeEvent(QCloseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void closeEvent(QCloseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QCloseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDialog::closeEvent(e);
    }

    void PlastiQParentCall_closeEvent(QCloseEvent *e) {
        return QDialog::closeEvent(e);
    }

    void contextMenuEvent(QContextMenuEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void contextMenuEvent(QContextMenuEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QContextMenuEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDialog::contextMenuEvent(e);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *e) {
        return QDialog::contextMenuEvent(e);
    }

    bool eventFilter(QObject *o, QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(o);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(e);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QDialog::eventFilter(o,e);
    }

    bool PlastiQParentCall_eventFilter(QObject *o, QEvent *e) {
        return QDialog::eventFilter(o,e);
    }

    void keyPressEvent(QKeyEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyPressEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDialog::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QDialog::keyPressEvent(e);
    }

    void showEvent(QShowEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void showEvent(QShowEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QShowEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDialog::showEvent(event);
    }

    void PlastiQParentCall_showEvent(QShowEvent *event) {
        return QDialog::showEvent(event);
    }

};

void PlastiQQDialog::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQDialogWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQDialogWrapper(); break;
        case 1: o = new PlastiQQDialogWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQDialogWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQDialog *p = new PlastiQQDialog();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDialog *p = new PlastiQQDialog();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 16) {
            id -= 16;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDialog *o = sc ? Q_NULLPTR : reinterpret_cast<QDialog*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isSizeGripEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { int _r = o->result();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: o->setModal(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setResult(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setSizeGripEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 5: if (isWrapper) ((PlastiQQDialogWrapper*)o)->PlastiQParentCall_closeEvent(reinterpret_cast<QCloseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 6: if (isWrapper) ((PlastiQQDialogWrapper*)o)->PlastiQParentCall_contextMenuEvent(reinterpret_cast<QContextMenuEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 7: { bool _r;
                if (isWrapper) _r = ((PlastiQQDialogWrapper*)o)->PlastiQParentCall_eventFilter(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: if (isWrapper) ((PlastiQQDialogWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 9: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 10: if (isWrapper) ((PlastiQQDialogWrapper*)o)->PlastiQParentCall_showEvent(reinterpret_cast<QShowEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 11: o->accept();
                stack[0].type = PlastiQ::Void; break;
        case 12: o->done(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 13: { int _r = o->exec();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: o->open();
                stack[0].type = PlastiQ::Void; break;
        case 15: o->reject();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 3) {
            id -= 3;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QDialog *o = reinterpret_cast<QDialog*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QDialog::accepted,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "accepted", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QDialog::finished,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "finished", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QDialog::rejected,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "rejected", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QDialog *o = reinterpret_cast<QDialog*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QDialog *o = reinterpret_cast<QDialog*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QDialog *o = reinterpret_cast<QDialog*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQDialog::~PlastiQQDialog() {
    QDialog* o = reinterpret_cast<QDialog*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

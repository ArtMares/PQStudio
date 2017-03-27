#include "plastiqmethod.h"
#include "plastiqqprogressdialog.h"

#include "widgets/PlastiQQDialog/plastiqqdialog.h"
#include <QProgressDialog> 
#include <QString>
#include <QEvent>
#include <QCloseEvent>
#include <QResizeEvent>
#include <QShowEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQProgressDialog::plastiqConstructors = {
    { "QProgressDialog()", { "QProgressDialog", "", "QProgressDialog*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QProgressDialog(QWidget*)", { "QProgressDialog", "QWidget*", "QProgressDialog*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QProgressDialog(QWidget*,enum)", { "QProgressDialog", "QWidget*,Qt::WindowFlags", "QProgressDialog*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QProgressDialog(QString,QString,int,int)", { "QProgressDialog", "QString&,QString&,int,int", "QProgressDialog*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QProgressDialog(QString,QString,int,int,QWidget*)", { "QProgressDialog", "QString&,QString&,int,int,QWidget*", "QProgressDialog*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QProgressDialog(QString,QString,int,int,QWidget*,enum)", { "QProgressDialog", "QString&,QString&,int,int,QWidget*,Qt::WindowFlags", "QProgressDialog*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQProgressDialog::plastiqMethods = {
    { "autoClose()", { "autoClose", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "autoReset()", { "autoReset", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "labelText()", { "labelText", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximum()", { "maximum", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimum()", { "minimum", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumDuration()", { "minimumDuration", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "open(QObject*,const char*)", { "open", "QObject*,char*", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoClose(bool)", { "setAutoClose", "bool", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoReset(bool)", { "setAutoReset", "bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBar(QProgressBar*)", { "setBar", "QProgressBar*", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCancelButton(QPushButton*)", { "setCancelButton", "QPushButton*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLabel(QLabel*)", { "setLabel", "QLabel*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value()", { "value", "", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wasCanceled()", { "wasCanceled", "", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 14, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "closeEvent(QCloseEvent*)", { "closeEvent", "QCloseEvent*", "void", 15, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 16, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 17, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "cancel()", { "cancel", "", "void", 18, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "reset()", { "reset", "", "void", 19, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setCancelButtonText(QString)", { "setCancelButtonText", "QString&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setLabelText(QString)", { "setLabelText", "QString&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMaximum(int)", { "setMaximum", "int", "void", 22, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMinimum(int)", { "setMinimum", "int", "void", 23, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setMinimumDuration(int)", { "setMinimumDuration", "int", "void", 24, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setRange(int,int)", { "setRange", "int,int", "void", 25, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setValue(int)", { "setValue", "int", "void", 26, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQProgressDialog::plastiqSignals = {
    { "canceled()", { "canceled", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQProgressDialog::plastiqProperties = {
    { "autoClose", { "autoClose", "bool", "setAutoClose", "autoClose" } },
    { "autoReset", { "autoReset", "bool", "setAutoReset", "autoReset" } },
    { "labelText", { "labelText", "QString", "setLabelText", "labelText" } },
    { "maximum", { "maximum", "int", "setMaximum", "maximum" } },
    { "minimum", { "minimum", "int", "setMinimum", "minimum" } },
    { "minimumDuration", { "minimumDuration", "int", "setMinimumDuration", "minimumDuration" } },
    { "value", { "value", "int", "setValue", "value" } },
    { "wasCanceled", { "wasCanceled", "bool", "", "wasCanceled" } },

};

QHash<QByteArray, long> PlastiQQProgressDialog::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQProgressDialog::plastiqInherits = { &PlastiQQDialog::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQProgressDialog::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQProgressDialog::plastiq_static_metaObject = {
    { &PlastiQQDialog::plastiq_static_metaObject, &plastiqInherits, "QProgressDialog", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQProgressDialog::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQProgressDialogWrapper : public QProgressDialog {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQProgressDialogWrapper(QWidget *parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags())
         : QProgressDialog(parent,f),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQProgressDialogWrapper(const QString &labelText, const QString &cancelButtonText, int minimum, int maximum, QWidget *parent = Q_NULLPTR, Qt::WindowFlags f = Qt::WindowFlags())
         : QProgressDialog(labelText,cancelButtonText,minimum,maximum,parent,f),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


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
        else return QProgressDialog::changeEvent(ev);
    }

    void PlastiQParentCall_changeEvent(QEvent *ev) {
        return QProgressDialog::changeEvent(ev);
    }

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
        else return QProgressDialog::closeEvent(e);
    }

    void PlastiQParentCall_closeEvent(QCloseEvent *e) {
        return QProgressDialog::closeEvent(e);
    }

    void resizeEvent(QResizeEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeEvent(QResizeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QResizeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QProgressDialog::resizeEvent(event);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *event) {
        return QProgressDialog::resizeEvent(event);
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
        else return QProgressDialog::showEvent(e);
    }

    void PlastiQParentCall_showEvent(QShowEvent *e) {
        return QProgressDialog::showEvent(e);
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
        else return QProgressDialog::contextMenuEvent(e);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *e) {
        return QProgressDialog::contextMenuEvent(e);
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
        else return QProgressDialog::eventFilter(o,e);
    }

    bool PlastiQParentCall_eventFilter(QObject *o, QEvent *e) {
        return QProgressDialog::eventFilter(o,e);
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
        else return QProgressDialog::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QProgressDialog::keyPressEvent(e);
    }

};

void PlastiQQProgressDialog::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQProgressDialogWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQProgressDialogWrapper(); break;
        case 1: o = new PlastiQQProgressDialogWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQProgressDialogWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64)); break;
        case 3: o = new PlastiQQProgressDialogWrapper(stack[1].s_string,
                    stack[2].s_string,
                    stack[3].s_int,
                    stack[4].s_int); break;
        case 4: o = new PlastiQQProgressDialogWrapper(stack[1].s_string,
                    stack[2].s_string,
                    stack[3].s_int,
                    stack[4].s_int,
                    reinterpret_cast<QWidget*>(stack[5].s_voidp)); break;
        case 5: o = new PlastiQQProgressDialogWrapper(stack[1].s_string,
                    stack[2].s_string,
                    stack[3].s_int,
                    stack[4].s_int,
                    reinterpret_cast<QWidget*>(stack[5].s_voidp),
                    Qt::WindowFlags(stack[6].s_int64)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQProgressDialog *p = new PlastiQQProgressDialog();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQProgressDialog *p = new PlastiQQProgressDialog();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 27) {
            id -= 27;
            PlastiQQDialog::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QProgressDialog *o = sc ? Q_NULLPTR : reinterpret_cast<QProgressDialog*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->autoClose();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->autoReset();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { QString _r = o->labelText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { int _r = o->maximum();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->minimum();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->minimumDuration();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: o->open(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setAutoClose(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setAutoReset(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setBar(reinterpret_cast<QProgressBar*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setCancelButton(reinterpret_cast<QPushButton*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setLabel(reinterpret_cast<QLabel*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 12: { int _r = o->value();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { bool _r = o->wasCanceled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: if (isWrapper) ((PlastiQQProgressDialogWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 15: if (isWrapper) ((PlastiQQProgressDialogWrapper*)o)->PlastiQParentCall_closeEvent(reinterpret_cast<QCloseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 16: if (isWrapper) ((PlastiQQProgressDialogWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 17: if (isWrapper) ((PlastiQQProgressDialogWrapper*)o)->PlastiQParentCall_showEvent(reinterpret_cast<QShowEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 18: o->cancel();
                stack[0].type = PlastiQ::Void; break;
        case 19: o->reset();
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setCancelButtonText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setLabelText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setMaximum(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setMinimum(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setMinimumDuration(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setRange(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setValue(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQDialog::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QProgressDialog *o = reinterpret_cast<QProgressDialog*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QProgressDialog::canceled,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "canceled", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QProgressDialog *o = reinterpret_cast<QProgressDialog*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QProgressDialog *o = reinterpret_cast<QProgressDialog*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QProgressDialog *o = reinterpret_cast<QProgressDialog*>(object->plastiq_data());

        if(className == "QDialog") {
            stack[0].s_voidp = static_cast<QDialog*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQProgressDialog::~PlastiQQProgressDialog() {
    QProgressDialog* o = reinterpret_cast<QProgressDialog*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

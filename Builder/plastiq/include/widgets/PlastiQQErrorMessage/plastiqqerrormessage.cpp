#include "plastiqmethod.h"
#include "plastiqqerrormessage.h"

#include "widgets/PlastiQQDialog/plastiqqdialog.h"
#include <QErrorMessage> 
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQErrorMessage::plastiqConstructors = {
    { "QErrorMessage()", { "QErrorMessage", "", "QErrorMessage*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QErrorMessage(QWidget*)", { "QErrorMessage", "QWidget*", "QErrorMessage*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQErrorMessage::plastiqMethods = {
    { "qtHandler()", { "qtHandler", "", "QErrorMessage*", 0, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 1, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "done(int)", { "done", "int", "void", 2, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showMessage(QString)", { "showMessage", "QString&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showMessage(QString,QString)", { "showMessage", "QString&,QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQErrorMessage::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQErrorMessage::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQErrorMessage::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQErrorMessage::plastiqInherits = { &PlastiQQDialog::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQErrorMessage::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQErrorMessage::plastiq_static_metaObject = {
    { &PlastiQQDialog::plastiq_static_metaObject, &plastiqInherits, "QErrorMessage", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQErrorMessage::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQErrorMessageWrapper : public QErrorMessage {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQErrorMessageWrapper(QWidget *parent = Q_NULLPTR)
         : QErrorMessage(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void changeEvent(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void changeEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QErrorMessage::changeEvent(e);
    }

    void PlastiQParentCall_changeEvent(QEvent *e) {
        return QErrorMessage::changeEvent(e);
    }

    void done(int a) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void done(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = a;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QErrorMessage::done(a);
    }

    void PlastiQParentCall_done(int a) {
        return QErrorMessage::done(a);
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
        else return QErrorMessage::closeEvent(e);
    }

    void PlastiQParentCall_closeEvent(QCloseEvent *e) {
        return QErrorMessage::closeEvent(e);
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
        else return QErrorMessage::contextMenuEvent(e);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *e) {
        return QErrorMessage::contextMenuEvent(e);
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
        else return QErrorMessage::eventFilter(o,e);
    }

    bool PlastiQParentCall_eventFilter(QObject *o, QEvent *e) {
        return QErrorMessage::eventFilter(o,e);
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
        else return QErrorMessage::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QErrorMessage::keyPressEvent(e);
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
        else return QErrorMessage::showEvent(event);
    }

    void PlastiQParentCall_showEvent(QShowEvent *event) {
        return QErrorMessage::showEvent(event);
    }

};

void PlastiQQErrorMessage::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQErrorMessageWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQErrorMessageWrapper(); break;
        case 1: o = new PlastiQQErrorMessageWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQErrorMessage *p = new PlastiQQErrorMessage();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQErrorMessage *p = new PlastiQQErrorMessage();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQDialog::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QErrorMessage *o = sc ? Q_NULLPTR : reinterpret_cast<QErrorMessage*>(object->plastiq_data());

        switch(id) {
        case 0: { QErrorMessage* _r = sc ? QErrorMessage::qtHandler() : o->qtHandler();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QErrorMessage"; } break;
        case 1: if (isWrapper) ((PlastiQQErrorMessageWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 2: if (isWrapper) ((PlastiQQErrorMessageWrapper*)o)->PlastiQParentCall_done(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 3: o->showMessage(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->showMessage(stack[1].s_string,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQDialog::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QErrorMessage *o = reinterpret_cast<QErrorMessage*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QErrorMessage *o = reinterpret_cast<QErrorMessage*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QErrorMessage *o = reinterpret_cast<QErrorMessage*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QErrorMessage *o = reinterpret_cast<QErrorMessage*>(object->plastiq_data());

        if(className == "QDialog") {
            stack[0].s_voidp = static_cast<QDialog*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQErrorMessage::~PlastiQQErrorMessage() {
    QErrorMessage* o = reinterpret_cast<QErrorMessage*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

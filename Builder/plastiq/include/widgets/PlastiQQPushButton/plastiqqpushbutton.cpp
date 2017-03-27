#include "plastiqmethod.h"
#include "plastiqqpushbutton.h"

#include "widgets/PlastiQQAbstractButton/plastiqqabstractbutton.h"
#include <QPushButton> 
#include <QMenu>
#include <QEvent>
#include <QFocusEvent>
#include <QKeyEvent>
#include <QPaintEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQPushButton::plastiqConstructors = {
    { "QPushButton()", { "QPushButton", "", "QPushButton*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPushButton(QWidget*)", { "QPushButton", "QWidget*", "QPushButton*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPushButton(QString)", { "QPushButton", "QString&", "QPushButton*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPushButton(QString,QWidget*)", { "QPushButton", "QString&,QWidget*", "QPushButton*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPushButton(QIcon&,QString)", { "QPushButton", "QIcon&,QString&", "QPushButton*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPushButton(QIcon&,QString,QWidget*)", { "QPushButton", "QIcon&,QString&,QWidget*", "QPushButton*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPushButton::plastiqMethods = {
    { "autoDefault()", { "autoDefault", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isDefault()", { "isDefault", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFlat()", { "isFlat", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "menu()", { "menu", "", "QMenu*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoDefault(bool)", { "setAutoDefault", "bool", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefault(bool)", { "setDefault", "bool", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFlat(bool)", { "setFlat", "bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMenu(QMenu*)", { "setMenu", "QMenu*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionButton*)", { "initStyleOption", "QStyleOptionButton*", "void", 8, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 9, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 10, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 11, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 12, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 13, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showMenu()", { "showMenu", "", "void", 14, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPushButton::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPushButton::plastiqProperties = {
    { "autoDefault", { "autoDefault", "bool", "setAutoDefault", "autoDefault" } },
    { "default", { "default", "bool", "setDefault", "isDefault" } },
    { "flat", { "flat", "bool", "setFlat", "isFlat" } },

};

QHash<QByteArray, long> PlastiQQPushButton::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPushButton::plastiqInherits = { &PlastiQQAbstractButton::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPushButton::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQPushButton::plastiq_static_metaObject = {
    { &PlastiQQAbstractButton::plastiq_static_metaObject, &plastiqInherits, "QPushButton", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPushButton::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQPushButtonWrapper : public QPushButton {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQPushButtonWrapper(QWidget *parent = Q_NULLPTR)
         : QPushButton(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQPushButtonWrapper(const QString &text, QWidget *parent = Q_NULLPTR)
         : QPushButton(text,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQPushButtonWrapper(const QIcon &icon, const QString &text, QWidget *parent = Q_NULLPTR)
         : QPushButton(icon,text,parent),
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
        else return QPushButton::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QPushButton::event(e);
    }

    void focusInEvent(QFocusEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusInEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPushButton::focusInEvent(e);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *e) {
        return QPushButton::focusInEvent(e);
    }

    void focusOutEvent(QFocusEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusOutEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPushButton::focusOutEvent(e);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *e) {
        return QPushButton::focusOutEvent(e);
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
        else return QPushButton::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QPushButton::keyPressEvent(e);
    }

    void checkStateSet() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void checkStateSet()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPushButton::checkStateSet();
    }

    void PlastiQParentCall_checkStateSet() {
        return QPushButton::checkStateSet();
    }

    bool hitButton(const QPoint &pos) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool hitButton(const QPoint&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QPoint(pos) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QPoint");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QPushButton::hitButton(pos);
    }

    bool PlastiQParentCall_hitButton(const QPoint &pos) const {
        return QPushButton::hitButton(pos);
    }

    void nextCheckState() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void nextCheckState()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPushButton::nextCheckState();
    }

    void PlastiQParentCall_nextCheckState() {
        return QPushButton::nextCheckState();
    }

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
        else return QPushButton::changeEvent(e);
    }

    void PlastiQParentCall_changeEvent(QEvent *e) {
        return QPushButton::changeEvent(e);
    }

    void keyReleaseEvent(QKeyEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyReleaseEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPushButton::keyReleaseEvent(e);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *e) {
        return QPushButton::keyReleaseEvent(e);
    }

    void mouseMoveEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPushButton::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QPushButton::mouseMoveEvent(e);
    }

    void mousePressEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPushButton::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QPushButton::mousePressEvent(e);
    }

    void mouseReleaseEvent(QMouseEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPushButton::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QPushButton::mouseReleaseEvent(e);
    }

    void timerEvent(QTimerEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPushButton::timerEvent(e);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *e) {
        return QPushButton::timerEvent(e);
    }

};

void PlastiQQPushButton::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQPushButtonWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQPushButtonWrapper(); break;
        case 1: o = new PlastiQQPushButtonWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQPushButtonWrapper(stack[1].s_string); break;
        case 3: o = new PlastiQQPushButtonWrapper(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;
        case 4: o = new PlastiQQPushButtonWrapper((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string); break;
        case 5: o = new PlastiQQPushButtonWrapper((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<QWidget*>(stack[3].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQPushButton *p = new PlastiQQPushButton();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPushButton *p = new PlastiQQPushButton();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 15) {
            id -= 15;
            PlastiQQAbstractButton::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPushButton *o = sc ? Q_NULLPTR : reinterpret_cast<QPushButton*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->autoDefault();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->isDefault();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->isFlat();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { QMenu* _r = o->menu();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMenu"; } break;
        case 4: o->setAutoDefault(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setDefault(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setFlat(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setMenu(reinterpret_cast<QMenu*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 8: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 9: { bool _r;
                if (isWrapper) _r = ((PlastiQQPushButtonWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: if (isWrapper) ((PlastiQQPushButtonWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 11: if (isWrapper) ((PlastiQQPushButtonWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 12: if (isWrapper) ((PlastiQQPushButtonWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 13: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 14: o->showMenu();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQAbstractButton::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QPushButton *o = reinterpret_cast<QPushButton*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QPushButton *o = reinterpret_cast<QPushButton*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QPushButton *o = reinterpret_cast<QPushButton*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QPushButton *o = reinterpret_cast<QPushButton*>(object->plastiq_data());

        if(className == "QAbstractButton") {
            stack[0].s_voidp = static_cast<QAbstractButton*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPushButton::~PlastiQQPushButton() {
    QPushButton* o = reinterpret_cast<QPushButton*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

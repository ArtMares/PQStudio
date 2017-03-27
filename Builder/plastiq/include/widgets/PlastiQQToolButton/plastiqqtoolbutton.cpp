#include "plastiqmethod.h"
#include "plastiqqtoolbutton.h"

#include "widgets/PlastiQQAbstractButton/plastiqqabstractbutton.h"
#include <QToolButton> 
#include <QAction>
#include <QMenu>
#include <QActionEvent>
#include <QEvent>
#include <QPoint>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QTimerEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQToolButton::plastiqConstructors = {
    { "QToolButton()", { "QToolButton", "", "QToolButton*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QToolButton(QWidget*)", { "QToolButton", "QWidget*", "QToolButton*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQToolButton::plastiqMethods = {
    { "arrowType()", { "arrowType", "", "Qt::ArrowType", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "autoRaise()", { "autoRaise", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultAction()", { "defaultAction", "", "QAction*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "menu()", { "menu", "", "QMenu*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "popupMode()", { "popupMode", "", "ToolButtonPopupMode", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setArrowType(enum)", { "setArrowType", "Qt::ArrowType", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoRaise(bool)", { "setAutoRaise", "bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMenu(QMenu*)", { "setMenu", "QMenu*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPopupMode(enum)", { "setPopupMode", "ToolButtonPopupMode", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolButtonStyle()", { "toolButtonStyle", "", "Qt::ToolButtonStyle", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionToolButton*)", { "initStyleOption", "QStyleOptionToolButton*", "void", 10, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "actionEvent(QActionEvent*)", { "actionEvent", "QActionEvent*", "void", 11, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 12, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "enterEvent(QEvent*)", { "enterEvent", "QEvent*", "void", 13, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 14, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hitButton(QPoint&)", { "hitButton", "QPoint&", "bool", 15, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "leaveEvent(QEvent*)", { "leaveEvent", "QEvent*", "void", 16, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 17, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 18, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "nextCheckState()", { "nextCheckState", "", "void", 19, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 20, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 21, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setDefaultAction(QAction*)", { "setDefaultAction", "QAction*", "void", 22, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setToolButtonStyle(enum)", { "setToolButtonStyle", "Qt::ToolButtonStyle", "void", 23, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showMenu()", { "showMenu", "", "void", 24, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQToolButton::plastiqSignals = {
    { "triggered(QAction*)", { "triggered", "QAction*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQToolButton::plastiqProperties = {
    { "arrowType", { "arrowType", "long", "setArrowType", "arrowType" } },
    { "autoRaise", { "autoRaise", "bool", "setAutoRaise", "autoRaise" } },
    { "popupMode", { "popupMode", "long", "setPopupMode", "popupMode" } },
    { "toolButtonStyle", { "toolButtonStyle", "long", "setToolButtonStyle", "toolButtonStyle" } },

};

QHash<QByteArray, long> PlastiQQToolButton::plastiqConstants = {

    /* QToolButton::ToolButtonPopupMode */
   { "DelayedPopup", QToolButton::DelayedPopup },
   { "MenuButtonPopup", QToolButton::MenuButtonPopup },
   { "InstantPopup", QToolButton::InstantPopup },

};

QVector<PlastiQMetaObject*> PlastiQQToolButton::plastiqInherits = { &PlastiQQAbstractButton::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQToolButton::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQToolButton::plastiq_static_metaObject = {
    { &PlastiQQAbstractButton::plastiq_static_metaObject, &plastiqInherits, "QToolButton", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQToolButton::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQToolButtonWrapper : public QToolButton {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQToolButtonWrapper(QWidget *parent = Q_NULLPTR)
         : QToolButton(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void actionEvent(QActionEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void actionEvent(QActionEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QActionEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QToolButton::actionEvent(event);
    }

    void PlastiQParentCall_actionEvent(QActionEvent *event) {
        return QToolButton::actionEvent(event);
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
        else return QToolButton::changeEvent(e);
    }

    void PlastiQParentCall_changeEvent(QEvent *e) {
        return QToolButton::changeEvent(e);
    }

    void enterEvent(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void enterEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QToolButton::enterEvent(e);
    }

    void PlastiQParentCall_enterEvent(QEvent *e) {
        return QToolButton::enterEvent(e);
    }

    bool event(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QToolButton::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QToolButton::event(event);
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
        else return QToolButton::hitButton(pos);
    }

    bool PlastiQParentCall_hitButton(const QPoint &pos) const {
        return QToolButton::hitButton(pos);
    }

    void leaveEvent(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void leaveEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QToolButton::leaveEvent(e);
    }

    void PlastiQParentCall_leaveEvent(QEvent *e) {
        return QToolButton::leaveEvent(e);
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
        else return QToolButton::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QToolButton::mousePressEvent(e);
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
        else return QToolButton::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QToolButton::mouseReleaseEvent(e);
    }

    void nextCheckState() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void nextCheckState()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QToolButton::nextCheckState();
    }

    void PlastiQParentCall_nextCheckState() {
        return QToolButton::nextCheckState();
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
        else return QToolButton::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QToolButton::paintEvent(event);
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
        else return QToolButton::timerEvent(e);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *e) {
        return QToolButton::timerEvent(e);
    }

    void checkStateSet() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void checkStateSet()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QToolButton::checkStateSet();
    }

    void PlastiQParentCall_checkStateSet() {
        return QToolButton::checkStateSet();
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
        else return QToolButton::focusInEvent(e);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *e) {
        return QToolButton::focusInEvent(e);
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
        else return QToolButton::focusOutEvent(e);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *e) {
        return QToolButton::focusOutEvent(e);
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
        else return QToolButton::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QToolButton::keyPressEvent(e);
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
        else return QToolButton::keyReleaseEvent(e);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *e) {
        return QToolButton::keyReleaseEvent(e);
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
        else return QToolButton::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QToolButton::mouseMoveEvent(e);
    }

};

void PlastiQQToolButton::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQToolButtonWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQToolButtonWrapper(); break;
        case 1: o = new PlastiQQToolButtonWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQToolButton *p = new PlastiQQToolButton();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQToolButton *p = new PlastiQQToolButton();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 25) {
            id -= 25;
            PlastiQQAbstractButton::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QToolButton *o = sc ? Q_NULLPTR : reinterpret_cast<QToolButton*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->arrowType(); // HACK for Qt::ArrowType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { bool _r = o->autoRaise();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { QAction* _r = o->defaultAction();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 3: { QMenu* _r = o->menu();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMenu"; } break;
        case 4: { qint64 _r = o->popupMode(); // HACK for ToolButtonPopupMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: o->setArrowType(Qt::ArrowType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setAutoRaise(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setMenu(reinterpret_cast<QMenu*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setPopupMode(QToolButton::ToolButtonPopupMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 9: { qint64 _r = o->toolButtonStyle(); // HACK for Qt::ToolButtonStyle 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 11: if (isWrapper) ((PlastiQQToolButtonWrapper*)o)->PlastiQParentCall_actionEvent(reinterpret_cast<QActionEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 12: if (isWrapper) ((PlastiQQToolButtonWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 13: if (isWrapper) ((PlastiQQToolButtonWrapper*)o)->PlastiQParentCall_enterEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 14: { bool _r;
                if (isWrapper) _r = ((PlastiQQToolButtonWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r;
                if (isWrapper) _r = ((PlastiQQToolButtonWrapper*)o)->PlastiQParentCall_hitButton((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: if (isWrapper) ((PlastiQQToolButtonWrapper*)o)->PlastiQParentCall_leaveEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 17: if (isWrapper) ((PlastiQQToolButtonWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 18: if (isWrapper) ((PlastiQQToolButtonWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 19: if (isWrapper) ((PlastiQQToolButtonWrapper*)o)->PlastiQParentCall_nextCheckState();
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 20: if (isWrapper) ((PlastiQQToolButtonWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 21: if (isWrapper) ((PlastiQQToolButtonWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setDefaultAction(reinterpret_cast<QAction*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setToolButtonStyle(Qt::ToolButtonStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->showMenu();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQAbstractButton::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QToolButton *o = reinterpret_cast<QToolButton*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QToolButton::triggered,
            [=](QAction* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QAction";
                PlastiQ_activate(sender, "triggered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QToolButton *o = reinterpret_cast<QToolButton*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QToolButton *o = reinterpret_cast<QToolButton*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QToolButton *o = reinterpret_cast<QToolButton*>(object->plastiq_data());

        if(className == "QAbstractButton") {
            stack[0].s_voidp = static_cast<QAbstractButton*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQToolButton::~PlastiQQToolButton() {
    QToolButton* o = reinterpret_cast<QToolButton*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

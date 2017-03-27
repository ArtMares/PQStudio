#include "plastiqmethod.h"
#include "plastiqqabstractbutton.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QAbstractButton> 
#include <QButtonGroup>
#include <QIcon>
#include <QSize>
#include <QKeySequence>
#include <QString>
#include <QPoint>
#include <QEvent>
#include <QFocusEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QTimerEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractButton::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractButton::plastiqMethods = {
    { "autoExclusive()", { "autoExclusive", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "autoRepeat()", { "autoRepeat", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "autoRepeatDelay()", { "autoRepeatDelay", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "autoRepeatInterval()", { "autoRepeatInterval", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "group()", { "group", "", "QButtonGroup*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "icon()", { "icon", "", "QIcon", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconSize()", { "iconSize", "", "QSize", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCheckable()", { "isCheckable", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isChecked()", { "isChecked", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isDown()", { "isDown", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoExclusive(bool)", { "setAutoExclusive", "bool", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoRepeat(bool)", { "setAutoRepeat", "bool", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoRepeatDelay(int)", { "setAutoRepeatDelay", "int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoRepeatInterval(int)", { "setAutoRepeatInterval", "int", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCheckable(bool)", { "setCheckable", "bool", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDown(bool)", { "setDown", "bool", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIcon(QIcon&)", { "setIcon", "QIcon&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShortcut(QKeySequence&)", { "setShortcut", "QKeySequence&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setText(QString)", { "setText", "QString&", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shortcut()", { "shortcut", "", "QKeySequence", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "checkStateSet()", { "checkStateSet", "", "void", 21, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hitButton(QPoint&)", { "hitButton", "QPoint&", "bool", 22, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "nextCheckState()", { "nextCheckState", "", "void", 23, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 24, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 25, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 26, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 27, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 28, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyReleaseEvent(QKeyEvent*)", { "keyReleaseEvent", "QKeyEvent*", "void", 29, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 30, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 31, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 32, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 33, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 34, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "animateClick()", { "animateClick", "", "void", 35, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "animateClick(int)", { "animateClick", "int", "void", 36, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "click()", { "click", "", "void", 37, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setChecked(bool)", { "setChecked", "bool", "void", 38, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setIconSize(QSize&)", { "setIconSize", "QSize&", "void", 39, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "toggle()", { "toggle", "", "void", 40, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAbstractButton::plastiqSignals = {
    { "clicked()", { "clicked", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "clicked(bool)", { "clicked", "bool", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "pressed()", { "pressed", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "released()", { "released", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "toggled(bool)", { "toggled", "bool", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAbstractButton::plastiqProperties = {
    { "autoExclusive", { "autoExclusive", "bool", "setAutoExclusive", "autoExclusive" } },
    { "autoRepeat", { "autoRepeat", "bool", "setAutoRepeat", "autoRepeat" } },
    { "autoRepeatDelay", { "autoRepeatDelay", "int", "setAutoRepeatDelay", "autoRepeatDelay" } },
    { "autoRepeatInterval", { "autoRepeatInterval", "int", "setAutoRepeatInterval", "autoRepeatInterval" } },
    { "checkable", { "checkable", "bool", "setCheckable", "isCheckable" } },
    { "checked", { "checked", "bool", "setChecked", "isChecked" } },
    { "down", { "down", "bool", "setDown", "isDown" } },
    { "icon", { "icon", "QIcon", "setIcon", "icon" } },
    { "iconSize", { "iconSize", "QSize", "setIconSize", "iconSize" } },
    { "shortcut", { "shortcut", "QKeySequence", "setShortcut", "shortcut" } },
    { "text", { "text", "QString", "setText", "text" } },

};

QHash<QByteArray, long> PlastiQQAbstractButton::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQAbstractButton::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAbstractButton::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQAbstractButton::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QAbstractButton", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAbstractButton::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQAbstractButtonWrapper : public QAbstractButton {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    void checkStateSet() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void checkStateSet()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractButton::checkStateSet();
    }

    void PlastiQParentCall_checkStateSet() {
        return QAbstractButton::checkStateSet();
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
        else return QAbstractButton::hitButton(pos);
    }

    bool PlastiQParentCall_hitButton(const QPoint &pos) const {
        return QAbstractButton::hitButton(pos);
    }

    void nextCheckState() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void nextCheckState()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAbstractButton::nextCheckState();
    }

    void PlastiQParentCall_nextCheckState() {
        return QAbstractButton::nextCheckState();
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
        else return QAbstractButton::changeEvent(e);
    }

    void PlastiQParentCall_changeEvent(QEvent *e) {
        return QAbstractButton::changeEvent(e);
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
        else return QAbstractButton::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QAbstractButton::event(e);
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
        else return QAbstractButton::focusInEvent(e);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *e) {
        return QAbstractButton::focusInEvent(e);
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
        else return QAbstractButton::focusOutEvent(e);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *e) {
        return QAbstractButton::focusOutEvent(e);
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
        else return QAbstractButton::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QAbstractButton::keyPressEvent(e);
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
        else return QAbstractButton::keyReleaseEvent(e);
    }

    void PlastiQParentCall_keyReleaseEvent(QKeyEvent *e) {
        return QAbstractButton::keyReleaseEvent(e);
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
        else return QAbstractButton::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QAbstractButton::mouseMoveEvent(e);
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
        else return QAbstractButton::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QAbstractButton::mousePressEvent(e);
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
        else return QAbstractButton::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QAbstractButton::mouseReleaseEvent(e);
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
        else return QAbstractButton::timerEvent(e);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *e) {
        return QAbstractButton::timerEvent(e);
    }

};

void PlastiQQAbstractButton::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQAbstractButtonWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAbstractButton *p = new PlastiQQAbstractButton();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAbstractButton *p = new PlastiQQAbstractButton();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 41) {
            id -= 41;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAbstractButton *o = sc ? Q_NULLPTR : reinterpret_cast<QAbstractButton*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->autoExclusive();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->autoRepeat();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { int _r = o->autoRepeatDelay();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->autoRepeatInterval();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { QButtonGroup* _r = o->group();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QButtonGroup"; } break;
        case 5: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->icon());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QSize *_r = new QSize(o->iconSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { bool _r = o->isCheckable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isChecked();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isDown();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: o->setAutoExclusive(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setAutoRepeat(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setAutoRepeatDelay(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setAutoRepeatInterval(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setCheckable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setDown(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setShortcut((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 19: { /* COPY OBJECT */
            QKeySequence *_r = new QKeySequence(o->shortcut());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QKeySequence";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 21: if (isWrapper) ((PlastiQQAbstractButtonWrapper*)o)->PlastiQParentCall_checkStateSet();
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 22: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractButtonWrapper*)o)->PlastiQParentCall_hitButton((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 23: if (isWrapper) ((PlastiQQAbstractButtonWrapper*)o)->PlastiQParentCall_nextCheckState();
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 24: if (isWrapper) ((PlastiQQAbstractButtonWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 25: { bool _r;
                if (isWrapper) _r = ((PlastiQQAbstractButtonWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 26: if (isWrapper) ((PlastiQQAbstractButtonWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 27: if (isWrapper) ((PlastiQQAbstractButtonWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 28: if (isWrapper) ((PlastiQQAbstractButtonWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 29: if (isWrapper) ((PlastiQQAbstractButtonWrapper*)o)->PlastiQParentCall_keyReleaseEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 30: if (isWrapper) ((PlastiQQAbstractButtonWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 31: if (isWrapper) ((PlastiQQAbstractButtonWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 32: if (isWrapper) ((PlastiQQAbstractButtonWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 33: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 34: if (isWrapper) ((PlastiQQAbstractButtonWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 35: o->animateClick();
                stack[0].type = PlastiQ::Void; break;
        case 36: o->animateClick(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 37: o->click();
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setChecked(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setIconSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 40: o->toggle();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 5) {
            id -= 5;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAbstractButton *o = reinterpret_cast<QAbstractButton*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAbstractButton::clicked,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "clicked", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAbstractButton::clicked,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "clicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QAbstractButton::pressed,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "pressed", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QAbstractButton::released,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "released", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QAbstractButton::toggled,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "toggled", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAbstractButton *o = reinterpret_cast<QAbstractButton*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAbstractButton *o = reinterpret_cast<QAbstractButton*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAbstractButton *o = reinterpret_cast<QAbstractButton*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAbstractButton::~PlastiQQAbstractButton() {
    QAbstractButton* o = reinterpret_cast<QAbstractButton*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

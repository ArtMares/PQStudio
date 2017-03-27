#include "plastiqmethod.h"
#include "plastiqqmdisubwindow.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QMdiSubWindow> 
#include <QMdiArea>
#include <QMenu>
#include <QWidget>
#include <QEvent>
#include <QChildEvent>
#include <QCloseEvent>
#include <QContextMenuEvent>
#include <QObject>
#include <QFocusEvent>
#include <QHideEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QTimerEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQMdiSubWindow::plastiqConstructors = {
    { "QMdiSubWindow()", { "QMdiSubWindow", "", "QMdiSubWindow*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMdiSubWindow(QWidget*)", { "QMdiSubWindow", "QWidget*", "QMdiSubWindow*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMdiSubWindow(QWidget*,enum)", { "QMdiSubWindow", "QWidget*,Qt::WindowFlags", "QMdiSubWindow*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMdiSubWindow::plastiqMethods = {
    { "isShaded()", { "isShaded", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "keyboardPageStep()", { "keyboardPageStep", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "keyboardSingleStep()", { "keyboardSingleStep", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mdiArea()", { "mdiArea", "", "QMdiArea*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setKeyboardPageStep(int)", { "setKeyboardPageStep", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setKeyboardSingleStep(int)", { "setKeyboardSingleStep", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(enum)", { "setOption", "SubWindowOption", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOption(enum,bool)", { "setOption", "SubWindowOption,bool", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSystemMenu(QMenu*)", { "setSystemMenu", "QMenu*", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWidget(QWidget*)", { "setWidget", "QWidget*", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "systemMenu()", { "systemMenu", "", "QMenu*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "testOption(enum)", { "testOption", "SubWindowOption", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "widget()", { "widget", "", "QWidget*", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 13, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "childEvent(QChildEvent*)", { "childEvent", "QChildEvent*", "void", 14, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "closeEvent(QCloseEvent*)", { "closeEvent", "QCloseEvent*", "void", 15, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "contextMenuEvent(QContextMenuEvent*)", { "contextMenuEvent", "QContextMenuEvent*", "void", 16, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 17, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "eventFilter(QObject*,QEvent*)", { "eventFilter", "QObject*,QEvent*", "bool", 18, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 19, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 20, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hideEvent(QHideEvent*)", { "hideEvent", "QHideEvent*", "void", 21, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 22, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "leaveEvent(QEvent*)", { "leaveEvent", "QEvent*", "void", 23, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseDoubleClickEvent(QMouseEvent*)", { "mouseDoubleClickEvent", "QMouseEvent*", "void", 24, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 25, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 26, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 27, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "moveEvent(QMoveEvent*)", { "moveEvent", "QMoveEvent*", "void", 28, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 29, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 30, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 31, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 32, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showShaded()", { "showShaded", "", "void", 33, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "showSystemMenu()", { "showSystemMenu", "", "void", 34, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMdiSubWindow::plastiqSignals = {
    { "aboutToActivate()", { "aboutToActivate", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "windowStateChanged(enum,enum)", { "windowStateChanged", "Qt::WindowStates,Qt::WindowStates", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMdiSubWindow::plastiqProperties = {
    { "keyboardPageStep", { "keyboardPageStep", "int", "setKeyboardPageStep", "keyboardPageStep" } },
    { "keyboardSingleStep", { "keyboardSingleStep", "int", "setKeyboardSingleStep", "keyboardSingleStep" } },

};

QHash<QByteArray, long> PlastiQQMdiSubWindow::plastiqConstants = {

    /* QMdiSubWindow::SubWindowOption */
   { "AllowOutsideAreaHorizontally", QMdiSubWindow::AllowOutsideAreaHorizontally },
   { "AllowOutsideAreaVertically", QMdiSubWindow::AllowOutsideAreaVertically },
   { "RubberBandResize", QMdiSubWindow::RubberBandResize },
   { "RubberBandMove", QMdiSubWindow::RubberBandMove },

};

QVector<PlastiQMetaObject*> PlastiQQMdiSubWindow::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMdiSubWindow::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQMdiSubWindow::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QMdiSubWindow", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMdiSubWindow::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQMdiSubWindowWrapper : public QMdiSubWindow {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQMdiSubWindowWrapper(QWidget *parent = Q_NULLPTR, Qt::WindowFlags flags = Qt::WindowFlags())
         : QMdiSubWindow(parent,flags),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void changeEvent(QEvent *changeEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void changeEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(changeEvent);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::changeEvent(changeEvent);
    }

    void PlastiQParentCall_changeEvent(QEvent *changeEvent) {
        return QMdiSubWindow::changeEvent(changeEvent);
    }

    void childEvent(QChildEvent *childEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(childEvent);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::childEvent(childEvent);
    }

    void PlastiQParentCall_childEvent(QChildEvent *childEvent) {
        return QMdiSubWindow::childEvent(childEvent);
    }

    void closeEvent(QCloseEvent *closeEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void closeEvent(QCloseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(closeEvent);
            stack[1].name = QByteArrayLiteral("QCloseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::closeEvent(closeEvent);
    }

    void PlastiQParentCall_closeEvent(QCloseEvent *closeEvent) {
        return QMdiSubWindow::closeEvent(closeEvent);
    }

    void contextMenuEvent(QContextMenuEvent *contextMenuEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void contextMenuEvent(QContextMenuEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(contextMenuEvent);
            stack[1].name = QByteArrayLiteral("QContextMenuEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::contextMenuEvent(contextMenuEvent);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *contextMenuEvent) {
        return QMdiSubWindow::contextMenuEvent(contextMenuEvent);
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
        else return QMdiSubWindow::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QMdiSubWindow::event(event);
    }

    bool eventFilter(QObject *object, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(object);
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
        else return QMdiSubWindow::eventFilter(object,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *object, QEvent *event) {
        return QMdiSubWindow::eventFilter(object,event);
    }

    void focusInEvent(QFocusEvent *focusInEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusInEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(focusInEvent);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::focusInEvent(focusInEvent);
    }

    void PlastiQParentCall_focusInEvent(QFocusEvent *focusInEvent) {
        return QMdiSubWindow::focusInEvent(focusInEvent);
    }

    void focusOutEvent(QFocusEvent *focusOutEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void focusOutEvent(QFocusEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(focusOutEvent);
            stack[1].name = QByteArrayLiteral("QFocusEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::focusOutEvent(focusOutEvent);
    }

    void PlastiQParentCall_focusOutEvent(QFocusEvent *focusOutEvent) {
        return QMdiSubWindow::focusOutEvent(focusOutEvent);
    }

    void hideEvent(QHideEvent *hideEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void hideEvent(QHideEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(hideEvent);
            stack[1].name = QByteArrayLiteral("QHideEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::hideEvent(hideEvent);
    }

    void PlastiQParentCall_hideEvent(QHideEvent *hideEvent) {
        return QMdiSubWindow::hideEvent(hideEvent);
    }

    void keyPressEvent(QKeyEvent *keyEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyPressEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(keyEvent);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::keyPressEvent(keyEvent);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *keyEvent) {
        return QMdiSubWindow::keyPressEvent(keyEvent);
    }

    void leaveEvent(QEvent *leaveEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void leaveEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(leaveEvent);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::leaveEvent(leaveEvent);
    }

    void PlastiQParentCall_leaveEvent(QEvent *leaveEvent) {
        return QMdiSubWindow::leaveEvent(leaveEvent);
    }

    void mouseDoubleClickEvent(QMouseEvent *mouseEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseDoubleClickEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(mouseEvent);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
    }

    void PlastiQParentCall_mouseDoubleClickEvent(QMouseEvent *mouseEvent) {
        return QMdiSubWindow::mouseDoubleClickEvent(mouseEvent);
    }

    void mouseMoveEvent(QMouseEvent *mouseEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(mouseEvent);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::mouseMoveEvent(mouseEvent);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *mouseEvent) {
        return QMdiSubWindow::mouseMoveEvent(mouseEvent);
    }

    void mousePressEvent(QMouseEvent *mouseEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(mouseEvent);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::mousePressEvent(mouseEvent);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *mouseEvent) {
        return QMdiSubWindow::mousePressEvent(mouseEvent);
    }

    void mouseReleaseEvent(QMouseEvent *mouseEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(mouseEvent);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::mouseReleaseEvent(mouseEvent);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *mouseEvent) {
        return QMdiSubWindow::mouseReleaseEvent(mouseEvent);
    }

    void moveEvent(QMoveEvent *moveEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void moveEvent(QMoveEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(moveEvent);
            stack[1].name = QByteArrayLiteral("QMoveEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::moveEvent(moveEvent);
    }

    void PlastiQParentCall_moveEvent(QMoveEvent *moveEvent) {
        return QMdiSubWindow::moveEvent(moveEvent);
    }

    void paintEvent(QPaintEvent *paintEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintEvent(QPaintEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(paintEvent);
            stack[1].name = QByteArrayLiteral("QPaintEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::paintEvent(paintEvent);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *paintEvent) {
        return QMdiSubWindow::paintEvent(paintEvent);
    }

    void resizeEvent(QResizeEvent *resizeEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeEvent(QResizeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(resizeEvent);
            stack[1].name = QByteArrayLiteral("QResizeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::resizeEvent(resizeEvent);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *resizeEvent) {
        return QMdiSubWindow::resizeEvent(resizeEvent);
    }

    void showEvent(QShowEvent *showEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void showEvent(QShowEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(showEvent);
            stack[1].name = QByteArrayLiteral("QShowEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::showEvent(showEvent);
    }

    void PlastiQParentCall_showEvent(QShowEvent *showEvent) {
        return QMdiSubWindow::showEvent(showEvent);
    }

    void timerEvent(QTimerEvent *timerEvent) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(timerEvent);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMdiSubWindow::timerEvent(timerEvent);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *timerEvent) {
        return QMdiSubWindow::timerEvent(timerEvent);
    }

};

void PlastiQQMdiSubWindow::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQMdiSubWindowWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQMdiSubWindowWrapper(); break;
        case 1: o = new PlastiQQMdiSubWindowWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQMdiSubWindowWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQMdiSubWindow *p = new PlastiQQMdiSubWindow();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMdiSubWindow *p = new PlastiQQMdiSubWindow();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 35) {
            id -= 35;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMdiSubWindow *o = sc ? Q_NULLPTR : reinterpret_cast<QMdiSubWindow*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->isShaded();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { int _r = o->keyboardPageStep();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->keyboardSingleStep();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { QMdiArea* _r = o->mdiArea();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMdiArea"; } break;
        case 4: o->setKeyboardPageStep(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setKeyboardSingleStep(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setOption(QMdiSubWindow::SubWindowOption(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setOption(QMdiSubWindow::SubWindowOption(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setSystemMenu(reinterpret_cast<QMenu*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 10: { QMenu* _r = o->systemMenu();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMenu"; } break;
        case 11: { bool _r = o->testOption(QMdiSubWindow::SubWindowOption(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { QWidget* _r = o->widget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 13: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 14: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_childEvent(reinterpret_cast<QChildEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 15: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_closeEvent(reinterpret_cast<QCloseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 16: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_contextMenuEvent(reinterpret_cast<QContextMenuEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 17: { bool _r;
                if (isWrapper) _r = ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r;
                if (isWrapper) _r = ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_eventFilter(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_focusInEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 20: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_focusOutEvent(reinterpret_cast<QFocusEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 21: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_hideEvent(reinterpret_cast<QHideEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 22: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 23: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_leaveEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 24: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_mouseDoubleClickEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 25: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 26: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 27: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 28: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_moveEvent(reinterpret_cast<QMoveEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 29: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 30: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 31: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_showEvent(reinterpret_cast<QShowEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 32: if (isWrapper) ((PlastiQQMdiSubWindowWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 33: o->showShaded();
                stack[0].type = PlastiQ::Void; break;
        case 34: o->showSystemMenu();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMdiSubWindow *o = reinterpret_cast<QMdiSubWindow*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMdiSubWindow::aboutToActivate,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "aboutToActivate", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QMdiSubWindow::windowStateChanged,
            [=](Qt::WindowStates arg0, Qt::WindowStates arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::WindowStates";
                    cstack[1].s_int64 = arg1;
                    cstack[1].type = PlastiQ::Enum; cstack[1].name = "Qt::WindowStates";
                PlastiQ_activate(sender, "windowStateChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMdiSubWindow *o = reinterpret_cast<QMdiSubWindow*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMdiSubWindow *o = reinterpret_cast<QMdiSubWindow*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMdiSubWindow *o = reinterpret_cast<QMdiSubWindow*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMdiSubWindow::~PlastiQQMdiSubWindow() {
    QMdiSubWindow* o = reinterpret_cast<QMdiSubWindow*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

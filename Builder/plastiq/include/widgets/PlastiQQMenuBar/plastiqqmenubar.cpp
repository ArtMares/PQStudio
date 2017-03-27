#include "plastiqmethod.h"
#include "plastiqqmenubar.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QMenuBar> 
#include <QAction>
#include <QRect>
#include <QMenu>
#include <QWidget>
#include <QActionEvent>
#include <QEvent>
#include <QObject>
#include <QFocusEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QTimerEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQMenuBar::plastiqConstructors = {
    { "QMenuBar()", { "QMenuBar", "", "QMenuBar*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMenuBar(QWidget*)", { "QMenuBar", "QWidget*", "QMenuBar*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMenuBar::plastiqMethods = {
    { "actionAt(QPoint&)", { "actionAt", "QPoint&", "QAction*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "actionGeometry(QAction*)", { "actionGeometry", "QAction*", "QRect", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "activeAction()", { "activeAction", "", "QAction*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QString)", { "addAction", "QString&", "QAction*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QString,const QObject*,const char*)", { "addAction", "QString&,QObject*,char*", "QAction*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addMenu(QMenu*)", { "addMenu", "QMenu*", "QAction*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addMenu(QString)", { "addMenu", "QString&", "QMenu*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addMenu(QIcon&,QString)", { "addMenu", "QIcon&,QString&", "QMenu*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addSeparator()", { "addSeparator", "", "QAction*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cornerWidget()", { "cornerWidget", "", "QWidget*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cornerWidget(enum)", { "cornerWidget", "Qt::Corner", "QWidget*", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertMenu(QAction*,QMenu*)", { "insertMenu", "QAction*,QMenu*", "QAction*", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertSeparator(QAction*)", { "insertSeparator", "QAction*", "QAction*", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isDefaultUp()", { "isDefaultUp", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNativeMenuBar()", { "isNativeMenuBar", "", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setActiveAction(QAction*)", { "setActiveAction", "QAction*", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCornerWidget(QWidget*)", { "setCornerWidget", "QWidget*", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCornerWidget(QWidget*,enum)", { "setCornerWidget", "QWidget*,Qt::Corner", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultUp(bool)", { "setDefaultUp", "bool", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNativeMenuBar(bool)", { "setNativeMenuBar", "bool", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionMenuItem*,const QAction*)", { "initStyleOption", "QStyleOptionMenuItem*,QAction*", "void", 21, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "actionEvent(QActionEvent*)", { "actionEvent", "QActionEvent*", "void", 22, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 23, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 24, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "eventFilter(QObject*,QEvent*)", { "eventFilter", "QObject*,QEvent*", "bool", 25, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusInEvent(QFocusEvent*)", { "focusInEvent", "QFocusEvent*", "void", 26, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusOutEvent(QFocusEvent*)", { "focusOutEvent", "QFocusEvent*", "void", 27, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 28, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "leaveEvent(QEvent*)", { "leaveEvent", "QEvent*", "void", 29, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 30, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 31, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 32, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 33, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 34, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 35, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setVisible(bool)", { "setVisible", "bool", "void", 36, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMenuBar::plastiqSignals = {
    { "hovered(QAction*)", { "hovered", "QAction*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "triggered(QAction*)", { "triggered", "QAction*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMenuBar::plastiqProperties = {
    { "defaultUp", { "defaultUp", "bool", "setDefaultUp", "isDefaultUp" } },
    { "nativeMenuBar", { "nativeMenuBar", "bool", "setNativeMenuBar", "isNativeMenuBar" } },

};

QHash<QByteArray, long> PlastiQQMenuBar::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMenuBar::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMenuBar::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQMenuBar::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QMenuBar", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMenuBar::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQMenuBarWrapper : public QMenuBar {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQMenuBarWrapper(QWidget *parent = Q_NULLPTR)
         : QMenuBar(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    void actionEvent(QActionEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void actionEvent(QActionEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QActionEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMenuBar::actionEvent(e);
    }

    void PlastiQParentCall_actionEvent(QActionEvent *e) {
        return QMenuBar::actionEvent(e);
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
        else return QMenuBar::changeEvent(e);
    }

    void PlastiQParentCall_changeEvent(QEvent *e) {
        return QMenuBar::changeEvent(e);
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
        else return QMenuBar::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QMenuBar::event(e);
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
        else return QMenuBar::eventFilter(object,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *object, QEvent *event) {
        return QMenuBar::eventFilter(object,event);
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
        else return QMenuBar::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QMenuBar::keyPressEvent(e);
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
        else return QMenuBar::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QMenuBar::mouseMoveEvent(e);
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
        else return QMenuBar::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QMenuBar::mousePressEvent(e);
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
        else return QMenuBar::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QMenuBar::mouseReleaseEvent(e);
    }

    void paintEvent(QPaintEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void paintEvent(QPaintEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QPaintEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMenuBar::paintEvent(e);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *e) {
        return QMenuBar::paintEvent(e);
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
        else return QMenuBar::timerEvent(e);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *e) {
        return QMenuBar::timerEvent(e);
    }

};

void PlastiQQMenuBar::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQMenuBarWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQMenuBarWrapper(); break;
        case 1: o = new PlastiQQMenuBarWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQMenuBar *p = new PlastiQQMenuBar();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMenuBar *p = new PlastiQQMenuBar();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 37) {
            id -= 37;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMenuBar *o = sc ? Q_NULLPTR : reinterpret_cast<QMenuBar*>(object->plastiq_data());

        switch(id) {
        case 0: { QAction* _r = o->actionAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 1: { /* COPY OBJECT */
            QRect *_r = new QRect(o->actionGeometry(reinterpret_cast<QAction*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { QAction* _r = o->activeAction();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 3: { QAction* _r = o->addAction(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 4: { QAction* _r = o->addAction(stack[1].s_string,
                    reinterpret_cast<const QObject*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 5: { QAction* _r = o->addMenu(reinterpret_cast<QMenu*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 6: { QMenu* _r = o->addMenu(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMenu"; } break;
        case 7: { QMenu* _r = o->addMenu((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMenu"; } break;
        case 8: { QAction* _r = o->addSeparator();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 9: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 10: { QWidget* _r = o->cornerWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 11: { QWidget* _r = o->cornerWidget(Qt::Corner(stack[1].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 12: { QAction* _r = o->insertMenu(reinterpret_cast<QAction*>(stack[1].s_voidp),
                    reinterpret_cast<QMenu*>(stack[2].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 13: { QAction* _r = o->insertSeparator(reinterpret_cast<QAction*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 14: { bool _r = o->isDefaultUp();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r = o->isNativeMenuBar();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: o->setActiveAction(reinterpret_cast<QAction*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setCornerWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setCornerWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::Corner(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setDefaultUp(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setNativeMenuBar(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 21: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 22: if (isWrapper) ((PlastiQQMenuBarWrapper*)o)->PlastiQParentCall_actionEvent(reinterpret_cast<QActionEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 23: if (isWrapper) ((PlastiQQMenuBarWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 24: { bool _r;
                if (isWrapper) _r = ((PlastiQQMenuBarWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 25: { bool _r;
                if (isWrapper) _r = ((PlastiQQMenuBarWrapper*)o)->PlastiQParentCall_eventFilter(reinterpret_cast<QObject*>(stack[1].s_voidp),
                    reinterpret_cast<QEvent*>(stack[2].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 26: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 27: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 28: if (isWrapper) ((PlastiQQMenuBarWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 29: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 30: if (isWrapper) ((PlastiQQMenuBarWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 31: if (isWrapper) ((PlastiQQMenuBarWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 32: if (isWrapper) ((PlastiQQMenuBarWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 33: if (isWrapper) ((PlastiQQMenuBarWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 34: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 35: if (isWrapper) ((PlastiQQMenuBarWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setVisible(stack[1].s_bool);
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

        QMenuBar *o = reinterpret_cast<QMenuBar*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMenuBar::hovered,
            [=](QAction* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QAction";
                PlastiQ_activate(sender, "hovered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QMenuBar::triggered,
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
        QMenuBar *o = reinterpret_cast<QMenuBar*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMenuBar *o = reinterpret_cast<QMenuBar*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMenuBar *o = reinterpret_cast<QMenuBar*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMenuBar::~PlastiQQMenuBar() {
    QMenuBar* o = reinterpret_cast<QMenuBar*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

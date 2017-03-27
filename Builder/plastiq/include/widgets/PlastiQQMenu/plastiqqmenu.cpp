#include "plastiqmethod.h"
#include "plastiqqmenu.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QMenu> 
#include <QAction>
#include <QRect>
#include <QIcon>
#include <QString>
#include <QActionEvent>
#include <QEvent>
#include <QHideEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QTimerEvent>
#include <QWheelEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQMenu::plastiqConstructors = {
    { "QMenu()", { "QMenu", "", "QMenu*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMenu(QWidget*)", { "QMenu", "QWidget*", "QMenu*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMenu(QString)", { "QMenu", "QString&", "QMenu*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMenu(QString,QWidget*)", { "QMenu", "QString&,QWidget*", "QMenu*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMenu::plastiqMethods = {
    { "actionAt(QPoint&)", { "actionAt", "QPoint&", "QAction*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "actionGeometry(QAction*)", { "actionGeometry", "QAction*", "QRect", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "activeAction()", { "activeAction", "", "QAction*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QString)", { "addAction", "QString&", "QAction*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QIcon&,QString)", { "addAction", "QIcon&,QString&", "QAction*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QString,const QObject*,const char*)", { "addAction", "QString&,QObject*,char*", "QAction*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QString,const QObject*,const char*,QKeySequence&)", { "addAction", "QString&,QObject*,char*,QKeySequence&", "QAction*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QIcon&,QString,const QObject*,const char*)", { "addAction", "QIcon&,QString&,QObject*,char*", "QAction*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QIcon&,QString,const QObject*,const char*,QKeySequence&)", { "addAction", "QIcon&,QString&,QObject*,char*,QKeySequence&", "QAction*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QString,const QObject*,PointerToMemberFunction)", { "addAction", "QString&,QObject*,PointerToMemberFunction", "QAction*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QString,const QObject*,PointerToMemberFunction,QKeySequence&)", { "addAction", "QString&,QObject*,PointerToMemberFunction,QKeySequence&", "QAction*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QString,Functor)", { "addAction", "QString&,Functor", "QAction*", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QString,Functor,QKeySequence&)", { "addAction", "QString&,Functor,QKeySequence&", "QAction*", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QString,const QObject*,Functor)", { "addAction", "QString&,QObject*,Functor", "QAction*", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QString,const QObject*,Functor,QKeySequence&)", { "addAction", "QString&,QObject*,Functor,QKeySequence&", "QAction*", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QIcon&,QString,const QObject*,PointerToMemberFunction)", { "addAction", "QIcon&,QString&,QObject*,PointerToMemberFunction", "QAction*", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QIcon&,QString,const QObject*,PointerToMemberFunction,QKeySequence&)", { "addAction", "QIcon&,QString&,QObject*,PointerToMemberFunction,QKeySequence&", "QAction*", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QIcon&,QString,Functor)", { "addAction", "QIcon&,QString&,Functor", "QAction*", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QIcon&,QString,Functor,QKeySequence&)", { "addAction", "QIcon&,QString&,Functor,QKeySequence&", "QAction*", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QIcon&,QString,const QObject*,Functor)", { "addAction", "QIcon&,QString&,QObject*,Functor", "QAction*", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QIcon&,QString,const QObject*,Functor,QKeySequence&)", { "addAction", "QIcon&,QString&,QObject*,Functor,QKeySequence&", "QAction*", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addMenu(QMenu*)", { "addMenu", "QMenu*", "QAction*", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addMenu(QString)", { "addMenu", "QString&", "QMenu*", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addMenu(QIcon&,QString)", { "addMenu", "QIcon&,QString&", "QMenu*", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addSection(QString)", { "addSection", "QString&", "QAction*", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addSection(QIcon&,QString)", { "addSection", "QIcon&,QString&", "QAction*", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addSeparator()", { "addSeparator", "", "QAction*", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultAction()", { "defaultAction", "", "QAction*", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exec()", { "exec", "", "QAction*", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exec(QPoint&)", { "exec", "QPoint&", "QAction*", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exec(QPoint&,QAction*)", { "exec", "QPoint&,QAction*", "QAction*", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hideTearOffMenu()", { "hideTearOffMenu", "", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "icon()", { "icon", "", "QIcon", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertMenu(QAction*,QMenu*)", { "insertMenu", "QAction*,QMenu*", "QAction*", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertSection(QAction*,QString)", { "insertSection", "QAction*,QString&", "QAction*", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertSection(QAction*,QIcon&,QString)", { "insertSection", "QAction*,QIcon&,QString&", "QAction*", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertSeparator(QAction*)", { "insertSeparator", "QAction*", "QAction*", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isTearOffEnabled()", { "isTearOffEnabled", "", "bool", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isTearOffMenuVisible()", { "isTearOffMenuVisible", "", "bool", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "menuAction()", { "menuAction", "", "QAction*", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "popup(QPoint&)", { "popup", "QPoint&", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "popup(QPoint&,QAction*)", { "popup", "QPoint&,QAction*", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "separatorsCollapsible()", { "separatorsCollapsible", "", "bool", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setActiveAction(QAction*)", { "setActiveAction", "QAction*", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultAction(QAction*)", { "setDefaultAction", "QAction*", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIcon(QIcon&)", { "setIcon", "QIcon&", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSeparatorsCollapsible(bool)", { "setSeparatorsCollapsible", "bool", "void", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTearOffEnabled(bool)", { "setTearOffEnabled", "bool", "void", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTitle(QString)", { "setTitle", "QString&", "void", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setToolTipsVisible(bool)", { "setToolTipsVisible", "bool", "void", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "showTearOffMenu(QPoint&)", { "showTearOffMenu", "QPoint&", "void", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "showTearOffMenu()", { "showTearOffMenu", "", "void", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "title()", { "title", "", "QString", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolTipsVisible()", { "toolTipsVisible", "", "bool", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exec(QList<QAction*>,QPoint&)", { "exec", "QList<QAction*>,QPoint&", "QAction*", 56, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "exec(QList<QAction*>,QPoint&,QAction*)", { "exec", "QList<QAction*>,QPoint&,QAction*", "QAction*", 57, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "exec(QList<QAction*>,QPoint&,QAction*,QWidget*)", { "exec", "QList<QAction*>,QPoint&,QAction*,QWidget*", "QAction*", 58, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "columnCount()", { "columnCount", "", "int", 59, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionMenuItem*,const QAction*)", { "initStyleOption", "QStyleOptionMenuItem*,QAction*", "void", 60, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "actionEvent(QActionEvent*)", { "actionEvent", "QActionEvent*", "void", 61, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 62, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "enterEvent(QEvent*)", { "enterEvent", "QEvent*", "void", 63, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 64, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "focusNextPrevChild(bool)", { "focusNextPrevChild", "bool", "bool", 65, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hideEvent(QHideEvent*)", { "hideEvent", "QHideEvent*", "void", 66, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 67, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "leaveEvent(QEvent*)", { "leaveEvent", "QEvent*", "void", 68, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 69, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 70, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 71, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 72, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 73, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "wheelEvent(QWheelEvent*)", { "wheelEvent", "QWheelEvent*", "void", 74, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMenu::plastiqSignals = {
    { "aboutToHide()", { "aboutToHide", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "aboutToShow()", { "aboutToShow", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "hovered(QAction*)", { "hovered", "QAction*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "triggered(QAction*)", { "triggered", "QAction*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMenu::plastiqProperties = {
    { "icon", { "icon", "QIcon", "setIcon", "icon" } },
    { "separatorsCollapsible", { "separatorsCollapsible", "bool", "setSeparatorsCollapsible", "separatorsCollapsible" } },
    { "tearOffEnabled", { "tearOffEnabled", "bool", "setTearOffEnabled", "isTearOffEnabled" } },
    { "title", { "title", "QString", "setTitle", "title" } },
    { "toolTipsVisible", { "toolTipsVisible", "bool", "setToolTipsVisible", "toolTipsVisible" } },

};

QHash<QByteArray, long> PlastiQQMenu::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMenu::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMenu::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQMenu::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QMenu", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMenu::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQMenuWrapper : public QMenu {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQMenuWrapper(QWidget *parent = Q_NULLPTR)
         : QMenu(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQMenuWrapper(const QString &title, QWidget *parent = Q_NULLPTR)
         : QMenu(title,parent),
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
        else return QMenu::actionEvent(e);
    }

    void PlastiQParentCall_actionEvent(QActionEvent *e) {
        return QMenu::actionEvent(e);
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
        else return QMenu::changeEvent(e);
    }

    void PlastiQParentCall_changeEvent(QEvent *e) {
        return QMenu::changeEvent(e);
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
        else return QMenu::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QMenu::event(e);
    }

    bool focusNextPrevChild(bool next) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool focusNextPrevChild(bool)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_bool = next;
            stack[1].name = QByteArrayLiteral("bool");
            stack[1].type = PlastiQ::Bool;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QMenu::focusNextPrevChild(next);
    }

    bool PlastiQParentCall_focusNextPrevChild(bool next) {
        return QMenu::focusNextPrevChild(next);
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
        else return QMenu::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QMenu::keyPressEvent(e);
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
        else return QMenu::mouseMoveEvent(e);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *e) {
        return QMenu::mouseMoveEvent(e);
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
        else return QMenu::mousePressEvent(e);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *e) {
        return QMenu::mousePressEvent(e);
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
        else return QMenu::mouseReleaseEvent(e);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *e) {
        return QMenu::mouseReleaseEvent(e);
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
        else return QMenu::paintEvent(e);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *e) {
        return QMenu::paintEvent(e);
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
        else return QMenu::timerEvent(e);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *e) {
        return QMenu::timerEvent(e);
    }

    void wheelEvent(QWheelEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMenu::wheelEvent(e);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *e) {
        return QMenu::wheelEvent(e);
    }

};

void PlastiQQMenu::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQMenuWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQMenuWrapper(); break;
        case 1: o = new PlastiQQMenuWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQMenuWrapper(stack[1].s_string); break;
        case 3: o = new PlastiQQMenuWrapper(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQMenu *p = new PlastiQQMenu();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMenu *p = new PlastiQQMenu();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 75) {
            id -= 75;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMenu *o = sc ? Q_NULLPTR : reinterpret_cast<QMenu*>(object->plastiq_data());

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
        case 4: { QAction* _r = o->addAction((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 5: { QAction* _r = o->addAction(stack[1].s_string,
                    reinterpret_cast<const QObject*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 6: { QAction* _r = o->addAction(stack[1].s_string,
                    reinterpret_cast<const QObject*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp),
                    (*reinterpret_cast< QKeySequence(*) >(stack[4].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 7: { QAction* _r = o->addAction((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<const QObject*>(stack[3].s_voidp),
                    reinterpret_cast<const char*>(stack[4].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 8: { QAction* _r = o->addAction((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<const QObject*>(stack[3].s_voidp),
                    reinterpret_cast<const char*>(stack[4].s_voidp),
                    (*reinterpret_cast< QKeySequence(*) >(stack[5].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 9: /* o->addAction(stack[1].s_string,
                    reinterpret_cast<const QObject*>(stack[2].s_voidp),
                    UNSUPPORTED_TYPE_PointerToMemberFunction) | ret: `QAction*` */ break;
        case 10: /* o->addAction(stack[1].s_string,
                    reinterpret_cast<const QObject*>(stack[2].s_voidp),
                    UNSUPPORTED_TYPE_PointerToMemberFunction,
                    (*reinterpret_cast< QKeySequence(*) >(stack[4].s_voidp))) | ret: `QAction*` */ break;
        case 11: /* o->addAction(stack[1].s_string,
                    UNSUPPORTED_TYPE_Functor) | ret: `QAction*` */ break;
        case 12: /* o->addAction(stack[1].s_string,
                    UNSUPPORTED_TYPE_Functor,
                    (*reinterpret_cast< QKeySequence(*) >(stack[3].s_voidp))) | ret: `QAction*` */ break;
        case 13: /* o->addAction(stack[1].s_string,
                    reinterpret_cast<const QObject*>(stack[2].s_voidp),
                    UNSUPPORTED_TYPE_Functor) | ret: `QAction*` */ break;
        case 14: /* o->addAction(stack[1].s_string,
                    reinterpret_cast<const QObject*>(stack[2].s_voidp),
                    UNSUPPORTED_TYPE_Functor,
                    (*reinterpret_cast< QKeySequence(*) >(stack[4].s_voidp))) | ret: `QAction*` */ break;
        case 15: /* o->addAction((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<const QObject*>(stack[3].s_voidp),
                    UNSUPPORTED_TYPE_PointerToMemberFunction) | ret: `QAction*` */ break;
        case 16: /* o->addAction((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<const QObject*>(stack[3].s_voidp),
                    UNSUPPORTED_TYPE_PointerToMemberFunction,
                    (*reinterpret_cast< QKeySequence(*) >(stack[5].s_voidp))) | ret: `QAction*` */ break;
        case 17: /* o->addAction((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    UNSUPPORTED_TYPE_Functor) | ret: `QAction*` */ break;
        case 18: /* o->addAction((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    UNSUPPORTED_TYPE_Functor,
                    (*reinterpret_cast< QKeySequence(*) >(stack[4].s_voidp))) | ret: `QAction*` */ break;
        case 19: /* o->addAction((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<const QObject*>(stack[3].s_voidp),
                    UNSUPPORTED_TYPE_Functor) | ret: `QAction*` */ break;
        case 20: /* o->addAction((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<const QObject*>(stack[3].s_voidp),
                    UNSUPPORTED_TYPE_Functor,
                    (*reinterpret_cast< QKeySequence(*) >(stack[5].s_voidp))) | ret: `QAction*` */ break;
        case 21: { QAction* _r = o->addMenu(reinterpret_cast<QMenu*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 22: { QMenu* _r = o->addMenu(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMenu"; } break;
        case 23: { QMenu* _r = o->addMenu((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMenu"; } break;
        case 24: { QAction* _r = o->addSection(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 25: { QAction* _r = o->addSection((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 26: { QAction* _r = o->addSeparator();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 27: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 28: { QAction* _r = o->defaultAction();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 29: { QAction* _r = o->exec();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 30: { QAction* _r = o->exec((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 31: { QAction* _r = o->exec((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QAction*>(stack[2].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 32: o->hideTearOffMenu();
                stack[0].type = PlastiQ::Void; break;
        case 33: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->icon());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 34: { QAction* _r = o->insertMenu(reinterpret_cast<QAction*>(stack[1].s_voidp),
                    reinterpret_cast<QMenu*>(stack[2].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 35: { QAction* _r = o->insertSection(reinterpret_cast<QAction*>(stack[1].s_voidp),
                    stack[2].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 36: { QAction* _r = o->insertSection(reinterpret_cast<QAction*>(stack[1].s_voidp),
                    (*reinterpret_cast< QIcon(*) >(stack[2].s_voidp)),
                    stack[3].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 37: { QAction* _r = o->insertSeparator(reinterpret_cast<QAction*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 38: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 39: { bool _r = o->isTearOffEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 40: { bool _r = o->isTearOffMenuVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 41: { QAction* _r = o->menuAction();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 42: o->popup((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 43: o->popup((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QAction*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 44: { bool _r = o->separatorsCollapsible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 45: o->setActiveAction(reinterpret_cast<QAction*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 46: o->setDefaultAction(reinterpret_cast<QAction*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 47: o->setIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 48: o->setSeparatorsCollapsible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 49: o->setTearOffEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 50: o->setTitle(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 51: o->setToolTipsVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 52: o->showTearOffMenu((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 53: o->showTearOffMenu();
                stack[0].type = PlastiQ::Void; break;
        case 54: { QString _r = o->title();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 55: { bool _r = o->toolTipsVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 56: /* o->exec(UNSUPPORTED_TYPE_QList<QAction*>,
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp))) | ret: `QAction*` */ break;
        case 57: /* o->exec(UNSUPPORTED_TYPE_QList<QAction*>,
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp)),
                    reinterpret_cast<QAction*>(stack[3].s_voidp)) | ret: `QAction*` */ break;
        case 58: /* o->exec(UNSUPPORTED_TYPE_QList<QAction*>,
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp)),
                    reinterpret_cast<QAction*>(stack[3].s_voidp),
                    reinterpret_cast<QWidget*>(stack[4].s_voidp)) | ret: `QAction*` */ break;
        case 59: { int _r; stack[0].type = PlastiQ::Error; } break;
        case 60: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 61: if (isWrapper) ((PlastiQQMenuWrapper*)o)->PlastiQParentCall_actionEvent(reinterpret_cast<QActionEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 62: if (isWrapper) ((PlastiQQMenuWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 63: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 64: { bool _r;
                if (isWrapper) _r = ((PlastiQQMenuWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 65: { bool _r;
                if (isWrapper) _r = ((PlastiQQMenuWrapper*)o)->PlastiQParentCall_focusNextPrevChild(stack[1].s_bool);
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 66: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 67: if (isWrapper) ((PlastiQQMenuWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 68: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 69: if (isWrapper) ((PlastiQQMenuWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 70: if (isWrapper) ((PlastiQQMenuWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 71: if (isWrapper) ((PlastiQQMenuWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 72: if (isWrapper) ((PlastiQQMenuWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 73: if (isWrapper) ((PlastiQQMenuWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 74: if (isWrapper) ((PlastiQQMenuWrapper*)o)->PlastiQParentCall_wheelEvent(reinterpret_cast<QWheelEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 4) {
            id -= 4;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMenu *o = reinterpret_cast<QMenu*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMenu::aboutToHide,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "aboutToHide", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QMenu::aboutToShow,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "aboutToShow", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QMenu::hovered,
            [=](QAction* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QAction";
                PlastiQ_activate(sender, "hovered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QMenu::triggered,
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
        QMenu *o = reinterpret_cast<QMenu*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMenu *o = reinterpret_cast<QMenu*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMenu *o = reinterpret_cast<QMenu*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMenu::~PlastiQQMenu() {
    QMenu* o = reinterpret_cast<QMenu*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

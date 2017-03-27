#include "plastiqmethod.h"
#include "plastiqqmainwindow.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QMainWindow> 
#include <QToolBar>
#include <QWidget>
#include <QMenu>
#include <QSize>
#include <QMenuBar>
#include <QByteArray>
#include <QStatusBar>
#include <QContextMenuEvent>
#include <QEvent>
#include <QDockWidget>

QHash<QByteArray, PlastiQMethod> PlastiQQMainWindow::plastiqConstructors = {
    { "QMainWindow()", { "QMainWindow", "", "QMainWindow*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMainWindow(QWidget*)", { "QMainWindow", "QWidget*", "QMainWindow*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMainWindow(QWidget*,enum)", { "QMainWindow", "QWidget*,Qt::WindowFlags", "QMainWindow*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMainWindow::plastiqMethods = {
    { "addDockWidget(enum,QDockWidget*)", { "addDockWidget", "Qt::DockWidgetArea,QDockWidget*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addDockWidget(enum,QDockWidget*,enum)", { "addDockWidget", "Qt::DockWidgetArea,QDockWidget*,Qt::Orientation", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addToolBar(enum,QToolBar*)", { "addToolBar", "Qt::ToolBarArea,QToolBar*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addToolBar(QToolBar*)", { "addToolBar", "QToolBar*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addToolBar(QString)", { "addToolBar", "QString&", "QToolBar*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addToolBarBreak()", { "addToolBarBreak", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addToolBarBreak(enum)", { "addToolBarBreak", "Qt::ToolBarArea", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "centralWidget()", { "centralWidget", "", "QWidget*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "corner(enum)", { "corner", "Qt::Corner", "Qt::DockWidgetArea", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createPopupMenu()", { "createPopupMenu", "", "QMenu*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dockOptions()", { "dockOptions", "", "DockOptions", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dockWidgetArea(QDockWidget*)", { "dockWidgetArea", "QDockWidget*", "Qt::DockWidgetArea", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "documentMode()", { "documentMode", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconSize()", { "iconSize", "", "QSize", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertToolBar(QToolBar*,QToolBar*)", { "insertToolBar", "QToolBar*,QToolBar*", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertToolBarBreak(QToolBar*)", { "insertToolBarBreak", "QToolBar*", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAnimated()", { "isAnimated", "", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isDockNestingEnabled()", { "isDockNestingEnabled", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "menuBar()", { "menuBar", "", "QMenuBar*", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "menuWidget()", { "menuWidget", "", "QWidget*", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeDockWidget(QDockWidget*)", { "removeDockWidget", "QDockWidget*", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeToolBar(QToolBar*)", { "removeToolBar", "QToolBar*", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeToolBarBreak(QToolBar*)", { "removeToolBarBreak", "QToolBar*", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resizeDocks(QList<QDockWidget*>&,QList<int>&,enum)", { "resizeDocks", "QList<QDockWidget*>&,QList<int>&,Qt::Orientation", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "restoreDockWidget(QDockWidget*)", { "restoreDockWidget", "QDockWidget*", "bool", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "restoreState(QByteArray)", { "restoreState", "QByteArray&", "bool", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "restoreState(QByteArray,int)", { "restoreState", "QByteArray&,int", "bool", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "saveState()", { "saveState", "", "QByteArray", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "saveState(int)", { "saveState", "int", "QByteArray", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCentralWidget(QWidget*)", { "setCentralWidget", "QWidget*", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCorner(enum,enum)", { "setCorner", "Qt::Corner,Qt::DockWidgetArea", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDockOptions(enum)", { "setDockOptions", "DockOptions", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDocumentMode(bool)", { "setDocumentMode", "bool", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIconSize(QSize&)", { "setIconSize", "QSize&", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMenuBar(QMenuBar*)", { "setMenuBar", "QMenuBar*", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMenuWidget(QWidget*)", { "setMenuWidget", "QWidget*", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStatusBar(QStatusBar*)", { "setStatusBar", "QStatusBar*", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabPosition(enum,enum)", { "setTabPosition", "Qt::DockWidgetAreas,QTabWidget::TabPosition", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabShape(enum)", { "setTabShape", "QTabWidget::TabShape", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setToolButtonStyle(enum)", { "setToolButtonStyle", "Qt::ToolButtonStyle", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "splitDockWidget(QDockWidget*,QDockWidget*,enum)", { "splitDockWidget", "QDockWidget*,QDockWidget*,Qt::Orientation", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "statusBar()", { "statusBar", "", "QStatusBar*", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabPosition(enum)", { "tabPosition", "Qt::DockWidgetArea", "QTabWidget::TabPosition", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabShape()", { "tabShape", "", "QTabWidget::TabShape", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabifyDockWidget(QDockWidget*,QDockWidget*)", { "tabifyDockWidget", "QDockWidget*,QDockWidget*", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "takeCentralWidget()", { "takeCentralWidget", "", "QWidget*", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolBarArea(QToolBar*)", { "toolBarArea", "QToolBar*", "Qt::ToolBarArea", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolBarBreak(QToolBar*)", { "toolBarBreak", "QToolBar*", "bool", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolButtonStyle()", { "toolButtonStyle", "", "Qt::ToolButtonStyle", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unifiedTitleAndToolBarOnMac()", { "unifiedTitleAndToolBarOnMac", "", "bool", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contextMenuEvent(QContextMenuEvent*)", { "contextMenuEvent", "QContextMenuEvent*", "void", 50, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 51, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setAnimated(bool)", { "setAnimated", "bool", "void", 52, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setDockNestingEnabled(bool)", { "setDockNestingEnabled", "bool", "void", 53, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setUnifiedTitleAndToolBarOnMac(bool)", { "setUnifiedTitleAndToolBarOnMac", "bool", "void", 54, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMainWindow::plastiqSignals = {
    { "iconSizeChanged(QSize&)", { "iconSizeChanged", "QSize&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "tabifiedDockWidgetActivated(QDockWidget*)", { "tabifiedDockWidgetActivated", "QDockWidget*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "toolButtonStyleChanged(enum)", { "toolButtonStyleChanged", "Qt::ToolButtonStyle", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMainWindow::plastiqProperties = {
    { "animated", { "animated", "bool", "setAnimated", "isAnimated" } },
    { "dockNestingEnabled", { "dockNestingEnabled", "bool", "setDockNestingEnabled", "isDockNestingEnabled" } },
    { "dockOptions", { "dockOptions", "long", "setDockOptions", "dockOptions" } },
    { "documentMode", { "documentMode", "bool", "setDocumentMode", "documentMode" } },
    { "iconSize", { "iconSize", "QSize", "setIconSize", "iconSize" } },
    { "tabShape", { "tabShape", "long", "setTabShape", "tabShape" } },
    { "toolButtonStyle", { "toolButtonStyle", "long", "setToolButtonStyle", "toolButtonStyle" } },
    { "unifiedTitleAndToolBarOnMac", { "unifiedTitleAndToolBarOnMac", "bool", "setUnifiedTitleAndToolBarOnMac", "unifiedTitleAndToolBarOnMac" } },

};

QHash<QByteArray, long> PlastiQQMainWindow::plastiqConstants = {

    /* QMainWindow::DockOption */
   { "AnimatedDocks", QMainWindow::AnimatedDocks },
   { "AllowNestedDocks", QMainWindow::AllowNestedDocks },
   { "AllowTabbedDocks", QMainWindow::AllowTabbedDocks },
   { "ForceTabbedDocks", QMainWindow::ForceTabbedDocks },
   { "VerticalTabs", QMainWindow::VerticalTabs },
   { "GroupedDragging", QMainWindow::GroupedDragging },

};

QVector<PlastiQMetaObject*> PlastiQQMainWindow::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMainWindow::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQMainWindow::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QMainWindow", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMainWindow::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQMainWindowWrapper : public QMainWindow {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQMainWindowWrapper(QWidget *parent = Q_NULLPTR, Qt::WindowFlags flags = Qt::WindowFlags())
         : QMainWindow(parent,flags),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QMenu* createPopupMenu() override {
        static const QByteArray methodSignature = QByteArrayLiteral("QMenu* createPopupMenu()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMenu* _r = reinterpret_cast<QMenu*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QMainWindow::createPopupMenu();
    }

    QMenu* PlastiQParentCall_createPopupMenu() {
        return QMainWindow::createPopupMenu();
    }

    void contextMenuEvent(QContextMenuEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void contextMenuEvent(QContextMenuEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QContextMenuEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMainWindow::contextMenuEvent(event);
    }

    void PlastiQParentCall_contextMenuEvent(QContextMenuEvent *event) {
        return QMainWindow::contextMenuEvent(event);
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
        else return QMainWindow::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QMainWindow::event(event);
    }

};

void PlastiQQMainWindow::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQMainWindowWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQMainWindowWrapper(); break;
        case 1: o = new PlastiQQMainWindowWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQMainWindowWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQMainWindow *p = new PlastiQQMainWindow();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMainWindow *p = new PlastiQQMainWindow();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 55) {
            id -= 55;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMainWindow *o = sc ? Q_NULLPTR : reinterpret_cast<QMainWindow*>(object->plastiq_data());

        switch(id) {
        case 0: o->addDockWidget(Qt::DockWidgetArea(stack[1].s_int64),
                    reinterpret_cast<QDockWidget*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addDockWidget(Qt::DockWidgetArea(stack[1].s_int64),
                    reinterpret_cast<QDockWidget*>(stack[2].s_voidp),
                    Qt::Orientation(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->addToolBar(Qt::ToolBarArea(stack[1].s_int64),
                    reinterpret_cast<QToolBar*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->addToolBar(reinterpret_cast<QToolBar*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 4: { QToolBar* _r = o->addToolBar(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QToolBar"; } break;
        case 5: o->addToolBarBreak();
                stack[0].type = PlastiQ::Void; break;
        case 6: o->addToolBarBreak(Qt::ToolBarArea(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 7: { QWidget* _r = o->centralWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 8: { qint64 _r = o->corner(Qt::Corner(stack[1].s_int64)); // HACK for Qt::DockWidgetArea 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { QMenu* _r;
                if (isWrapper) _r = ((PlastiQQMainWindowWrapper*)o)->PlastiQParentCall_createPopupMenu();
                else _r = o->createPopupMenu();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMenu"; } break;
        case 10: { qint64 _r = o->dockOptions(); // HACK for DockOptions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: { qint64 _r = o->dockWidgetArea(reinterpret_cast<QDockWidget*>(stack[1].s_voidp)); // HACK for Qt::DockWidgetArea 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 12: { bool _r = o->documentMode();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { /* COPY OBJECT */
            QSize *_r = new QSize(o->iconSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: o->insertToolBar(reinterpret_cast<QToolBar*>(stack[1].s_voidp),
                    reinterpret_cast<QToolBar*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->insertToolBarBreak(reinterpret_cast<QToolBar*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 16: { bool _r = o->isAnimated();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = o->isDockNestingEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { QMenuBar* _r = o->menuBar();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMenuBar"; } break;
        case 19: { QWidget* _r = o->menuWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 20: o->removeDockWidget(reinterpret_cast<QDockWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->removeToolBar(reinterpret_cast<QToolBar*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->removeToolBarBreak(reinterpret_cast<QToolBar*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->resizeDocks((*reinterpret_cast< QList<QDockWidget*>(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QList<int>(*) >(stack[2].s_voidp)),
                    Qt::Orientation(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 24: { bool _r = o->restoreDockWidget(reinterpret_cast<QDockWidget*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 25: { bool _r = o->restoreState(stack[1].s_bytearray);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 26: { bool _r = o->restoreState(stack[1].s_bytearray,
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 27: { QByteArray _r = o->saveState();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 28: { QByteArray _r = o->saveState(stack[1].s_int);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 29: o->setCentralWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setCorner(Qt::Corner(stack[1].s_int64),
                    Qt::DockWidgetArea(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setDockOptions(QMainWindow::DockOptions(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setDocumentMode(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setIconSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setMenuBar(reinterpret_cast<QMenuBar*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setMenuWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setStatusBar(reinterpret_cast<QStatusBar*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setTabPosition(Qt::DockWidgetAreas(stack[1].s_int64),
                    QTabWidget::TabPosition(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setTabShape(QTabWidget::TabShape(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setToolButtonStyle(Qt::ToolButtonStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 40: o->splitDockWidget(reinterpret_cast<QDockWidget*>(stack[1].s_voidp),
                    reinterpret_cast<QDockWidget*>(stack[2].s_voidp),
                    Qt::Orientation(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 41: { QStatusBar* _r = o->statusBar();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QStatusBar"; } break;
        case 42: { qint64 _r = o->tabPosition(Qt::DockWidgetArea(stack[1].s_int64)); // HACK for QTabWidget::TabPosition 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 43: { qint64 _r = o->tabShape(); // HACK for QTabWidget::TabShape 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 44: o->tabifyDockWidget(reinterpret_cast<QDockWidget*>(stack[1].s_voidp),
                    reinterpret_cast<QDockWidget*>(stack[2].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 45: { QWidget* _r = o->takeCentralWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 46: { qint64 _r = o->toolBarArea(reinterpret_cast<QToolBar*>(stack[1].s_voidp)); // HACK for Qt::ToolBarArea 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 47: { bool _r = o->toolBarBreak(reinterpret_cast<QToolBar*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 48: { qint64 _r = o->toolButtonStyle(); // HACK for Qt::ToolButtonStyle 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 49: { bool _r = o->unifiedTitleAndToolBarOnMac();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 50: if (isWrapper) ((PlastiQQMainWindowWrapper*)o)->PlastiQParentCall_contextMenuEvent(reinterpret_cast<QContextMenuEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 51: { bool _r;
                if (isWrapper) _r = ((PlastiQQMainWindowWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 52: o->setAnimated(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 53: o->setDockNestingEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 54: o->setUnifiedTitleAndToolBarOnMac(stack[1].s_bool);
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

        QMainWindow *o = reinterpret_cast<QMainWindow*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QMainWindow::iconSizeChanged,
            [=](const QSize& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QSize(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QSize";
                PlastiQ_activate(sender, "iconSizeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QMainWindow::tabifiedDockWidgetActivated,
            [=](QDockWidget* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QDockWidget";
                PlastiQ_activate(sender, "tabifiedDockWidgetActivated", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QMainWindow::toolButtonStyleChanged,
            [=](Qt::ToolButtonStyle arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::ToolButtonStyle";
                PlastiQ_activate(sender, "toolButtonStyleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMainWindow *o = reinterpret_cast<QMainWindow*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMainWindow *o = reinterpret_cast<QMainWindow*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMainWindow *o = reinterpret_cast<QMainWindow*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMainWindow::~PlastiQQMainWindow() {
    QMainWindow* o = reinterpret_cast<QMainWindow*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

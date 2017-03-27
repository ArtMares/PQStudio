#include "plastiqmethod.h"
#include "plastiqqtabbar.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QTabBar> 
#include <QString>
#include <QSize>
#include <QWidget>
#include <QVariant>
#include <QIcon>
#include <QRect>
#include <QColor>
#include <QEvent>
#include <QHideEvent>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QTimerEvent>
#include <QWheelEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQTabBar::plastiqConstructors = {
    { "QTabBar()", { "QTabBar", "", "QTabBar*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTabBar(QWidget*)", { "QTabBar", "QWidget*", "QTabBar*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTabBar::plastiqMethods = {
    { "accessibleTabName(int)", { "accessibleTabName", "int", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addTab(QString)", { "addTab", "QString&", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addTab(QIcon&,QString)", { "addTab", "QIcon&,QString&", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "autoHide()", { "autoHide", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "changeCurrentOnDrag()", { "changeCurrentOnDrag", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentIndex()", { "currentIndex", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "documentMode()", { "documentMode", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "drawBase()", { "drawBase", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "elideMode()", { "elideMode", "", "Qt::TextElideMode", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "expanding()", { "expanding", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconSize()", { "iconSize", "", "QSize", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertTab(int,QString)", { "insertTab", "int,QString&", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertTab(int,QIcon&,QString)", { "insertTab", "int,QIcon&,QString&", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMovable()", { "isMovable", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isTabEnabled(int)", { "isTabEnabled", "int", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "moveTab(int,int)", { "moveTab", "int,int", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeTab(int)", { "removeTab", "int", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "selectionBehaviorOnRemove()", { "selectionBehaviorOnRemove", "", "SelectionBehavior", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAccessibleTabName(int,QString)", { "setAccessibleTabName", "int,QString&", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoHide(bool)", { "setAutoHide", "bool", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setChangeCurrentOnDrag(bool)", { "setChangeCurrentOnDrag", "bool", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDocumentMode(bool)", { "setDocumentMode", "bool", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDrawBase(bool)", { "setDrawBase", "bool", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setElideMode(enum)", { "setElideMode", "Qt::TextElideMode", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setExpanding(bool)", { "setExpanding", "bool", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIconSize(QSize&)", { "setIconSize", "QSize&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMovable(bool)", { "setMovable", "bool", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSelectionBehaviorOnRemove(enum)", { "setSelectionBehaviorOnRemove", "SelectionBehavior", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShape(enum)", { "setShape", "Shape", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabButton(int,enum,QWidget*)", { "setTabButton", "int,ButtonPosition,QWidget*", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabData(int,QVariant)", { "setTabData", "int,QVariant&", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabEnabled(int,bool)", { "setTabEnabled", "int,bool", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabIcon(int,QIcon&)", { "setTabIcon", "int,QIcon&", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabText(int,QString)", { "setTabText", "int,QString&", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabTextColor(int,QColor&)", { "setTabTextColor", "int,QColor&", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabToolTip(int,QString)", { "setTabToolTip", "int,QString&", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabWhatsThis(int,QString)", { "setTabWhatsThis", "int,QString&", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabsClosable(bool)", { "setTabsClosable", "bool", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUsesScrollButtons(bool)", { "setUsesScrollButtons", "bool", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shape()", { "shape", "", "Shape", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabAt(QPoint&)", { "tabAt", "QPoint&", "int", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabButton(int,enum)", { "tabButton", "int,ButtonPosition", "QWidget*", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabData(int)", { "tabData", "int", "QVariant", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabIcon(int)", { "tabIcon", "int", "QIcon", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabRect(int)", { "tabRect", "int", "QRect", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabText(int)", { "tabText", "int", "QString", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabTextColor(int)", { "tabTextColor", "int", "QColor", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabToolTip(int)", { "tabToolTip", "int", "QString", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabWhatsThis(int)", { "tabWhatsThis", "int", "QString", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabsClosable()", { "tabsClosable", "", "bool", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "usesScrollButtons()", { "usesScrollButtons", "", "bool", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionTab*,int)", { "initStyleOption", "QStyleOptionTab*,int", "void", 52, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "minimumTabSizeHint(int)", { "minimumTabSizeHint", "int", "QSize", 53, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "tabInserted(int)", { "tabInserted", "int", "void", 54, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "tabLayoutChange()", { "tabLayoutChange", "", "void", 55, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "tabRemoved(int)", { "tabRemoved", "int", "void", 56, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "tabSizeHint(int)", { "tabSizeHint", "int", "QSize", 57, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 58, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 59, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hideEvent(QHideEvent*)", { "hideEvent", "QHideEvent*", "void", 60, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 61, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseMoveEvent(QMouseEvent*)", { "mouseMoveEvent", "QMouseEvent*", "void", 62, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mousePressEvent(QMouseEvent*)", { "mousePressEvent", "QMouseEvent*", "void", 63, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "mouseReleaseEvent(QMouseEvent*)", { "mouseReleaseEvent", "QMouseEvent*", "void", 64, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 65, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 66, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 67, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "timerEvent(QTimerEvent*)", { "timerEvent", "QTimerEvent*", "void", 68, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "wheelEvent(QWheelEvent*)", { "wheelEvent", "QWheelEvent*", "void", 69, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setCurrentIndex(int)", { "setCurrentIndex", "int", "void", 70, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTabBar::plastiqSignals = {
    { "currentChanged(int)", { "currentChanged", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "tabBarClicked(int)", { "tabBarClicked", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "tabBarDoubleClicked(int)", { "tabBarDoubleClicked", "int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "tabCloseRequested(int)", { "tabCloseRequested", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "tabMoved(int,int)", { "tabMoved", "int,int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQTabBar::plastiqProperties = {
    { "autoHide", { "autoHide", "bool", "setAutoHide", "autoHide" } },
    { "changeCurrentOnDrag", { "changeCurrentOnDrag", "bool", "setChangeCurrentOnDrag", "changeCurrentOnDrag" } },
    { "count", { "count", "int", "", "count" } },
    { "currentIndex", { "currentIndex", "int", "setCurrentIndex", "currentIndex" } },
    { "documentMode", { "documentMode", "bool", "setDocumentMode", "documentMode" } },
    { "drawBase", { "drawBase", "bool", "setDrawBase", "drawBase" } },
    { "elideMode", { "elideMode", "long", "setElideMode", "elideMode" } },
    { "expanding", { "expanding", "bool", "setExpanding", "expanding" } },
    { "iconSize", { "iconSize", "QSize", "setIconSize", "iconSize" } },
    { "movable", { "movable", "bool", "setMovable", "isMovable" } },
    { "selectionBehaviorOnRemove", { "selectionBehaviorOnRemove", "long", "setSelectionBehaviorOnRemove", "selectionBehaviorOnRemove" } },
    { "shape", { "shape", "long", "setShape", "shape" } },
    { "tabsClosable", { "tabsClosable", "bool", "setTabsClosable", "tabsClosable" } },
    { "usesScrollButtons", { "usesScrollButtons", "bool", "setUsesScrollButtons", "usesScrollButtons" } },

};

QHash<QByteArray, long> PlastiQQTabBar::plastiqConstants = {

    /* QTabBar::ButtonPosition */
   { "LeftSide", QTabBar::LeftSide },
   { "RightSide", QTabBar::RightSide },

    /* QTabBar::SelectionBehavior */
   { "SelectLeftTab", QTabBar::SelectLeftTab },
   { "SelectRightTab", QTabBar::SelectRightTab },
   { "SelectPreviousTab", QTabBar::SelectPreviousTab },

    /* QTabBar::Shape */
   { "RoundedNorth", QTabBar::RoundedNorth },
   { "RoundedSouth", QTabBar::RoundedSouth },
   { "RoundedWest", QTabBar::RoundedWest },
   { "RoundedEast", QTabBar::RoundedEast },
   { "TriangularNorth", QTabBar::TriangularNorth },
   { "TriangularSouth", QTabBar::TriangularSouth },
   { "TriangularWest", QTabBar::TriangularWest },
   { "TriangularEast", QTabBar::TriangularEast },

};

QVector<PlastiQMetaObject*> PlastiQQTabBar::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTabBar::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQTabBar::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QTabBar", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTabBar::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQTabBarWrapper : public QTabBar {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQTabBarWrapper(QWidget *parent = Q_NULLPTR)
         : QTabBar(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    QSize minimumTabSizeHint(int index) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSize minimumTabSizeHint(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = index;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSize _r = QSize(*reinterpret_cast<QSize*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QTabBar::minimumTabSizeHint(index);
    }

    QSize PlastiQParentCall_minimumTabSizeHint(int index) const {
        return QTabBar::minimumTabSizeHint(index);
    }

    void tabInserted(int index) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void tabInserted(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = index;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTabBar::tabInserted(index);
    }

    void PlastiQParentCall_tabInserted(int index) {
        return QTabBar::tabInserted(index);
    }

    void tabLayoutChange() override {
        static const QByteArray methodSignature = QByteArrayLiteral("void tabLayoutChange()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTabBar::tabLayoutChange();
    }

    void PlastiQParentCall_tabLayoutChange() {
        return QTabBar::tabLayoutChange();
    }

    void tabRemoved(int index) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void tabRemoved(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = index;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTabBar::tabRemoved(index);
    }

    void PlastiQParentCall_tabRemoved(int index) {
        return QTabBar::tabRemoved(index);
    }

    QSize tabSizeHint(int index) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QSize tabSizeHint(int)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int = index;
            stack[1].name = QByteArrayLiteral("int");
            stack[1].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QSize _r = QSize(*reinterpret_cast<QSize*>(stack[0].s_voidp)); 
            delete [] stack;
            return _r;
        }
        else return QTabBar::tabSizeHint(index);
    }

    QSize PlastiQParentCall_tabSizeHint(int index) const {
        return QTabBar::tabSizeHint(index);
    }

    void changeEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void changeEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTabBar::changeEvent(event);
    }

    void PlastiQParentCall_changeEvent(QEvent *event) {
        return QTabBar::changeEvent(event);
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
        else return QTabBar::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QTabBar::event(event);
    }

    void keyPressEvent(QKeyEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void keyPressEvent(QKeyEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QKeyEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTabBar::keyPressEvent(event);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *event) {
        return QTabBar::keyPressEvent(event);
    }

    void mouseMoveEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseMoveEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTabBar::mouseMoveEvent(event);
    }

    void PlastiQParentCall_mouseMoveEvent(QMouseEvent *event) {
        return QTabBar::mouseMoveEvent(event);
    }

    void mousePressEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mousePressEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTabBar::mousePressEvent(event);
    }

    void PlastiQParentCall_mousePressEvent(QMouseEvent *event) {
        return QTabBar::mousePressEvent(event);
    }

    void mouseReleaseEvent(QMouseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void mouseReleaseEvent(QMouseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QMouseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTabBar::mouseReleaseEvent(event);
    }

    void PlastiQParentCall_mouseReleaseEvent(QMouseEvent *event) {
        return QTabBar::mouseReleaseEvent(event);
    }

    void timerEvent(QTimerEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTabBar::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QTabBar::timerEvent(event);
    }

    void wheelEvent(QWheelEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void wheelEvent(QWheelEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QWheelEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTabBar::wheelEvent(event);
    }

    void PlastiQParentCall_wheelEvent(QWheelEvent *event) {
        return QTabBar::wheelEvent(event);
    }

};

void PlastiQQTabBar::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQTabBarWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQTabBarWrapper(); break;
        case 1: o = new PlastiQQTabBarWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQTabBar *p = new PlastiQQTabBar();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTabBar *p = new PlastiQQTabBar();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 71) {
            id -= 71;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTabBar *o = sc ? Q_NULLPTR : reinterpret_cast<QTabBar*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->accessibleTabName(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { int _r = o->addTab(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->addTab((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { bool _r = o->autoHide();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->changeCurrentOnDrag();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { int _r = o->currentIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { bool _r = o->documentMode();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->drawBase();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { qint64 _r = o->elideMode(); // HACK for Qt::TextElideMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: { bool _r = o->expanding();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { /* COPY OBJECT */
            QSize *_r = new QSize(o->iconSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { int _r = o->insertTab(stack[1].s_int,
                    stack[2].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { int _r = o->insertTab(stack[1].s_int,
                    (*reinterpret_cast< QIcon(*) >(stack[2].s_voidp)),
                    stack[3].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { bool _r = o->isMovable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r = o->isTabEnabled(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: o->moveTab(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->removeTab(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 18: { qint64 _r = o->selectionBehaviorOnRemove(); // HACK for SelectionBehavior 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 19: o->setAccessibleTabName(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setAutoHide(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setChangeCurrentOnDrag(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setDocumentMode(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setDrawBase(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setElideMode(Qt::TextElideMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setExpanding(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setIconSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setMovable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setSelectionBehaviorOnRemove(QTabBar::SelectionBehavior(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setShape(QTabBar::Shape(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setTabButton(stack[1].s_int,
                    QTabBar::ButtonPosition(stack[2].s_int64),
                    reinterpret_cast<QWidget*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setTabData(stack[1].s_int,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setTabEnabled(stack[1].s_int,
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setTabIcon(stack[1].s_int,
                    (*reinterpret_cast< QIcon(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setTabText(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setTabTextColor(stack[1].s_int,
                    (*reinterpret_cast< QColor(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setTabToolTip(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setTabWhatsThis(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setTabsClosable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setUsesScrollButtons(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 40: { qint64 _r = o->shape(); // HACK for Shape 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 41: { int _r = o->tabAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 42: { QWidget* _r = o->tabButton(stack[1].s_int,
                    QTabBar::ButtonPosition(stack[2].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 43: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->tabData(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 44: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->tabIcon(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 45: { /* COPY OBJECT */
            QRect *_r = new QRect(o->tabRect(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 46: { QString _r = o->tabText(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 47: { /* COPY OBJECT */
            QColor *_r = new QColor(o->tabTextColor(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 48: { QString _r = o->tabToolTip(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 49: { QString _r = o->tabWhatsThis(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 50: { bool _r = o->tabsClosable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 51: { bool _r = o->usesScrollButtons();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 52: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 53: { /* COPY OBJECT */
            QSize *_r;
                if (isWrapper) _r = new QSize(((PlastiQQTabBarWrapper*)o)->PlastiQParentCall_minimumTabSizeHint(stack[1].s_int));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 54: if (isWrapper) ((PlastiQQTabBarWrapper*)o)->PlastiQParentCall_tabInserted(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 55: if (isWrapper) ((PlastiQQTabBarWrapper*)o)->PlastiQParentCall_tabLayoutChange();
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 56: if (isWrapper) ((PlastiQQTabBarWrapper*)o)->PlastiQParentCall_tabRemoved(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 57: { /* COPY OBJECT */
            QSize *_r;
                if (isWrapper) _r = new QSize(((PlastiQQTabBarWrapper*)o)->PlastiQParentCall_tabSizeHint(stack[1].s_int));
                else { stack[0].type = PlastiQ::Error; return; }
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 58: if (isWrapper) ((PlastiQQTabBarWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 59: { bool _r;
                if (isWrapper) _r = ((PlastiQQTabBarWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 60: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 61: if (isWrapper) ((PlastiQQTabBarWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 62: if (isWrapper) ((PlastiQQTabBarWrapper*)o)->PlastiQParentCall_mouseMoveEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 63: if (isWrapper) ((PlastiQQTabBarWrapper*)o)->PlastiQParentCall_mousePressEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 64: if (isWrapper) ((PlastiQQTabBarWrapper*)o)->PlastiQParentCall_mouseReleaseEvent(reinterpret_cast<QMouseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 65: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 66: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 67: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 68: if (isWrapper) ((PlastiQQTabBarWrapper*)o)->PlastiQParentCall_timerEvent(reinterpret_cast<QTimerEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 69: if (isWrapper) ((PlastiQQTabBarWrapper*)o)->PlastiQParentCall_wheelEvent(reinterpret_cast<QWheelEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 70: o->setCurrentIndex(stack[1].s_int);
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

        QTabBar *o = reinterpret_cast<QTabBar*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QTabBar::currentChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "currentChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QTabBar::tabBarClicked,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "tabBarClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QTabBar::tabBarDoubleClicked,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "tabBarDoubleClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QTabBar::tabCloseRequested,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "tabCloseRequested", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QTabBar::tabMoved,
            [=](int arg0, int arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                    cstack[1].s_int = arg1;
                    cstack[1].type = PlastiQ::Int; cstack[1].name = "int";
                PlastiQ_activate(sender, "tabMoved", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QTabBar *o = reinterpret_cast<QTabBar*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTabBar *o = reinterpret_cast<QTabBar*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTabBar *o = reinterpret_cast<QTabBar*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTabBar::~PlastiQQTabBar() {
    QTabBar* o = reinterpret_cast<QTabBar*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

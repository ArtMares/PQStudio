#include "plastiqmethod.h"
#include "plastiqqtabwidget.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QTabWidget> 
#include <QWidget>
#include <QSize>
#include <QTabBar>
#include <QIcon>
#include <QString>
#include <QEvent>
#include <QKeyEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQTabWidget::plastiqConstructors = {
    { "QTabWidget()", { "QTabWidget", "", "QTabWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTabWidget(QWidget*)", { "QTabWidget", "QWidget*", "QTabWidget*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTabWidget::plastiqMethods = {
    { "addTab(QWidget*,QString)", { "addTab", "QWidget*,QString&", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addTab(QWidget*,QIcon&,QString)", { "addTab", "QWidget*,QIcon&,QString&", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cornerWidget()", { "cornerWidget", "", "QWidget*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cornerWidget(enum)", { "cornerWidget", "Qt::Corner", "QWidget*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentIndex()", { "currentIndex", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "currentWidget()", { "currentWidget", "", "QWidget*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "documentMode()", { "documentMode", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "elideMode()", { "elideMode", "", "Qt::TextElideMode", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconSize()", { "iconSize", "", "QSize", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QWidget*)", { "indexOf", "QWidget*", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertTab(int,QWidget*,QString)", { "insertTab", "int,QWidget*,QString&", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertTab(int,QWidget*,QIcon&,QString)", { "insertTab", "int,QWidget*,QIcon&,QString&", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMovable()", { "isMovable", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isTabEnabled(int)", { "isTabEnabled", "int", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeTab(int)", { "removeTab", "int", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCornerWidget(QWidget*)", { "setCornerWidget", "QWidget*", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCornerWidget(QWidget*,enum)", { "setCornerWidget", "QWidget*,Qt::Corner", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDocumentMode(bool)", { "setDocumentMode", "bool", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setElideMode(enum)", { "setElideMode", "Qt::TextElideMode", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIconSize(QSize&)", { "setIconSize", "QSize&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMovable(bool)", { "setMovable", "bool", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabBarAutoHide(bool)", { "setTabBarAutoHide", "bool", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabEnabled(int,bool)", { "setTabEnabled", "int,bool", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabIcon(int,QIcon&)", { "setTabIcon", "int,QIcon&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabPosition(enum)", { "setTabPosition", "TabPosition", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabShape(enum)", { "setTabShape", "TabShape", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabText(int,QString)", { "setTabText", "int,QString&", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabToolTip(int,QString)", { "setTabToolTip", "int,QString&", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabWhatsThis(int,QString)", { "setTabWhatsThis", "int,QString&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTabsClosable(bool)", { "setTabsClosable", "bool", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUsesScrollButtons(bool)", { "setUsesScrollButtons", "bool", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabBar()", { "tabBar", "", "QTabBar*", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabBarAutoHide()", { "tabBarAutoHide", "", "bool", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabIcon(int)", { "tabIcon", "int", "QIcon", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabPosition()", { "tabPosition", "", "TabPosition", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabShape()", { "tabShape", "", "TabShape", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabText(int)", { "tabText", "int", "QString", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabToolTip(int)", { "tabToolTip", "int", "QString", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabWhatsThis(int)", { "tabWhatsThis", "int", "QString", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tabsClosable()", { "tabsClosable", "", "bool", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "usesScrollButtons()", { "usesScrollButtons", "", "bool", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "widget(int)", { "widget", "int", "QWidget*", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionTabWidgetFrame*)", { "initStyleOption", "QStyleOptionTabWidgetFrame*", "void", 44, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "setTabBar(QTabBar*)", { "setTabBar", "QTabBar*", "void", 45, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "tabInserted(int)", { "tabInserted", "int", "void", 46, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "tabRemoved(int)", { "tabRemoved", "int", "void", 47, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 48, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 49, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "keyPressEvent(QKeyEvent*)", { "keyPressEvent", "QKeyEvent*", "void", 50, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 51, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "resizeEvent(QResizeEvent*)", { "resizeEvent", "QResizeEvent*", "void", 52, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "showEvent(QShowEvent*)", { "showEvent", "QShowEvent*", "void", 53, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setCurrentIndex(int)", { "setCurrentIndex", "int", "void", 54, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setCurrentWidget(QWidget*)", { "setCurrentWidget", "QWidget*", "void", 55, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTabWidget::plastiqSignals = {
    { "currentChanged(int)", { "currentChanged", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "tabBarClicked(int)", { "tabBarClicked", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "tabBarDoubleClicked(int)", { "tabBarDoubleClicked", "int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "tabCloseRequested(int)", { "tabCloseRequested", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQTabWidget::plastiqProperties = {
    { "count", { "count", "int", "", "count" } },
    { "currentIndex", { "currentIndex", "int", "setCurrentIndex", "currentIndex" } },
    { "documentMode", { "documentMode", "bool", "setDocumentMode", "documentMode" } },
    { "elideMode", { "elideMode", "long", "setElideMode", "elideMode" } },
    { "iconSize", { "iconSize", "QSize", "setIconSize", "iconSize" } },
    { "movable", { "movable", "bool", "setMovable", "isMovable" } },
    { "tabBarAutoHide", { "tabBarAutoHide", "bool", "setTabBarAutoHide", "tabBarAutoHide" } },
    { "tabPosition", { "tabPosition", "long", "setTabPosition", "tabPosition" } },
    { "tabShape", { "tabShape", "long", "setTabShape", "tabShape" } },
    { "tabsClosable", { "tabsClosable", "bool", "setTabsClosable", "tabsClosable" } },
    { "usesScrollButtons", { "usesScrollButtons", "bool", "setUsesScrollButtons", "usesScrollButtons" } },

};

QHash<QByteArray, long> PlastiQQTabWidget::plastiqConstants = {

    /* QTabWidget::TabPosition */
   { "North", QTabWidget::North },
   { "South", QTabWidget::South },
   { "West", QTabWidget::West },
   { "East", QTabWidget::East },

    /* QTabWidget::TabShape */
   { "Rounded", QTabWidget::Rounded },
   { "Triangular", QTabWidget::Triangular },

};

QVector<PlastiQMetaObject*> PlastiQQTabWidget::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTabWidget::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQTabWidget::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QTabWidget", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTabWidget::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQTabWidgetWrapper : public QTabWidget {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQTabWidgetWrapper(QWidget *parent = Q_NULLPTR)
         : QTabWidget(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


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
        else return QTabWidget::tabInserted(index);
    }

    void PlastiQParentCall_tabInserted(int index) {
        return QTabWidget::tabInserted(index);
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
        else return QTabWidget::tabRemoved(index);
    }

    void PlastiQParentCall_tabRemoved(int index) {
        return QTabWidget::tabRemoved(index);
    }

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
        else return QTabWidget::changeEvent(ev);
    }

    void PlastiQParentCall_changeEvent(QEvent *ev) {
        return QTabWidget::changeEvent(ev);
    }

    bool event(QEvent *ev) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(ev);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QTabWidget::event(ev);
    }

    bool PlastiQParentCall_event(QEvent *ev) {
        return QTabWidget::event(ev);
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
        else return QTabWidget::keyPressEvent(e);
    }

    void PlastiQParentCall_keyPressEvent(QKeyEvent *e) {
        return QTabWidget::keyPressEvent(e);
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
        else return QTabWidget::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QTabWidget::paintEvent(event);
    }

    void resizeEvent(QResizeEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void resizeEvent(QResizeEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QResizeEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QTabWidget::resizeEvent(e);
    }

    void PlastiQParentCall_resizeEvent(QResizeEvent *e) {
        return QTabWidget::resizeEvent(e);
    }

};

void PlastiQQTabWidget::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQTabWidgetWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQTabWidgetWrapper(); break;
        case 1: o = new PlastiQQTabWidgetWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQTabWidget *p = new PlastiQQTabWidget();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTabWidget *p = new PlastiQQTabWidget();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 56) {
            id -= 56;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTabWidget *o = sc ? Q_NULLPTR : reinterpret_cast<QTabWidget*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->addTab(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->addTab(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QIcon(*) >(stack[2].s_voidp)),
                    stack[3].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 3: { QWidget* _r = o->cornerWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 4: { QWidget* _r = o->cornerWidget(Qt::Corner(stack[1].s_int64));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 5: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { int _r = o->currentIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { QWidget* _r = o->currentWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 8: { bool _r = o->documentMode();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { qint64 _r = o->elideMode(); // HACK for Qt::TextElideMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: { /* COPY OBJECT */
            QSize *_r = new QSize(o->iconSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { int _r = o->indexOf(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { int _r = o->insertTab(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    stack[3].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { int _r = o->insertTab(stack[1].s_int,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    (*reinterpret_cast< QIcon(*) >(stack[3].s_voidp)),
                    stack[4].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { bool _r = o->isMovable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r = o->isTabEnabled(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: o->removeTab(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setCornerWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setCornerWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::Corner(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setDocumentMode(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setElideMode(Qt::TextElideMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setIconSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setMovable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setTabBarAutoHide(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setTabEnabled(stack[1].s_int,
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setTabIcon(stack[1].s_int,
                    (*reinterpret_cast< QIcon(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setTabPosition(QTabWidget::TabPosition(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setTabShape(QTabWidget::TabShape(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setTabText(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setTabToolTip(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setTabWhatsThis(stack[1].s_int,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setTabsClosable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setUsesScrollButtons(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 33: { QTabBar* _r = o->tabBar();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QTabBar"; } break;
        case 34: { bool _r = o->tabBarAutoHide();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 35: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->tabIcon(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 36: { qint64 _r = o->tabPosition(); // HACK for TabPosition 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 37: { qint64 _r = o->tabShape(); // HACK for TabShape 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 38: { QString _r = o->tabText(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 39: { QString _r = o->tabToolTip(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 40: { QString _r = o->tabWhatsThis(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 41: { bool _r = o->tabsClosable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 42: { bool _r = o->usesScrollButtons();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 43: { QWidget* _r = o->widget(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 44: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 45: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 46: if (isWrapper) ((PlastiQQTabWidgetWrapper*)o)->PlastiQParentCall_tabInserted(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 47: if (isWrapper) ((PlastiQQTabWidgetWrapper*)o)->PlastiQParentCall_tabRemoved(stack[1].s_int);
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 48: if (isWrapper) ((PlastiQQTabWidgetWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 49: { bool _r;
                if (isWrapper) _r = ((PlastiQQTabWidgetWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 50: if (isWrapper) ((PlastiQQTabWidgetWrapper*)o)->PlastiQParentCall_keyPressEvent(reinterpret_cast<QKeyEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 51: if (isWrapper) ((PlastiQQTabWidgetWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 52: if (isWrapper) ((PlastiQQTabWidgetWrapper*)o)->PlastiQParentCall_resizeEvent(reinterpret_cast<QResizeEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 53: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 54: o->setCurrentIndex(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 55: o->setCurrentWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
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

        QTabWidget *o = reinterpret_cast<QTabWidget*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QTabWidget::currentChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "currentChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QTabWidget::tabBarClicked,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "tabBarClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QTabWidget::tabBarDoubleClicked,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "tabBarDoubleClicked", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QTabWidget::tabCloseRequested,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "tabCloseRequested", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QTabWidget *o = reinterpret_cast<QTabWidget*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTabWidget *o = reinterpret_cast<QTabWidget*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTabWidget *o = reinterpret_cast<QTabWidget*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTabWidget::~PlastiQQTabWidget() {
    QTabWidget* o = reinterpret_cast<QTabWidget*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

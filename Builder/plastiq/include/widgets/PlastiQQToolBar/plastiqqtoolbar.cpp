#include "plastiqmethod.h"
#include "plastiqqtoolbar.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QToolBar> 
#include <QAction>
#include <QSize>
#include <QWidget>
#include <QActionEvent>
#include <QEvent>
#include <QPaintEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQToolBar::plastiqConstructors = {
    { "QToolBar(QString)", { "QToolBar", "QString&", "QToolBar*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QToolBar(QString,QWidget*)", { "QToolBar", "QString&,QWidget*", "QToolBar*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QToolBar()", { "QToolBar", "", "QToolBar*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QToolBar(QWidget*)", { "QToolBar", "QWidget*", "QToolBar*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQToolBar::plastiqMethods = {
    { "actionAt(QPoint&)", { "actionAt", "QPoint&", "QAction*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "actionAt(int,int)", { "actionAt", "int,int", "QAction*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QString)", { "addAction", "QString&", "QAction*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QIcon&,QString)", { "addAction", "QIcon&,QString&", "QAction*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QString,const QObject*,const char*)", { "addAction", "QString&,QObject*,char*", "QAction*", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QIcon&,QString,const QObject*,const char*)", { "addAction", "QIcon&,QString&,QObject*,char*", "QAction*", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QString,const QObject*,PointerToMemberFunction)", { "addAction", "QString&,QObject*,PointerToMemberFunction", "QAction*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QString,Functor)", { "addAction", "QString&,Functor", "QAction*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QString,const QObject*,Functor)", { "addAction", "QString&,QObject*,Functor", "QAction*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QIcon&,QString,const QObject*,PointerToMemberFunction)", { "addAction", "QIcon&,QString&,QObject*,PointerToMemberFunction", "QAction*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QIcon&,QString,Functor)", { "addAction", "QIcon&,QString&,Functor", "QAction*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addAction(QIcon&,QString,const QObject*,Functor)", { "addAction", "QIcon&,QString&,QObject*,Functor", "QAction*", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addSeparator()", { "addSeparator", "", "QAction*", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addWidget(QWidget*)", { "addWidget", "QWidget*", "QAction*", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "allowedAreas()", { "allowedAreas", "", "Qt::ToolBarAreas", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconSize()", { "iconSize", "", "QSize", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertSeparator(QAction*)", { "insertSeparator", "QAction*", "QAction*", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertWidget(QAction*,QWidget*)", { "insertWidget", "QAction*,QWidget*", "QAction*", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAreaAllowed(enum)", { "isAreaAllowed", "Qt::ToolBarArea", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFloatable()", { "isFloatable", "", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFloating()", { "isFloating", "", "bool", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMovable()", { "isMovable", "", "bool", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "orientation()", { "orientation", "", "Qt::Orientation", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAllowedAreas(enum)", { "setAllowedAreas", "Qt::ToolBarAreas", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFloatable(bool)", { "setFloatable", "bool", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMovable(bool)", { "setMovable", "bool", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOrientation(enum)", { "setOrientation", "Qt::Orientation", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toggleViewAction()", { "toggleViewAction", "", "QAction*", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolButtonStyle()", { "toolButtonStyle", "", "Qt::ToolButtonStyle", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "widgetForAction(QAction*)", { "widgetForAction", "QAction*", "QWidget*", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "actionEvent(QActionEvent*)", { "actionEvent", "QActionEvent*", "void", 31, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 32, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 33, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 34, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "setIconSize(QSize&)", { "setIconSize", "QSize&", "void", 35, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setToolButtonStyle(enum)", { "setToolButtonStyle", "Qt::ToolButtonStyle", "void", 36, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQToolBar::plastiqSignals = {
    { "actionTriggered(QAction*)", { "actionTriggered", "QAction*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "allowedAreasChanged(enum)", { "allowedAreasChanged", "Qt::ToolBarAreas", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "iconSizeChanged(QSize&)", { "iconSizeChanged", "QSize&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "movableChanged(bool)", { "movableChanged", "bool", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "orientationChanged(enum)", { "orientationChanged", "Qt::Orientation", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "toolButtonStyleChanged(enum)", { "toolButtonStyleChanged", "Qt::ToolButtonStyle", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "topLevelChanged(bool)", { "topLevelChanged", "bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "visibilityChanged(bool)", { "visibilityChanged", "bool", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQToolBar::plastiqProperties = {
    { "allowedAreas", { "allowedAreas", "long", "setAllowedAreas", "allowedAreas" } },
    { "floatable", { "floatable", "bool", "setFloatable", "isFloatable" } },
    { "floating", { "floating", "bool", "", "isFloating" } },
    { "iconSize", { "iconSize", "QSize", "setIconSize", "iconSize" } },
    { "movable", { "movable", "bool", "setMovable", "isMovable" } },
    { "orientation", { "orientation", "long", "setOrientation", "orientation" } },
    { "toolButtonStyle", { "toolButtonStyle", "long", "setToolButtonStyle", "toolButtonStyle" } },

};

QHash<QByteArray, long> PlastiQQToolBar::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQToolBar::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQToolBar::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQToolBar::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QToolBar", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQToolBar::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQToolBarWrapper : public QToolBar {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQToolBarWrapper(const QString &title, QWidget *parent = Q_NULLPTR)
         : QToolBar(title,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQToolBarWrapper(QWidget *parent = Q_NULLPTR)
         : QToolBar(parent),
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
        else return QToolBar::actionEvent(event);
    }

    void PlastiQParentCall_actionEvent(QActionEvent *event) {
        return QToolBar::actionEvent(event);
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
        else return QToolBar::changeEvent(event);
    }

    void PlastiQParentCall_changeEvent(QEvent *event) {
        return QToolBar::changeEvent(event);
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
        else return QToolBar::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QToolBar::event(event);
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
        else return QToolBar::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QToolBar::paintEvent(event);
    }

};

void PlastiQQToolBar::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQToolBarWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQToolBarWrapper(stack[1].s_string); break;
        case 1: o = new PlastiQQToolBarWrapper(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;
        case 2: o = new PlastiQQToolBarWrapper(); break;
        case 3: o = new PlastiQQToolBarWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQToolBar *p = new PlastiQQToolBar();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQToolBar *p = new PlastiQQToolBar();
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
        QToolBar *o = sc ? Q_NULLPTR : reinterpret_cast<QToolBar*>(object->plastiq_data());

        switch(id) {
        case 0: { QAction* _r = o->actionAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 1: { QAction* _r = o->actionAt(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 2: { QAction* _r = o->addAction(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 3: { QAction* _r = o->addAction((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 4: { QAction* _r = o->addAction(stack[1].s_string,
                    reinterpret_cast<const QObject*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 5: { QAction* _r = o->addAction((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<const QObject*>(stack[3].s_voidp),
                    reinterpret_cast<const char*>(stack[4].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 6: /* o->addAction(stack[1].s_string,
                    reinterpret_cast<const QObject*>(stack[2].s_voidp),
                    UNSUPPORTED_TYPE_PointerToMemberFunction) | ret: `QAction*` */ break;
        case 7: /* o->addAction(stack[1].s_string,
                    UNSUPPORTED_TYPE_Functor) | ret: `QAction*` */ break;
        case 8: /* o->addAction(stack[1].s_string,
                    reinterpret_cast<const QObject*>(stack[2].s_voidp),
                    UNSUPPORTED_TYPE_Functor) | ret: `QAction*` */ break;
        case 9: /* o->addAction((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<const QObject*>(stack[3].s_voidp),
                    UNSUPPORTED_TYPE_PointerToMemberFunction) | ret: `QAction*` */ break;
        case 10: /* o->addAction((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    UNSUPPORTED_TYPE_Functor) | ret: `QAction*` */ break;
        case 11: /* o->addAction((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<const QObject*>(stack[3].s_voidp),
                    UNSUPPORTED_TYPE_Functor) | ret: `QAction*` */ break;
        case 12: { QAction* _r = o->addSeparator();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 13: { QAction* _r = o->addWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 14: { qint64 _r = o->allowedAreas(); // HACK for Qt::ToolBarAreas 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 15: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 16: { /* COPY OBJECT */
            QSize *_r = new QSize(o->iconSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { QAction* _r = o->insertSeparator(reinterpret_cast<QAction*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 18: { QAction* _r = o->insertWidget(reinterpret_cast<QAction*>(stack[1].s_voidp),
                    reinterpret_cast<QWidget*>(stack[2].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 19: { bool _r = o->isAreaAllowed(Qt::ToolBarArea(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { bool _r = o->isFloatable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { bool _r = o->isFloating();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: { bool _r = o->isMovable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 23: { qint64 _r = o->orientation(); // HACK for Qt::Orientation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 24: o->setAllowedAreas(Qt::ToolBarAreas(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setFloatable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setMovable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setOrientation(Qt::Orientation(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 28: { QAction* _r = o->toggleViewAction();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 29: { qint64 _r = o->toolButtonStyle(); // HACK for Qt::ToolButtonStyle 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 30: { QWidget* _r = o->widgetForAction(reinterpret_cast<QAction*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 31: if (isWrapper) ((PlastiQQToolBarWrapper*)o)->PlastiQParentCall_actionEvent(reinterpret_cast<QActionEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 32: if (isWrapper) ((PlastiQQToolBarWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 33: { bool _r;
                if (isWrapper) _r = ((PlastiQQToolBarWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 34: if (isWrapper) ((PlastiQQToolBarWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setIconSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setToolButtonStyle(Qt::ToolButtonStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 8) {
            id -= 8;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QToolBar *o = reinterpret_cast<QToolBar*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QToolBar::actionTriggered,
            [=](QAction* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QAction";
                PlastiQ_activate(sender, "actionTriggered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QToolBar::allowedAreasChanged,
            [=](Qt::ToolBarAreas arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::ToolBarAreas";
                PlastiQ_activate(sender, "allowedAreasChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QToolBar::iconSizeChanged,
            [=](const QSize& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QSize(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QSize";
                PlastiQ_activate(sender, "iconSizeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QToolBar::movableChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "movableChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QToolBar::orientationChanged,
            [=](Qt::Orientation arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::Orientation";
                PlastiQ_activate(sender, "orientationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QToolBar::toolButtonStyleChanged,
            [=](Qt::ToolButtonStyle arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::ToolButtonStyle";
                PlastiQ_activate(sender, "toolButtonStyleChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QToolBar::topLevelChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "topLevelChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QToolBar::visibilityChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "visibilityChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QToolBar *o = reinterpret_cast<QToolBar*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QToolBar *o = reinterpret_cast<QToolBar*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QToolBar *o = reinterpret_cast<QToolBar*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQToolBar::~PlastiQQToolBar() {
    QToolBar* o = reinterpret_cast<QToolBar*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

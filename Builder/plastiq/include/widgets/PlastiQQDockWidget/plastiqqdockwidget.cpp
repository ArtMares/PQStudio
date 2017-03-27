#include "plastiqmethod.h"
#include "plastiqqdockwidget.h"

#include "widgets/PlastiQQWidget/plastiqqwidget.h"
#include <QDockWidget> 
#include <QWidget>
#include <QAction>
#include <QEvent>
#include <QCloseEvent>
#include <QPaintEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQDockWidget::plastiqConstructors = {
    { "QDockWidget(QString)", { "QDockWidget", "QString&", "QDockWidget*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDockWidget(QString,QWidget*)", { "QDockWidget", "QString&,QWidget*", "QDockWidget*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDockWidget(QString,QWidget*,enum)", { "QDockWidget", "QString&,QWidget*,Qt::WindowFlags", "QDockWidget*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDockWidget()", { "QDockWidget", "", "QDockWidget*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDockWidget(QWidget*)", { "QDockWidget", "QWidget*", "QDockWidget*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDockWidget(QWidget*,enum)", { "QDockWidget", "QWidget*,Qt::WindowFlags", "QDockWidget*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDockWidget::plastiqMethods = {
    { "allowedAreas()", { "allowedAreas", "", "Qt::DockWidgetAreas", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "features()", { "features", "", "DockWidgetFeatures", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAreaAllowed(enum)", { "isAreaAllowed", "Qt::DockWidgetArea", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFloating()", { "isFloating", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAllowedAreas(enum)", { "setAllowedAreas", "Qt::DockWidgetAreas", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFeatures(enum)", { "setFeatures", "DockWidgetFeatures", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFloating(bool)", { "setFloating", "bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTitleBarWidget(QWidget*)", { "setTitleBarWidget", "QWidget*", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWidget(QWidget*)", { "setWidget", "QWidget*", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "titleBarWidget()", { "titleBarWidget", "", "QWidget*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toggleViewAction()", { "toggleViewAction", "", "QAction*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "widget()", { "widget", "", "QWidget*", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "initStyleOption(QStyleOptionDockWidget*)", { "initStyleOption", "QStyleOptionDockWidget*", "void", 12, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "changeEvent(QEvent*)", { "changeEvent", "QEvent*", "void", 13, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "closeEvent(QCloseEvent*)", { "closeEvent", "QCloseEvent*", "void", 14, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 15, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "paintEvent(QPaintEvent*)", { "paintEvent", "QPaintEvent*", "void", 16, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDockWidget::plastiqSignals = {
    { "allowedAreasChanged(enum)", { "allowedAreasChanged", "Qt::DockWidgetAreas", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "dockLocationChanged(enum)", { "dockLocationChanged", "Qt::DockWidgetArea", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "featuresChanged(enum)", { "featuresChanged", "QDockWidget::DockWidgetFeatures", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "topLevelChanged(bool)", { "topLevelChanged", "bool", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "visibilityChanged(bool)", { "visibilityChanged", "bool", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQDockWidget::plastiqProperties = {
    { "allowedAreas", { "allowedAreas", "long", "setAllowedAreas", "allowedAreas" } },
    { "features", { "features", "long", "setFeatures", "features" } },
    { "floating", { "floating", "bool", "setFloating", "isFloating" } },
    { "windowTitle", { "windowTitle", "QString", "setWindowTitle", "windowTitle" } },

};

QHash<QByteArray, long> PlastiQQDockWidget::plastiqConstants = {

    /* QDockWidget::DockWidgetFeature */
   { "DockWidgetClosable", QDockWidget::DockWidgetClosable },
   { "DockWidgetMovable", QDockWidget::DockWidgetMovable },
   { "DockWidgetFloatable", QDockWidget::DockWidgetFloatable },
   { "DockWidgetVerticalTitleBar", QDockWidget::DockWidgetVerticalTitleBar },
   { "DockWidgetFeatureMask", QDockWidget::DockWidgetFeatureMask },
   { "AllDockWidgetFeatures", QDockWidget::AllDockWidgetFeatures },
   { "NoDockWidgetFeatures", QDockWidget::NoDockWidgetFeatures },
   { "Reserved", QDockWidget::Reserved },

};

QVector<PlastiQMetaObject*> PlastiQQDockWidget::plastiqInherits = { &PlastiQQWidget::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQDockWidget::plastiq_static_objectType = PlastiQ::IsQWidget;
PlastiQMetaObject PlastiQQDockWidget::plastiq_static_metaObject = {
    { &PlastiQQWidget::plastiq_static_metaObject, &plastiqInherits, "QDockWidget", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDockWidget::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQDockWidgetWrapper : public QDockWidget {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQDockWidgetWrapper(const QString &title, QWidget *parent = Q_NULLPTR, Qt::WindowFlags flags = Qt::WindowFlags())
         : QDockWidget(title,parent,flags),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQDockWidgetWrapper(QWidget *parent = Q_NULLPTR, Qt::WindowFlags flags = Qt::WindowFlags())
         : QDockWidget(parent,flags),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


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
        else return QDockWidget::changeEvent(event);
    }

    void PlastiQParentCall_changeEvent(QEvent *event) {
        return QDockWidget::changeEvent(event);
    }

    void closeEvent(QCloseEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void closeEvent(QCloseEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QCloseEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QDockWidget::closeEvent(event);
    }

    void PlastiQParentCall_closeEvent(QCloseEvent *event) {
        return QDockWidget::closeEvent(event);
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
        else return QDockWidget::event(event);
    }

    bool PlastiQParentCall_event(QEvent *event) {
        return QDockWidget::event(event);
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
        else return QDockWidget::paintEvent(event);
    }

    void PlastiQParentCall_paintEvent(QPaintEvent *event) {
        return QDockWidget::paintEvent(event);
    }

};

void PlastiQQDockWidget::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQDockWidgetWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQDockWidgetWrapper(stack[1].s_string); break;
        case 1: o = new PlastiQQDockWidgetWrapper(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp)); break;
        case 2: o = new PlastiQQDockWidgetWrapper(stack[1].s_string,
                    reinterpret_cast<QWidget*>(stack[2].s_voidp),
                    Qt::WindowFlags(stack[3].s_int64)); break;
        case 3: o = new PlastiQQDockWidgetWrapper(); break;
        case 4: o = new PlastiQQDockWidgetWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp)); break;
        case 5: o = new PlastiQQDockWidgetWrapper(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    Qt::WindowFlags(stack[2].s_int64)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQDockWidget *p = new PlastiQQDockWidget();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDockWidget *p = new PlastiQQDockWidget();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 17) {
            id -= 17;
            PlastiQQWidget::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDockWidget *o = sc ? Q_NULLPTR : reinterpret_cast<QDockWidget*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->allowedAreas(); // HACK for Qt::DockWidgetAreas 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { qint64 _r = o->features(); // HACK for DockWidgetFeatures 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { bool _r = o->isAreaAllowed(Qt::DockWidgetArea(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->isFloating();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: o->setAllowedAreas(Qt::DockWidgetAreas(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setFeatures(QDockWidget::DockWidgetFeatures(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setFloating(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setTitleBarWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setWidget(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 9: { QWidget* _r = o->titleBarWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 10: { QAction* _r = o->toggleViewAction();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QAction"; } break;
        case 11: { QWidget* _r = o->widget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 12: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 13: if (isWrapper) ((PlastiQQDockWidgetWrapper*)o)->PlastiQParentCall_changeEvent(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 14: if (isWrapper) ((PlastiQQDockWidgetWrapper*)o)->PlastiQParentCall_closeEvent(reinterpret_cast<QCloseEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                stack[0].type = PlastiQ::Void; break;
        case 15: { bool _r;
                if (isWrapper) _r = ((PlastiQQDockWidgetWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: if (isWrapper) ((PlastiQQDockWidgetWrapper*)o)->PlastiQParentCall_paintEvent(reinterpret_cast<QPaintEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
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

        QDockWidget *o = reinterpret_cast<QDockWidget*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QDockWidget::allowedAreasChanged,
            [=](Qt::DockWidgetAreas arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::DockWidgetAreas";
                PlastiQ_activate(sender, "allowedAreasChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QDockWidget::dockLocationChanged,
            [=](Qt::DockWidgetArea arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::DockWidgetArea";
                PlastiQ_activate(sender, "dockLocationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QDockWidget::featuresChanged,
            [=](QDockWidget::DockWidgetFeatures arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "QDockWidget::DockWidgetFeatures";
                PlastiQ_activate(sender, "featuresChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QDockWidget::topLevelChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "topLevelChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QDockWidget::visibilityChanged,
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
        QDockWidget *o = reinterpret_cast<QDockWidget*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QDockWidget *o = reinterpret_cast<QDockWidget*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QDockWidget *o = reinterpret_cast<QDockWidget*>(object->plastiq_data());

        if(className == "QWidget") {
            stack[0].s_voidp = static_cast<QWidget*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQDockWidget::~PlastiQQDockWidget() {
    QDockWidget* o = reinterpret_cast<QDockWidget*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

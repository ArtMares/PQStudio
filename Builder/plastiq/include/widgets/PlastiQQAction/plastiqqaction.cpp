#include "plastiqmethod.h"
#include "plastiqqaction.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QAction> 
#include <QActionGroup>
#include <QVariant>
#include <QFont>
#include <QIcon>
#include <QString>
#include <QMenu>
#include <QWidget>
#include <QKeySequence>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQAction::plastiqConstructors = {
    { "QAction()", { "QAction", "", "QAction*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAction(QObject*)", { "QAction", "QObject*", "QAction*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAction(QString)", { "QAction", "QString&", "QAction*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAction(QString,QObject*)", { "QAction", "QString&,QObject*", "QAction*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAction(QIcon&,QString)", { "QAction", "QIcon&,QString&", "QAction*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QAction(QIcon&,QString,QObject*)", { "QAction", "QIcon&,QString&,QObject*", "QAction*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAction::plastiqMethods = {
    { "actionGroup()", { "actionGroup", "", "QActionGroup*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "activate(enum)", { "activate", "ActionEvent", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "autoRepeat()", { "autoRepeat", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data()", { "data", "", "QVariant", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "font()", { "font", "", "QFont", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "icon()", { "icon", "", "QIcon", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconText()", { "iconText", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCheckable()", { "isCheckable", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isChecked()", { "isChecked", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEnabled()", { "isEnabled", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isIconVisibleInMenu()", { "isIconVisibleInMenu", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSeparator()", { "isSeparator", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isVisible()", { "isVisible", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "menu()", { "menu", "", "QMenu*", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "menuRole()", { "menuRole", "", "MenuRole", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parentWidget()", { "parentWidget", "", "QWidget*", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "priority()", { "priority", "", "Priority", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setActionGroup(QActionGroup*)", { "setActionGroup", "QActionGroup*", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoRepeat(bool)", { "setAutoRepeat", "bool", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCheckable(bool)", { "setCheckable", "bool", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setData(QVariant)", { "setData", "QVariant&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFont(QFont&)", { "setFont", "QFont&", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIcon(QIcon&)", { "setIcon", "QIcon&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIconText(QString)", { "setIconText", "QString&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIconVisibleInMenu(bool)", { "setIconVisibleInMenu", "bool", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMenu(QMenu*)", { "setMenu", "QMenu*", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMenuRole(enum)", { "setMenuRole", "MenuRole", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPriority(enum)", { "setPriority", "Priority", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSeparator(bool)", { "setSeparator", "bool", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShortcut(QKeySequence&)", { "setShortcut", "QKeySequence&", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShortcutContext(enum)", { "setShortcutContext", "Qt::ShortcutContext", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShortcuts(QList<QKeySequence>&)", { "setShortcuts", "QList<QKeySequence>&", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShortcuts(enum)", { "setShortcuts", "QKeySequence::StandardKey", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStatusTip(QString)", { "setStatusTip", "QString&", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setText(QString)", { "setText", "QString&", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setToolTip(QString)", { "setToolTip", "QString&", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWhatsThis(QString)", { "setWhatsThis", "QString&", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shortcut()", { "shortcut", "", "QKeySequence", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shortcutContext()", { "shortcutContext", "", "Qt::ShortcutContext", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "showStatusText()", { "showStatusText", "", "bool", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "showStatusText(QWidget*)", { "showStatusText", "QWidget*", "bool", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "statusTip()", { "statusTip", "", "QString", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolTip()", { "toolTip", "", "QString", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "whatsThis()", { "whatsThis", "", "QString", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 45, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "hover()", { "hover", "", "void", 46, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setChecked(bool)", { "setChecked", "bool", "void", 47, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setDisabled(bool)", { "setDisabled", "bool", "void", 48, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setEnabled(bool)", { "setEnabled", "bool", "void", 49, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setVisible(bool)", { "setVisible", "bool", "void", 50, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "toggle()", { "toggle", "", "void", 51, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "trigger()", { "trigger", "", "void", 52, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQAction::plastiqSignals = {
    { "changed()", { "changed", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "hovered()", { "hovered", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "toggled(bool)", { "toggled", "bool", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "triggered()", { "triggered", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "triggered(bool)", { "triggered", "bool", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQAction::plastiqProperties = {
    { "autoRepeat", { "autoRepeat", "bool", "setAutoRepeat", "autoRepeat" } },
    { "checkable", { "checkable", "bool", "setCheckable", "isCheckable" } },
    { "checked", { "checked", "bool", "setChecked", "isChecked" } },
    { "enabled", { "enabled", "bool", "setEnabled", "isEnabled" } },
    { "font", { "font", "QFont", "setFont", "font" } },
    { "icon", { "icon", "QIcon", "setIcon", "icon" } },
    { "iconText", { "iconText", "QString", "setIconText", "iconText" } },
    { "iconVisibleInMenu", { "iconVisibleInMenu", "bool", "setIconVisibleInMenu", "isIconVisibleInMenu" } },
    { "menuRole", { "menuRole", "long", "setMenuRole", "menuRole" } },
    { "priority", { "priority", "long", "setPriority", "priority" } },
    { "shortcut", { "shortcut", "QKeySequence", "setShortcut", "shortcut" } },
    { "shortcutContext", { "shortcutContext", "long", "setShortcutContext", "shortcutContext" } },
    { "statusTip", { "statusTip", "QString", "setStatusTip", "statusTip" } },
    { "text", { "text", "QString", "setText", "text" } },
    { "toolTip", { "toolTip", "QString", "setToolTip", "toolTip" } },
    { "visible", { "visible", "bool", "setVisible", "isVisible" } },
    { "whatsThis", { "whatsThis", "QString", "setWhatsThis", "whatsThis" } },

};

QHash<QByteArray, long> PlastiQQAction::plastiqConstants = {

    /* QAction::ActionEvent */
   { "Trigger", QAction::Trigger },
   { "Hover", QAction::Hover },

    /* QAction::MenuRole */
   { "NoRole", QAction::NoRole },
   { "TextHeuristicRole", QAction::TextHeuristicRole },
   { "ApplicationSpecificRole", QAction::ApplicationSpecificRole },
   { "AboutQtRole", QAction::AboutQtRole },
   { "AboutRole", QAction::AboutRole },
   { "PreferencesRole", QAction::PreferencesRole },
   { "QuitRole", QAction::QuitRole },

    /* QAction::Priority */
   { "LowPriority", QAction::LowPriority },
   { "NormalPriority", QAction::NormalPriority },
   { "HighPriority", QAction::HighPriority },

};

QVector<PlastiQMetaObject*> PlastiQQAction::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQAction::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQAction::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QAction", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQAction::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQActionWrapper : public QAction {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQActionWrapper(QObject *parent = nullptr)
         : QAction(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQActionWrapper(const QString &text, QObject *parent = nullptr)
         : QAction(text,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}

    explicit PlastiQQActionWrapper(const QIcon &icon, const QString &text, QObject *parent = nullptr)
         : QAction(icon,text,parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


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
        else return QAction::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QAction::event(e);
    }

    bool eventFilter(QObject *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
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
        else return QAction::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QAction::eventFilter(watched,event);
    }

    const QMetaObject* metaObject() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("const QMetaObject* metaObject()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMetaObject* _r = reinterpret_cast<QMetaObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QAction::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QAction::metaObject();
    }

    void childEvent(QChildEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAction::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QAction::childEvent(event);
    }

    void connectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void connectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAction::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QAction::connectNotify(signal);
    }

    void customEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void customEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAction::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QAction::customEvent(event);
    }

    void disconnectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void disconnectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QAction::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QAction::disconnectNotify(signal);
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
        else return QAction::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QAction::timerEvent(event);
    }

};

void PlastiQQAction::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQActionWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQActionWrapper(); break;
        case 1: o = new PlastiQQActionWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new PlastiQQActionWrapper(stack[1].s_string); break;
        case 3: o = new PlastiQQActionWrapper(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;
        case 4: o = new PlastiQQActionWrapper((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string); break;
        case 5: o = new PlastiQQActionWrapper((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    reinterpret_cast<QObject*>(stack[3].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQAction *p = new PlastiQQAction();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQAction *p = new PlastiQQAction();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 53) {
            id -= 53;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QAction *o = sc ? Q_NULLPTR : reinterpret_cast<QAction*>(object->plastiq_data());

        switch(id) {
        case 0: { QActionGroup* _r = o->actionGroup();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QActionGroup"; } break;
        case 1: o->activate(QAction::ActionEvent(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r = o->autoRepeat();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->data());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QIcon *_r = new QIcon(o->icon());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { QString _r = o->iconText();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { bool _r = o->isCheckable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isChecked();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->isIconVisibleInMenu();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = o->isSeparator();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { bool _r = o->isVisible();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { QMenu* _r = o->menu();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMenu"; } break;
        case 14: { qint64 _r = o->menuRole(); // HACK for MenuRole 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 15: { QWidget* _r = o->parentWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 16: { qint64 _r = o->priority(); // HACK for Priority 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 17: o->setActionGroup(reinterpret_cast<QActionGroup*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setAutoRepeat(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 19: o->setCheckable(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 20: o->setData(stack[1].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 21: o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setIconText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setIconVisibleInMenu(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setMenu(reinterpret_cast<QMenu*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setMenuRole(QAction::MenuRole(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setPriority(QAction::Priority(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setSeparator(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setShortcut((*reinterpret_cast< QKeySequence(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setShortcutContext(Qt::ShortcutContext(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setShortcuts((*reinterpret_cast< QList<QKeySequence>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setShortcuts(QKeySequence::StandardKey(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setStatusTip(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setText(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setToolTip(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setWhatsThis(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 37: { /* COPY OBJECT */
            QKeySequence *_r = new QKeySequence(o->shortcut());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QKeySequence";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 38: { qint64 _r = o->shortcutContext(); // HACK for Qt::ShortcutContext 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 39: { bool _r = o->showStatusText();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 40: { bool _r = o->showStatusText(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 41: { QString _r = o->statusTip();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 42: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 43: { QString _r = o->toolTip();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 44: { QString _r = o->whatsThis();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 45: { bool _r;
                if (isWrapper) _r = ((PlastiQQActionWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 46: o->hover();
                stack[0].type = PlastiQ::Void; break;
        case 47: o->setChecked(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 48: o->setDisabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 49: o->setEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 50: o->setVisible(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 51: o->toggle();
                stack[0].type = PlastiQ::Void; break;
        case 52: o->trigger();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 5) {
            id -= 5;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QAction *o = reinterpret_cast<QAction*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QAction::changed,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "changed", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QAction::hovered,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "hovered", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QAction::toggled,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "toggled", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QAction::triggered,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "triggered", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QAction::triggered,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "triggered", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QAction *o = reinterpret_cast<QAction*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QAction *o = reinterpret_cast<QAction*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QAction *o = reinterpret_cast<QAction*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQAction::~PlastiQQAction() {
    QAction* o = reinterpret_cast<QAction*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

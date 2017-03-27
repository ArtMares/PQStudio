#include "plastiqmethod.h"
#include "plastiqqguiapplication.h"

#include "core/PlastiQQCoreApplication/plastiqqcoreapplication.h"
#include <QGuiApplication> 
#include <QString>
#include <QWindowList>
#include <QClipboard>
#include <QObject>
#include <QWindow>
#include <QFont>
#include <QInputMethod>
#include <QCursor>
#include <QPalette>
#include <QFunctionPointer>
#include <QScreen>
#include <QStyleHints>
#include <QIcon>
#include <QEvent>
#include <QSessionManager>

QHash<QByteArray, PlastiQMethod> PlastiQQGuiApplication::plastiqConstructors = {
    { "QGuiApplication(int&,char**)", { "QGuiApplication", "int&,char**", "QGuiApplication*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGuiApplication::plastiqMethods = {
    { "devicePixelRatio()", { "devicePixelRatio", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSavingSession()", { "isSavingSession", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSessionRestored()", { "isSessionRestored", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sessionId()", { "sessionId", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sessionKey()", { "sessionKey", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "allWindows()", { "allWindows", "", "QWindowList", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "applicationDisplayName()", { "applicationDisplayName", "", "QString", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "applicationState()", { "applicationState", "", "Qt::ApplicationState", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "changeOverrideCursor(QCursor&)", { "changeOverrideCursor", "QCursor&", "void", 8, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "clipboard()", { "clipboard", "", "QClipboard*", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "desktopFileName()", { "desktopFileName", "", "QString", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "desktopSettingsAware()", { "desktopSettingsAware", "", "bool", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "exec()", { "exec", "", "int", 12, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "focusObject()", { "focusObject", "", "QObject*", 13, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "focusWindow()", { "focusWindow", "", "QWindow*", 14, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "font()", { "font", "", "QFont", 15, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "inputMethod()", { "inputMethod", "", "QInputMethod*", 16, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isFallbackSessionManagementEnabled()", { "isFallbackSessionManagementEnabled", "", "bool", 17, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isLeftToRight()", { "isLeftToRight", "", "bool", 18, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isRightToLeft()", { "isRightToLeft", "", "bool", 19, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "keyboardModifiers()", { "keyboardModifiers", "", "Qt::KeyboardModifiers", 20, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "layoutDirection()", { "layoutDirection", "", "Qt::LayoutDirection", 21, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "modalWindow()", { "modalWindow", "", "QWindow*", 22, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "mouseButtons()", { "mouseButtons", "", "Qt::MouseButtons", 23, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "overrideCursor()", { "overrideCursor", "", "QCursor*", 24, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "palette()", { "palette", "", "QPalette", 25, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "platformFunction(QByteArray)", { "platformFunction", "QByteArray&", "QFunctionPointer", 26, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "platformName()", { "platformName", "", "QString", 27, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "primaryScreen()", { "primaryScreen", "", "QScreen*", 28, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "queryKeyboardModifiers()", { "queryKeyboardModifiers", "", "Qt::KeyboardModifiers", 29, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "quitOnLastWindowClosed()", { "quitOnLastWindowClosed", "", "bool", 30, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "restoreOverrideCursor()", { "restoreOverrideCursor", "", "void", 31, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setApplicationDisplayName(QString)", { "setApplicationDisplayName", "QString&", "void", 32, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setDesktopFileName(QString)", { "setDesktopFileName", "QString&", "void", 33, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setDesktopSettingsAware(bool)", { "setDesktopSettingsAware", "bool", "void", 34, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setFallbackSessionManagementEnabled(bool)", { "setFallbackSessionManagementEnabled", "bool", "void", 35, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setFont(QFont&)", { "setFont", "QFont&", "void", 36, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setLayoutDirection(enum)", { "setLayoutDirection", "Qt::LayoutDirection", "void", 37, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setOverrideCursor(QCursor&)", { "setOverrideCursor", "QCursor&", "void", 38, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setPalette(QPalette&)", { "setPalette", "QPalette&", "void", 39, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setQuitOnLastWindowClosed(bool)", { "setQuitOnLastWindowClosed", "bool", "void", 40, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setWindowIcon(QIcon&)", { "setWindowIcon", "QIcon&", "void", 41, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "styleHints()", { "styleHints", "", "QStyleHints*", 42, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "sync()", { "sync", "", "void", 43, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "topLevelAt(QPoint&)", { "topLevelAt", "QPoint&", "QWindow*", 44, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "topLevelWindows()", { "topLevelWindows", "", "QWindowList", 45, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "windowIcon()", { "windowIcon", "", "QIcon", 46, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 47, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGuiApplication::plastiqSignals = {
    { "applicationDisplayNameChanged()", { "applicationDisplayNameChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "applicationStateChanged(enum)", { "applicationStateChanged", "Qt::ApplicationState", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "commitDataRequest(QSessionManager&)", { "commitDataRequest", "QSessionManager&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "focusObjectChanged(QObject*)", { "focusObjectChanged", "QObject*", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "focusWindowChanged(QWindow*)", { "focusWindowChanged", "QWindow*", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "fontDatabaseChanged()", { "fontDatabaseChanged", "", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "lastWindowClosed()", { "lastWindowClosed", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "layoutDirectionChanged(enum)", { "layoutDirectionChanged", "Qt::LayoutDirection", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "paletteChanged(QPalette&)", { "paletteChanged", "QPalette&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "primaryScreenChanged(QScreen*)", { "primaryScreenChanged", "QScreen*", "void", 9, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "saveStateRequest(QSessionManager&)", { "saveStateRequest", "QSessionManager&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "screenAdded(QScreen*)", { "screenAdded", "QScreen*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "screenRemoved(QScreen*)", { "screenRemoved", "QScreen*", "void", 12, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQGuiApplication::plastiqProperties = {
    { "applicationDisplayName", { "applicationDisplayName", "QString", "setApplicationDisplayName", "applicationDisplayName" } },
    { "desktopFileName", { "desktopFileName", "QString", "setDesktopFileName", "desktopFileName" } },
    { "layoutDirection", { "layoutDirection", "long", "setLayoutDirection", "layoutDirection" } },
    { "platformName", { "platformName", "QString", "", "platformName" } },
    { "primaryScreen", { "primaryScreen", "QScreenconst*", "primaryScreenChanged", "primaryScreen" } },
    { "quitOnLastWindowClosed", { "quitOnLastWindowClosed", "bool", "setQuitOnLastWindowClosed", "quitOnLastWindowClosed" } },
    { "windowIcon", { "windowIcon", "QIcon", "setWindowIcon", "windowIcon" } },

};

QHash<QByteArray, long> PlastiQQGuiApplication::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGuiApplication::plastiqInherits = { &PlastiQQCoreApplication::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGuiApplication::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQGuiApplication::plastiq_static_metaObject = {
    { &PlastiQQCoreApplication::plastiq_static_metaObject, &plastiqInherits, "QGuiApplication", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGuiApplication::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGuiApplicationWrapper : public QGuiApplication {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQGuiApplicationWrapper(int &argc, char **argv)
         : QGuiApplication(argc,argv),
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
        else return QGuiApplication::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QGuiApplication::event(e);
    }

    bool notify(QObject *receiver, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool notify(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(receiver);
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
        else return QGuiApplication::notify(receiver,event);
    }

    bool PlastiQParentCall_notify(QObject *receiver, QEvent *event) {
        return QGuiApplication::notify(receiver,event);
    }

};

void PlastiQQGuiApplication::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGuiApplicationWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQGuiApplicationWrapper((*reinterpret_cast< int(*) >(stack[1].s_voidp)),
                    reinterpret_cast<char**>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGuiApplication *p = new PlastiQQGuiApplication();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGuiApplication *p = new PlastiQQGuiApplication();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 48) {
            id -= 48;
            PlastiQQCoreApplication::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGuiApplication *o = sc ? Q_NULLPTR : reinterpret_cast<QGuiApplication*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->devicePixelRatio();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { bool _r = o->isSavingSession();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->isSessionRestored();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { QString _r = o->sessionId();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { QString _r = o->sessionKey();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: /* UNSUPPORTED_RETURN_VALUE o->allWindows() | ret: `QWindowList` */ break;
        case 6: { QString _r = sc ? QGuiApplication::applicationDisplayName() : o->applicationDisplayName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { qint64 _r = sc ? QGuiApplication::applicationState() : o->applicationState(); // HACK for Qt::ApplicationState 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: if(sc) { QGuiApplication::changeOverrideCursor((*reinterpret_cast< QCursor(*) >(stack[1].s_voidp))); } else { o->changeOverrideCursor((*reinterpret_cast< QCursor(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 9: { QClipboard* _r = sc ? QGuiApplication::clipboard() : o->clipboard();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QClipboard"; } break;
        case 10: { QString _r = sc ? QGuiApplication::desktopFileName() : o->desktopFileName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: { bool _r = sc ? QGuiApplication::desktopSettingsAware() : o->desktopSettingsAware();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { int _r = sc ? QGuiApplication::exec() : o->exec();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { QObject* _r = sc ? QGuiApplication::focusObject() : o->focusObject();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 14: { QWindow* _r = sc ? QGuiApplication::focusWindow() : o->focusWindow();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWindow"; } break;
        case 15: { /* COPY OBJECT */
            QFont *_r = sc ? new QFont(QGuiApplication::font()) : new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { QInputMethod* _r = sc ? QGuiApplication::inputMethod() : o->inputMethod();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QInputMethod"; } break;
        case 17: { bool _r = sc ? QGuiApplication::isFallbackSessionManagementEnabled() : o->isFallbackSessionManagementEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = sc ? QGuiApplication::isLeftToRight() : o->isLeftToRight();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r = sc ? QGuiApplication::isRightToLeft() : o->isRightToLeft();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { qint64 _r = sc ? QGuiApplication::keyboardModifiers() : o->keyboardModifiers(); // HACK for Qt::KeyboardModifiers 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 21: { qint64 _r = sc ? QGuiApplication::layoutDirection() : o->layoutDirection(); // HACK for Qt::LayoutDirection 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 22: { QWindow* _r = sc ? QGuiApplication::modalWindow() : o->modalWindow();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWindow"; } break;
        case 23: { qint64 _r = sc ? QGuiApplication::mouseButtons() : o->mouseButtons(); // HACK for Qt::MouseButtons 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 24: { QCursor* _r = sc ? QGuiApplication::overrideCursor() : o->overrideCursor();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QCursor"; } break;
        case 25: { /* COPY OBJECT */
            QPalette *_r = sc ? new QPalette(QGuiApplication::palette()) : new QPalette(o->palette());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPalette";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 26: /* UNSUPPORTED_RETURN_VALUE o->platformFunction(stack[1].s_bytearray) | ret: `QFunctionPointer` */ break;
        case 27: { QString _r = sc ? QGuiApplication::platformName() : o->platformName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 28: { QScreen* _r = sc ? QGuiApplication::primaryScreen() : o->primaryScreen();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QScreen"; } break;
        case 29: { qint64 _r = sc ? QGuiApplication::queryKeyboardModifiers() : o->queryKeyboardModifiers(); // HACK for Qt::KeyboardModifiers 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 30: { bool _r = sc ? QGuiApplication::quitOnLastWindowClosed() : o->quitOnLastWindowClosed();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 31: if(sc) { QGuiApplication::restoreOverrideCursor(); } else { o->restoreOverrideCursor(); }
                stack[0].type = PlastiQ::Void; break;
        case 32: if(sc) { QGuiApplication::setApplicationDisplayName(stack[1].s_string); } else { o->setApplicationDisplayName(stack[1].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 33: if(sc) { QGuiApplication::setDesktopFileName(stack[1].s_string); } else { o->setDesktopFileName(stack[1].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 34: if(sc) { QGuiApplication::setDesktopSettingsAware(stack[1].s_bool); } else { o->setDesktopSettingsAware(stack[1].s_bool); }
                stack[0].type = PlastiQ::Void; break;
        case 35: if(sc) { QGuiApplication::setFallbackSessionManagementEnabled(stack[1].s_bool); } else { o->setFallbackSessionManagementEnabled(stack[1].s_bool); }
                stack[0].type = PlastiQ::Void; break;
        case 36: if(sc) { QGuiApplication::setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp))); } else { o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 37: if(sc) { QGuiApplication::setLayoutDirection(Qt::LayoutDirection(stack[1].s_int64)); } else { o->setLayoutDirection(Qt::LayoutDirection(stack[1].s_int64)); }
                stack[0].type = PlastiQ::Void; break;
        case 38: if(sc) { QGuiApplication::setOverrideCursor((*reinterpret_cast< QCursor(*) >(stack[1].s_voidp))); } else { o->setOverrideCursor((*reinterpret_cast< QCursor(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 39: if(sc) { QGuiApplication::setPalette((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp))); } else { o->setPalette((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 40: if(sc) { QGuiApplication::setQuitOnLastWindowClosed(stack[1].s_bool); } else { o->setQuitOnLastWindowClosed(stack[1].s_bool); }
                stack[0].type = PlastiQ::Void; break;
        case 41: if(sc) { QGuiApplication::setWindowIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp))); } else { o->setWindowIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 42: { QStyleHints* _r = sc ? QGuiApplication::styleHints() : o->styleHints();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QStyleHints"; } break;
        case 43: if(sc) { QGuiApplication::sync(); } else { o->sync(); }
                stack[0].type = PlastiQ::Void; break;
        case 44: { QWindow* _r = sc ? QGuiApplication::topLevelAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))) : o->topLevelAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWindow"; } break;
        case 45: /* UNSUPPORTED_RETURN_VALUE o->topLevelWindows() | ret: `QWindowList` */ break;
        case 46: { /* COPY OBJECT */
            QIcon *_r = sc ? new QIcon(QGuiApplication::windowIcon()) : new QIcon(o->windowIcon());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 47: { bool _r;
                if (isWrapper) _r = ((PlastiQQGuiApplicationWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 13) {
            id -= 13;
            PlastiQQCoreApplication::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QGuiApplication *o = reinterpret_cast<QGuiApplication*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QGuiApplication::applicationDisplayNameChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "applicationDisplayNameChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QGuiApplication::applicationStateChanged,
            [=](Qt::ApplicationState arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::ApplicationState";
                PlastiQ_activate(sender, "applicationStateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QGuiApplication::commitDataRequest,
            [=](QSessionManager& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&arg0);
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QSessionManager";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "commitDataRequest", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QGuiApplication::focusObjectChanged,
            [=](QObject* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QObject";
                PlastiQ_activate(sender, "focusObjectChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QGuiApplication::focusWindowChanged,
            [=](QWindow* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QWindow";
                PlastiQ_activate(sender, "focusWindowChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QGuiApplication::fontDatabaseChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "fontDatabaseChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QGuiApplication::lastWindowClosed,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "lastWindowClosed", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QGuiApplication::layoutDirectionChanged,
            [=](Qt::LayoutDirection arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::LayoutDirection";
                PlastiQ_activate(sender, "layoutDirectionChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QGuiApplication::paletteChanged,
            [=](const QPalette& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QPalette(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QPalette";
                PlastiQ_activate(sender, "paletteChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 9: QObject::connect(o, &QGuiApplication::primaryScreenChanged,
            [=](QScreen* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QScreen";
                PlastiQ_activate(sender, "primaryScreenChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 10: QObject::connect(o, &QGuiApplication::saveStateRequest,
            [=](QSessionManager& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&arg0);
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QSessionManager";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "saveStateRequest", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 11: QObject::connect(o, &QGuiApplication::screenAdded,
            [=](QScreen* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QScreen";
                PlastiQ_activate(sender, "screenAdded", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 12: QObject::connect(o, &QGuiApplication::screenRemoved,
            [=](QScreen* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QScreen";
                PlastiQ_activate(sender, "screenRemoved", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QGuiApplication *o = reinterpret_cast<QGuiApplication*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QGuiApplication *o = reinterpret_cast<QGuiApplication*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QGuiApplication *o = reinterpret_cast<QGuiApplication*>(object->plastiq_data());

        if(className == "QCoreApplication") {
            stack[0].s_voidp = static_cast<QCoreApplication*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGuiApplication::~PlastiQQGuiApplication() {
    QGuiApplication* o = reinterpret_cast<QGuiApplication*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

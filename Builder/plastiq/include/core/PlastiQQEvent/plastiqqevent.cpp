#include "plastiqmethod.h"
#include "plastiqqevent.h"

#include <QEvent> 

QHash<QByteArray, PlastiQMethod> PlastiQQEvent::plastiqConstructors = {
    { "QEvent(enum)", { "QEvent", "Type", "QEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQEvent::plastiqMethods = {
    { "accept()", { "accept", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ignore()", { "ignore", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAccepted()", { "isAccepted", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAccepted(bool)", { "setAccepted", "bool", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "spontaneous()", { "spontaneous", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "Type", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "registerEventType()", { "registerEventType", "", "int", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "registerEventType(int)", { "registerEventType", "int", "int", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQEvent::plastiqProperties = {
    { "accepted", { "accepted", "bool", "setAccepted", "isAccepted" } },

};

QHash<QByteArray, long> PlastiQQEvent::plastiqConstants = {

    /* QEvent::Type */
   { "None", QEvent::None },
   { "Timer", QEvent::Timer },
   { "MouseButtonPress", QEvent::MouseButtonPress },
   { "MouseButtonRelease", QEvent::MouseButtonRelease },
   { "MouseButtonDblClick", QEvent::MouseButtonDblClick },
   { "MouseMove", QEvent::MouseMove },
   { "KeyPress", QEvent::KeyPress },
   { "KeyRelease", QEvent::KeyRelease },
   { "FocusIn", QEvent::FocusIn },
   { "FocusOut", QEvent::FocusOut },
   { "FocusAboutToChange", QEvent::FocusAboutToChange },
   { "Enter", QEvent::Enter },
   { "Leave", QEvent::Leave },
   { "Paint", QEvent::Paint },
   { "Move", QEvent::Move },
   { "Resize", QEvent::Resize },
   { "Create", QEvent::Create },
   { "Destroy", QEvent::Destroy },
   { "Show", QEvent::Show },
   { "Hide", QEvent::Hide },
   { "Close", QEvent::Close },
   { "Quit", QEvent::Quit },
   { "ParentChange", QEvent::ParentChange },
   { "ParentAboutToChange", QEvent::ParentAboutToChange },
   { "ThreadChange", QEvent::ThreadChange },
   { "WindowActivate", QEvent::WindowActivate },
   { "WindowDeactivate", QEvent::WindowDeactivate },
   { "ShowToParent", QEvent::ShowToParent },
   { "HideToParent", QEvent::HideToParent },
   { "Wheel", QEvent::Wheel },
   { "WindowTitleChange", QEvent::WindowTitleChange },
   { "WindowIconChange", QEvent::WindowIconChange },
   { "ApplicationWindowIconChange", QEvent::ApplicationWindowIconChange },
   { "ApplicationFontChange", QEvent::ApplicationFontChange },
   { "ApplicationLayoutDirectionChange", QEvent::ApplicationLayoutDirectionChange },
   { "ApplicationPaletteChange", QEvent::ApplicationPaletteChange },
   { "PaletteChange", QEvent::PaletteChange },
   { "Clipboard", QEvent::Clipboard },
   { "Speech", QEvent::Speech },
   { "MetaCall", QEvent::MetaCall },
   { "SockAct", QEvent::SockAct },
   { "WinEventAct", QEvent::WinEventAct },
   { "DeferredDelete", QEvent::DeferredDelete },
   { "DragEnter", QEvent::DragEnter },
   { "DragMove", QEvent::DragMove },
   { "DragLeave", QEvent::DragLeave },
   { "Drop", QEvent::Drop },
   { "DragResponse", QEvent::DragResponse },
   { "ChildAdded", QEvent::ChildAdded },
   { "ChildPolished", QEvent::ChildPolished },
   { "ChildRemoved", QEvent::ChildRemoved },
   { "ShowWindowRequest", QEvent::ShowWindowRequest },
   { "PolishRequest", QEvent::PolishRequest },
   { "Polish", QEvent::Polish },
   { "LayoutRequest", QEvent::LayoutRequest },
   { "UpdateRequest", QEvent::UpdateRequest },
   { "UpdateLater", QEvent::UpdateLater },
   { "EmbeddingControl", QEvent::EmbeddingControl },
   { "ActivateControl", QEvent::ActivateControl },
   { "DeactivateControl", QEvent::DeactivateControl },
   { "ContextMenu", QEvent::ContextMenu },
   { "InputMethod", QEvent::InputMethod },
   { "TabletMove", QEvent::TabletMove },
   { "LocaleChange", QEvent::LocaleChange },
   { "LanguageChange", QEvent::LanguageChange },
   { "LayoutDirectionChange", QEvent::LayoutDirectionChange },
   { "Style", QEvent::Style },
   { "TabletPress", QEvent::TabletPress },
   { "TabletRelease", QEvent::TabletRelease },
   { "OkRequest", QEvent::OkRequest },
   { "HelpRequest", QEvent::HelpRequest },
   { "IconDrag", QEvent::IconDrag },
   { "FontChange", QEvent::FontChange },
   { "EnabledChange", QEvent::EnabledChange },
   { "ActivationChange", QEvent::ActivationChange },
   { "StyleChange", QEvent::StyleChange },
   { "IconTextChange", QEvent::IconTextChange },
   { "ModifiedChange", QEvent::ModifiedChange },
   { "MouseTrackingChange", QEvent::MouseTrackingChange },
   { "WindowBlocked", QEvent::WindowBlocked },
   { "WindowUnblocked", QEvent::WindowUnblocked },
   { "WindowStateChange", QEvent::WindowStateChange },
   { "ReadOnlyChange", QEvent::ReadOnlyChange },
   { "ToolTip", QEvent::ToolTip },
   { "WhatsThis", QEvent::WhatsThis },
   { "StatusTip", QEvent::StatusTip },
   { "ActionChanged", QEvent::ActionChanged },
   { "ActionAdded", QEvent::ActionAdded },
   { "ActionRemoved", QEvent::ActionRemoved },
   { "FileOpen", QEvent::FileOpen },
   { "Shortcut", QEvent::Shortcut },
   { "ShortcutOverride", QEvent::ShortcutOverride },
   { "WhatsThisClicked", QEvent::WhatsThisClicked },
   { "ToolBarChange", QEvent::ToolBarChange },
   { "ApplicationActivate", QEvent::ApplicationActivate },
   { "ApplicationActivated", QEvent::ApplicationActivated },
   { "ApplicationDeactivate", QEvent::ApplicationDeactivate },
   { "ApplicationDeactivated", QEvent::ApplicationDeactivated },
   { "QueryWhatsThis", QEvent::QueryWhatsThis },
   { "EnterWhatsThisMode", QEvent::EnterWhatsThisMode },
   { "LeaveWhatsThisMode", QEvent::LeaveWhatsThisMode },
   { "ZOrderChange", QEvent::ZOrderChange },
   { "HoverEnter", QEvent::HoverEnter },
   { "HoverLeave", QEvent::HoverLeave },
   { "HoverMove", QEvent::HoverMove },
   { "AcceptDropsChange", QEvent::AcceptDropsChange },
   { "ZeroTimerEvent", QEvent::ZeroTimerEvent },
   { "GraphicsSceneMouseMove", QEvent::GraphicsSceneMouseMove },
   { "GraphicsSceneMousePress", QEvent::GraphicsSceneMousePress },
   { "GraphicsSceneMouseRelease", QEvent::GraphicsSceneMouseRelease },
   { "GraphicsSceneMouseDoubleClick", QEvent::GraphicsSceneMouseDoubleClick },
   { "GraphicsSceneContextMenu", QEvent::GraphicsSceneContextMenu },
   { "GraphicsSceneHoverEnter", QEvent::GraphicsSceneHoverEnter },
   { "GraphicsSceneHoverMove", QEvent::GraphicsSceneHoverMove },
   { "GraphicsSceneHoverLeave", QEvent::GraphicsSceneHoverLeave },
   { "GraphicsSceneHelp", QEvent::GraphicsSceneHelp },
   { "GraphicsSceneDragEnter", QEvent::GraphicsSceneDragEnter },
   { "GraphicsSceneDragMove", QEvent::GraphicsSceneDragMove },
   { "GraphicsSceneDragLeave", QEvent::GraphicsSceneDragLeave },
   { "GraphicsSceneDrop", QEvent::GraphicsSceneDrop },
   { "GraphicsSceneWheel", QEvent::GraphicsSceneWheel },
   { "KeyboardLayoutChange", QEvent::KeyboardLayoutChange },
   { "DynamicPropertyChange", QEvent::DynamicPropertyChange },
   { "TabletEnterProximity", QEvent::TabletEnterProximity },
   { "TabletLeaveProximity", QEvent::TabletLeaveProximity },
   { "NonClientAreaMouseMove", QEvent::NonClientAreaMouseMove },
   { "NonClientAreaMouseButtonPress", QEvent::NonClientAreaMouseButtonPress },
   { "NonClientAreaMouseButtonRelease", QEvent::NonClientAreaMouseButtonRelease },
   { "NonClientAreaMouseButtonDblClick", QEvent::NonClientAreaMouseButtonDblClick },
   { "MacSizeChange", QEvent::MacSizeChange },
   { "ContentsRectChange", QEvent::ContentsRectChange },
   { "MacGLWindowChange", QEvent::MacGLWindowChange },
   { "FutureCallOut", QEvent::FutureCallOut },
   { "GraphicsSceneResize", QEvent::GraphicsSceneResize },
   { "GraphicsSceneMove", QEvent::GraphicsSceneMove },
   { "CursorChange", QEvent::CursorChange },
   { "ToolTipChange", QEvent::ToolTipChange },
   { "NetworkReplyUpdated", QEvent::NetworkReplyUpdated },
   { "GrabMouse", QEvent::GrabMouse },
   { "UngrabMouse", QEvent::UngrabMouse },
   { "GrabKeyboard", QEvent::GrabKeyboard },
   { "UngrabKeyboard", QEvent::UngrabKeyboard },
   { "MacGLClearDrawable", QEvent::MacGLClearDrawable },
   { "StateMachineSignal", QEvent::StateMachineSignal },
   { "StateMachineWrapped", QEvent::StateMachineWrapped },
   { "TouchBegin", QEvent::TouchBegin },
   { "TouchUpdate", QEvent::TouchUpdate },
   { "TouchEnd", QEvent::TouchEnd },
   { "NativeGesture", QEvent::NativeGesture },
   { "RequestSoftwareInputPanel", QEvent::RequestSoftwareInputPanel },
   { "CloseSoftwareInputPanel", QEvent::CloseSoftwareInputPanel },
   { "WinIdChange", QEvent::WinIdChange },
   { "Gesture", QEvent::Gesture },
   { "GestureOverride", QEvent::GestureOverride },
   { "ScrollPrepare", QEvent::ScrollPrepare },
   { "Scroll", QEvent::Scroll },
   { "Expose", QEvent::Expose },
   { "InputMethodQuery", QEvent::InputMethodQuery },
   { "OrientationChange", QEvent::OrientationChange },
   { "TouchCancel", QEvent::TouchCancel },
   { "ThemeChange", QEvent::ThemeChange },
   { "SockClose", QEvent::SockClose },
   { "PlatformPanel", QEvent::PlatformPanel },
   { "StyleAnimationUpdate", QEvent::StyleAnimationUpdate },
   { "ApplicationStateChange", QEvent::ApplicationStateChange },
   { "WindowChangeInternal", QEvent::WindowChangeInternal },
   { "ScreenChangeInternal", QEvent::ScreenChangeInternal },
   { "PlatformSurface", QEvent::PlatformSurface },
   { "Pointer", QEvent::Pointer },
   { "User", QEvent::User },
   { "MaxUser", QEvent::MaxUser },

};

QVector<PlastiQMetaObject*> PlastiQQEvent::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQEvent::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QEvent(QEvent::Type(stack[1].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQEvent *p = new PlastiQQEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQEvent *p = new PlastiQQEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QEvent*>(object->plastiq_data());

        switch(id) {
        case 0: o->accept();
                stack[0].type = PlastiQ::Void; break;
        case 1: o->ignore();
                stack[0].type = PlastiQ::Void; break;
        case 2: { bool _r = o->isAccepted();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: o->setAccepted(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 4: { bool _r = o->spontaneous();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { qint64 _r = o->type(); // HACK for Type 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: { int _r = sc ? QEvent::registerEventType() : o->registerEventType();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { int _r = sc ? QEvent::registerEventType(stack[1].s_int) : o->registerEventType(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QEvent *o = reinterpret_cast<QEvent*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQEvent::~PlastiQQEvent() {
    QEvent* o = reinterpret_cast<QEvent*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

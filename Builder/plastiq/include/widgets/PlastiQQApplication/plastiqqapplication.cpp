#include "plastiqmethod.h"
#include "plastiqqapplication.h"

#include "gui/PlastiQQGuiApplication/plastiqqguiapplication.h"
#include <QApplication> 
#include <QString>
#include <QWidget>
#include <QWidgetList>
#include <QDesktopWidget>
#include <QFont>
#include <QFontMetrics>
#include <QSize>
#include <QPalette>
#include <QStyle>
#include <QIcon>
#include <QEvent>

QHash<QByteArray, PlastiQMethod> PlastiQQApplication::plastiqConstructors = {
    { "QApplication(int&,char**)", { "QApplication", "int&,char**", "QApplication*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQApplication::plastiqMethods = {
    { "styleSheet()", { "styleSheet", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "activeModalWidget()", { "activeModalWidget", "", "QWidget*", 1, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "activePopupWidget()", { "activePopupWidget", "", "QWidget*", 2, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "activeWindow()", { "activeWindow", "", "QWidget*", 3, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "alert(QWidget*)", { "alert", "QWidget*", "void", 4, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "alert(QWidget*,int)", { "alert", "QWidget*,int", "void", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "allWidgets()", { "allWidgets", "", "QWidgetList", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "beep()", { "beep", "", "void", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "cursorFlashTime()", { "cursorFlashTime", "", "int", 8, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "desktop()", { "desktop", "", "QDesktopWidget*", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "doubleClickInterval()", { "doubleClickInterval", "", "int", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "exec()", { "exec", "", "int", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "focusWidget()", { "focusWidget", "", "QWidget*", 12, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "font()", { "font", "", "QFont", 13, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "font(const QWidget*)", { "font", "QWidget*", "QFont", 14, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "font(const char*)", { "font", "char*", "QFont", 15, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fontMetrics()", { "fontMetrics", "", "QFontMetrics", 16, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "globalStrut()", { "globalStrut", "", "QSize", 17, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isEffectEnabled(enum)", { "isEffectEnabled", "Qt::UIEffect", "bool", 18, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "keyboardInputInterval()", { "keyboardInputInterval", "", "int", 19, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "palette(const QWidget*)", { "palette", "QWidget*", "QPalette", 20, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "palette(const char*)", { "palette", "char*", "QPalette", 21, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setActiveWindow(QWidget*)", { "setActiveWindow", "QWidget*", "void", 22, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setCursorFlashTime(int)", { "setCursorFlashTime", "int", "void", 23, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setDoubleClickInterval(int)", { "setDoubleClickInterval", "int", "void", 24, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setEffectEnabled(enum)", { "setEffectEnabled", "Qt::UIEffect", "void", 25, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setEffectEnabled(enum,bool)", { "setEffectEnabled", "Qt::UIEffect,bool", "void", 26, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setFont(QFont&)", { "setFont", "QFont&", "void", 27, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setFont(QFont&,const char*)", { "setFont", "QFont&,char*", "void", 28, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setGlobalStrut(QSize&)", { "setGlobalStrut", "QSize&", "void", 29, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setKeyboardInputInterval(int)", { "setKeyboardInputInterval", "int", "void", 30, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setPalette(QPalette&)", { "setPalette", "QPalette&", "void", 31, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setPalette(QPalette&,const char*)", { "setPalette", "QPalette&,char*", "void", 32, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setStartDragDistance(int)", { "setStartDragDistance", "int", "void", 33, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setStartDragTime(int)", { "setStartDragTime", "int", "void", 34, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setStyle(QStyle*)", { "setStyle", "QStyle*", "void", 35, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setStyle(QString)", { "setStyle", "QString&", "QStyle*", 36, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setWheelScrollLines(int)", { "setWheelScrollLines", "int", "void", 37, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setWindowIcon(QIcon&)", { "setWindowIcon", "QIcon&", "void", 38, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "startDragDistance()", { "startDragDistance", "", "int", 39, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "startDragTime()", { "startDragTime", "", "int", 40, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "style()", { "style", "", "QStyle*", 41, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "topLevelAt(QPoint&)", { "topLevelAt", "QPoint&", "QWidget*", 42, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "topLevelAt(int,int)", { "topLevelAt", "int,int", "QWidget*", 43, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "topLevelWidgets()", { "topLevelWidgets", "", "QWidgetList", 44, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "wheelScrollLines()", { "wheelScrollLines", "", "int", 45, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "widgetAt(QPoint&)", { "widgetAt", "QPoint&", "QWidget*", 46, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "widgetAt(int,int)", { "widgetAt", "int,int", "QWidget*", 47, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "windowIcon()", { "windowIcon", "", "QIcon", 48, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "event(QEvent*)", { "event", "QEvent*", "bool", 49, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },
    { "aboutQt()", { "aboutQt", "", "void", 50, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "autoSipEnabled()", { "autoSipEnabled", "", "bool", 51, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "closeAllWindows()", { "closeAllWindows", "", "void", 52, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setAutoSipEnabled(const bool)", { "setAutoSipEnabled", "bool", "void", 53, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "setStyleSheet(QString)", { "setStyleSheet", "QString&", "void", 54, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQApplication::plastiqSignals = {
    { "focusChanged(QWidget*,QWidget*)", { "focusChanged", "QWidget*,QWidget*", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQApplication::plastiqProperties = {
    { "autoSipEnabled", { "autoSipEnabled", "bool", "setAutoSipEnabled", "autoSipEnabled" } },
    { "cursorFlashTime", { "cursorFlashTime", "int", "setCursorFlashTime", "cursorFlashTime" } },
    { "doubleClickInterval", { "doubleClickInterval", "int", "setDoubleClickInterval", "doubleClickInterval" } },
    { "globalStrut", { "globalStrut", "QSize", "setGlobalStrut", "globalStrut" } },
    { "keyboardInputInterval", { "keyboardInputInterval", "int", "setKeyboardInputInterval", "keyboardInputInterval" } },
    { "startDragDistance", { "startDragDistance", "int", "setStartDragDistance", "startDragDistance" } },
    { "startDragTime", { "startDragTime", "int", "setStartDragTime", "startDragTime" } },
    { "styleSheet", { "styleSheet", "QString", "setStyleSheet", "styleSheet" } },
    { "wheelScrollLines", { "wheelScrollLines", "int", "setWheelScrollLines", "wheelScrollLines" } },
    { "windowIcon", { "windowIcon", "QIcon", "", "windowIcon" } },

};

QHash<QByteArray, long> PlastiQQApplication::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQApplication::plastiqInherits = { &PlastiQQGuiApplication::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQApplication::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQApplication::plastiq_static_metaObject = {
    { &PlastiQQGuiApplication::plastiq_static_metaObject, &plastiqInherits, "QApplication", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQApplication::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQApplicationWrapper : public QApplication {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQApplicationWrapper(int &argc, char **argv)
         : QApplication(argc,argv),
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
        else return QApplication::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QApplication::event(e);
    }

};

void PlastiQQApplication::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQApplicationWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQApplicationWrapper((*reinterpret_cast< int(*) >(stack[1].s_voidp)),
                    reinterpret_cast<char**>(stack[2].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQApplication *p = new PlastiQQApplication();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQApplication *p = new PlastiQQApplication();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 55) {
            id -= 55;
            PlastiQQGuiApplication::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QApplication *o = sc ? Q_NULLPTR : reinterpret_cast<QApplication*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->styleSheet();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QWidget* _r = sc ? QApplication::activeModalWidget() : o->activeModalWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 2: { QWidget* _r = sc ? QApplication::activePopupWidget() : o->activePopupWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 3: { QWidget* _r = sc ? QApplication::activeWindow() : o->activeWindow();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 4: if(sc) { QApplication::alert(reinterpret_cast<QWidget*>(stack[1].s_voidp)); } else { o->alert(reinterpret_cast<QWidget*>(stack[1].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 5: if(sc) { QApplication::alert(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_int); } else { o->alert(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_int); }
                stack[0].type = PlastiQ::Void; break;
        case 6: /* UNSUPPORTED_RETURN_VALUE o->allWidgets() | ret: `QWidgetList` */ break;
        case 7: if(sc) { QApplication::beep(); } else { o->beep(); }
                stack[0].type = PlastiQ::Void; break;
        case 8: { int _r = sc ? QApplication::cursorFlashTime() : o->cursorFlashTime();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { QDesktopWidget* _r = sc ? QApplication::desktop() : o->desktop();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QDesktopWidget"; } break;
        case 10: { int _r = sc ? QApplication::doubleClickInterval() : o->doubleClickInterval();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: { int _r = sc ? QApplication::exec() : o->exec();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { QWidget* _r = sc ? QApplication::focusWidget() : o->focusWidget();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 13: { /* COPY OBJECT */
            QFont *_r = sc ? new QFont(QApplication::font()) : new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { /* COPY OBJECT */
            QFont *_r = sc ? new QFont(QApplication::font(reinterpret_cast<const QWidget*>(stack[1].s_voidp))) : new QFont(o->font(reinterpret_cast<const QWidget*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { /* COPY OBJECT */
            QFont *_r = sc ? new QFont(QApplication::font(reinterpret_cast<const char*>(stack[1].s_voidp))) : new QFont(o->font(reinterpret_cast<const char*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { /* COPY OBJECT */
            QFontMetrics *_r = sc ? new QFontMetrics(QApplication::fontMetrics()) : new QFontMetrics(o->fontMetrics());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFontMetrics";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { /* COPY OBJECT */
            QSize *_r = sc ? new QSize(QApplication::globalStrut()) : new QSize(o->globalStrut());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { bool _r = sc ? QApplication::isEffectEnabled(Qt::UIEffect(stack[1].s_int64)) : o->isEffectEnabled(Qt::UIEffect(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { int _r = sc ? QApplication::keyboardInputInterval() : o->keyboardInputInterval();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 20: { /* COPY OBJECT */
            QPalette *_r = sc ? new QPalette(QApplication::palette(reinterpret_cast<const QWidget*>(stack[1].s_voidp))) : new QPalette(o->palette(reinterpret_cast<const QWidget*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPalette";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: { /* COPY OBJECT */
            QPalette *_r = sc ? new QPalette(QApplication::palette(reinterpret_cast<const char*>(stack[1].s_voidp))) : new QPalette(o->palette(reinterpret_cast<const char*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPalette";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 22: if(sc) { QApplication::setActiveWindow(reinterpret_cast<QWidget*>(stack[1].s_voidp)); } else { o->setActiveWindow(reinterpret_cast<QWidget*>(stack[1].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 23: if(sc) { QApplication::setCursorFlashTime(stack[1].s_int); } else { o->setCursorFlashTime(stack[1].s_int); }
                stack[0].type = PlastiQ::Void; break;
        case 24: if(sc) { QApplication::setDoubleClickInterval(stack[1].s_int); } else { o->setDoubleClickInterval(stack[1].s_int); }
                stack[0].type = PlastiQ::Void; break;
        case 25: if(sc) { QApplication::setEffectEnabled(Qt::UIEffect(stack[1].s_int64)); } else { o->setEffectEnabled(Qt::UIEffect(stack[1].s_int64)); }
                stack[0].type = PlastiQ::Void; break;
        case 26: if(sc) { QApplication::setEffectEnabled(Qt::UIEffect(stack[1].s_int64),
                    stack[2].s_bool); } else { o->setEffectEnabled(Qt::UIEffect(stack[1].s_int64),
                    stack[2].s_bool); }
                stack[0].type = PlastiQ::Void; break;
        case 27: if(sc) { QApplication::setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp))); } else { o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 28: if(sc) { QApplication::setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)),
                    reinterpret_cast<const char*>(stack[2].s_voidp)); } else { o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)),
                    reinterpret_cast<const char*>(stack[2].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 29: if(sc) { QApplication::setGlobalStrut((*reinterpret_cast< QSize(*) >(stack[1].s_voidp))); } else { o->setGlobalStrut((*reinterpret_cast< QSize(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 30: if(sc) { QApplication::setKeyboardInputInterval(stack[1].s_int); } else { o->setKeyboardInputInterval(stack[1].s_int); }
                stack[0].type = PlastiQ::Void; break;
        case 31: if(sc) { QApplication::setPalette((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp))); } else { o->setPalette((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 32: if(sc) { QApplication::setPalette((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp)),
                    reinterpret_cast<const char*>(stack[2].s_voidp)); } else { o->setPalette((*reinterpret_cast< QPalette(*) >(stack[1].s_voidp)),
                    reinterpret_cast<const char*>(stack[2].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 33: if(sc) { QApplication::setStartDragDistance(stack[1].s_int); } else { o->setStartDragDistance(stack[1].s_int); }
                stack[0].type = PlastiQ::Void; break;
        case 34: if(sc) { QApplication::setStartDragTime(stack[1].s_int); } else { o->setStartDragTime(stack[1].s_int); }
                stack[0].type = PlastiQ::Void; break;
        case 35: if(sc) { QApplication::setStyle(reinterpret_cast<QStyle*>(stack[1].s_voidp)); } else { o->setStyle(reinterpret_cast<QStyle*>(stack[1].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 36: { QStyle* _r = sc ? QApplication::setStyle(stack[1].s_string) : o->setStyle(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QStyle"; } break;
        case 37: if(sc) { QApplication::setWheelScrollLines(stack[1].s_int); } else { o->setWheelScrollLines(stack[1].s_int); }
                stack[0].type = PlastiQ::Void; break;
        case 38: if(sc) { QApplication::setWindowIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp))); } else { o->setWindowIcon((*reinterpret_cast< QIcon(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 39: { int _r = sc ? QApplication::startDragDistance() : o->startDragDistance();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 40: { int _r = sc ? QApplication::startDragTime() : o->startDragTime();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 41: { QStyle* _r = sc ? QApplication::style() : o->style();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QStyle"; } break;
        case 42: { QWidget* _r = sc ? QApplication::topLevelAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))) : o->topLevelAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 43: { QWidget* _r = sc ? QApplication::topLevelAt(stack[1].s_int,
                    stack[2].s_int) : o->topLevelAt(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 44: /* UNSUPPORTED_RETURN_VALUE o->topLevelWidgets() | ret: `QWidgetList` */ break;
        case 45: { int _r = sc ? QApplication::wheelScrollLines() : o->wheelScrollLines();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 46: { QWidget* _r = sc ? QApplication::widgetAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))) : o->widgetAt((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 47: { QWidget* _r = sc ? QApplication::widgetAt(stack[1].s_int,
                    stack[2].s_int) : o->widgetAt(stack[1].s_int,
                    stack[2].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QWidget"; } break;
        case 48: { /* COPY OBJECT */
            QIcon *_r = sc ? new QIcon(QApplication::windowIcon()) : new QIcon(o->windowIcon());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QIcon";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 49: { bool _r;
                if (isWrapper) _r = ((PlastiQQApplicationWrapper*)o)->PlastiQParentCall_event(reinterpret_cast<QEvent*>(stack[1].s_voidp));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 50: o->aboutQt();
                stack[0].type = PlastiQ::Void; break;
        case 51: { bool _r = o->autoSipEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 52: o->closeAllWindows();
                stack[0].type = PlastiQ::Void; break;
        case 53: /* o->setAutoSipEnabled(UNSUPPORTED_TYPE_const bool) | ret: `void` */ break;
        case 54: o->setStyleSheet(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 1) {
            id -= 1;
            PlastiQQGuiApplication::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QApplication *o = reinterpret_cast<QApplication*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QApplication::focusChanged,
            [=](QWidget* arg0, QWidget* arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QWidget";
                    cstack[1].s_voidp = reinterpret_cast<void*>(arg1);
                    cstack[1].type = PlastiQ::QtObjectStar; cstack[1].name = "QWidget";
                PlastiQ_activate(sender, "focusChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QApplication *o = reinterpret_cast<QApplication*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QApplication *o = reinterpret_cast<QApplication*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QApplication *o = reinterpret_cast<QApplication*>(object->plastiq_data());

        if(className == "QGuiApplication") {
            stack[0].s_voidp = static_cast<QGuiApplication*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQApplication::~PlastiQQApplication() {
    QApplication* o = reinterpret_cast<QApplication*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

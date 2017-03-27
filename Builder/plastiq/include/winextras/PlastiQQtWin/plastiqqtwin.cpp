#include "plastiqmethod.h"
#include "plastiqqtwin.h"

#include <QtWin> 
#include <QColor>
#include <QString>
#include <QPixmap>
#include <QRegion>
#include <QImage>

QHash<QByteArray, PlastiQMethod> PlastiQQtWin::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQtWin::plastiqMethods = {
    { "colorizationColor()", { "colorizationColor", "", "QColor", 0, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "colorizationColor(bool*)", { "colorizationColor", "bool*", "QColor", 1, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "createMask(QBitmap&)", { "createMask", "QBitmap&", "HBITMAP", 2, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "disableBlurBehindWindow(QWindow*)", { "disableBlurBehindWindow", "QWindow*", "void", 3, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "disableBlurBehindWindow(QWidget*)", { "disableBlurBehindWindow", "QWidget*", "void", 4, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "enableBlurBehindWindow(QWindow*,QRegion&)", { "enableBlurBehindWindow", "QWindow*,QRegion&", "void", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "enableBlurBehindWindow(QWindow*)", { "enableBlurBehindWindow", "QWindow*", "void", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "enableBlurBehindWindow(QWidget*,QRegion&)", { "enableBlurBehindWindow", "QWidget*,QRegion&", "void", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "enableBlurBehindWindow(QWidget*)", { "enableBlurBehindWindow", "QWidget*", "void", 8, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "errorStringFromHresult(HRESULT)", { "errorStringFromHresult", "HRESULT", "QString", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "extendFrameIntoClientArea(QWindow*,int,int,int,int)", { "extendFrameIntoClientArea", "QWindow*,int,int,int,int", "void", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "extendFrameIntoClientArea(QWindow*,QMargins&)", { "extendFrameIntoClientArea", "QWindow*,QMargins&", "void", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "extendFrameIntoClientArea(QWidget*,QMargins&)", { "extendFrameIntoClientArea", "QWidget*,QMargins&", "void", 12, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "extendFrameIntoClientArea(QWidget*,int,int,int,int)", { "extendFrameIntoClientArea", "QWidget*,int,int,int,int", "void", 13, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromHBITMAP(HBITMAP)", { "fromHBITMAP", "HBITMAP", "QPixmap", 14, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromHBITMAP(HBITMAP,HBitmapFormat)", { "fromHBITMAP", "HBITMAP,HBitmapFormat", "QPixmap", 15, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromHICON(HICON)", { "fromHICON", "HICON", "QPixmap", 16, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromHRGN(HRGN)", { "fromHRGN", "HRGN", "QRegion", 17, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "imageFromHBITMAP(HDC,HBITMAP,int,int)", { "imageFromHBITMAP", "HDC,HBITMAP,int,int", "QImage", 18, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isCompositionEnabled()", { "isCompositionEnabled", "", "bool", 19, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isCompositionOpaque()", { "isCompositionOpaque", "", "bool", 20, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isWindowExcludedFromPeek(QWindow*)", { "isWindowExcludedFromPeek", "QWindow*", "bool", 21, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isWindowExcludedFromPeek(QWidget*)", { "isWindowExcludedFromPeek", "QWidget*", "bool", 22, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isWindowPeekDisallowed(QWindow*)", { "isWindowPeekDisallowed", "QWindow*", "bool", 23, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isWindowPeekDisallowed(QWidget*)", { "isWindowPeekDisallowed", "QWidget*", "bool", 24, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "markFullscreenWindow(QWindow*)", { "markFullscreenWindow", "QWindow*", "void", 25, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "markFullscreenWindow(QWindow*,bool)", { "markFullscreenWindow", "QWindow*,bool", "void", 26, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "markFullscreenWindow(QWidget*)", { "markFullscreenWindow", "QWidget*", "void", 27, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "markFullscreenWindow(QWidget*,bool)", { "markFullscreenWindow", "QWidget*,bool", "void", 28, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "realColorizationColor()", { "realColorizationColor", "", "QColor", 29, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "resetExtendedFrame(QWindow*)", { "resetExtendedFrame", "QWindow*", "void", 30, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "resetExtendedFrame(QWidget*)", { "resetExtendedFrame", "QWidget*", "void", 31, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setCompositionEnabled(bool)", { "setCompositionEnabled", "bool", "void", 32, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setCurrentProcessExplicitAppUserModelID(QString)", { "setCurrentProcessExplicitAppUserModelID", "QString&", "void", 33, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setWindowDisallowPeek(QWindow*,bool)", { "setWindowDisallowPeek", "QWindow*,bool", "void", 34, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setWindowDisallowPeek(QWidget*,bool)", { "setWindowDisallowPeek", "QWidget*,bool", "void", 35, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setWindowExcludedFromPeek(QWindow*,bool)", { "setWindowExcludedFromPeek", "QWindow*,bool", "void", 36, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setWindowExcludedFromPeek(QWidget*,bool)", { "setWindowExcludedFromPeek", "QWidget*,bool", "void", 37, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setWindowFlip3DPolicy(QWindow*,WindowFlip3DPolicy)", { "setWindowFlip3DPolicy", "QWindow*,WindowFlip3DPolicy", "void", 38, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setWindowFlip3DPolicy(QWidget*,WindowFlip3DPolicy)", { "setWindowFlip3DPolicy", "QWidget*,WindowFlip3DPolicy", "void", 39, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "stringFromHresult(HRESULT)", { "stringFromHresult", "HRESULT", "QString", 40, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "taskbarActivateTab(QWindow*)", { "taskbarActivateTab", "QWindow*", "void", 41, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "taskbarActivateTab(QWidget*)", { "taskbarActivateTab", "QWidget*", "void", 42, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "taskbarActivateTabAlt(QWindow*)", { "taskbarActivateTabAlt", "QWindow*", "void", 43, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "taskbarActivateTabAlt(QWidget*)", { "taskbarActivateTabAlt", "QWidget*", "void", 44, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "taskbarAddTab(QWindow*)", { "taskbarAddTab", "QWindow*", "void", 45, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "taskbarAddTab(QWidget*)", { "taskbarAddTab", "QWidget*", "void", 46, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "taskbarDeleteTab(QWindow*)", { "taskbarDeleteTab", "QWindow*", "void", 47, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "taskbarDeleteTab(QWidget*)", { "taskbarDeleteTab", "QWidget*", "void", 48, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "toHBITMAP(QPixmap&)", { "toHBITMAP", "QPixmap&", "HBITMAP", 49, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "toHBITMAP(QPixmap&,HBitmapFormat)", { "toHBITMAP", "QPixmap&,HBitmapFormat", "HBITMAP", 50, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "toHICON(QPixmap&)", { "toHICON", "QPixmap&", "HICON", 51, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "toHRGN(QRegion&)", { "toHRGN", "QRegion&", "HRGN", 52, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "windowFlip3DPolicy(QWindow*)", { "windowFlip3DPolicy", "QWindow*", "WindowFlip3DPolicy", 53, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "windowFlip3DPolicy(QWidget*)", { "windowFlip3DPolicy", "QWidget*", "WindowFlip3DPolicy", 54, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQtWin::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQtWin::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQtWin::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQtWin::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQtWin::plastiq_static_objectType = PlastiQ::IsNamespace;
PlastiQMetaObject PlastiQQtWin::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QtWin", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQtWin::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQtWin::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 55) {
            id -= 55;
            return;
        }

        switch(id) {
        case 0: { /* COPY OBJECT */
            QColor *_r = new QColor(QtWin::colorizationColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QColor *_r = new QColor(QtWin::colorizationColor(reinterpret_cast<bool*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: /* UNSUPPORTED_RETURN_VALUE o->createMask((*reinterpret_cast< QBitmap(*) >(stack[1].s_voidp))) | ret: `HBITMAP` */ break;
        case 3: QtWin::disableBlurBehindWindow(reinterpret_cast<QWindow*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 4: QtWin::disableBlurBehindWindow(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 5: QtWin::enableBlurBehindWindow(reinterpret_cast<QWindow*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRegion(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: QtWin::enableBlurBehindWindow(reinterpret_cast<QWindow*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 7: QtWin::enableBlurBehindWindow(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QRegion(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: QtWin::enableBlurBehindWindow(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 9: /* o->errorStringFromHresult(UNSUPPORTED_TYPE_HRESULT) | ret: `QString` */ break;
        case 10: QtWin::extendFrameIntoClientArea(reinterpret_cast<QWindow*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: QtWin::extendFrameIntoClientArea(reinterpret_cast<QWindow*>(stack[1].s_voidp),
                    (*reinterpret_cast< QMargins(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: QtWin::extendFrameIntoClientArea(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    (*reinterpret_cast< QMargins(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 13: QtWin::extendFrameIntoClientArea(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: /* o->fromHBITMAP(UNSUPPORTED_TYPE_HBITMAP) | ret: `QPixmap` */ break;
        case 15: /* o->fromHBITMAP(UNSUPPORTED_TYPE_HBITMAP,
                    UNSUPPORTED_TYPE_HBitmapFormat) | ret: `QPixmap` */ break;
        case 16: /* o->fromHICON(UNSUPPORTED_TYPE_HICON) | ret: `QPixmap` */ break;
        case 17: /* o->fromHRGN(UNSUPPORTED_TYPE_HRGN) | ret: `QRegion` */ break;
        case 18: /* o->imageFromHBITMAP(UNSUPPORTED_TYPE_HDC,
                    UNSUPPORTED_TYPE_HBITMAP,
                    stack[3].s_int,
                    stack[4].s_int) | ret: `QImage` */ break;
        case 19: { bool _r = QtWin::isCompositionEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { bool _r = QtWin::isCompositionOpaque();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { bool _r = QtWin::isWindowExcludedFromPeek(reinterpret_cast<QWindow*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: { bool _r = QtWin::isWindowExcludedFromPeek(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 23: { bool _r = QtWin::isWindowPeekDisallowed(reinterpret_cast<QWindow*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: { bool _r = QtWin::isWindowPeekDisallowed(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 25: QtWin::markFullscreenWindow(reinterpret_cast<QWindow*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 26: QtWin::markFullscreenWindow(reinterpret_cast<QWindow*>(stack[1].s_voidp),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 27: QtWin::markFullscreenWindow(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 28: QtWin::markFullscreenWindow(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 29: { /* COPY OBJECT */
            QColor *_r = new QColor(QtWin::realColorizationColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: QtWin::resetExtendedFrame(reinterpret_cast<QWindow*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 31: QtWin::resetExtendedFrame(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 32: QtWin::setCompositionEnabled(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 33: QtWin::setCurrentProcessExplicitAppUserModelID(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 34: QtWin::setWindowDisallowPeek(reinterpret_cast<QWindow*>(stack[1].s_voidp),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 35: QtWin::setWindowDisallowPeek(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 36: QtWin::setWindowExcludedFromPeek(reinterpret_cast<QWindow*>(stack[1].s_voidp),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 37: QtWin::setWindowExcludedFromPeek(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 38: /* o->setWindowFlip3DPolicy(reinterpret_cast<QWindow*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_WindowFlip3DPolicy) | ret: `void` */ break;
        case 39: /* o->setWindowFlip3DPolicy(reinterpret_cast<QWidget*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_WindowFlip3DPolicy) | ret: `void` */ break;
        case 40: /* o->stringFromHresult(UNSUPPORTED_TYPE_HRESULT) | ret: `QString` */ break;
        case 41: QtWin::taskbarActivateTab(reinterpret_cast<QWindow*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 42: QtWin::taskbarActivateTab(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 43: QtWin::taskbarActivateTabAlt(reinterpret_cast<QWindow*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 44: QtWin::taskbarActivateTabAlt(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 45: QtWin::taskbarAddTab(reinterpret_cast<QWindow*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 46: QtWin::taskbarAddTab(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 47: QtWin::taskbarDeleteTab(reinterpret_cast<QWindow*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 48: QtWin::taskbarDeleteTab(reinterpret_cast<QWidget*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 49: /* UNSUPPORTED_RETURN_VALUE o->toHBITMAP((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp))) | ret: `HBITMAP` */ break;
        case 50: /* o->toHBITMAP((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)),
                    UNSUPPORTED_TYPE_HBitmapFormat) | ret: `HBITMAP` */ break;
        case 51: /* UNSUPPORTED_RETURN_VALUE o->toHICON((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp))) | ret: `HICON` */ break;
        case 52: /* UNSUPPORTED_RETURN_VALUE o->toHRGN((*reinterpret_cast< QRegion(*) >(stack[1].s_voidp))) | ret: `HRGN` */ break;
        case 53: /* UNSUPPORTED_RETURN_VALUE o->windowFlip3DPolicy(reinterpret_cast<QWindow*>(stack[1].s_voidp)) | ret: `WindowFlip3DPolicy` */ break;
        case 54: /* UNSUPPORTED_RETURN_VALUE o->windowFlip3DPolicy(reinterpret_cast<QWidget*>(stack[1].s_voidp)) | ret: `WindowFlip3DPolicy` */ break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        stack[0].s_bool = false;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQtWin::~PlastiQQtWin() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

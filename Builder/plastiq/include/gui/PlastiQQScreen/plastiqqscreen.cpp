#include "plastiqmethod.h"
#include "plastiqqscreen.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QScreen> 
#include <QRect>
#include <QSize>
#include <QPixmap>
#include <QString>
#include <QSizeF>
#include <QTransform>

QHash<QByteArray, PlastiQMethod> PlastiQQScreen::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQScreen::plastiqMethods = {
    { "angleBetween(enum,enum)", { "angleBetween", "Qt::ScreenOrientation,Qt::ScreenOrientation", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "availableGeometry()", { "availableGeometry", "", "QRect", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "availableSize()", { "availableSize", "", "QSize", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "availableVirtualGeometry()", { "availableVirtualGeometry", "", "QRect", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "availableVirtualSize()", { "availableVirtualSize", "", "QSize", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "depth()", { "depth", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "devicePixelRatio()", { "devicePixelRatio", "", "qreal", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "geometry()", { "geometry", "", "QRect", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabWindow(WId)", { "grabWindow", "WId", "QPixmap", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabWindow(WId,int)", { "grabWindow", "WId,int", "QPixmap", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabWindow(WId,int,int)", { "grabWindow", "WId,int,int", "QPixmap", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabWindow(WId,int,int,int)", { "grabWindow", "WId,int,int,int", "QPixmap", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "grabWindow(WId,int,int,int,int)", { "grabWindow", "WId,int,int,int,int", "QPixmap", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isLandscape(enum)", { "isLandscape", "Qt::ScreenOrientation", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isPortrait(enum)", { "isPortrait", "Qt::ScreenOrientation", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "logicalDotsPerInch()", { "logicalDotsPerInch", "", "qreal", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "logicalDotsPerInchX()", { "logicalDotsPerInchX", "", "qreal", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "logicalDotsPerInchY()", { "logicalDotsPerInchY", "", "qreal", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mapBetween(enum,enum,QRect&)", { "mapBetween", "Qt::ScreenOrientation,Qt::ScreenOrientation,QRect&", "QRect", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QString", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nativeOrientation()", { "nativeOrientation", "", "Qt::ScreenOrientation", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "orientation()", { "orientation", "", "Qt::ScreenOrientation", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "orientationUpdateMask()", { "orientationUpdateMask", "", "Qt::ScreenOrientations", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "physicalDotsPerInch()", { "physicalDotsPerInch", "", "qreal", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "physicalDotsPerInchX()", { "physicalDotsPerInchX", "", "qreal", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "physicalDotsPerInchY()", { "physicalDotsPerInchY", "", "qreal", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "physicalSize()", { "physicalSize", "", "QSizeF", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "primaryOrientation()", { "primaryOrientation", "", "Qt::ScreenOrientation", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "refreshRate()", { "refreshRate", "", "qreal", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOrientationUpdateMask(enum)", { "setOrientationUpdateMask", "Qt::ScreenOrientations", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "QSize", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transformBetween(enum,enum,QRect&)", { "transformBetween", "Qt::ScreenOrientation,Qt::ScreenOrientation,QRect&", "QTransform", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "virtualGeometry()", { "virtualGeometry", "", "QRect", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "virtualSize()", { "virtualSize", "", "QSize", 33, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQScreen::plastiqSignals = {
    { "availableGeometryChanged(QRect&)", { "availableGeometryChanged", "QRect&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "geometryChanged(QRect&)", { "geometryChanged", "QRect&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "logicalDotsPerInchChanged(double)", { "logicalDotsPerInchChanged", "qreal", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "orientationChanged(enum)", { "orientationChanged", "Qt::ScreenOrientation", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "physicalDotsPerInchChanged(double)", { "physicalDotsPerInchChanged", "qreal", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "physicalSizeChanged(QSizeF&)", { "physicalSizeChanged", "QSizeF&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "primaryOrientationChanged(enum)", { "primaryOrientationChanged", "Qt::ScreenOrientation", "void", 6, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "refreshRateChanged(double)", { "refreshRateChanged", "qreal", "void", 7, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "virtualGeometryChanged(QRect&)", { "virtualGeometryChanged", "QRect&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQScreen::plastiqProperties = {
    { "availableGeometry", { "availableGeometry", "QRect", "availableGeometryChanged", "availableGeometry" } },
    { "availableSize", { "availableSize", "QSize", "availableGeometryChanged", "availableSize" } },
    { "availableVirtualGeometry", { "availableVirtualGeometry", "QRect", "virtualGeometryChanged", "availableVirtualGeometry" } },
    { "availableVirtualSize", { "availableVirtualSize", "QSize", "virtualGeometryChanged", "availableVirtualSize" } },
    { "depth", { "depth", "int", "", "depth" } },
    { "devicePixelRatio", { "devicePixelRatio", "qreal", "physicalDotsPerInchChanged", "devicePixelRatio" } },
    { "geometry", { "geometry", "QRect", "geometryChanged", "geometry" } },
    { "logicalDotsPerInch", { "logicalDotsPerInch", "qreal", "logicalDotsPerInchChanged", "logicalDotsPerInch" } },
    { "logicalDotsPerInchX", { "logicalDotsPerInchX", "qreal", "logicalDotsPerInchChanged", "logicalDotsPerInchX" } },
    { "logicalDotsPerInchY", { "logicalDotsPerInchY", "qreal", "logicalDotsPerInchChanged", "logicalDotsPerInchY" } },
    { "name", { "name", "QString", "", "name" } },
    { "nativeOrientation", { "nativeOrientation", "long", "", "nativeOrientation" } },
    { "orientation", { "orientation", "long", "orientationChanged", "orientation" } },
    { "physicalDotsPerInch", { "physicalDotsPerInch", "qreal", "physicalDotsPerInchChanged", "physicalDotsPerInch" } },
    { "physicalDotsPerInchX", { "physicalDotsPerInchX", "qreal", "physicalDotsPerInchChanged", "physicalDotsPerInchX" } },
    { "physicalDotsPerInchY", { "physicalDotsPerInchY", "qreal", "physicalDotsPerInchChanged", "physicalDotsPerInchY" } },
    { "physicalSize", { "physicalSize", "QSizeF", "physicalSizeChanged", "physicalSize" } },
    { "primaryOrientation", { "primaryOrientation", "long", "primaryOrientationChanged", "primaryOrientation" } },
    { "refreshRate", { "refreshRate", "qreal", "refreshRateChanged", "refreshRate" } },
    { "size", { "size", "QSize", "geometryChanged", "size" } },
    { "virtualGeometry", { "virtualGeometry", "QRect", "virtualGeometryChanged", "virtualGeometry" } },
    { "virtualSize", { "virtualSize", "QSize", "virtualGeometryChanged", "virtualSize" } },

};

QHash<QByteArray, long> PlastiQQScreen::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQScreen::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQScreen::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQScreen::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QScreen", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQScreen::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQScreen::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QScreen *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQScreen *p = new PlastiQQScreen();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQScreen *p = new PlastiQQScreen();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 34) {
            id -= 34;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QScreen *o = sc ? Q_NULLPTR : reinterpret_cast<QScreen*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->angleBetween(Qt::ScreenOrientation(stack[1].s_int64),
                    Qt::ScreenOrientation(stack[2].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { /* COPY OBJECT */
            QRect *_r = new QRect(o->availableGeometry());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QSize *_r = new QSize(o->availableSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QRect *_r = new QRect(o->availableVirtualGeometry());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QSize *_r = new QSize(o->availableVirtualSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { int _r = o->depth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { double _r = o->devicePixelRatio();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 7: { /* COPY OBJECT */
            QRect *_r = new QRect(o->geometry());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: /* o->grabWindow(UNSUPPORTED_TYPE_WId) | ret: `QPixmap` */ break;
        case 9: /* o->grabWindow(UNSUPPORTED_TYPE_WId,
                    stack[2].s_int) | ret: `QPixmap` */ break;
        case 10: /* o->grabWindow(UNSUPPORTED_TYPE_WId,
                    stack[2].s_int,
                    stack[3].s_int) | ret: `QPixmap` */ break;
        case 11: /* o->grabWindow(UNSUPPORTED_TYPE_WId,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int) | ret: `QPixmap` */ break;
        case 12: /* o->grabWindow(UNSUPPORTED_TYPE_WId,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int) | ret: `QPixmap` */ break;
        case 13: { bool _r = o->isLandscape(Qt::ScreenOrientation(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { bool _r = o->isPortrait(Qt::ScreenOrientation(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { double _r = o->logicalDotsPerInch();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 16: { double _r = o->logicalDotsPerInchX();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 17: { double _r = o->logicalDotsPerInchY();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 18: { /* COPY OBJECT */
            QRect *_r = new QRect(o->mapBetween(Qt::ScreenOrientation(stack[1].s_int64),
                    Qt::ScreenOrientation(stack[2].s_int64),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 20: { qint64 _r = o->nativeOrientation(); // HACK for Qt::ScreenOrientation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 21: { qint64 _r = o->orientation(); // HACK for Qt::ScreenOrientation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 22: { qint64 _r = o->orientationUpdateMask(); // HACK for Qt::ScreenOrientations 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 23: { double _r = o->physicalDotsPerInch();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 24: { double _r = o->physicalDotsPerInchX();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 25: { double _r = o->physicalDotsPerInchY();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 26: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->physicalSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 27: { qint64 _r = o->primaryOrientation(); // HACK for Qt::ScreenOrientation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 28: { double _r = o->refreshRate();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 29: o->setOrientationUpdateMask(Qt::ScreenOrientations(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 30: { /* COPY OBJECT */
            QSize *_r = new QSize(o->size());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 31: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->transformBetween(Qt::ScreenOrientation(stack[1].s_int64),
                    Qt::ScreenOrientation(stack[2].s_int64),
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 32: { /* COPY OBJECT */
            QRect *_r = new QRect(o->virtualGeometry());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 33: { /* COPY OBJECT */
            QSize *_r = new QSize(o->virtualSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 9) {
            id -= 9;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QScreen *o = reinterpret_cast<QScreen*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QScreen::availableGeometryChanged,
            [=](const QRect& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QRect(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QRect";
                PlastiQ_activate(sender, "availableGeometryChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QScreen::geometryChanged,
            [=](const QRect& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QRect(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QRect";
                PlastiQ_activate(sender, "geometryChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QScreen::logicalDotsPerInchChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "logicalDotsPerInchChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QScreen::orientationChanged,
            [=](Qt::ScreenOrientation arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::ScreenOrientation";
                PlastiQ_activate(sender, "orientationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QScreen::physicalDotsPerInchChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "physicalDotsPerInchChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QScreen::physicalSizeChanged,
            [=](const QSizeF& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QSizeF(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QSizeF";
                PlastiQ_activate(sender, "physicalSizeChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 6: QObject::connect(o, &QScreen::primaryOrientationChanged,
            [=](Qt::ScreenOrientation arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::ScreenOrientation";
                PlastiQ_activate(sender, "primaryOrientationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 7: QObject::connect(o, &QScreen::refreshRateChanged,
            [=](qreal arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_double = arg0;
                    cstack[0].type = PlastiQ::Double; cstack[0].name = "qreal";
                PlastiQ_activate(sender, "refreshRateChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 8: QObject::connect(o, &QScreen::virtualGeometryChanged,
            [=](const QRect& arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = new QRect(arg0) /* COPY OBJECT */;
                    cstack[0].type = PlastiQ::QtObject; cstack[0].name = "QRect";
                PlastiQ_activate(sender, "virtualGeometryChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QScreen *o = reinterpret_cast<QScreen*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QScreen *o = reinterpret_cast<QScreen*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QScreen *o = reinterpret_cast<QScreen*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQScreen::~PlastiQQScreen() {
    QScreen* o = reinterpret_cast<QScreen*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

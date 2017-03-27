#include "plastiqmethod.h"
#include "plastiqqvideowindowcontrol.h"

#include "multimedia/PlastiQQMediaControl/plastiqqmediacontrol.h"
#include <QVideoWindowControl> 
#include <QRect>
#include <QSize>

QHash<QByteArray, PlastiQMethod> PlastiQQVideoWindowControl::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoWindowControl::plastiqMethods = {
    { "aspectRatioMode()", { "aspectRatioMode", "", "Qt::AspectRatioMode", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brightness()", { "brightness", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contrast()", { "contrast", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "displayRect()", { "displayRect", "", "QRect", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hue()", { "hue", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFullScreen()", { "isFullScreen", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nativeSize()", { "nativeSize", "", "QSize", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "repaint()", { "repaint", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "saturation()", { "saturation", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAspectRatioMode(enum)", { "setAspectRatioMode", "Qt::AspectRatioMode", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBrightness(int)", { "setBrightness", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContrast(int)", { "setContrast", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDisplayRect(QRect&)", { "setDisplayRect", "QRect&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFullScreen(bool)", { "setFullScreen", "bool", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHue(int)", { "setHue", "int", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSaturation(int)", { "setSaturation", "int", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWinId(WId)", { "setWinId", "WId", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "winId()", { "winId", "", "WId", 17, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoWindowControl::plastiqSignals = {
    { "brightnessChanged(int)", { "brightnessChanged", "int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "contrastChanged(int)", { "contrastChanged", "int", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "fullScreenChanged(bool)", { "fullScreenChanged", "bool", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "hueChanged(int)", { "hueChanged", "int", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "nativeSizeChanged()", { "nativeSizeChanged", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "saturationChanged(int)", { "saturationChanged", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQVideoWindowControl::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQVideoWindowControl::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQVideoWindowControl::plastiqInherits = { &PlastiQQMediaControl::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQVideoWindowControl::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQVideoWindowControl::plastiq_static_metaObject = {
    { &PlastiQQMediaControl::plastiq_static_metaObject, &plastiqInherits, "QVideoWindowControl", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVideoWindowControl::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVideoWindowControl::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVideoWindowControl *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVideoWindowControl *p = new PlastiQQVideoWindowControl();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVideoWindowControl *p = new PlastiQQVideoWindowControl();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 18) {
            id -= 18;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QVideoWindowControl *o = sc ? Q_NULLPTR : reinterpret_cast<QVideoWindowControl*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->aspectRatioMode(); // HACK for Qt::AspectRatioMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { int _r = o->brightness();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->contrast();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { /* COPY OBJECT */
            QRect *_r = new QRect(o->displayRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { int _r = o->hue();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { bool _r = o->isFullScreen();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { /* COPY OBJECT */
            QSize *_r = new QSize(o->nativeSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: o->repaint();
                stack[0].type = PlastiQ::Void; break;
        case 8: { int _r = o->saturation();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: o->setAspectRatioMode(Qt::AspectRatioMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setBrightness(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setContrast(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setDisplayRect((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setFullScreen(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setHue(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setSaturation(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 16: /* o->setWinId(UNSUPPORTED_TYPE_WId) | ret: `void` */ break;
        case 17: /* UNSUPPORTED_RETURN_VALUE o->winId() | ret: `WId` */ break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 6) {
            id -= 6;
            PlastiQQMediaControl::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QVideoWindowControl *o = reinterpret_cast<QVideoWindowControl*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QVideoWindowControl::brightnessChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "brightnessChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QVideoWindowControl::contrastChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "contrastChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QVideoWindowControl::fullScreenChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "fullScreenChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, &QVideoWindowControl::hueChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "hueChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, &QVideoWindowControl::nativeSizeChanged,
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "nativeSizeChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QVideoWindowControl::saturationChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "saturationChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QVideoWindowControl *o = reinterpret_cast<QVideoWindowControl*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QVideoWindowControl *o = reinterpret_cast<QVideoWindowControl*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QVideoWindowControl *o = reinterpret_cast<QVideoWindowControl*>(object->plastiq_data());

        if(className == "QMediaControl") {
            stack[0].s_voidp = static_cast<QMediaControl*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQVideoWindowControl::~PlastiQQVideoWindowControl() {
    QVideoWindowControl* o = reinterpret_cast<QVideoWindowControl*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

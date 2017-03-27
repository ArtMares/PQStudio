#include "plastiqmethod.h"
#include "plastiqqrgba64.h"

#include <QRgba64> 

QHash<QByteArray, PlastiQMethod> PlastiQQRgba64::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQRgba64::plastiqMethods = {
    { "alpha8()", { "alpha8", "", "quint8", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "alpha()", { "alpha", "", "quint16", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blue8()", { "blue8", "", "quint8", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blue()", { "blue", "", "quint16", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "green8()", { "green8", "", "quint8", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "green()", { "green", "", "quint16", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isOpaque()", { "isOpaque", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isTransparent()", { "isTransparent", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "premultiplied()", { "premultiplied", "", "QRgba64", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "red8()", { "red8", "", "quint8", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "red()", { "red", "", "quint16", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlpha(int)", { "setAlpha", "quint16", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBlue(int)", { "setBlue", "quint16", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGreen(int)", { "setGreen", "quint16", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRed(int)", { "setRed", "quint16", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toArgb32()", { "toArgb32", "", "uint", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toRgb16()", { "toRgb16", "", "ushort", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unpremultiplied()", { "unpremultiplied", "", "QRgba64", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromArgb32(long)", { "fromArgb32", "uint", "QRgba64", 18, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRgba64(quint64)", { "fromRgba64", "quint64", "QRgba64", 19, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRgba64(int,int,int,int)", { "fromRgba64", "quint16,quint16,quint16,quint16", "QRgba64", 20, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRgba(quint8,quint8,quint8,quint8)", { "fromRgba", "quint8,quint8,quint8,quint8", "QRgba64", 21, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRgba64::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQRgba64::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQRgba64::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQRgba64::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQRgba64::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQRgba64::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QRgba64", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRgba64::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQRgba64::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QRgba64 *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQRgba64 *p = new PlastiQQRgba64();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRgba64 *p = new PlastiQQRgba64();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 22) {
            id -= 22;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QRgba64 *o = sc ? Q_NULLPTR : reinterpret_cast<QRgba64*>(object->plastiq_data());

        switch(id) {
        case 0: /* UNSUPPORTED_RETURN_VALUE o->alpha8() | ret: `quint8` */ break;
        case 1: /* UNSUPPORTED_RETURN_VALUE o->alpha() | ret: `quint16` */ break;
        case 2: /* UNSUPPORTED_RETURN_VALUE o->blue8() | ret: `quint8` */ break;
        case 3: /* UNSUPPORTED_RETURN_VALUE o->blue() | ret: `quint16` */ break;
        case 4: /* UNSUPPORTED_RETURN_VALUE o->green8() | ret: `quint8` */ break;
        case 5: /* UNSUPPORTED_RETURN_VALUE o->green() | ret: `quint16` */ break;
        case 6: { bool _r = o->isOpaque();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->isTransparent();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { /* COPY OBJECT */
            QRgba64 *_r = new QRgba64(o->premultiplied());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRgba64";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: /* UNSUPPORTED_RETURN_VALUE o->red8() | ret: `quint8` */ break;
        case 10: /* UNSUPPORTED_RETURN_VALUE o->red() | ret: `quint16` */ break;
        case 11: o->setAlpha(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setBlue(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setGreen(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setRed(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 15: { long _r = o->toArgb32();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 16: { int _r = o->toRgb16();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 17: { /* COPY OBJECT */
            QRgba64 *_r = new QRgba64(o->unpremultiplied());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRgba64";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { /* COPY OBJECT */
            QRgba64 *_r = sc ? new QRgba64(QRgba64::fromArgb32(stack[1].s_long)) : new QRgba64(o->fromArgb32(stack[1].s_long));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRgba64";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: /* o->fromRgba64(UNSUPPORTED_TYPE_quint64) | ret: `QRgba64` */ break;
        case 20: { /* COPY OBJECT */
            QRgba64 *_r = sc ? new QRgba64(QRgba64::fromRgba64(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int)) : new QRgba64(o->fromRgba64(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRgba64";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: /* o->fromRgba(UNSUPPORTED_TYPE_quint8,
                    UNSUPPORTED_TYPE_quint8,
                    UNSUPPORTED_TYPE_quint8,
                    UNSUPPORTED_TYPE_quint8) | ret: `QRgba64` */ break;

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
        QRgba64 *o = reinterpret_cast<QRgba64*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQRgba64::~PlastiQQRgba64() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

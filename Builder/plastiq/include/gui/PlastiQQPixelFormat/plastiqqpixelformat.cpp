#include "plastiqmethod.h"
#include "plastiqqpixelformat.h"

#include <QPixelFormat> 

QHash<QByteArray, PlastiQMethod> PlastiQQPixelFormat::plastiqConstructors = {
    { "QPixelFormat()", { "QPixelFormat", "", "QPixelFormat*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPixelFormat(enum,uchar,uchar,uchar,uchar,uchar,uchar,enum,enum,enum,enum)", { "QPixelFormat", "ColorModel,uchar,uchar,uchar,uchar,uchar,uchar,AlphaUsage,AlphaPosition,AlphaPremultiplied,TypeInterpretation", "QPixelFormat*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPixelFormat(enum,uchar,uchar,uchar,uchar,uchar,uchar,enum,enum,enum,enum,enum)", { "QPixelFormat", "ColorModel,uchar,uchar,uchar,uchar,uchar,uchar,AlphaUsage,AlphaPosition,AlphaPremultiplied,TypeInterpretation,ByteOrder", "QPixelFormat*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPixelFormat(enum,uchar,uchar,uchar,uchar,uchar,uchar,enum,enum,enum,enum,enum,uchar)", { "QPixelFormat", "ColorModel,uchar,uchar,uchar,uchar,uchar,uchar,AlphaUsage,AlphaPosition,AlphaPremultiplied,TypeInterpretation,ByteOrder,uchar", "QPixelFormat*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPixelFormat::plastiqMethods = {
    { "alphaPosition()", { "alphaPosition", "", "AlphaPosition", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "alphaSize()", { "alphaSize", "", "uchar", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "alphaUsage()", { "alphaUsage", "", "AlphaUsage", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bitsPerPixel()", { "bitsPerPixel", "", "uchar", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blackSize()", { "blackSize", "", "uchar", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blueSize()", { "blueSize", "", "uchar", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brightnessSize()", { "brightnessSize", "", "uchar", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "byteOrder()", { "byteOrder", "", "ByteOrder", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "channelCount()", { "channelCount", "", "uchar", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "colorModel()", { "colorModel", "", "ColorModel", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cyanSize()", { "cyanSize", "", "uchar", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "greenSize()", { "greenSize", "", "uchar", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hueSize()", { "hueSize", "", "uchar", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lightnessSize()", { "lightnessSize", "", "uchar", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "magentaSize()", { "magentaSize", "", "uchar", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "premultiplied()", { "premultiplied", "", "AlphaPremultiplied", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "redSize()", { "redSize", "", "uchar", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "saturationSize()", { "saturationSize", "", "uchar", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "typeInterpretation()", { "typeInterpretation", "", "TypeInterpretation", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "yellowSize()", { "yellowSize", "", "uchar", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "yuvLayout()", { "yuvLayout", "", "YUVLayout", 20, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPixelFormat::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPixelFormat::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPixelFormat::plastiqConstants = {

    /* QPixelFormat::AlphaPosition */
   { "AtBeginning", QPixelFormat::AtBeginning },
   { "AtEnd", QPixelFormat::AtEnd },

    /* QPixelFormat::AlphaPremultiplied */
   { "NotPremultiplied", QPixelFormat::NotPremultiplied },
   { "Premultiplied", QPixelFormat::Premultiplied },

    /* QPixelFormat::AlphaUsage */
   { "UsesAlpha", QPixelFormat::UsesAlpha },
   { "IgnoresAlpha", QPixelFormat::IgnoresAlpha },

    /* QPixelFormat::ByteOrder */
   { "LittleEndian", QPixelFormat::LittleEndian },
   { "BigEndian", QPixelFormat::BigEndian },
   { "CurrentSystemEndian", QPixelFormat::CurrentSystemEndian },

    /* QPixelFormat::ColorModel */
   { "RGB", QPixelFormat::RGB },
   { "BGR", QPixelFormat::BGR },
   { "Indexed", QPixelFormat::Indexed },
   { "Grayscale", QPixelFormat::Grayscale },
   { "CMYK", QPixelFormat::CMYK },
   { "HSL", QPixelFormat::HSL },
   { "HSV", QPixelFormat::HSV },
   { "YUV", QPixelFormat::YUV },
   { "Alpha", QPixelFormat::Alpha },

    /* QPixelFormat::TypeInterpretation */
   { "UnsignedInteger", QPixelFormat::UnsignedInteger },
   { "UnsignedShort", QPixelFormat::UnsignedShort },
   { "UnsignedByte", QPixelFormat::UnsignedByte },
   { "FloatingPoint", QPixelFormat::FloatingPoint },

    /* QPixelFormat::YUVLayout */
   { "YUV444", QPixelFormat::YUV444 },
   { "YUV422", QPixelFormat::YUV422 },
   { "YUV411", QPixelFormat::YUV411 },
   { "YUV420P", QPixelFormat::YUV420P },
   { "YUV420SP", QPixelFormat::YUV420SP },
   { "YV12", QPixelFormat::YV12 },
   { "UYVY", QPixelFormat::UYVY },
   { "YUYV", QPixelFormat::YUYV },
   { "NV12", QPixelFormat::NV12 },
   { "NV21", QPixelFormat::NV21 },
   { "IMC1", QPixelFormat::IMC1 },
   { "IMC2", QPixelFormat::IMC2 },
   { "IMC3", QPixelFormat::IMC3 },
   { "IMC4", QPixelFormat::IMC4 },
   { "Y8", QPixelFormat::Y8 },
   { "Y16", QPixelFormat::Y16 },

};

QVector<PlastiQMetaObject*> PlastiQQPixelFormat::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQPixelFormat::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPixelFormat::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QPixelFormat", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPixelFormat::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPixelFormat::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPixelFormat *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPixelFormat(); break;
        /*case 1: o = new QPixelFormat(QPixelFormat::ColorModel(stack[1].s_int64),
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    QPixelFormat::AlphaUsage(stack[8].s_int64),
                    QPixelFormat::AlphaPosition(stack[9].s_int64),
                    QPixelFormat::AlphaPremultiplied(stack[10].s_int64),
                    QPixelFormat::TypeInterpretation(stack[11].s_int64)); break;*/
        /*case 2: o = new QPixelFormat(QPixelFormat::ColorModel(stack[1].s_int64),
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    QPixelFormat::AlphaUsage(stack[8].s_int64),
                    QPixelFormat::AlphaPosition(stack[9].s_int64),
                    QPixelFormat::AlphaPremultiplied(stack[10].s_int64),
                    QPixelFormat::TypeInterpretation(stack[11].s_int64),
                    QPixelFormat::ByteOrder(stack[12].s_int64)); break;*/
        /*case 3: o = new QPixelFormat(QPixelFormat::ColorModel(stack[1].s_int64),
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    UNSUPPORTED_TYPE_uchar,
                    QPixelFormat::AlphaUsage(stack[8].s_int64),
                    QPixelFormat::AlphaPosition(stack[9].s_int64),
                    QPixelFormat::AlphaPremultiplied(stack[10].s_int64),
                    QPixelFormat::TypeInterpretation(stack[11].s_int64),
                    QPixelFormat::ByteOrder(stack[12].s_int64),
                    UNSUPPORTED_TYPE_uchar); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPixelFormat *p = new PlastiQQPixelFormat();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPixelFormat *p = new PlastiQQPixelFormat();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 21) {
            id -= 21;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPixelFormat *o = sc ? Q_NULLPTR : reinterpret_cast<QPixelFormat*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->alphaPosition(); // HACK for AlphaPosition 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: /* UNSUPPORTED_RETURN_VALUE o->alphaSize() | ret: `uchar` */ break;
        case 2: { qint64 _r = o->alphaUsage(); // HACK for AlphaUsage 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: /* UNSUPPORTED_RETURN_VALUE o->bitsPerPixel() | ret: `uchar` */ break;
        case 4: /* UNSUPPORTED_RETURN_VALUE o->blackSize() | ret: `uchar` */ break;
        case 5: /* UNSUPPORTED_RETURN_VALUE o->blueSize() | ret: `uchar` */ break;
        case 6: /* UNSUPPORTED_RETURN_VALUE o->brightnessSize() | ret: `uchar` */ break;
        case 7: { qint64 _r = o->byteOrder(); // HACK for ByteOrder 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: /* UNSUPPORTED_RETURN_VALUE o->channelCount() | ret: `uchar` */ break;
        case 9: { qint64 _r = o->colorModel(); // HACK for ColorModel 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: /* UNSUPPORTED_RETURN_VALUE o->cyanSize() | ret: `uchar` */ break;
        case 11: /* UNSUPPORTED_RETURN_VALUE o->greenSize() | ret: `uchar` */ break;
        case 12: /* UNSUPPORTED_RETURN_VALUE o->hueSize() | ret: `uchar` */ break;
        case 13: /* UNSUPPORTED_RETURN_VALUE o->lightnessSize() | ret: `uchar` */ break;
        case 14: /* UNSUPPORTED_RETURN_VALUE o->magentaSize() | ret: `uchar` */ break;
        case 15: { qint64 _r = o->premultiplied(); // HACK for AlphaPremultiplied 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 16: /* UNSUPPORTED_RETURN_VALUE o->redSize() | ret: `uchar` */ break;
        case 17: /* UNSUPPORTED_RETURN_VALUE o->saturationSize() | ret: `uchar` */ break;
        case 18: { qint64 _r = o->typeInterpretation(); // HACK for TypeInterpretation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 19: /* UNSUPPORTED_RETURN_VALUE o->yellowSize() | ret: `uchar` */ break;
        case 20: { qint64 _r = o->yuvLayout(); // HACK for YUVLayout 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

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
        QPixelFormat *o = reinterpret_cast<QPixelFormat*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQPixelFormat::~PlastiQQPixelFormat() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

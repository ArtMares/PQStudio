#include "plastiqmethod.h"
#include "plastiqqvideosurfaceformat.h"

#include <QVideoSurfaceFormat> 
#include <QSize>
#include <QVariant>
#include <QRect>

QHash<QByteArray, PlastiQMethod> PlastiQQVideoSurfaceFormat::plastiqConstructors = {
    { "QVideoSurfaceFormat()", { "QVideoSurfaceFormat", "", "QVideoSurfaceFormat*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVideoSurfaceFormat(QSize&,enum)", { "QVideoSurfaceFormat", "QSize&,QVideoFrame::PixelFormat", "QVideoSurfaceFormat*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVideoSurfaceFormat(QSize&,enum,enum)", { "QVideoSurfaceFormat", "QSize&,QVideoFrame::PixelFormat,QAbstractVideoBuffer::HandleType", "QVideoSurfaceFormat*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QVideoSurfaceFormat(QVideoSurfaceFormat&)", { "QVideoSurfaceFormat", "QVideoSurfaceFormat&", "QVideoSurfaceFormat*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoSurfaceFormat::plastiqMethods = {
    { "frameHeight()", { "frameHeight", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameRate()", { "frameRate", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameSize()", { "frameSize", "", "QSize", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "frameWidth()", { "frameWidth", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "handleType()", { "handleType", "", "QAbstractVideoBuffer::HandleType", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelAspectRatio()", { "pixelAspectRatio", "", "QSize", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelFormat()", { "pixelFormat", "", "QVideoFrame::PixelFormat", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "property(const char*)", { "property", "char*", "QVariant", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scanLineDirection()", { "scanLineDirection", "", "Direction", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFrameRate(double)", { "setFrameRate", "qreal", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFrameSize(QSize&)", { "setFrameSize", "QSize&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFrameSize(int,int)", { "setFrameSize", "int,int", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixelAspectRatio(QSize&)", { "setPixelAspectRatio", "QSize&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixelAspectRatio(int,int)", { "setPixelAspectRatio", "int,int", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setProperty(const char*,QVariant)", { "setProperty", "char*,QVariant&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setScanLineDirection(enum)", { "setScanLineDirection", "Direction", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setViewport(QRect&)", { "setViewport", "QRect&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setYCbCrColorSpace(enum)", { "setYCbCrColorSpace", "YCbCrColorSpace", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizeHint()", { "sizeHint", "", "QSize", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "viewport()", { "viewport", "", "QRect", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "yCbCrColorSpace()", { "yCbCrColorSpace", "", "YCbCrColorSpace", 21, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQVideoSurfaceFormat::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQVideoSurfaceFormat::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQVideoSurfaceFormat::plastiqConstants = {

    /* QVideoSurfaceFormat::Direction */
   { "TopToBottom", QVideoSurfaceFormat::TopToBottom },
   { "BottomToTop", QVideoSurfaceFormat::BottomToTop },

    /* QVideoSurfaceFormat::YCbCrColorSpace */
   { "YCbCr_Undefined", QVideoSurfaceFormat::YCbCr_Undefined },
   { "YCbCr_BT601", QVideoSurfaceFormat::YCbCr_BT601 },
   { "YCbCr_BT709", QVideoSurfaceFormat::YCbCr_BT709 },
   { "YCbCr_xvYCC601", QVideoSurfaceFormat::YCbCr_xvYCC601 },
   { "YCbCr_xvYCC709", QVideoSurfaceFormat::YCbCr_xvYCC709 },
   { "YCbCr_JPEG", QVideoSurfaceFormat::YCbCr_JPEG },

};

QVector<PlastiQMetaObject*> PlastiQQVideoSurfaceFormat::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQVideoSurfaceFormat::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQVideoSurfaceFormat::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QVideoSurfaceFormat", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQVideoSurfaceFormat::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQVideoSurfaceFormat::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QVideoSurfaceFormat *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QVideoSurfaceFormat(); break;
        case 1: o = new QVideoSurfaceFormat((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    QVideoFrame::PixelFormat(stack[2].s_int64)); break;
        case 2: o = new QVideoSurfaceFormat((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    QVideoFrame::PixelFormat(stack[2].s_int64),
                    QAbstractVideoBuffer::HandleType(stack[3].s_int64)); break;
        case 3: o = new QVideoSurfaceFormat((*reinterpret_cast< QVideoSurfaceFormat(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQVideoSurfaceFormat *p = new PlastiQQVideoSurfaceFormat();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQVideoSurfaceFormat *p = new PlastiQQVideoSurfaceFormat();
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
        QVideoSurfaceFormat *o = sc ? Q_NULLPTR : reinterpret_cast<QVideoSurfaceFormat*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->frameHeight();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { double _r = o->frameRate();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { /* COPY OBJECT */
            QSize *_r = new QSize(o->frameSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { int _r = o->frameWidth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { qint64 _r = o->handleType(); // HACK for QAbstractVideoBuffer::HandleType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { /* COPY OBJECT */
            QSize *_r = new QSize(o->pixelAspectRatio());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { qint64 _r = o->pixelFormat(); // HACK for QVideoFrame::PixelFormat 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->property(reinterpret_cast<const char*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { qint64 _r = o->scanLineDirection(); // HACK for Direction 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: o->setFrameRate(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setFrameSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setFrameSize(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setPixelAspectRatio((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setPixelAspectRatio(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setProperty(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setScanLineDirection(QVideoSurfaceFormat::Direction(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setViewport((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setYCbCrColorSpace(QVideoSurfaceFormat::YCbCrColorSpace(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 19: { /* COPY OBJECT */
            QSize *_r = new QSize(o->sizeHint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: { /* COPY OBJECT */
            QRect *_r = new QRect(o->viewport());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: { qint64 _r = o->yCbCrColorSpace(); // HACK for YCbCrColorSpace 
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
        QVideoSurfaceFormat *o = reinterpret_cast<QVideoSurfaceFormat*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQVideoSurfaceFormat::~PlastiQQVideoSurfaceFormat() {
    QVideoSurfaceFormat* o = reinterpret_cast<QVideoSurfaceFormat*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

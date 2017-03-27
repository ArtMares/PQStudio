#include "plastiqmethod.h"
#include "plastiqqpixmap.h"

#include "gui/PlastiQQPaintDevice/plastiqqpaintdevice.h"
#include <QPixmap> 
#include <QBitmap>
#include <QRect>
#include <QSize>
#include <QImage>
#include <QTransform>
#include <QMatrix>

QHash<QByteArray, PlastiQMethod> PlastiQQPixmap::plastiqConstructors = {
    { "QPixmap()", { "QPixmap", "", "QPixmap*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPixmap(int,int)", { "QPixmap", "int,int", "QPixmap*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPixmap(QSize&)", { "QPixmap", "QSize&", "QPixmap*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPixmap(QString)", { "QPixmap", "QString&", "QPixmap*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPixmap(QString,const char*)", { "QPixmap", "QString&,char*", "QPixmap*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPixmap(QString,const char*,enum)", { "QPixmap", "QString&,char*,Qt::ImageConversionFlags", "QPixmap*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPixmap(const char*)", { "QPixmap", "char*", "QPixmap*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPixmap(QPixmap&)", { "QPixmap", "QPixmap&", "QPixmap*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPixmap::plastiqMethods = {
    { "cacheKey()", { "cacheKey", "", "qint64", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "convertFromImage(QImage&)", { "convertFromImage", "QImage&", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "convertFromImage(QImage&,enum)", { "convertFromImage", "QImage&,Qt::ImageConversionFlags", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "copy()", { "copy", "", "QPixmap", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "copy(QRect&)", { "copy", "QRect&", "QPixmap", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "copy(int,int,int,int)", { "copy", "int,int,int,int", "QPixmap", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createHeuristicMask()", { "createHeuristicMask", "", "QBitmap", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createHeuristicMask(bool)", { "createHeuristicMask", "bool", "QBitmap", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createMaskFromColor(QColor&)", { "createMaskFromColor", "QColor&", "QBitmap", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createMaskFromColor(QColor&,enum)", { "createMaskFromColor", "QColor&,Qt::MaskMode", "QBitmap", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "depth()", { "depth", "", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "detach()", { "detach", "", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "devicePixelRatio()", { "devicePixelRatio", "", "qreal", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fill()", { "fill", "", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fill(QColor&)", { "fill", "QColor&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasAlpha()", { "hasAlpha", "", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasAlphaChannel()", { "hasAlphaChannel", "", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "height()", { "height", "", "int", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isQBitmap()", { "isQBitmap", "", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QString)", { "load", "QString&", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QString,const char*)", { "load", "QString&,char*", "bool", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QString,const char*,enum)", { "load", "QString&,char*,Qt::ImageConversionFlags", "bool", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loadFromData(const uchar*,long)", { "loadFromData", "uchar*,uint", "bool", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loadFromData(const uchar*,long,const char*)", { "loadFromData", "uchar*,uint,char*", "bool", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loadFromData(const uchar*,long,const char*,enum)", { "loadFromData", "uchar*,uint,char*,Qt::ImageConversionFlags", "bool", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loadFromData(QByteArray)", { "loadFromData", "QByteArray&", "bool", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loadFromData(QByteArray,const char*)", { "loadFromData", "QByteArray&,char*", "bool", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loadFromData(QByteArray,const char*,enum)", { "loadFromData", "QByteArray&,char*,Qt::ImageConversionFlags", "bool", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mask()", { "mask", "", "QBitmap", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rect()", { "rect", "", "QRect", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QString)", { "save", "QString&", "bool", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QString,const char*)", { "save", "QString&,char*", "bool", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QString,const char*,int)", { "save", "QString&,char*,int", "bool", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QIODevice*)", { "save", "QIODevice*", "bool", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QIODevice*,const char*)", { "save", "QIODevice*,char*", "bool", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QIODevice*,const char*,int)", { "save", "QIODevice*,char*,int", "bool", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaled(QSize&)", { "scaled", "QSize&", "QPixmap", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaled(QSize&,enum)", { "scaled", "QSize&,Qt::AspectRatioMode", "QPixmap", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaled(QSize&,enum,enum)", { "scaled", "QSize&,Qt::AspectRatioMode,Qt::TransformationMode", "QPixmap", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaled(int,int)", { "scaled", "int,int", "QPixmap", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaled(int,int,enum)", { "scaled", "int,int,Qt::AspectRatioMode", "QPixmap", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaled(int,int,enum,enum)", { "scaled", "int,int,Qt::AspectRatioMode,Qt::TransformationMode", "QPixmap", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaledToHeight(int)", { "scaledToHeight", "int", "QPixmap", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaledToHeight(int,enum)", { "scaledToHeight", "int,Qt::TransformationMode", "QPixmap", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaledToWidth(int)", { "scaledToWidth", "int", "QPixmap", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaledToWidth(int,enum)", { "scaledToWidth", "int,Qt::TransformationMode", "QPixmap", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scroll(int,int,int,int,int,int)", { "scroll", "int,int,int,int,int,int", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scroll(int,int,int,int,int,int,QRegion*)", { "scroll", "int,int,int,int,int,int,QRegion*", "void", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scroll(int,int,QRect&)", { "scroll", "int,int,QRect&", "void", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scroll(int,int,QRect&,QRegion*)", { "scroll", "int,int,QRect&,QRegion*", "void", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDevicePixelRatio(double)", { "setDevicePixelRatio", "qreal", "void", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMask(QBitmap&)", { "setMask", "QBitmap&", "void", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "QSize", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QPixmap&)", { "swap", "QPixmap&", "void", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toImage()", { "toImage", "", "QImage", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transformed(QTransform&)", { "transformed", "QTransform&", "QPixmap", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transformed(QTransform&,enum)", { "transformed", "QTransform&,Qt::TransformationMode", "QPixmap", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transformed(QMatrix&)", { "transformed", "QMatrix&", "QPixmap", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transformed(QMatrix&,enum)", { "transformed", "QMatrix&,Qt::TransformationMode", "QPixmap", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "int", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultDepth()", { "defaultDepth", "", "int", 61, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromImage(QImage&)", { "fromImage", "QImage&", "QPixmap", 62, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromImage(QImage&,enum)", { "fromImage", "QImage&,Qt::ImageConversionFlags", "QPixmap", 63, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromImage(QImage&&)", { "fromImage", "QImage&&", "QPixmap", 64, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromImage(QImage&&,enum)", { "fromImage", "QImage&&,Qt::ImageConversionFlags", "QPixmap", 65, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromImageReader(QImageReader*)", { "fromImageReader", "QImageReader*", "QPixmap", 66, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromImageReader(QImageReader*,enum)", { "fromImageReader", "QImageReader*,Qt::ImageConversionFlags", "QPixmap", 67, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "trueMatrix(QTransform&,int,int)", { "trueMatrix", "QTransform&,int,int", "QTransform", 68, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "trueMatrix(QMatrix&,int,int)", { "trueMatrix", "QMatrix&,int,int", "QMatrix", 69, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPixmap::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPixmap::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPixmap::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQPixmap::plastiqInherits = { &PlastiQQPaintDevice::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPixmap::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPixmap::plastiq_static_metaObject = {
    { &PlastiQQPaintDevice::plastiq_static_metaObject, &plastiqInherits, "QPixmap", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPixmap::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPixmap::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPixmap *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPixmap(); break;
        case 1: o = new QPixmap(stack[1].s_int,
                    stack[2].s_int); break;
        case 2: o = new QPixmap((*reinterpret_cast< QSize(*) >(stack[1].s_voidp))); break;
        case 3: o = new QPixmap(stack[1].s_string); break;
        case 4: o = new QPixmap(stack[1].s_string,
                    reinterpret_cast<const char*>(stack[2].s_voidp)); break;
        case 5: o = new QPixmap(stack[1].s_string,
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    Qt::ImageConversionFlags(stack[3].s_int64)); break;
        case 6: o = new QPixmap(reinterpret_cast<const char*>(stack[1].s_voidp)); break;
        case 7: o = new QPixmap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPixmap *p = new PlastiQQPixmap();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPixmap *p = new PlastiQQPixmap();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 70) {
            id -= 70;
            PlastiQQPaintDevice::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPixmap *o = sc ? Q_NULLPTR : reinterpret_cast<QPixmap*>(object->plastiq_data());

        switch(id) {
        case 0: { long _r = o->cacheKey();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 1: { bool _r = o->convertFromImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->convertFromImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)),
                    Qt::ImageConversionFlags(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->copy());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->copy((*reinterpret_cast< QRect(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->copy(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QBitmap *_r = new QBitmap(o->createHeuristicMask());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBitmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { /* COPY OBJECT */
            QBitmap *_r = new QBitmap(o->createHeuristicMask(stack[1].s_bool));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBitmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QBitmap *_r = new QBitmap(o->createMaskFromColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBitmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { /* COPY OBJECT */
            QBitmap *_r = new QBitmap(o->createMaskFromColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)),
                    Qt::MaskMode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBitmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { int _r = o->depth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: o->detach();
                stack[0].type = PlastiQ::Void; break;
        case 12: { double _r = o->devicePixelRatio();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 13: o->fill();
                stack[0].type = PlastiQ::Void; break;
        case 14: o->fill((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 15: { bool _r = o->hasAlpha();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r = o->hasAlphaChannel();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { int _r = o->height();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 18: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r = o->isQBitmap();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { bool _r = o->load(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { bool _r = o->load(stack[1].s_string,
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: { bool _r = o->load(stack[1].s_string,
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    Qt::ImageConversionFlags(stack[3].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 23: { bool _r = o->loadFromData(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: { bool _r = o->loadFromData(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_long,
                    reinterpret_cast<const char*>(stack[3].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 25: { bool _r = o->loadFromData(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_long,
                    reinterpret_cast<const char*>(stack[3].s_voidp),
                    Qt::ImageConversionFlags(stack[4].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 26: { bool _r = o->loadFromData(stack[1].s_bytearray);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 27: { bool _r = o->loadFromData(stack[1].s_bytearray,
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 28: { bool _r = o->loadFromData(stack[1].s_bytearray,
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    Qt::ImageConversionFlags(stack[3].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 29: { /* COPY OBJECT */
            QBitmap *_r = new QBitmap(o->mask());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBitmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: { /* COPY OBJECT */
            QRect *_r = new QRect(o->rect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 31: { bool _r = o->save(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 32: { bool _r = o->save(stack[1].s_string,
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 33: { bool _r = o->save(stack[1].s_string,
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    stack[3].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 34: { bool _r = o->save(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 35: { bool _r = o->save(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 36: { bool _r = o->save(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    stack[3].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 37: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->scaled((*reinterpret_cast< QSize(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 38: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->scaled((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    Qt::AspectRatioMode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 39: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->scaled((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    Qt::AspectRatioMode(stack[2].s_int64),
                    Qt::TransformationMode(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 40: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->scaled(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 41: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->scaled(stack[1].s_int,
                    stack[2].s_int,
                    Qt::AspectRatioMode(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 42: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->scaled(stack[1].s_int,
                    stack[2].s_int,
                    Qt::AspectRatioMode(stack[3].s_int64),
                    Qt::TransformationMode(stack[4].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 43: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->scaledToHeight(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 44: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->scaledToHeight(stack[1].s_int,
                    Qt::TransformationMode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 45: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->scaledToWidth(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 46: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->scaledToWidth(stack[1].s_int,
                    Qt::TransformationMode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 47: o->scroll(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 48: o->scroll(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int,
                    reinterpret_cast<QRegion*>(stack[7].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 49: o->scroll(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 50: o->scroll(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QRect(*) >(stack[3].s_voidp)),
                    reinterpret_cast<QRegion*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 51: o->setDevicePixelRatio(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 52: o->setMask((*reinterpret_cast< QBitmap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 53: { /* COPY OBJECT */
            QSize *_r = new QSize(o->size());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 54: o->swap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 55: { /* COPY OBJECT */
            QImage *_r = new QImage(o->toImage());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 56: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->transformed((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 57: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->transformed((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)),
                    Qt::TransformationMode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 58: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->transformed((*reinterpret_cast< QMatrix(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 59: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->transformed((*reinterpret_cast< QMatrix(*) >(stack[1].s_voidp)),
                    Qt::TransformationMode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 60: { int _r = o->width();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 61: { int _r = sc ? QPixmap::defaultDepth() : o->defaultDepth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 62: { /* COPY OBJECT */
            QPixmap *_r = sc ? new QPixmap(QPixmap::fromImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)))) : new QPixmap(o->fromImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 63: { /* COPY OBJECT */
            QPixmap *_r = sc ? new QPixmap(QPixmap::fromImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)),
                    Qt::ImageConversionFlags(stack[2].s_int64))) : new QPixmap(o->fromImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)),
                    Qt::ImageConversionFlags(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 64: { /* COPY OBJECT */
            QPixmap *_r = sc ? new QPixmap(QPixmap::fromImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)))) : new QPixmap(o->fromImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 65: { /* COPY OBJECT */
            QPixmap *_r = sc ? new QPixmap(QPixmap::fromImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)),
                    Qt::ImageConversionFlags(stack[2].s_int64))) : new QPixmap(o->fromImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)),
                    Qt::ImageConversionFlags(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 66: { /* COPY OBJECT */
            QPixmap *_r = sc ? new QPixmap(QPixmap::fromImageReader(reinterpret_cast<QImageReader*>(stack[1].s_voidp))) : new QPixmap(o->fromImageReader(reinterpret_cast<QImageReader*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 67: { /* COPY OBJECT */
            QPixmap *_r = sc ? new QPixmap(QPixmap::fromImageReader(reinterpret_cast<QImageReader*>(stack[1].s_voidp),
                    Qt::ImageConversionFlags(stack[2].s_int64))) : new QPixmap(o->fromImageReader(reinterpret_cast<QImageReader*>(stack[1].s_voidp),
                    Qt::ImageConversionFlags(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 68: { /* COPY OBJECT */
            QTransform *_r = sc ? new QTransform(QPixmap::trueMatrix((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int)) : new QTransform(o->trueMatrix((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 69: /* UNSUPPORTED_RETURN_VALUE o->trueMatrix((*reinterpret_cast< QMatrix(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int) | ret: `QMatrix` */ break;

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
        QPixmap *o = reinterpret_cast<QPixmap*>(object->plastiq_data());

        if(className == "QPaintDevice") {
            stack[0].s_voidp = static_cast<QPaintDevice*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPixmap::~PlastiQQPixmap() {
    QPixmap* o = reinterpret_cast<QPixmap*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

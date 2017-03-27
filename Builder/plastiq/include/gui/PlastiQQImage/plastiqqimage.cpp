#include "plastiqmethod.h"
#include "plastiqqimage.h"

#include "gui/PlastiQQPaintDevice/plastiqqpaintdevice.h"
#include <QImage> 
#include <QRgb>
#include <QPoint>
#include <QColor>
#include <QPixelFormat>
#include <QRect>
#include <QSize>
#include <QString>
#include <QStringList>
#include <QMatrix>
#include <QTransform>

QHash<QByteArray, PlastiQMethod> PlastiQQImage::plastiqConstructors = {
    { "QImage()", { "QImage", "", "QImage*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(QSize&,enum)", { "QImage", "QSize&,Format", "QImage*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(int,int,enum)", { "QImage", "int,int,Format", "QImage*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(uchar*,int,int,enum)", { "QImage", "uchar*,int,int,Format", "QImage*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(uchar*,int,int,enum,QImageCleanupFunction)", { "QImage", "uchar*,int,int,Format,QImageCleanupFunction", "QImage*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(uchar*,int,int,enum,QImageCleanupFunction,void*)", { "QImage", "uchar*,int,int,Format,QImageCleanupFunction,void*", "QImage*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(const uchar*,int,int,enum)", { "QImage", "uchar*,int,int,Format", "QImage*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(const uchar*,int,int,enum,QImageCleanupFunction)", { "QImage", "uchar*,int,int,Format,QImageCleanupFunction", "QImage*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(const uchar*,int,int,enum,QImageCleanupFunction,void*)", { "QImage", "uchar*,int,int,Format,QImageCleanupFunction,void*", "QImage*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(uchar*,int,int,int,enum)", { "QImage", "uchar*,int,int,int,Format", "QImage*", 9, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(uchar*,int,int,int,enum,QImageCleanupFunction)", { "QImage", "uchar*,int,int,int,Format,QImageCleanupFunction", "QImage*", 10, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(uchar*,int,int,int,enum,QImageCleanupFunction,void*)", { "QImage", "uchar*,int,int,int,Format,QImageCleanupFunction,void*", "QImage*", 11, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(const uchar*,int,int,int,enum)", { "QImage", "uchar*,int,int,int,Format", "QImage*", 12, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(const uchar*,int,int,int,enum,QImageCleanupFunction)", { "QImage", "uchar*,int,int,int,Format,QImageCleanupFunction", "QImage*", 13, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(const uchar*,int,int,int,enum,QImageCleanupFunction,void*)", { "QImage", "uchar*,int,int,int,Format,QImageCleanupFunction,void*", "QImage*", 14, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(const char*)", { "QImage", "char*", "QImage*", 15, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(QString)", { "QImage", "QString&", "QImage*", 16, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(QString,const char*)", { "QImage", "QString&,char*", "QImage*", 17, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(QImage&)", { "QImage", "QImage&", "QImage*", 18, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QImage(QImage&&)", { "QImage", "QImage&&", "QImage*", 19, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQImage::plastiqMethods = {
    { "allGray()", { "allGray", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bitPlaneCount()", { "bitPlaneCount", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bits()", { "bits", "", "uchar*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "byteCount()", { "byteCount", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bytesPerLine()", { "bytesPerLine", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cacheKey()", { "cacheKey", "", "qint64", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "color(int)", { "color", "int", "QRgb", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "colorCount()", { "colorCount", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constBits()", { "constBits", "", "const uchar*", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "constScanLine(int)", { "constScanLine", "int", "const uchar*", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "convertToFormat(enum)", { "convertToFormat", "Format", "QImage", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "convertToFormat(enum,enum)", { "convertToFormat", "Format,Qt::ImageConversionFlags", "QImage", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "convertToFormat(enum,QVector<QRgb>&)", { "convertToFormat", "Format,QVector<QRgb>&", "QImage", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "convertToFormat(enum,QVector<QRgb>&,enum)", { "convertToFormat", "Format,QVector<QRgb>&,Qt::ImageConversionFlags", "QImage", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "copy()", { "copy", "", "QImage", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "copy(QRect&)", { "copy", "QRect&", "QImage", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "copy(int,int,int,int)", { "copy", "int,int,int,int", "QImage", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createAlphaMask()", { "createAlphaMask", "", "QImage", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createAlphaMask(enum)", { "createAlphaMask", "Qt::ImageConversionFlags", "QImage", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createHeuristicMask()", { "createHeuristicMask", "", "QImage", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createHeuristicMask(bool)", { "createHeuristicMask", "bool", "QImage", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createMaskFromColor(QRgb)", { "createMaskFromColor", "QRgb", "QImage", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createMaskFromColor(QRgb,enum)", { "createMaskFromColor", "QRgb,Qt::MaskMode", "QImage", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "depth()", { "depth", "", "int", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "devicePixelRatio()", { "devicePixelRatio", "", "qreal", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dotsPerMeterX()", { "dotsPerMeterX", "", "int", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dotsPerMeterY()", { "dotsPerMeterY", "", "int", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fill(long)", { "fill", "uint", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fill(QColor&)", { "fill", "QColor&", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fill(enum)", { "fill", "Qt::GlobalColor", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "format()", { "format", "", "Format", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasAlphaChannel()", { "hasAlphaChannel", "", "bool", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "height()", { "height", "", "int", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "invertPixels()", { "invertPixels", "", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "invertPixels(enum)", { "invertPixels", "InvertMode", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isGrayscale()", { "isGrayscale", "", "bool", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QString)", { "load", "QString&", "bool", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QString,const char*)", { "load", "QString&,char*", "bool", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QIODevice*,const char*)", { "load", "QIODevice*,char*", "bool", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loadFromData(const uchar*,int)", { "loadFromData", "uchar*,int", "bool", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loadFromData(const uchar*,int,const char*)", { "loadFromData", "uchar*,int,char*", "bool", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loadFromData(QByteArray)", { "loadFromData", "QByteArray&", "bool", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loadFromData(QByteArray,const char*)", { "loadFromData", "QByteArray&,char*", "bool", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mirrored()", { "mirrored", "", "QImage", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mirrored(bool)", { "mirrored", "bool", "QImage", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mirrored(bool,bool)", { "mirrored", "bool,bool", "QImage", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "offset()", { "offset", "", "QPoint", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixel(QPoint&)", { "pixel", "QPoint&", "QRgb", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixel(int,int)", { "pixel", "int,int", "QRgb", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelColor(QPoint&)", { "pixelColor", "QPoint&", "QColor", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelColor(int,int)", { "pixelColor", "int,int", "QColor", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelFormat()", { "pixelFormat", "", "QPixelFormat", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelIndex(QPoint&)", { "pixelIndex", "QPoint&", "int", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelIndex(int,int)", { "pixelIndex", "int,int", "int", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rect()", { "rect", "", "QRect", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rgbSwapped()", { "rgbSwapped", "", "QImage", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QString)", { "save", "QString&", "bool", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QString,const char*)", { "save", "QString&,char*", "bool", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QString,const char*,int)", { "save", "QString&,char*,int", "bool", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QIODevice*)", { "save", "QIODevice*", "bool", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QIODevice*,const char*)", { "save", "QIODevice*,char*", "bool", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "save(QIODevice*,const char*,int)", { "save", "QIODevice*,char*,int", "bool", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaled(QSize&)", { "scaled", "QSize&", "QImage", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaled(QSize&,enum)", { "scaled", "QSize&,Qt::AspectRatioMode", "QImage", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaled(QSize&,enum,enum)", { "scaled", "QSize&,Qt::AspectRatioMode,Qt::TransformationMode", "QImage", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaled(int,int)", { "scaled", "int,int", "QImage", 66, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaled(int,int,enum)", { "scaled", "int,int,Qt::AspectRatioMode", "QImage", 67, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaled(int,int,enum,enum)", { "scaled", "int,int,Qt::AspectRatioMode,Qt::TransformationMode", "QImage", 68, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaledToHeight(int)", { "scaledToHeight", "int", "QImage", 69, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaledToHeight(int,enum)", { "scaledToHeight", "int,Qt::TransformationMode", "QImage", 70, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaledToWidth(int)", { "scaledToWidth", "int", "QImage", 71, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaledToWidth(int,enum)", { "scaledToWidth", "int,Qt::TransformationMode", "QImage", 72, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scanLine(int)", { "scanLine", "int", "uchar*", 73, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColor(int,QRgb)", { "setColor", "int,QRgb", "void", 74, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColorCount(int)", { "setColorCount", "int", "void", 75, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColorTable(const QVector<QRgb>)", { "setColorTable", "QVector<QRgb>", "void", 76, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDevicePixelRatio(double)", { "setDevicePixelRatio", "qreal", "void", 77, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDotsPerMeterX(int)", { "setDotsPerMeterX", "int", "void", 78, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDotsPerMeterY(int)", { "setDotsPerMeterY", "int", "void", 79, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOffset(QPoint&)", { "setOffset", "QPoint&", "void", 80, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixel(QPoint&,long)", { "setPixel", "QPoint&,uint", "void", 81, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixel(int,int,long)", { "setPixel", "int,int,uint", "void", 82, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixelColor(QPoint&,QColor&)", { "setPixelColor", "QPoint&,QColor&", "void", 83, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixelColor(int,int,QColor&)", { "setPixelColor", "int,int,QColor&", "void", 84, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setText(QString,QString)", { "setText", "QString&,QString&", "void", 85, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "QSize", 86, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QImage&)", { "swap", "QImage&", "void", 87, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 88, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text(QString)", { "text", "QString&", "QString", 89, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textKeys()", { "textKeys", "", "QStringList", 90, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCGImage()", { "toCGImage", "", "CGImageRef", 91, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transformed(QMatrix&)", { "transformed", "QMatrix&", "QImage", 92, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transformed(QMatrix&,enum)", { "transformed", "QMatrix&,Qt::TransformationMode", "QImage", 93, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transformed(QTransform&)", { "transformed", "QTransform&", "QImage", 94, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transformed(QTransform&,enum)", { "transformed", "QTransform&,Qt::TransformationMode", "QImage", 95, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "valid(QPoint&)", { "valid", "QPoint&", "bool", 96, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "valid(int,int)", { "valid", "int,int", "bool", 97, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "int", 98, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromData(const uchar*,int)", { "fromData", "uchar*,int", "QImage", 99, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromData(const uchar*,int,const char*)", { "fromData", "uchar*,int,char*", "QImage", 100, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromData(QByteArray)", { "fromData", "QByteArray&", "QImage", 101, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromData(QByteArray,const char*)", { "fromData", "QByteArray&,char*", "QImage", 102, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "toImageFormat(QPixelFormat)", { "toImageFormat", "QPixelFormat", "QImage::Format", 103, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "toPixelFormat(enum)", { "toPixelFormat", "QImage::Format", "QPixelFormat", 104, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "trueMatrix(QMatrix&,int,int)", { "trueMatrix", "QMatrix&,int,int", "QMatrix", 105, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "trueMatrix(QTransform&,int,int)", { "trueMatrix", "QTransform&,int,int", "QTransform", 106, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "smoothScaled(int,int)", { "smoothScaled", "int,int", "QImage", 107, PlastiQMethod::Protected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQImage::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQImage::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQImage::plastiqConstants = {

    /* QImage::Format */
   { "Format_Invalid", QImage::Format_Invalid },
   { "Format_Mono", QImage::Format_Mono },
   { "Format_MonoLSB", QImage::Format_MonoLSB },
   { "Format_Indexed8", QImage::Format_Indexed8 },
   { "Format_RGB32", QImage::Format_RGB32 },
   { "Format_ARGB32", QImage::Format_ARGB32 },
   { "Format_ARGB32_Premultiplied", QImage::Format_ARGB32_Premultiplied },
   { "Format_RGB16", QImage::Format_RGB16 },
   { "Format_ARGB8565_Premultiplied", QImage::Format_ARGB8565_Premultiplied },
   { "Format_RGB666", QImage::Format_RGB666 },
   { "Format_ARGB6666_Premultiplied", QImage::Format_ARGB6666_Premultiplied },
   { "Format_RGB555", QImage::Format_RGB555 },
   { "Format_ARGB8555_Premultiplied", QImage::Format_ARGB8555_Premultiplied },
   { "Format_RGB888", QImage::Format_RGB888 },
   { "Format_RGB444", QImage::Format_RGB444 },
   { "Format_ARGB4444_Premultiplied", QImage::Format_ARGB4444_Premultiplied },
   { "Format_RGBX8888", QImage::Format_RGBX8888 },
   { "Format_RGBA8888", QImage::Format_RGBA8888 },
   { "Format_RGBA8888_Premultiplied", QImage::Format_RGBA8888_Premultiplied },
   { "Format_BGR30", QImage::Format_BGR30 },
   { "Format_A2BGR30_Premultiplied", QImage::Format_A2BGR30_Premultiplied },
   { "Format_RGB30", QImage::Format_RGB30 },
   { "Format_A2RGB30_Premultiplied", QImage::Format_A2RGB30_Premultiplied },
   { "Format_Alpha8", QImage::Format_Alpha8 },
   { "Format_Grayscale8", QImage::Format_Grayscale8 },

    /* QImage::InvertMode */
   { "InvertRgb", QImage::InvertRgb },
   { "InvertRgba", QImage::InvertRgba },

};

QVector<PlastiQMetaObject*> PlastiQQImage::plastiqInherits = { &PlastiQQPaintDevice::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQImage::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQImage::plastiq_static_metaObject = {
    { &PlastiQQPaintDevice::plastiq_static_metaObject, &plastiqInherits, "QImage", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQImage::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQImage::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QImage *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QImage(); break;
        case 1: o = new QImage((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    QImage::Format(stack[2].s_int64)); break;
        case 2: o = new QImage(stack[1].s_int,
                    stack[2].s_int,
                    QImage::Format(stack[3].s_int64)); break;
        case 3: o = new QImage(reinterpret_cast<uchar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    QImage::Format(stack[4].s_int64)); break;
        /*case 4: o = new QImage(reinterpret_cast<uchar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    QImage::Format(stack[4].s_int64),
                    UNSUPPORTED_TYPE_QImageCleanupFunction); break;*/
        /*case 5: o = new QImage(reinterpret_cast<uchar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    QImage::Format(stack[4].s_int64),
                    UNSUPPORTED_TYPE_QImageCleanupFunction,
                    reinterpret_cast<void*>(stack[6].s_voidp)); break;*/
        case 6: o = new QImage(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    QImage::Format(stack[4].s_int64)); break;
        /*case 7: o = new QImage(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    QImage::Format(stack[4].s_int64),
                    UNSUPPORTED_TYPE_QImageCleanupFunction); break;*/
        /*case 8: o = new QImage(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    QImage::Format(stack[4].s_int64),
                    UNSUPPORTED_TYPE_QImageCleanupFunction,
                    reinterpret_cast<void*>(stack[6].s_voidp)); break;*/
        case 9: o = new QImage(reinterpret_cast<uchar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    QImage::Format(stack[5].s_int64)); break;
        /*case 10: o = new QImage(reinterpret_cast<uchar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    QImage::Format(stack[5].s_int64),
                    UNSUPPORTED_TYPE_QImageCleanupFunction); break;*/
        /*case 11: o = new QImage(reinterpret_cast<uchar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    QImage::Format(stack[5].s_int64),
                    UNSUPPORTED_TYPE_QImageCleanupFunction,
                    reinterpret_cast<void*>(stack[7].s_voidp)); break;*/
        case 12: o = new QImage(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    QImage::Format(stack[5].s_int64)); break;
        /*case 13: o = new QImage(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    QImage::Format(stack[5].s_int64),
                    UNSUPPORTED_TYPE_QImageCleanupFunction); break;*/
        /*case 14: o = new QImage(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    QImage::Format(stack[5].s_int64),
                    UNSUPPORTED_TYPE_QImageCleanupFunction,
                    reinterpret_cast<void*>(stack[7].s_voidp)); break;*/
        case 15: o = new QImage(reinterpret_cast<const char*>(stack[1].s_voidp)); break;
        case 16: o = new QImage(stack[1].s_string); break;
        case 17: o = new QImage(stack[1].s_string,
                    reinterpret_cast<const char*>(stack[2].s_voidp)); break;
        case 18: o = new QImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp))); break;
        case 19: o = new QImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQImage *p = new PlastiQQImage();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQImage *p = new PlastiQQImage();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 108) {
            id -= 108;
            PlastiQQPaintDevice::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QImage *o = sc ? Q_NULLPTR : reinterpret_cast<QImage*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->allGray();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { int _r = o->bitPlaneCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { uchar* _r = o->bits();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "uchar"; } break;
        case 3: { int _r = o->byteCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->bytesPerLine();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { long _r = o->cacheKey();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 6: /* UNSUPPORTED_RETURN_VALUE o->color(stack[1].s_int) | ret: `QRgb` */ break;
        case 7: { int _r = o->colorCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { uchar* _r = const_cast<uchar*>(o->constBits());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "uchar"; } break;
        case 9: { uchar* _r = const_cast<uchar*>(o->constScanLine(stack[1].s_int));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "uchar"; } break;
        case 10: { /* COPY OBJECT */
            QImage *_r = new QImage(o->convertToFormat(QImage::Format(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QImage *_r = new QImage(o->convertToFormat(QImage::Format(stack[1].s_int64),
                    Qt::ImageConversionFlags(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QImage *_r = new QImage(o->convertToFormat(QImage::Format(stack[1].s_int64),
                    (*reinterpret_cast< QVector<QRgb>(*) >(stack[2].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { /* COPY OBJECT */
            QImage *_r = new QImage(o->convertToFormat(QImage::Format(stack[1].s_int64),
                    (*reinterpret_cast< QVector<QRgb>(*) >(stack[2].s_voidp)),
                    Qt::ImageConversionFlags(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { /* COPY OBJECT */
            QImage *_r = new QImage(o->copy());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { /* COPY OBJECT */
            QImage *_r = new QImage(o->copy((*reinterpret_cast< QRect(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { /* COPY OBJECT */
            QImage *_r = new QImage(o->copy(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { /* COPY OBJECT */
            QImage *_r = new QImage(o->createAlphaMask());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { /* COPY OBJECT */
            QImage *_r = new QImage(o->createAlphaMask(Qt::ImageConversionFlags(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: { /* COPY OBJECT */
            QImage *_r = new QImage(o->createHeuristicMask());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: { /* COPY OBJECT */
            QImage *_r = new QImage(o->createHeuristicMask(stack[1].s_bool));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: /* o->createMaskFromColor(UNSUPPORTED_TYPE_QRgb) | ret: `QImage` */ break;
        case 22: /* o->createMaskFromColor(UNSUPPORTED_TYPE_QRgb,
                    Qt::MaskMode(stack[2].s_int64)) | ret: `QImage` */ break;
        case 23: { int _r = o->depth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 24: { double _r = o->devicePixelRatio();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 25: { int _r = o->dotsPerMeterX();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 26: { int _r = o->dotsPerMeterY();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 27: o->fill(stack[1].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 28: o->fill((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->fill(Qt::GlobalColor(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 30: { qint64 _r = o->format(); // HACK for Format 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 31: { bool _r = o->hasAlphaChannel();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 32: { int _r = o->height();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 33: o->invertPixels();
                stack[0].type = PlastiQ::Void; break;
        case 34: o->invertPixels(QImage::InvertMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 35: { bool _r = o->isGrayscale();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 36: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 37: { bool _r = o->load(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 38: { bool _r = o->load(stack[1].s_string,
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 39: { bool _r = o->load(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 40: { bool _r = o->loadFromData(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 41: { bool _r = o->loadFromData(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    reinterpret_cast<const char*>(stack[3].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 42: { bool _r = o->loadFromData(stack[1].s_bytearray);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 43: { bool _r = o->loadFromData(stack[1].s_bytearray,
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 44: { /* COPY OBJECT */
            QImage *_r = new QImage(o->mirrored());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 45: { /* COPY OBJECT */
            QImage *_r = new QImage(o->mirrored(stack[1].s_bool));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 46: { /* COPY OBJECT */
            QImage *_r = new QImage(o->mirrored(stack[1].s_bool,
                    stack[2].s_bool));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 47: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->offset());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 48: /* UNSUPPORTED_RETURN_VALUE o->pixel((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))) | ret: `QRgb` */ break;
        case 49: /* UNSUPPORTED_RETURN_VALUE o->pixel(stack[1].s_int,
                    stack[2].s_int) | ret: `QRgb` */ break;
        case 50: { /* COPY OBJECT */
            QColor *_r = new QColor(o->pixelColor((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 51: { /* COPY OBJECT */
            QColor *_r = new QColor(o->pixelColor(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 52: { /* COPY OBJECT */
            QPixelFormat *_r = new QPixelFormat(o->pixelFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixelFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 53: { int _r = o->pixelIndex((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 54: { int _r = o->pixelIndex(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 55: { /* COPY OBJECT */
            QRect *_r = new QRect(o->rect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 56: { /* COPY OBJECT */
            QImage *_r = new QImage(o->rgbSwapped());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 57: { bool _r = o->save(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 58: { bool _r = o->save(stack[1].s_string,
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 59: { bool _r = o->save(stack[1].s_string,
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    stack[3].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 60: { bool _r = o->save(reinterpret_cast<QIODevice*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 61: { bool _r = o->save(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 62: { bool _r = o->save(reinterpret_cast<QIODevice*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    stack[3].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 63: { /* COPY OBJECT */
            QImage *_r = new QImage(o->scaled((*reinterpret_cast< QSize(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 64: { /* COPY OBJECT */
            QImage *_r = new QImage(o->scaled((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    Qt::AspectRatioMode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 65: { /* COPY OBJECT */
            QImage *_r = new QImage(o->scaled((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    Qt::AspectRatioMode(stack[2].s_int64),
                    Qt::TransformationMode(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 66: { /* COPY OBJECT */
            QImage *_r = new QImage(o->scaled(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 67: { /* COPY OBJECT */
            QImage *_r = new QImage(o->scaled(stack[1].s_int,
                    stack[2].s_int,
                    Qt::AspectRatioMode(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 68: { /* COPY OBJECT */
            QImage *_r = new QImage(o->scaled(stack[1].s_int,
                    stack[2].s_int,
                    Qt::AspectRatioMode(stack[3].s_int64),
                    Qt::TransformationMode(stack[4].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 69: { /* COPY OBJECT */
            QImage *_r = new QImage(o->scaledToHeight(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 70: { /* COPY OBJECT */
            QImage *_r = new QImage(o->scaledToHeight(stack[1].s_int,
                    Qt::TransformationMode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 71: { /* COPY OBJECT */
            QImage *_r = new QImage(o->scaledToWidth(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 72: { /* COPY OBJECT */
            QImage *_r = new QImage(o->scaledToWidth(stack[1].s_int,
                    Qt::TransformationMode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 73: { uchar* _r = o->scanLine(stack[1].s_int);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "uchar"; } break;
        case 74: /* o->setColor(stack[1].s_int,
                    UNSUPPORTED_TYPE_QRgb) | ret: `void` */ break;
        case 75: o->setColorCount(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 76: /* o->setColorTable(UNSUPPORTED_TYPE_const QVector<QRgb>) | ret: `void` */ break;
        case 77: o->setDevicePixelRatio(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 78: o->setDotsPerMeterX(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 79: o->setDotsPerMeterY(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 80: o->setOffset((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 81: o->setPixel((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    stack[2].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 82: o->setPixel(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 83: o->setPixelColor((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QColor(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 84: o->setPixelColor(stack[1].s_int,
                    stack[2].s_int,
                    (*reinterpret_cast< QColor(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 85: o->setText(stack[1].s_string,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 86: { /* COPY OBJECT */
            QSize *_r = new QSize(o->size());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 87: o->swap((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 88: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 89: { QString _r = o->text(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 90: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->textKeys());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 91: /* UNSUPPORTED_RETURN_VALUE o->toCGImage() | ret: `CGImageRef` */ break;
        case 92: { /* COPY OBJECT */
            QImage *_r = new QImage(o->transformed((*reinterpret_cast< QMatrix(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 93: { /* COPY OBJECT */
            QImage *_r = new QImage(o->transformed((*reinterpret_cast< QMatrix(*) >(stack[1].s_voidp)),
                    Qt::TransformationMode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 94: { /* COPY OBJECT */
            QImage *_r = new QImage(o->transformed((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 95: { /* COPY OBJECT */
            QImage *_r = new QImage(o->transformed((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)),
                    Qt::TransformationMode(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 96: { bool _r = o->valid((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 97: { bool _r = o->valid(stack[1].s_int,
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 98: { int _r = o->width();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 99: { /* COPY OBJECT */
            QImage *_r = sc ? new QImage(QImage::fromData(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_int)) : new QImage(o->fromData(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 100: { /* COPY OBJECT */
            QImage *_r = sc ? new QImage(QImage::fromData(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    reinterpret_cast<const char*>(stack[3].s_voidp))) : new QImage(o->fromData(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    reinterpret_cast<const char*>(stack[3].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 101: { /* COPY OBJECT */
            QImage *_r = sc ? new QImage(QImage::fromData(stack[1].s_bytearray)) : new QImage(o->fromData(stack[1].s_bytearray));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 102: { /* COPY OBJECT */
            QImage *_r = sc ? new QImage(QImage::fromData(stack[1].s_bytearray,
                    reinterpret_cast<const char*>(stack[2].s_voidp))) : new QImage(o->fromData(stack[1].s_bytearray,
                    reinterpret_cast<const char*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 103: { qint64 _r = sc ? QImage::toImageFormat((*reinterpret_cast< QPixelFormat(*) >(stack[1].s_voidp))) : o->toImageFormat((*reinterpret_cast< QPixelFormat(*) >(stack[1].s_voidp))); // HACK for QImage::Format 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 104: { /* COPY OBJECT */
            QPixelFormat *_r = sc ? new QPixelFormat(QImage::toPixelFormat(QImage::Format(stack[1].s_int64))) : new QPixelFormat(o->toPixelFormat(QImage::Format(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixelFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 105: /* UNSUPPORTED_RETURN_VALUE o->trueMatrix((*reinterpret_cast< QMatrix(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int) | ret: `QMatrix` */ break;
        case 106: { /* COPY OBJECT */
            QTransform *_r = sc ? new QTransform(QImage::trueMatrix((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int)) : new QTransform(o->trueMatrix((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 107: { /* COPY OBJECT */
            QImage *_r; stack[0].type = PlastiQ::Error; } break;

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
        QImage *o = reinterpret_cast<QImage*>(object->plastiq_data());

        if(className == "QPaintDevice") {
            stack[0].s_voidp = static_cast<QPaintDevice*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQImage::~PlastiQQImage() {
    QImage* o = reinterpret_cast<QImage*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

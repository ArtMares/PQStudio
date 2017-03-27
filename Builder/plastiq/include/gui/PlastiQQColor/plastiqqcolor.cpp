#include "plastiqmethod.h"
#include "plastiqqcolor.h"

#include <QColor> 
#include <QString>
#include <QRgb>
#include <QRgba64>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQColor::plastiqConstructors = {
    { "QColor()", { "QColor", "", "QColor*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QColor(enum)", { "QColor", "Qt::GlobalColor", "QColor*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QColor(int,int,int)", { "QColor", "int,int,int", "QColor*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QColor(int,int,int,int)", { "QColor", "int,int,int,int", "QColor*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QColor(QRgb)", { "QColor", "QRgb", "QColor*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QColor(QRgba64)", { "QColor", "QRgba64", "QColor*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QColor(QString)", { "QColor", "QString&", "QColor*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QColor(const char*)", { "QColor", "char*", "QColor*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QColor(QLatin1String)", { "QColor", "QLatin1String", "QColor*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QColor(QColor&)", { "QColor", "QColor&", "QColor*", 9, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QColor(QColor&&)", { "QColor", "QColor&&", "QColor*", 10, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQColor::plastiqMethods = {
    { "alpha()", { "alpha", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "alphaF()", { "alphaF", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "black()", { "black", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blackF()", { "blackF", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blue()", { "blue", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "blueF()", { "blueF", "", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "convertTo(enum)", { "convertTo", "Spec", "QColor", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cyan()", { "cyan", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cyanF()", { "cyanF", "", "qreal", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "darker()", { "darker", "", "QColor", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "darker(int)", { "darker", "int", "QColor", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getCmyk(int*,int*,int*,int*)", { "getCmyk", "int*,int*,int*,int*", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getCmyk(int*,int*,int*,int*,int*)", { "getCmyk", "int*,int*,int*,int*,int*", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getCmykF(qreal*,qreal*,qreal*,qreal*)", { "getCmykF", "qreal*,qreal*,qreal*,qreal*", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getCmykF(qreal*,qreal*,qreal*,qreal*,qreal*)", { "getCmykF", "qreal*,qreal*,qreal*,qreal*,qreal*", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getHsl(int*,int*,int*)", { "getHsl", "int*,int*,int*", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getHsl(int*,int*,int*,int*)", { "getHsl", "int*,int*,int*,int*", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getHslF(qreal*,qreal*,qreal*)", { "getHslF", "qreal*,qreal*,qreal*", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getHslF(qreal*,qreal*,qreal*,qreal*)", { "getHslF", "qreal*,qreal*,qreal*,qreal*", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getHsv(int*,int*,int*)", { "getHsv", "int*,int*,int*", "void", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getHsv(int*,int*,int*,int*)", { "getHsv", "int*,int*,int*,int*", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getHsvF(qreal*,qreal*,qreal*)", { "getHsvF", "qreal*,qreal*,qreal*", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getHsvF(qreal*,qreal*,qreal*,qreal*)", { "getHsvF", "qreal*,qreal*,qreal*,qreal*", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getRgb(int*,int*,int*)", { "getRgb", "int*,int*,int*", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getRgb(int*,int*,int*,int*)", { "getRgb", "int*,int*,int*,int*", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getRgbF(qreal*,qreal*,qreal*)", { "getRgbF", "qreal*,qreal*,qreal*", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getRgbF(qreal*,qreal*,qreal*,qreal*)", { "getRgbF", "qreal*,qreal*,qreal*,qreal*", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "green()", { "green", "", "int", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "greenF()", { "greenF", "", "qreal", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hslHue()", { "hslHue", "", "int", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hslHueF()", { "hslHueF", "", "qreal", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hslSaturation()", { "hslSaturation", "", "int", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hslSaturationF()", { "hslSaturationF", "", "qreal", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hsvHue()", { "hsvHue", "", "int", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hsvHueF()", { "hsvHueF", "", "qreal", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hsvSaturation()", { "hsvSaturation", "", "int", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hsvSaturationF()", { "hsvSaturationF", "", "qreal", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hue()", { "hue", "", "int", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hueF()", { "hueF", "", "qreal", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lighter()", { "lighter", "", "QColor", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lighter(int)", { "lighter", "int", "QColor", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lightness()", { "lightness", "", "int", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lightnessF()", { "lightnessF", "", "qreal", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "magenta()", { "magenta", "", "int", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "magentaF()", { "magentaF", "", "qreal", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QString", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name(enum)", { "name", "NameFormat", "QString", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "red()", { "red", "", "int", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "redF()", { "redF", "", "qreal", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rgb()", { "rgb", "", "QRgb", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rgba64()", { "rgba64", "", "QRgba64", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rgba()", { "rgba", "", "QRgb", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "saturation()", { "saturation", "", "int", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "saturationF()", { "saturationF", "", "qreal", 54, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlpha(int)", { "setAlpha", "int", "void", 55, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAlphaF(double)", { "setAlphaF", "qreal", "void", 56, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBlue(int)", { "setBlue", "int", "void", 57, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBlueF(double)", { "setBlueF", "qreal", "void", 58, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCmyk(int,int,int,int)", { "setCmyk", "int,int,int,int", "void", 59, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCmyk(int,int,int,int,int)", { "setCmyk", "int,int,int,int,int", "void", 60, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCmykF(double,double,double,double)", { "setCmykF", "qreal,qreal,qreal,qreal", "void", 61, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCmykF(double,double,double,double,double)", { "setCmykF", "qreal,qreal,qreal,qreal,qreal", "void", 62, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGreen(int)", { "setGreen", "int", "void", 63, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGreenF(double)", { "setGreenF", "qreal", "void", 64, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHsl(int,int,int)", { "setHsl", "int,int,int", "void", 65, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHsl(int,int,int,int)", { "setHsl", "int,int,int,int", "void", 66, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHslF(double,double,double)", { "setHslF", "qreal,qreal,qreal", "void", 67, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHslF(double,double,double,double)", { "setHslF", "qreal,qreal,qreal,qreal", "void", 68, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHsv(int,int,int)", { "setHsv", "int,int,int", "void", 69, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHsv(int,int,int,int)", { "setHsv", "int,int,int,int", "void", 70, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHsvF(double,double,double)", { "setHsvF", "qreal,qreal,qreal", "void", 71, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHsvF(double,double,double,double)", { "setHsvF", "qreal,qreal,qreal,qreal", "void", 72, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNamedColor(QString)", { "setNamedColor", "QString&", "void", 73, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNamedColor(QLatin1String)", { "setNamedColor", "QLatin1String", "void", 74, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRed(int)", { "setRed", "int", "void", 75, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRedF(double)", { "setRedF", "qreal", "void", 76, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRgb(int,int,int)", { "setRgb", "int,int,int", "void", 77, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRgb(int,int,int,int)", { "setRgb", "int,int,int,int", "void", 78, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRgb(QRgb)", { "setRgb", "QRgb", "void", 79, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRgba64(QRgba64)", { "setRgba64", "QRgba64", "void", 80, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRgbF(double,double,double)", { "setRgbF", "qreal,qreal,qreal", "void", 81, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRgbF(double,double,double,double)", { "setRgbF", "qreal,qreal,qreal,qreal", "void", 82, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRgba(QRgb)", { "setRgba", "QRgb", "void", 83, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "spec()", { "spec", "", "Spec", 84, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCmyk()", { "toCmyk", "", "QColor", 85, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toHsl()", { "toHsl", "", "QColor", 86, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toHsv()", { "toHsv", "", "QColor", 87, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toRgb()", { "toRgb", "", "QColor", 88, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value()", { "value", "", "int", 89, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "valueF()", { "valueF", "", "qreal", 90, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "yellow()", { "yellow", "", "int", 91, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "yellowF()", { "yellowF", "", "qreal", 92, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "colorNames()", { "colorNames", "", "QStringList", 93, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromCmyk(int,int,int,int)", { "fromCmyk", "int,int,int,int", "QColor", 94, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromCmyk(int,int,int,int,int)", { "fromCmyk", "int,int,int,int,int", "QColor", 95, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromCmykF(double,double,double,double)", { "fromCmykF", "qreal,qreal,qreal,qreal", "QColor", 96, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromCmykF(double,double,double,double,double)", { "fromCmykF", "qreal,qreal,qreal,qreal,qreal", "QColor", 97, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromHsl(int,int,int)", { "fromHsl", "int,int,int", "QColor", 98, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromHsl(int,int,int,int)", { "fromHsl", "int,int,int,int", "QColor", 99, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromHslF(double,double,double)", { "fromHslF", "qreal,qreal,qreal", "QColor", 100, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromHslF(double,double,double,double)", { "fromHslF", "qreal,qreal,qreal,qreal", "QColor", 101, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromHsv(int,int,int)", { "fromHsv", "int,int,int", "QColor", 102, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromHsv(int,int,int,int)", { "fromHsv", "int,int,int,int", "QColor", 103, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromHsvF(double,double,double)", { "fromHsvF", "qreal,qreal,qreal", "QColor", 104, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromHsvF(double,double,double,double)", { "fromHsvF", "qreal,qreal,qreal,qreal", "QColor", 105, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRgb(QRgb)", { "fromRgb", "QRgb", "QColor", 106, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRgb(int,int,int)", { "fromRgb", "int,int,int", "QColor", 107, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRgb(int,int,int,int)", { "fromRgb", "int,int,int,int", "QColor", 108, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRgba64(int,int,int)", { "fromRgba64", "ushort,ushort,ushort", "QColor", 109, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRgba64(int,int,int,int)", { "fromRgba64", "ushort,ushort,ushort,ushort", "QColor", 110, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRgba64(QRgba64)", { "fromRgba64", "QRgba64", "QColor", 111, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRgbF(double,double,double)", { "fromRgbF", "qreal,qreal,qreal", "QColor", 112, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRgbF(double,double,double,double)", { "fromRgbF", "qreal,qreal,qreal,qreal", "QColor", 113, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromRgba(QRgb)", { "fromRgba", "QRgb", "QColor", 114, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isValidColor(QString)", { "isValidColor", "QString&", "bool", 115, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isValidColor(QLatin1String)", { "isValidColor", "QLatin1String", "bool", 116, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQColor::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQColor::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQColor::plastiqConstants = {

    /* QColor::NameFormat */
   { "HexRgb", QColor::HexRgb },
   { "HexArgb", QColor::HexArgb },

    /* QColor::Spec */
   { "Invalid", QColor::Invalid },
   { "Rgb", QColor::Rgb },
   { "Hsv", QColor::Hsv },
   { "Cmyk", QColor::Cmyk },
   { "Hsl", QColor::Hsl },

};

QVector<PlastiQMetaObject*> PlastiQQColor::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQColor::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQColor::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QColor", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQColor::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQColor::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QColor *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QColor(); break;
        case 1: o = new QColor(Qt::GlobalColor(stack[1].s_int64)); break;
        case 2: o = new QColor(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int); break;
        case 3: o = new QColor(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int); break;
        /*case 4: o = new QColor(UNSUPPORTED_TYPE_QRgb); break;*/
        case 5: o = new QColor((*reinterpret_cast< QRgba64(*) >(stack[1].s_voidp))); break;
        case 6: o = new QColor(stack[1].s_string); break;
        case 7: o = new QColor(reinterpret_cast<const char*>(stack[1].s_voidp)); break;
        case 8: o = new QColor((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp))); break;
        case 9: o = new QColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp))); break;
        case 10: o = new QColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQColor *p = new PlastiQQColor();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQColor *p = new PlastiQQColor();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 117) {
            id -= 117;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QColor *o = sc ? Q_NULLPTR : reinterpret_cast<QColor*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->alpha();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { double _r = o->alphaF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { int _r = o->black();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { double _r = o->blackF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { int _r = o->blue();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { double _r = o->blueF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: { /* COPY OBJECT */
            QColor *_r = new QColor(o->convertTo(QColor::Spec(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { int _r = o->cyan();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { double _r = o->cyanF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 9: { /* COPY OBJECT */
            QColor *_r = new QColor(o->darker());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QColor *_r = new QColor(o->darker(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: o->getCmyk(reinterpret_cast<int*>(stack[1].s_voidp),
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->getCmyk(reinterpret_cast<int*>(stack[1].s_voidp),
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp),
                    reinterpret_cast<int*>(stack[5].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->getCmykF(reinterpret_cast<qreal*>(stack[1].s_voidp),
                    reinterpret_cast<qreal*>(stack[2].s_voidp),
                    reinterpret_cast<qreal*>(stack[3].s_voidp),
                    reinterpret_cast<qreal*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->getCmykF(reinterpret_cast<qreal*>(stack[1].s_voidp),
                    reinterpret_cast<qreal*>(stack[2].s_voidp),
                    reinterpret_cast<qreal*>(stack[3].s_voidp),
                    reinterpret_cast<qreal*>(stack[4].s_voidp),
                    reinterpret_cast<qreal*>(stack[5].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->getHsl(reinterpret_cast<int*>(stack[1].s_voidp),
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->getHsl(reinterpret_cast<int*>(stack[1].s_voidp),
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 17: o->getHslF(reinterpret_cast<qreal*>(stack[1].s_voidp),
                    reinterpret_cast<qreal*>(stack[2].s_voidp),
                    reinterpret_cast<qreal*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->getHslF(reinterpret_cast<qreal*>(stack[1].s_voidp),
                    reinterpret_cast<qreal*>(stack[2].s_voidp),
                    reinterpret_cast<qreal*>(stack[3].s_voidp),
                    reinterpret_cast<qreal*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 19: o->getHsv(reinterpret_cast<int*>(stack[1].s_voidp),
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 20: o->getHsv(reinterpret_cast<int*>(stack[1].s_voidp),
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 21: o->getHsvF(reinterpret_cast<qreal*>(stack[1].s_voidp),
                    reinterpret_cast<qreal*>(stack[2].s_voidp),
                    reinterpret_cast<qreal*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->getHsvF(reinterpret_cast<qreal*>(stack[1].s_voidp),
                    reinterpret_cast<qreal*>(stack[2].s_voidp),
                    reinterpret_cast<qreal*>(stack[3].s_voidp),
                    reinterpret_cast<qreal*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->getRgb(reinterpret_cast<int*>(stack[1].s_voidp),
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->getRgb(reinterpret_cast<int*>(stack[1].s_voidp),
                    reinterpret_cast<int*>(stack[2].s_voidp),
                    reinterpret_cast<int*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->getRgbF(reinterpret_cast<qreal*>(stack[1].s_voidp),
                    reinterpret_cast<qreal*>(stack[2].s_voidp),
                    reinterpret_cast<qreal*>(stack[3].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->getRgbF(reinterpret_cast<qreal*>(stack[1].s_voidp),
                    reinterpret_cast<qreal*>(stack[2].s_voidp),
                    reinterpret_cast<qreal*>(stack[3].s_voidp),
                    reinterpret_cast<qreal*>(stack[4].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 27: { int _r = o->green();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 28: { double _r = o->greenF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 29: { int _r = o->hslHue();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 30: { double _r = o->hslHueF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 31: { int _r = o->hslSaturation();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 32: { double _r = o->hslSaturationF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 33: { int _r = o->hsvHue();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 34: { double _r = o->hsvHueF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 35: { int _r = o->hsvSaturation();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 36: { double _r = o->hsvSaturationF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 37: { int _r = o->hue();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 38: { double _r = o->hueF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 39: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 40: { /* COPY OBJECT */
            QColor *_r = new QColor(o->lighter());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 41: { /* COPY OBJECT */
            QColor *_r = new QColor(o->lighter(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 42: { int _r = o->lightness();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 43: { double _r = o->lightnessF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 44: { int _r = o->magenta();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 45: { double _r = o->magentaF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 46: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 47: { QString _r = o->name(QColor::NameFormat(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 48: { int _r = o->red();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 49: { double _r = o->redF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 50: /* UNSUPPORTED_RETURN_VALUE o->rgb() | ret: `QRgb` */ break;
        case 51: { /* COPY OBJECT */
            QRgba64 *_r = new QRgba64(o->rgba64());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRgba64";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 52: /* UNSUPPORTED_RETURN_VALUE o->rgba() | ret: `QRgb` */ break;
        case 53: { int _r = o->saturation();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 54: { double _r = o->saturationF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 55: o->setAlpha(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 56: o->setAlphaF(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 57: o->setBlue(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 58: o->setBlueF(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 59: o->setCmyk(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 60: o->setCmyk(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 61: o->setCmykF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 62: o->setCmykF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 63: o->setGreen(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 64: o->setGreenF(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 65: o->setHsl(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 66: o->setHsl(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 67: o->setHslF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 68: o->setHslF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 69: o->setHsv(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 70: o->setHsv(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 71: o->setHsvF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 72: o->setHsvF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 73: o->setNamedColor(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 74: o->setNamedColor((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 75: o->setRed(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 76: o->setRedF(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 77: o->setRgb(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 78: o->setRgb(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 79: /* o->setRgb(UNSUPPORTED_TYPE_QRgb) | ret: `void` */ break;
        case 80: o->setRgba64((*reinterpret_cast< QRgba64(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 81: o->setRgbF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 82: o->setRgbF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 83: /* o->setRgba(UNSUPPORTED_TYPE_QRgb) | ret: `void` */ break;
        case 84: { qint64 _r = o->spec(); // HACK for Spec 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 85: { /* COPY OBJECT */
            QColor *_r = new QColor(o->toCmyk());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 86: { /* COPY OBJECT */
            QColor *_r = new QColor(o->toHsl());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 87: { /* COPY OBJECT */
            QColor *_r = new QColor(o->toHsv());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 88: { /* COPY OBJECT */
            QColor *_r = new QColor(o->toRgb());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 89: { int _r = o->value();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 90: { double _r = o->valueF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 91: { int _r = o->yellow();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 92: { double _r = o->yellowF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 93: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QColor::colorNames()) : new QStringList(o->colorNames());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 94: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromCmyk(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int)) : new QColor(o->fromCmyk(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 95: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromCmyk(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int)) : new QColor(o->fromCmyk(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int,
                    stack[5].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 96: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromCmykF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double)) : new QColor(o->fromCmykF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 97: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromCmykF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double)) : new QColor(o->fromCmykF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double,
                    stack[5].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 98: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromHsl(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int)) : new QColor(o->fromHsl(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 99: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromHsl(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int)) : new QColor(o->fromHsl(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 100: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromHslF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double)) : new QColor(o->fromHslF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 101: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromHslF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double)) : new QColor(o->fromHslF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 102: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromHsv(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int)) : new QColor(o->fromHsv(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 103: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromHsv(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int)) : new QColor(o->fromHsv(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 104: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromHsvF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double)) : new QColor(o->fromHsvF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 105: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromHsvF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double)) : new QColor(o->fromHsvF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 106: /* o->fromRgb(UNSUPPORTED_TYPE_QRgb) | ret: `QColor` */ break;
        case 107: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromRgb(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int)) : new QColor(o->fromRgb(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 108: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromRgb(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int)) : new QColor(o->fromRgb(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 109: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromRgba64(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int)) : new QColor(o->fromRgba64(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 110: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromRgba64(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int)) : new QColor(o->fromRgba64(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 111: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromRgba64((*reinterpret_cast< QRgba64(*) >(stack[1].s_voidp)))) : new QColor(o->fromRgba64((*reinterpret_cast< QRgba64(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 112: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromRgbF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double)) : new QColor(o->fromRgbF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 113: { /* COPY OBJECT */
            QColor *_r = sc ? new QColor(QColor::fromRgbF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double)) : new QColor(o->fromRgbF(stack[1].s_double,
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 114: /* o->fromRgba(UNSUPPORTED_TYPE_QRgb) | ret: `QColor` */ break;
        case 115: { bool _r = sc ? QColor::isValidColor(stack[1].s_string) : o->isValidColor(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 116: { bool _r = sc ? QColor::isValidColor((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp))) : o->isValidColor((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

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
        QColor *o = reinterpret_cast<QColor*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQColor::~PlastiQQColor() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

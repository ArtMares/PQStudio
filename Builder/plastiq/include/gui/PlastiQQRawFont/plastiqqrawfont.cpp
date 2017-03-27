#include "plastiqmethod.h"
#include "plastiqqrawfont.h"

#include <QRawFont> 
#include <QImage>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <QPainterPath>

QHash<QByteArray, PlastiQMethod> PlastiQQRawFont::plastiqConstructors = {
    { "QRawFont()", { "QRawFont", "", "QRawFont*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRawFont(QString,double)", { "QRawFont", "QString&,qreal", "QRawFont*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRawFont(QString,double,enum)", { "QRawFont", "QString&,qreal,QFont::HintingPreference", "QRawFont*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRawFont(QByteArray,double)", { "QRawFont", "QByteArray&,qreal", "QRawFont*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRawFont(QByteArray,double,enum)", { "QRawFont", "QByteArray&,qreal,QFont::HintingPreference", "QRawFont*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRawFont(QRawFont&)", { "QRawFont", "QRawFont&", "QRawFont*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRawFont::plastiqMethods = {
    { "advancesForGlyphIndexes(const quint32*,QPointF*,int)", { "advancesForGlyphIndexes", "quint32*,QPointF*,int", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "advancesForGlyphIndexes(const quint32*,QPointF*,int,enum)", { "advancesForGlyphIndexes", "quint32*,QPointF*,int,LayoutFlags", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "alphaMapForGlyph(int)", { "alphaMapForGlyph", "quint32", "QImage", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "alphaMapForGlyph(int,enum)", { "alphaMapForGlyph", "quint32,AntialiasingType", "QImage", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "alphaMapForGlyph(int,enum,QTransform&)", { "alphaMapForGlyph", "quint32,AntialiasingType,QTransform&", "QImage", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ascent()", { "ascent", "", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "averageCharWidth()", { "averageCharWidth", "", "qreal", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boundingRect(int)", { "boundingRect", "quint32", "QRectF", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capHeight()", { "capHeight", "", "qreal", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "descent()", { "descent", "", "qreal", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "familyName()", { "familyName", "", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontTable(const char*)", { "fontTable", "char*", "QByteArray", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "glyphIndexesForChars(const QChar*,int,quint32*,int*)", { "glyphIndexesForChars", "QChar*,int,quint32*,int*", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hintingPreference()", { "hintingPreference", "", "QFont::HintingPreference", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "leading()", { "leading", "", "qreal", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lineThickness()", { "lineThickness", "", "qreal", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loadFromData(QByteArray,double,enum)", { "loadFromData", "QByteArray&,qreal,QFont::HintingPreference", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loadFromFile(QString,double,enum)", { "loadFromFile", "QString&,qreal,QFont::HintingPreference", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maxCharWidth()", { "maxCharWidth", "", "qreal", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pathForGlyph(int)", { "pathForGlyph", "quint32", "QPainterPath", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelSize()", { "pixelSize", "", "qreal", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixelSize(double)", { "setPixelSize", "qreal", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "style()", { "style", "", "QFont::Style", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "styleName()", { "styleName", "", "QString", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportsCharacter(QChar)", { "supportsCharacter", "QChar", "bool", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportsCharacter(long)", { "supportsCharacter", "uint", "bool", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QRawFont&)", { "swap", "QRawFont&", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "underlinePosition()", { "underlinePosition", "", "qreal", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unitsPerEm()", { "unitsPerEm", "", "qreal", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "weight()", { "weight", "", "int", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "xHeight()", { "xHeight", "", "qreal", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromFont(QFont&)", { "fromFont", "QFont&", "QRawFont", 32, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromFont(QFont&,enum)", { "fromFont", "QFont&,QFontDatabase::WritingSystem", "QRawFont", 33, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRawFont::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQRawFont::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQRawFont::plastiqConstants = {

    /* QRawFont::AntialiasingType */
   { "PixelAntialiasing", QRawFont::PixelAntialiasing },
   { "SubPixelAntialiasing", QRawFont::SubPixelAntialiasing },

    /* QRawFont::LayoutFlag */
   { "SeparateAdvances", QRawFont::SeparateAdvances },
   { "KernedAdvances", QRawFont::KernedAdvances },
   { "UseDesignMetrics", QRawFont::UseDesignMetrics },

};

QVector<PlastiQMetaObject*> PlastiQQRawFont::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQRawFont::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQRawFont::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QRawFont", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRawFont::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQRawFont::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QRawFont *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QRawFont(); break;
        case 1: o = new QRawFont(stack[1].s_string,
                    stack[2].s_double); break;
        case 2: o = new QRawFont(stack[1].s_string,
                    stack[2].s_double,
                    QFont::HintingPreference(stack[3].s_int64)); break;
        case 3: o = new QRawFont(stack[1].s_bytearray,
                    stack[2].s_double); break;
        case 4: o = new QRawFont(stack[1].s_bytearray,
                    stack[2].s_double,
                    QFont::HintingPreference(stack[3].s_int64)); break;
        case 5: o = new QRawFont((*reinterpret_cast< QRawFont(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQRawFont *p = new PlastiQQRawFont();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRawFont *p = new PlastiQQRawFont();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 34) {
            id -= 34;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QRawFont *o = sc ? Q_NULLPTR : reinterpret_cast<QRawFont*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->advancesForGlyphIndexes(reinterpret_cast<const quint32*>(stack[1].s_voidp),
                    reinterpret_cast<QPointF*>(stack[2].s_voidp),
                    stack[3].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->advancesForGlyphIndexes(reinterpret_cast<const quint32*>(stack[1].s_voidp),
                    reinterpret_cast<QPointF*>(stack[2].s_voidp),
                    stack[3].s_int,
                    QRawFont::LayoutFlags(stack[4].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { /* COPY OBJECT */
            QImage *_r = new QImage(o->alphaMapForGlyph(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QImage *_r = new QImage(o->alphaMapForGlyph(stack[1].s_int,
                    QRawFont::AntialiasingType(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QImage *_r = new QImage(o->alphaMapForGlyph(stack[1].s_int,
                    QRawFont::AntialiasingType(stack[2].s_int64),
                    (*reinterpret_cast< QTransform(*) >(stack[3].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { double _r = o->ascent();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: { double _r = o->averageCharWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 7: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->boundingRect(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { double _r = o->capHeight();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 9: { double _r = o->descent();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 10: { QString _r = o->familyName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: { QByteArray _r = o->fontTable(reinterpret_cast<const char*>(stack[1].s_voidp));
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 12: { bool _r = o->glyphIndexesForChars(reinterpret_cast<const QChar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    reinterpret_cast<quint32*>(stack[3].s_voidp),
                    reinterpret_cast<int*>(stack[4].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { qint64 _r = o->hintingPreference(); // HACK for QFont::HintingPreference 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 14: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { double _r = o->leading();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 16: { double _r = o->lineThickness();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 17: o->loadFromData(stack[1].s_bytearray,
                    stack[2].s_double,
                    QFont::HintingPreference(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 18: o->loadFromFile(stack[1].s_string,
                    stack[2].s_double,
                    QFont::HintingPreference(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 19: { double _r = o->maxCharWidth();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 20: { /* COPY OBJECT */
            QPainterPath *_r = new QPainterPath(o->pathForGlyph(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPainterPath";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: { double _r = o->pixelSize();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 22: o->setPixelSize(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 23: { qint64 _r = o->style(); // HACK for QFont::Style 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 24: { QString _r = o->styleName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 25: { bool _r = o->supportsCharacter((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 26: { bool _r = o->supportsCharacter(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 27: o->swap((*reinterpret_cast< QRawFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 28: { double _r = o->underlinePosition();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 29: { double _r = o->unitsPerEm();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 30: { int _r = o->weight();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 31: { double _r = o->xHeight();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 32: { /* COPY OBJECT */
            QRawFont *_r = sc ? new QRawFont(QRawFont::fromFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)))) : new QRawFont(o->fromFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRawFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 33: { /* COPY OBJECT */
            QRawFont *_r = sc ? new QRawFont(QRawFont::fromFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)),
                    QFontDatabase::WritingSystem(stack[2].s_int64))) : new QRawFont(o->fromFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)),
                    QFontDatabase::WritingSystem(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRawFont";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QRawFont *o = reinterpret_cast<QRawFont*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQRawFont::~PlastiQQRawFont() {
    QRawFont* o = reinterpret_cast<QRawFont*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

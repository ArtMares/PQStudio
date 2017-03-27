#include "plastiqmethod.h"
#include "plastiqqfont.h"

#include <QFont> 
#include <QString>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQFont::plastiqConstructors = {
    { "QFont()", { "QFont", "", "QFont*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFont(QString)", { "QFont", "QString&", "QFont*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFont(QString,int)", { "QFont", "QString&,int", "QFont*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFont(QString,int,int)", { "QFont", "QString&,int,int", "QFont*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFont(QString,int,int,bool)", { "QFont", "QString&,int,int,bool", "QFont*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFont(QFont&,QPaintDevice*)", { "QFont", "QFont&,QPaintDevice*", "QFont*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFont(QFont&)", { "QFont", "QFont&", "QFont*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFont::plastiqMethods = {
    { "bold()", { "bold", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capitalization()", { "capitalization", "", "Capitalization", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultFamily()", { "defaultFamily", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exactMatch()", { "exactMatch", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "family()", { "family", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fixedPitch()", { "fixedPitch", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromString(QString)", { "fromString", "QString&", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hintingPreference()", { "hintingPreference", "", "HintingPreference", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCopyOf(QFont&)", { "isCopyOf", "QFont&", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "italic()", { "italic", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "kerning()", { "kerning", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "key()", { "key", "", "QString", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastResortFamily()", { "lastResortFamily", "", "QString", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastResortFont()", { "lastResortFont", "", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "letterSpacing()", { "letterSpacing", "", "qreal", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "letterSpacingType()", { "letterSpacingType", "", "SpacingType", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "overline()", { "overline", "", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelSize()", { "pixelSize", "", "int", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pointSize()", { "pointSize", "", "int", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pointSizeF()", { "pointSizeF", "", "qreal", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resolve(QFont&)", { "resolve", "QFont&", "QFont", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBold(bool)", { "setBold", "bool", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCapitalization(enum)", { "setCapitalization", "Capitalization", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFamily(QString)", { "setFamily", "QString&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFixedPitch(bool)", { "setFixedPitch", "bool", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHintingPreference(enum)", { "setHintingPreference", "HintingPreference", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setItalic(bool)", { "setItalic", "bool", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setKerning(bool)", { "setKerning", "bool", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLetterSpacing(enum,double)", { "setLetterSpacing", "SpacingType,qreal", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOverline(bool)", { "setOverline", "bool", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixelSize(int)", { "setPixelSize", "int", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPointSize(int)", { "setPointSize", "int", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPointSizeF(double)", { "setPointSizeF", "qreal", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStretch(int)", { "setStretch", "int", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStrikeOut(bool)", { "setStrikeOut", "bool", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStyle(enum)", { "setStyle", "Style", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStyleHint(enum)", { "setStyleHint", "StyleHint", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStyleHint(enum,enum)", { "setStyleHint", "StyleHint,StyleStrategy", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStyleName(QString)", { "setStyleName", "QString&", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStyleStrategy(enum)", { "setStyleStrategy", "StyleStrategy", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUnderline(bool)", { "setUnderline", "bool", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWeight(int)", { "setWeight", "int", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWordSpacing(double)", { "setWordSpacing", "qreal", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stretch()", { "stretch", "", "int", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "strikeOut()", { "strikeOut", "", "bool", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "style()", { "style", "", "Style", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "styleHint()", { "styleHint", "", "StyleHint", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "styleName()", { "styleName", "", "QString", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "styleStrategy()", { "styleStrategy", "", "StyleStrategy", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QFont&)", { "swap", "QFont&", "void", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString()", { "toString", "", "QString", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "underline()", { "underline", "", "bool", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "weight()", { "weight", "", "int", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "wordSpacing()", { "wordSpacing", "", "qreal", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertSubstitution(QString,QString)", { "insertSubstitution", "QString&,QString&", "void", 54, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "insertSubstitutions(QString,QStringList&)", { "insertSubstitutions", "QString&,QStringList&", "void", 55, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "removeSubstitutions(QString)", { "removeSubstitutions", "QString&", "void", 56, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "substitute(QString)", { "substitute", "QString&", "QString", 57, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "substitutes(QString)", { "substitutes", "QString&", "QStringList", 58, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "substitutions()", { "substitutions", "", "QStringList", 59, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFont::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQFont::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQFont::plastiqConstants = {

    /* QFont::Capitalization */
   { "MixedCase", QFont::MixedCase },
   { "AllUppercase", QFont::AllUppercase },
   { "AllLowercase", QFont::AllLowercase },
   { "SmallCaps", QFont::SmallCaps },
   { "Capitalize", QFont::Capitalize },

    /* QFont::HintingPreference */
   { "PreferDefaultHinting", QFont::PreferDefaultHinting },
   { "PreferNoHinting", QFont::PreferNoHinting },
   { "PreferVerticalHinting", QFont::PreferVerticalHinting },
   { "PreferFullHinting", QFont::PreferFullHinting },

    /* QFont::SpacingType */
   { "PercentageSpacing", QFont::PercentageSpacing },
   { "AbsoluteSpacing", QFont::AbsoluteSpacing },

    /* QFont::Stretch */
   { "AnyStretch", QFont::AnyStretch },
   { "UltraCondensed", QFont::UltraCondensed },
   { "ExtraCondensed", QFont::ExtraCondensed },
   { "Condensed", QFont::Condensed },
   { "SemiCondensed", QFont::SemiCondensed },
   { "Unstretched", QFont::Unstretched },
   { "SemiExpanded", QFont::SemiExpanded },
   { "Expanded", QFont::Expanded },
   { "ExtraExpanded", QFont::ExtraExpanded },
   { "UltraExpanded", QFont::UltraExpanded },

    /* QFont::Style */
   { "StyleNormal", QFont::StyleNormal },
   { "StyleItalic", QFont::StyleItalic },
   { "StyleOblique", QFont::StyleOblique },

    /* QFont::StyleHint */
   { "Helvetica", QFont::Helvetica },
   { "SansSerif", QFont::SansSerif },
   { "Times", QFont::Times },
   { "Serif", QFont::Serif },
   { "Courier", QFont::Courier },
   { "TypeWriter", QFont::TypeWriter },
   { "OldEnglish", QFont::OldEnglish },
   { "Decorative", QFont::Decorative },
   { "System", QFont::System },
   { "AnyStyle", QFont::AnyStyle },
   { "Cursive", QFont::Cursive },
   { "Monospace", QFont::Monospace },
   { "Fantasy", QFont::Fantasy },

    /* QFont::StyleStrategy */
   { "PreferDefault", QFont::PreferDefault },
   { "PreferBitmap", QFont::PreferBitmap },
   { "PreferDevice", QFont::PreferDevice },
   { "PreferOutline", QFont::PreferOutline },
   { "ForceOutline", QFont::ForceOutline },
   { "PreferMatch", QFont::PreferMatch },
   { "PreferQuality", QFont::PreferQuality },
   { "PreferAntialias", QFont::PreferAntialias },
   { "NoAntialias", QFont::NoAntialias },
   { "OpenGLCompatible", QFont::OpenGLCompatible },
   { "ForceIntegerMetrics", QFont::ForceIntegerMetrics },
   { "NoSubpixelAntialias", QFont::NoSubpixelAntialias },
   { "NoFontMerging", QFont::NoFontMerging },

    /* QFont::Weight */
   { "Thin", QFont::Thin },
   { "ExtraLight", QFont::ExtraLight },
   { "Light", QFont::Light },
   { "Normal", QFont::Normal },
   { "Medium", QFont::Medium },
   { "DemiBold", QFont::DemiBold },
   { "Bold", QFont::Bold },
   { "ExtraBold", QFont::ExtraBold },
   { "Black", QFont::Black },

};

QVector<PlastiQMetaObject*> PlastiQQFont::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQFont::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQFont::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QFont", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFont::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQFont::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QFont *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QFont(); break;
        case 1: o = new QFont(stack[1].s_string); break;
        case 2: o = new QFont(stack[1].s_string,
                    stack[2].s_int); break;
        case 3: o = new QFont(stack[1].s_string,
                    stack[2].s_int,
                    stack[3].s_int); break;
        case 4: o = new QFont(stack[1].s_string,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_bool); break;
        case 5: o = new QFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)),
                    reinterpret_cast<QPaintDevice*>(stack[2].s_voidp)); break;
        case 6: o = new QFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQFont *p = new PlastiQQFont();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFont *p = new PlastiQQFont();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 60) {
            id -= 60;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFont *o = sc ? Q_NULLPTR : reinterpret_cast<QFont*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->bold();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { qint64 _r = o->capitalization(); // HACK for Capitalization 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { QString _r = o->defaultFamily();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { bool _r = o->exactMatch();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { QString _r = o->family();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { bool _r = o->fixedPitch();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->fromString(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { qint64 _r = o->hintingPreference(); // HACK for HintingPreference 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { bool _r = o->isCopyOf((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->italic();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->kerning();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { QString _r = o->key();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 12: { QString _r = o->lastResortFamily();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 13: { QString _r = o->lastResortFont();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: { double _r = o->letterSpacing();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 15: { qint64 _r = o->letterSpacingType(); // HACK for SpacingType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 16: { bool _r = o->overline();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { int _r = o->pixelSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 18: { int _r = o->pointSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 19: { double _r = o->pointSizeF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 20: { /* COPY OBJECT */
            QFont *_r = new QFont(o->resolve((*reinterpret_cast< QFont(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: o->setBold(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setCapitalization(QFont::Capitalization(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setFamily(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setFixedPitch(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setHintingPreference(QFont::HintingPreference(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setItalic(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setKerning(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setLetterSpacing(QFont::SpacingType(stack[1].s_int64),
                    stack[2].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setOverline(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setPixelSize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setPointSize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setPointSizeF(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setStretch(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setStrikeOut(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setStyle(QFont::Style(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setStyleHint(QFont::StyleHint(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setStyleHint(QFont::StyleHint(stack[1].s_int64),
                    QFont::StyleStrategy(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setStyleName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setStyleStrategy(QFont::StyleStrategy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setUnderline(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setWeight(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setWordSpacing(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 43: { int _r = o->stretch();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 44: { bool _r = o->strikeOut();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 45: { qint64 _r = o->style(); // HACK for Style 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 46: { qint64 _r = o->styleHint(); // HACK for StyleHint 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 47: { QString _r = o->styleName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 48: { qint64 _r = o->styleStrategy(); // HACK for StyleStrategy 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 49: o->swap((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 50: { QString _r = o->toString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 51: { bool _r = o->underline();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 52: { int _r = o->weight();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 53: { double _r = o->wordSpacing();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 54: if(sc) { QFont::insertSubstitution(stack[1].s_string,
                    stack[2].s_string); } else { o->insertSubstitution(stack[1].s_string,
                    stack[2].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 55: if(sc) { QFont::insertSubstitutions(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp))); } else { o->insertSubstitutions(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 56: if(sc) { QFont::removeSubstitutions(stack[1].s_string); } else { o->removeSubstitutions(stack[1].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 57: { QString _r = sc ? QFont::substitute(stack[1].s_string) : o->substitute(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 58: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QFont::substitutes(stack[1].s_string)) : new QStringList(o->substitutes(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 59: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QFont::substitutions()) : new QStringList(o->substitutions());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
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
        QFont *o = reinterpret_cast<QFont*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQFont::~PlastiQQFont() {
    QFont* o = reinterpret_cast<QFont*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

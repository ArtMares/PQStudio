#include "plastiqmethod.h"
#include "plastiqqtextcharformat.h"

#include "gui/PlastiQQTextFormat/plastiqqtextformat.h"
#include <QTextCharFormat> 
#include <QString>
#include <QStringList>
#include <QFont>
#include <QPen>
#include <QColor>

QHash<QByteArray, PlastiQMethod> PlastiQQTextCharFormat::plastiqConstructors = {
    { "QTextCharFormat()", { "QTextCharFormat", "", "QTextCharFormat*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextCharFormat::plastiqMethods = {
    { "anchorHref()", { "anchorHref", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "anchorNames()", { "anchorNames", "", "QStringList", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "font()", { "font", "", "QFont", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontCapitalization()", { "fontCapitalization", "", "QFont::Capitalization", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontFamily()", { "fontFamily", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontFixedPitch()", { "fontFixedPitch", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontHintingPreference()", { "fontHintingPreference", "", "QFont::HintingPreference", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontItalic()", { "fontItalic", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontKerning()", { "fontKerning", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontLetterSpacing()", { "fontLetterSpacing", "", "qreal", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontLetterSpacingType()", { "fontLetterSpacingType", "", "QFont::SpacingType", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontOverline()", { "fontOverline", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontPointSize()", { "fontPointSize", "", "qreal", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontStretch()", { "fontStretch", "", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontStrikeOut()", { "fontStrikeOut", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontStyleHint()", { "fontStyleHint", "", "QFont::StyleHint", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontStyleStrategy()", { "fontStyleStrategy", "", "QFont::StyleStrategy", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontUnderline()", { "fontUnderline", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontWeight()", { "fontWeight", "", "int", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fontWordSpacing()", { "fontWordSpacing", "", "qreal", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAnchor()", { "isAnchor", "", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAnchor(bool)", { "setAnchor", "bool", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAnchorHref(QString)", { "setAnchorHref", "QString&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAnchorNames(QStringList&)", { "setAnchorNames", "QStringList&", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFont(QFont&,enum)", { "setFont", "QFont&,FontPropertiesInheritanceBehavior", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFont(QFont&)", { "setFont", "QFont&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontCapitalization(enum)", { "setFontCapitalization", "QFont::Capitalization", "void", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontFamily(QString)", { "setFontFamily", "QString&", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontFixedPitch(bool)", { "setFontFixedPitch", "bool", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontHintingPreference(enum)", { "setFontHintingPreference", "QFont::HintingPreference", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontItalic(bool)", { "setFontItalic", "bool", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontKerning(bool)", { "setFontKerning", "bool", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontLetterSpacing(double)", { "setFontLetterSpacing", "qreal", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontLetterSpacingType(enum)", { "setFontLetterSpacingType", "QFont::SpacingType", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontOverline(bool)", { "setFontOverline", "bool", "void", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontPointSize(double)", { "setFontPointSize", "qreal", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontStretch(int)", { "setFontStretch", "int", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontStrikeOut(bool)", { "setFontStrikeOut", "bool", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontStyleHint(enum)", { "setFontStyleHint", "QFont::StyleHint", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontStyleHint(enum,enum)", { "setFontStyleHint", "QFont::StyleHint,QFont::StyleStrategy", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontStyleStrategy(enum)", { "setFontStyleStrategy", "QFont::StyleStrategy", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontUnderline(bool)", { "setFontUnderline", "bool", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontWeight(int)", { "setFontWeight", "int", "void", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFontWordSpacing(double)", { "setFontWordSpacing", "qreal", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextOutline(QPen&)", { "setTextOutline", "QPen&", "void", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setToolTip(QString)", { "setToolTip", "QString&", "void", 46, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUnderlineColor(QColor&)", { "setUnderlineColor", "QColor&", "void", 47, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUnderlineStyle(enum)", { "setUnderlineStyle", "UnderlineStyle", "void", 48, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setVerticalAlignment(enum)", { "setVerticalAlignment", "VerticalAlignment", "void", 49, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textOutline()", { "textOutline", "", "QPen", 50, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toolTip()", { "toolTip", "", "QString", 51, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "underlineColor()", { "underlineColor", "", "QColor", 52, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "underlineStyle()", { "underlineStyle", "", "UnderlineStyle", 53, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "verticalAlignment()", { "verticalAlignment", "", "VerticalAlignment", 54, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextCharFormat::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextCharFormat::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextCharFormat::plastiqConstants = {

    /* QTextCharFormat::FontPropertiesInheritanceBehavior */
   { "FontPropertiesSpecifiedOnly", QTextCharFormat::FontPropertiesSpecifiedOnly },
   { "FontPropertiesAll", QTextCharFormat::FontPropertiesAll },

    /* QTextCharFormat::UnderlineStyle */
   { "NoUnderline", QTextCharFormat::NoUnderline },
   { "SingleUnderline", QTextCharFormat::SingleUnderline },
   { "DashUnderline", QTextCharFormat::DashUnderline },
   { "DotLine", QTextCharFormat::DotLine },
   { "DashDotLine", QTextCharFormat::DashDotLine },
   { "DashDotDotLine", QTextCharFormat::DashDotDotLine },
   { "WaveUnderline", QTextCharFormat::WaveUnderline },
   { "SpellCheckUnderline", QTextCharFormat::SpellCheckUnderline },

    /* QTextCharFormat::VerticalAlignment */
   { "AlignNormal", QTextCharFormat::AlignNormal },
   { "AlignSuperScript", QTextCharFormat::AlignSuperScript },
   { "AlignSubScript", QTextCharFormat::AlignSubScript },
   { "AlignMiddle", QTextCharFormat::AlignMiddle },
   { "AlignTop", QTextCharFormat::AlignTop },
   { "AlignBottom", QTextCharFormat::AlignBottom },
   { "AlignBaseline", QTextCharFormat::AlignBaseline },

};

QVector<PlastiQMetaObject*> PlastiQQTextCharFormat::plastiqInherits = { &PlastiQQTextFormat::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTextCharFormat::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextCharFormat::plastiq_static_metaObject = {
    { &PlastiQQTextFormat::plastiq_static_metaObject, &plastiqInherits, "QTextCharFormat", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextCharFormat::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextCharFormat::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextCharFormat *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextCharFormat(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextCharFormat *p = new PlastiQQTextCharFormat();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextCharFormat *p = new PlastiQQTextCharFormat();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 55) {
            id -= 55;
            PlastiQQTextFormat::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextCharFormat *o = sc ? Q_NULLPTR : reinterpret_cast<QTextCharFormat*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->anchorHref();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->anchorNames());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { qint64 _r = o->fontCapitalization(); // HACK for QFont::Capitalization 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { QString _r = o->fontFamily();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { bool _r = o->fontFixedPitch();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { qint64 _r = o->fontHintingPreference(); // HACK for QFont::HintingPreference 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 7: { bool _r = o->fontItalic();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->fontKerning();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { double _r = o->fontLetterSpacing();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 10: { qint64 _r = o->fontLetterSpacingType(); // HACK for QFont::SpacingType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: { bool _r = o->fontOverline();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { double _r = o->fontPointSize();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 13: { int _r = o->fontStretch();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { bool _r = o->fontStrikeOut();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { qint64 _r = o->fontStyleHint(); // HACK for QFont::StyleHint 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 16: { qint64 _r = o->fontStyleStrategy(); // HACK for QFont::StyleStrategy 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 17: { bool _r = o->fontUnderline();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { int _r = o->fontWeight();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 19: { double _r = o->fontWordSpacing();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 20: { bool _r = o->isAnchor();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: o->setAnchor(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setAnchorHref(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setAnchorNames((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)),
                    QTextCharFormat::FontPropertiesInheritanceBehavior(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setFont((*reinterpret_cast< QFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 27: o->setFontCapitalization(QFont::Capitalization(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 28: o->setFontFamily(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setFontFixedPitch(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setFontHintingPreference(QFont::HintingPreference(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setFontItalic(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setFontKerning(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setFontLetterSpacing(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setFontLetterSpacingType(QFont::SpacingType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 35: o->setFontOverline(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 36: o->setFontPointSize(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 37: o->setFontStretch(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setFontStrikeOut(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setFontStyleHint(QFont::StyleHint(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setFontStyleHint(QFont::StyleHint(stack[1].s_int64),
                    QFont::StyleStrategy(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setFontStyleStrategy(QFont::StyleStrategy(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setFontUnderline(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 43: o->setFontWeight(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 44: o->setFontWordSpacing(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 45: o->setTextOutline((*reinterpret_cast< QPen(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 46: o->setToolTip(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 47: o->setUnderlineColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 48: o->setUnderlineStyle(QTextCharFormat::UnderlineStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 49: o->setVerticalAlignment(QTextCharFormat::VerticalAlignment(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 50: { /* COPY OBJECT */
            QPen *_r = new QPen(o->textOutline());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 51: { QString _r = o->toolTip();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 52: { /* COPY OBJECT */
            QColor *_r = new QColor(o->underlineColor());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 53: { qint64 _r = o->underlineStyle(); // HACK for UnderlineStyle 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 54: { qint64 _r = o->verticalAlignment(); // HACK for VerticalAlignment 
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
        QTextCharFormat *o = reinterpret_cast<QTextCharFormat*>(object->plastiq_data());

        if(className == "QTextFormat") {
            stack[0].s_voidp = static_cast<QTextFormat*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTextCharFormat::~PlastiQQTextCharFormat() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

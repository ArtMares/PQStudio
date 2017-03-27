#include "plastiqmethod.h"
#include "plastiqqtextformat.h"

#include <QTextFormat> 
#include <QBrush>
#include <QColor>
#include <QTextLength>
#include <QPen>
#include <QVariant>
#include <QString>
#include <QTextBlockFormat>
#include <QTextCharFormat>
#include <QTextFrameFormat>
#include <QTextImageFormat>
#include <QTextListFormat>
#include <QTextTableCellFormat>
#include <QTextTableFormat>

QHash<QByteArray, PlastiQMethod> PlastiQQTextFormat::plastiqConstructors = {
    { "QTextFormat()", { "QTextFormat", "", "QTextFormat*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextFormat(int)", { "QTextFormat", "int", "QTextFormat*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextFormat(QTextFormat&)", { "QTextFormat", "QTextFormat&", "QTextFormat*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextFormat::plastiqMethods = {
    { "background()", { "background", "", "QBrush", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "boolProperty(int)", { "boolProperty", "int", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "brushProperty(int)", { "brushProperty", "int", "QBrush", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearBackground()", { "clearBackground", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearForeground()", { "clearForeground", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearProperty(int)", { "clearProperty", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "colorProperty(int)", { "colorProperty", "int", "QColor", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "doubleProperty(int)", { "doubleProperty", "int", "qreal", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "foreground()", { "foreground", "", "QBrush", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasProperty(int)", { "hasProperty", "int", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "intProperty(int)", { "intProperty", "int", "int", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isBlockFormat()", { "isBlockFormat", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCharFormat()", { "isCharFormat", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFrameFormat()", { "isFrameFormat", "", "bool", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isImageFormat()", { "isImageFormat", "", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isListFormat()", { "isListFormat", "", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isTableCellFormat()", { "isTableCellFormat", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isTableFormat()", { "isTableFormat", "", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "layoutDirection()", { "layoutDirection", "", "Qt::LayoutDirection", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lengthProperty(int)", { "lengthProperty", "int", "QTextLength", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "merge(QTextFormat&)", { "merge", "QTextFormat&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "objectIndex()", { "objectIndex", "", "int", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "objectType()", { "objectType", "", "int", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "penProperty(int)", { "penProperty", "int", "QPen", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "property(int)", { "property", "int", "QVariant", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "propertyCount()", { "propertyCount", "", "int", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBackground(QBrush&)", { "setBackground", "QBrush&", "void", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setForeground(QBrush&)", { "setForeground", "QBrush&", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLayoutDirection(enum)", { "setLayoutDirection", "Qt::LayoutDirection", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setObjectIndex(int)", { "setObjectIndex", "int", "void", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setObjectType(int)", { "setObjectType", "int", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setProperty(int,QVariant)", { "setProperty", "int,QVariant&", "void", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setProperty(int,QVector<QTextLength>&)", { "setProperty", "int,QVector<QTextLength>&", "void", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stringProperty(int)", { "stringProperty", "int", "QString", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QTextFormat&)", { "swap", "QTextFormat&", "void", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toBlockFormat()", { "toBlockFormat", "", "QTextBlockFormat", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toCharFormat()", { "toCharFormat", "", "QTextCharFormat", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toFrameFormat()", { "toFrameFormat", "", "QTextFrameFormat", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toImageFormat()", { "toImageFormat", "", "QTextImageFormat", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toListFormat()", { "toListFormat", "", "QTextListFormat", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toTableCellFormat()", { "toTableCellFormat", "", "QTextTableCellFormat", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toTableFormat()", { "toTableFormat", "", "QTextTableFormat", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "int", 44, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextFormat::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextFormat::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextFormat::plastiqConstants = {

    /* QTextFormat::FormatType */
   { "InvalidFormat", QTextFormat::InvalidFormat },
   { "BlockFormat", QTextFormat::BlockFormat },
   { "CharFormat", QTextFormat::CharFormat },
   { "ListFormat", QTextFormat::ListFormat },
   { "TableFormat", QTextFormat::TableFormat },
   { "FrameFormat", QTextFormat::FrameFormat },
   { "UserFormat", QTextFormat::UserFormat },

    /* QTextFormat::ObjectTypes */
   { "NoObject", QTextFormat::NoObject },
   { "ImageObject", QTextFormat::ImageObject },
   { "TableObject", QTextFormat::TableObject },
   { "TableCellObject", QTextFormat::TableCellObject },
   { "UserObject", QTextFormat::UserObject },

    /* QTextFormat::PageBreakFlag */
   { "PageBreak_Auto", QTextFormat::PageBreak_Auto },
   { "PageBreak_AlwaysBefore", QTextFormat::PageBreak_AlwaysBefore },
   { "PageBreak_AlwaysAfter", QTextFormat::PageBreak_AlwaysAfter },

    /* QTextFormat::Property */
   { "ObjectIndex", QTextFormat::ObjectIndex },
   { "CssFloat", QTextFormat::CssFloat },
   { "LayoutDirection", QTextFormat::LayoutDirection },
   { "OutlinePen", QTextFormat::OutlinePen },
   { "BackgroundBrush", QTextFormat::BackgroundBrush },
   { "ForegroundBrush", QTextFormat::ForegroundBrush },
   { "BackgroundImageUrl", QTextFormat::BackgroundImageUrl },
   { "BlockAlignment", QTextFormat::BlockAlignment },
   { "BlockTopMargin", QTextFormat::BlockTopMargin },
   { "BlockBottomMargin", QTextFormat::BlockBottomMargin },
   { "BlockLeftMargin", QTextFormat::BlockLeftMargin },
   { "BlockRightMargin", QTextFormat::BlockRightMargin },
   { "TextIndent", QTextFormat::TextIndent },
   { "TabPositions", QTextFormat::TabPositions },
   { "BlockIndent", QTextFormat::BlockIndent },
   { "LineHeight", QTextFormat::LineHeight },
   { "LineHeightType", QTextFormat::LineHeightType },
   { "BlockNonBreakableLines", QTextFormat::BlockNonBreakableLines },
   { "BlockTrailingHorizontalRulerWidth", QTextFormat::BlockTrailingHorizontalRulerWidth },
   { "FirstFontProperty", QTextFormat::FirstFontProperty },
   { "FontCapitalization", QTextFormat::FontCapitalization },
   { "FontLetterSpacingType", QTextFormat::FontLetterSpacingType },
   { "FontLetterSpacing", QTextFormat::FontLetterSpacing },
   { "FontWordSpacing", QTextFormat::FontWordSpacing },
   { "FontStretch", QTextFormat::FontStretch },
   { "FontStyleHint", QTextFormat::FontStyleHint },
   { "FontStyleStrategy", QTextFormat::FontStyleStrategy },
   { "FontKerning", QTextFormat::FontKerning },
   { "FontHintingPreference", QTextFormat::FontHintingPreference },
   { "FontFamily", QTextFormat::FontFamily },
   { "FontPointSize", QTextFormat::FontPointSize },
   { "FontSizeAdjustment", QTextFormat::FontSizeAdjustment },
   { "FontSizeIncrement", QTextFormat::FontSizeIncrement },
   { "FontWeight", QTextFormat::FontWeight },
   { "FontItalic", QTextFormat::FontItalic },
   { "FontUnderline", QTextFormat::FontUnderline },
   { "FontOverline", QTextFormat::FontOverline },
   { "FontStrikeOut", QTextFormat::FontStrikeOut },
   { "FontFixedPitch", QTextFormat::FontFixedPitch },
   { "FontPixelSize", QTextFormat::FontPixelSize },
   { "LastFontProperty", QTextFormat::LastFontProperty },
   { "TextUnderlineColor", QTextFormat::TextUnderlineColor },
   { "TextVerticalAlignment", QTextFormat::TextVerticalAlignment },
   { "TextOutline", QTextFormat::TextOutline },
   { "TextUnderlineStyle", QTextFormat::TextUnderlineStyle },
   { "TextToolTip", QTextFormat::TextToolTip },
   { "IsAnchor", QTextFormat::IsAnchor },
   { "AnchorHref", QTextFormat::AnchorHref },
   { "AnchorName", QTextFormat::AnchorName },
   { "ObjectType", QTextFormat::ObjectType },
   { "ListStyle", QTextFormat::ListStyle },
   { "ListIndent", QTextFormat::ListIndent },
   { "ListNumberPrefix", QTextFormat::ListNumberPrefix },
   { "ListNumberSuffix", QTextFormat::ListNumberSuffix },
   { "FrameBorder", QTextFormat::FrameBorder },
   { "FrameMargin", QTextFormat::FrameMargin },
   { "FramePadding", QTextFormat::FramePadding },
   { "FrameWidth", QTextFormat::FrameWidth },
   { "FrameHeight", QTextFormat::FrameHeight },
   { "FrameTopMargin", QTextFormat::FrameTopMargin },
   { "FrameBottomMargin", QTextFormat::FrameBottomMargin },
   { "FrameLeftMargin", QTextFormat::FrameLeftMargin },
   { "FrameRightMargin", QTextFormat::FrameRightMargin },
   { "FrameBorderBrush", QTextFormat::FrameBorderBrush },
   { "FrameBorderStyle", QTextFormat::FrameBorderStyle },
   { "TableColumns", QTextFormat::TableColumns },
   { "TableColumnWidthConstraints", QTextFormat::TableColumnWidthConstraints },
   { "TableCellSpacing", QTextFormat::TableCellSpacing },
   { "TableCellPadding", QTextFormat::TableCellPadding },
   { "TableHeaderRowCount", QTextFormat::TableHeaderRowCount },
   { "TableCellRowSpan", QTextFormat::TableCellRowSpan },
   { "TableCellColumnSpan", QTextFormat::TableCellColumnSpan },
   { "TableCellTopPadding", QTextFormat::TableCellTopPadding },
   { "TableCellBottomPadding", QTextFormat::TableCellBottomPadding },
   { "TableCellLeftPadding", QTextFormat::TableCellLeftPadding },
   { "TableCellRightPadding", QTextFormat::TableCellRightPadding },
   { "ImageName", QTextFormat::ImageName },
   { "ImageWidth", QTextFormat::ImageWidth },
   { "ImageHeight", QTextFormat::ImageHeight },
   { "FullWidthSelection", QTextFormat::FullWidthSelection },
   { "PageBreakPolicy", QTextFormat::PageBreakPolicy },
   { "UserProperty", QTextFormat::UserProperty },

};

QVector<PlastiQMetaObject*> PlastiQQTextFormat::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextFormat::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextFormat::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextFormat", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextFormat::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextFormat::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextFormat *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextFormat(); break;
        case 1: o = new QTextFormat(stack[1].s_int); break;
        case 2: o = new QTextFormat((*reinterpret_cast< QTextFormat(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextFormat *p = new PlastiQQTextFormat();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextFormat *p = new PlastiQQTextFormat();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 45) {
            id -= 45;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextFormat *o = sc ? Q_NULLPTR : reinterpret_cast<QTextFormat*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->background());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { bool _r = o->boolProperty(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->brushProperty(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: o->clearBackground();
                stack[0].type = PlastiQ::Void; break;
        case 4: o->clearForeground();
                stack[0].type = PlastiQ::Void; break;
        case 5: o->clearProperty(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: { /* COPY OBJECT */
            QColor *_r = new QColor(o->colorProperty(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { double _r = o->doubleProperty(stack[1].s_int);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 8: { /* COPY OBJECT */
            QBrush *_r = new QBrush(o->foreground());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBrush";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { bool _r = o->hasProperty(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { int _r = o->intProperty(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 11: { bool _r = o->isBlockFormat();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { bool _r = o->isCharFormat();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { bool _r = o->isFrameFormat();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r = o->isImageFormat();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r = o->isListFormat();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = o->isTableCellFormat();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = o->isTableFormat();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { qint64 _r = o->layoutDirection(); // HACK for Qt::LayoutDirection 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 21: { /* COPY OBJECT */
            QTextLength *_r = new QTextLength(o->lengthProperty(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextLength";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 22: o->merge((*reinterpret_cast< QTextFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 23: { int _r = o->objectIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 24: { int _r = o->objectType();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 25: { /* COPY OBJECT */
            QPen *_r = new QPen(o->penProperty(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPen";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 26: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->property(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 27: { int _r = o->propertyCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 28: o->setBackground((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 29: o->setForeground((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->setLayoutDirection(Qt::LayoutDirection(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 31: o->setObjectIndex(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 32: o->setObjectType(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 33: o->setProperty(stack[1].s_int,
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 34: o->setProperty(stack[1].s_int,
                    (*reinterpret_cast< QVector<QTextLength>(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 35: { QString _r = o->stringProperty(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 36: o->swap((*reinterpret_cast< QTextFormat(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 37: { /* COPY OBJECT */
            QTextBlockFormat *_r = new QTextBlockFormat(o->toBlockFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextBlockFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 38: { /* COPY OBJECT */
            QTextCharFormat *_r = new QTextCharFormat(o->toCharFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextCharFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 39: { /* COPY OBJECT */
            QTextFrameFormat *_r = new QTextFrameFormat(o->toFrameFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextFrameFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 40: { /* COPY OBJECT */
            QTextImageFormat *_r = new QTextImageFormat(o->toImageFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextImageFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 41: { /* COPY OBJECT */
            QTextListFormat *_r = new QTextListFormat(o->toListFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextListFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 42: { /* COPY OBJECT */
            QTextTableCellFormat *_r = new QTextTableCellFormat(o->toTableCellFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextTableCellFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 43: { /* COPY OBJECT */
            QTextTableFormat *_r = new QTextTableFormat(o->toTableFormat());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextTableFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 44: { int _r = o->type();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

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
        QTextFormat *o = reinterpret_cast<QTextFormat*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextFormat::~PlastiQQTextFormat() {
    QTextFormat* o = reinterpret_cast<QTextFormat*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

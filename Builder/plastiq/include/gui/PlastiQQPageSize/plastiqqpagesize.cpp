#include "plastiqmethod.h"
#include "plastiqqpagesize.h"

#include <QPageSize> 
#include <QSizeF>
#include <QString>
#include <QRectF>
#include <QRect>
#include <QSize>

QHash<QByteArray, PlastiQMethod> PlastiQQPageSize::plastiqConstructors = {
    { "QPageSize()", { "QPageSize", "", "QPageSize*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPageSize(enum)", { "QPageSize", "PageSizeId", "QPageSize*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPageSize(QSize&)", { "QPageSize", "QSize&", "QPageSize*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPageSize(QSize&,QString)", { "QPageSize", "QSize&,QString&", "QPageSize*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPageSize(QSize&,QString,enum)", { "QPageSize", "QSize&,QString&,SizeMatchPolicy", "QPageSize*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPageSize(QSizeF&,enum)", { "QPageSize", "QSizeF&,Unit", "QPageSize*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPageSize(QSizeF&,enum,QString)", { "QPageSize", "QSizeF&,Unit,QString&", "QPageSize*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPageSize(QSizeF&,enum,QString,enum)", { "QPageSize", "QSizeF&,Unit,QString&,SizeMatchPolicy", "QPageSize*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPageSize(QPageSize&)", { "QPageSize", "QPageSize&", "QPageSize*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPageSize::plastiqMethods = {
    { "definitionSize()", { "definitionSize", "", "QSizeF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "definitionUnits()", { "definitionUnits", "", "Unit", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "id()", { "id", "", "PageSizeId", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEquivalentTo(QPageSize&)", { "isEquivalentTo", "QPageSize&", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "key()", { "key", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rect(enum)", { "rect", "Unit", "QRectF", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rectPixels(int)", { "rectPixels", "int", "QRect", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rectPoints()", { "rectPoints", "", "QRect", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size(enum)", { "size", "Unit", "QSizeF", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizePixels(int)", { "sizePixels", "int", "QSize", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizePoints()", { "sizePoints", "", "QSize", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QPageSize&)", { "swap", "QPageSize&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "windowsId()", { "windowsId", "", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "definitionSize(enum)", { "definitionSize", "PageSizeId", "QSizeF", 15, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "definitionUnits(enum)", { "definitionUnits", "PageSizeId", "Unit", 16, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "id(QSize&)", { "id", "QSize&", "PageSizeId", 17, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "id(QSize&,enum)", { "id", "QSize&,SizeMatchPolicy", "PageSizeId", 18, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "id(QSizeF&,enum)", { "id", "QSizeF&,Unit", "PageSizeId", 19, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "id(QSizeF&,enum,enum)", { "id", "QSizeF&,Unit,SizeMatchPolicy", "PageSizeId", 20, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "id(int)", { "id", "int", "PageSizeId", 21, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "key(enum)", { "key", "PageSizeId", "QString", 22, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "name(enum)", { "name", "PageSizeId", "QString", 23, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "size(enum,enum)", { "size", "PageSizeId,Unit", "QSizeF", 24, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "sizePixels(enum,int)", { "sizePixels", "PageSizeId,int", "QSize", 25, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "sizePoints(enum)", { "sizePoints", "PageSizeId", "QSize", 26, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "windowsId(enum)", { "windowsId", "PageSizeId", "int", 27, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPageSize::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPageSize::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPageSize::plastiqConstants = {

    /* QPageSize::PageSizeId */
   { "A4", QPageSize::A4 },
   { "B5", QPageSize::B5 },
   { "Letter", QPageSize::Letter },
   { "Legal", QPageSize::Legal },
   { "Executive", QPageSize::Executive },
   { "A0", QPageSize::A0 },
   { "A1", QPageSize::A1 },
   { "A2", QPageSize::A2 },
   { "A3", QPageSize::A3 },
   { "A5", QPageSize::A5 },
   { "A6", QPageSize::A6 },
   { "A7", QPageSize::A7 },
   { "A8", QPageSize::A8 },
   { "A9", QPageSize::A9 },
   { "B0", QPageSize::B0 },
   { "B1", QPageSize::B1 },
   { "B10", QPageSize::B10 },
   { "B2", QPageSize::B2 },
   { "B3", QPageSize::B3 },
   { "B4", QPageSize::B4 },
   { "B6", QPageSize::B6 },
   { "B7", QPageSize::B7 },
   { "B8", QPageSize::B8 },
   { "B9", QPageSize::B9 },
   { "C5E", QPageSize::C5E },
   { "Comm10E", QPageSize::Comm10E },
   { "DLE", QPageSize::DLE },
   { "Folio", QPageSize::Folio },
   { "Ledger", QPageSize::Ledger },
   { "Tabloid", QPageSize::Tabloid },
   { "Custom", QPageSize::Custom },
   { "A10", QPageSize::A10 },
   { "A3Extra", QPageSize::A3Extra },
   { "A4Extra", QPageSize::A4Extra },
   { "A4Plus", QPageSize::A4Plus },
   { "A4Small", QPageSize::A4Small },
   { "A5Extra", QPageSize::A5Extra },
   { "B5Extra", QPageSize::B5Extra },
   { "JisB0", QPageSize::JisB0 },
   { "JisB1", QPageSize::JisB1 },
   { "JisB2", QPageSize::JisB2 },
   { "JisB3", QPageSize::JisB3 },
   { "JisB4", QPageSize::JisB4 },
   { "JisB5", QPageSize::JisB5 },
   { "JisB6", QPageSize::JisB6 },
   { "JisB7", QPageSize::JisB7 },
   { "JisB8", QPageSize::JisB8 },
   { "JisB9", QPageSize::JisB9 },
   { "JisB10", QPageSize::JisB10 },
   { "AnsiC", QPageSize::AnsiC },
   { "AnsiD", QPageSize::AnsiD },
   { "AnsiE", QPageSize::AnsiE },
   { "LegalExtra", QPageSize::LegalExtra },
   { "LetterExtra", QPageSize::LetterExtra },
   { "LetterPlus", QPageSize::LetterPlus },
   { "LetterSmall", QPageSize::LetterSmall },
   { "TabloidExtra", QPageSize::TabloidExtra },
   { "ArchA", QPageSize::ArchA },
   { "ArchB", QPageSize::ArchB },
   { "ArchC", QPageSize::ArchC },
   { "ArchD", QPageSize::ArchD },
   { "ArchE", QPageSize::ArchE },
   { "Imperial7x9", QPageSize::Imperial7x9 },
   { "Imperial8x10", QPageSize::Imperial8x10 },
   { "Imperial9x11", QPageSize::Imperial9x11 },
   { "Imperial9x12", QPageSize::Imperial9x12 },
   { "Imperial10x11", QPageSize::Imperial10x11 },
   { "Imperial10x13", QPageSize::Imperial10x13 },
   { "Imperial10x14", QPageSize::Imperial10x14 },
   { "Imperial12x11", QPageSize::Imperial12x11 },
   { "Imperial15x11", QPageSize::Imperial15x11 },
   { "ExecutiveStandard", QPageSize::ExecutiveStandard },
   { "Note", QPageSize::Note },
   { "Quarto", QPageSize::Quarto },
   { "Statement", QPageSize::Statement },
   { "SuperA", QPageSize::SuperA },
   { "SuperB", QPageSize::SuperB },
   { "Postcard", QPageSize::Postcard },
   { "DoublePostcard", QPageSize::DoublePostcard },
   { "Prc16K", QPageSize::Prc16K },
   { "Prc32K", QPageSize::Prc32K },
   { "Prc32KBig", QPageSize::Prc32KBig },
   { "FanFoldUS", QPageSize::FanFoldUS },
   { "FanFoldGerman", QPageSize::FanFoldGerman },
   { "FanFoldGermanLegal", QPageSize::FanFoldGermanLegal },
   { "EnvelopeB4", QPageSize::EnvelopeB4 },
   { "EnvelopeB5", QPageSize::EnvelopeB5 },
   { "EnvelopeB6", QPageSize::EnvelopeB6 },
   { "EnvelopeC0", QPageSize::EnvelopeC0 },
   { "EnvelopeC1", QPageSize::EnvelopeC1 },
   { "EnvelopeC2", QPageSize::EnvelopeC2 },
   { "EnvelopeC3", QPageSize::EnvelopeC3 },
   { "EnvelopeC4", QPageSize::EnvelopeC4 },
   { "EnvelopeC6", QPageSize::EnvelopeC6 },
   { "EnvelopeC65", QPageSize::EnvelopeC65 },
   { "EnvelopeC7", QPageSize::EnvelopeC7 },
   { "Envelope9", QPageSize::Envelope9 },
   { "Envelope11", QPageSize::Envelope11 },
   { "Envelope12", QPageSize::Envelope12 },
   { "Envelope14", QPageSize::Envelope14 },
   { "EnvelopeMonarch", QPageSize::EnvelopeMonarch },
   { "EnvelopePersonal", QPageSize::EnvelopePersonal },
   { "EnvelopeChou3", QPageSize::EnvelopeChou3 },
   { "EnvelopeChou4", QPageSize::EnvelopeChou4 },
   { "EnvelopeInvite", QPageSize::EnvelopeInvite },
   { "EnvelopeItalian", QPageSize::EnvelopeItalian },
   { "EnvelopeKaku2", QPageSize::EnvelopeKaku2 },
   { "EnvelopeKaku3", QPageSize::EnvelopeKaku3 },
   { "EnvelopePrc1", QPageSize::EnvelopePrc1 },
   { "EnvelopePrc2", QPageSize::EnvelopePrc2 },
   { "EnvelopePrc3", QPageSize::EnvelopePrc3 },
   { "EnvelopePrc4", QPageSize::EnvelopePrc4 },
   { "EnvelopePrc5", QPageSize::EnvelopePrc5 },
   { "EnvelopePrc6", QPageSize::EnvelopePrc6 },
   { "EnvelopePrc7", QPageSize::EnvelopePrc7 },
   { "EnvelopePrc8", QPageSize::EnvelopePrc8 },
   { "EnvelopePrc9", QPageSize::EnvelopePrc9 },
   { "EnvelopePrc10", QPageSize::EnvelopePrc10 },
   { "EnvelopeYou4", QPageSize::EnvelopeYou4 },
   { "LastPageSize", QPageSize::LastPageSize },
   { "NPageSize", QPageSize::NPageSize },
   { "NPaperSize", QPageSize::NPaperSize },
   { "AnsiA", QPageSize::AnsiA },
   { "AnsiB", QPageSize::AnsiB },
   { "EnvelopeC5", QPageSize::EnvelopeC5 },
   { "EnvelopeDL", QPageSize::EnvelopeDL },
   { "Envelope10", QPageSize::Envelope10 },

    /* QPageSize::SizeMatchPolicy */
   { "FuzzyMatch", QPageSize::FuzzyMatch },
   { "FuzzyOrientationMatch", QPageSize::FuzzyOrientationMatch },
   { "ExactMatch", QPageSize::ExactMatch },

    /* QPageSize::Unit */
   { "Millimeter", QPageSize::Millimeter },
   { "Point", QPageSize::Point },
   { "Inch", QPageSize::Inch },
   { "Pica", QPageSize::Pica },
   { "Didot", QPageSize::Didot },
   { "Cicero", QPageSize::Cicero },

};

QVector<PlastiQMetaObject*> PlastiQQPageSize::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQPageSize::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPageSize::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QPageSize", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPageSize::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPageSize::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPageSize *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPageSize(); break;
        case 1: o = new QPageSize(QPageSize::PageSizeId(stack[1].s_int64)); break;
        case 2: o = new QPageSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp))); break;
        case 3: o = new QPageSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    stack[2].s_string); break;
        case 4: o = new QPageSize((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    QPageSize::SizeMatchPolicy(stack[3].s_int64)); break;
        case 5: o = new QPageSize((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)),
                    QPageSize::Unit(stack[2].s_int64)); break;
        case 6: o = new QPageSize((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)),
                    QPageSize::Unit(stack[2].s_int64),
                    stack[3].s_string); break;
        case 7: o = new QPageSize((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)),
                    QPageSize::Unit(stack[2].s_int64),
                    stack[3].s_string,
                    QPageSize::SizeMatchPolicy(stack[4].s_int64)); break;
        case 8: o = new QPageSize((*reinterpret_cast< QPageSize(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPageSize *p = new PlastiQQPageSize();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPageSize *p = new PlastiQQPageSize();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 28) {
            id -= 28;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPageSize *o = sc ? Q_NULLPTR : reinterpret_cast<QPageSize*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->definitionSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { qint64 _r = o->definitionUnits(); // HACK for Unit 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { qint64 _r = o->id(); // HACK for PageSizeId 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { bool _r = o->isEquivalentTo((*reinterpret_cast< QPageSize(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { QString _r = o->key();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->rect(QPageSize::Unit(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QRect *_r = new QRect(o->rectPixels(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { /* COPY OBJECT */
            QRect *_r = new QRect(o->rectPoints());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->size(QPageSize::Unit(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QSize *_r = new QSize(o->sizePixels(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QSize *_r = new QSize(o->sizePoints());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: o->swap((*reinterpret_cast< QPageSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: { int _r = o->windowsId();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: { /* COPY OBJECT */
            QSizeF *_r = sc ? new QSizeF(QPageSize::definitionSize(QPageSize::PageSizeId(stack[1].s_int64))) : new QSizeF(o->definitionSize(QPageSize::PageSizeId(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { qint64 _r = sc ? QPageSize::definitionUnits(QPageSize::PageSizeId(stack[1].s_int64)) : o->definitionUnits(QPageSize::PageSizeId(stack[1].s_int64)); // HACK for Unit 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 17: { qint64 _r = sc ? QPageSize::id((*reinterpret_cast< QSize(*) >(stack[1].s_voidp))) : o->id((*reinterpret_cast< QSize(*) >(stack[1].s_voidp))); // HACK for PageSizeId 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 18: { qint64 _r = sc ? QPageSize::id((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    QPageSize::SizeMatchPolicy(stack[2].s_int64)) : o->id((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    QPageSize::SizeMatchPolicy(stack[2].s_int64)); // HACK for PageSizeId 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 19: { qint64 _r = sc ? QPageSize::id((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)),
                    QPageSize::Unit(stack[2].s_int64)) : o->id((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)),
                    QPageSize::Unit(stack[2].s_int64)); // HACK for PageSizeId 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 20: { qint64 _r = sc ? QPageSize::id((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)),
                    QPageSize::Unit(stack[2].s_int64),
                    QPageSize::SizeMatchPolicy(stack[3].s_int64)) : o->id((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)),
                    QPageSize::Unit(stack[2].s_int64),
                    QPageSize::SizeMatchPolicy(stack[3].s_int64)); // HACK for PageSizeId 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 21: { qint64 _r = sc ? QPageSize::id(stack[1].s_int) : o->id(stack[1].s_int); // HACK for PageSizeId 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 22: { QString _r = sc ? QPageSize::key(QPageSize::PageSizeId(stack[1].s_int64)) : o->key(QPageSize::PageSizeId(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 23: { QString _r = sc ? QPageSize::name(QPageSize::PageSizeId(stack[1].s_int64)) : o->name(QPageSize::PageSizeId(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 24: { /* COPY OBJECT */
            QSizeF *_r = sc ? new QSizeF(QPageSize::size(QPageSize::PageSizeId(stack[1].s_int64),
                    QPageSize::Unit(stack[2].s_int64))) : new QSizeF(o->size(QPageSize::PageSizeId(stack[1].s_int64),
                    QPageSize::Unit(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 25: { /* COPY OBJECT */
            QSize *_r = sc ? new QSize(QPageSize::sizePixels(QPageSize::PageSizeId(stack[1].s_int64),
                    stack[2].s_int)) : new QSize(o->sizePixels(QPageSize::PageSizeId(stack[1].s_int64),
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 26: { /* COPY OBJECT */
            QSize *_r = sc ? new QSize(QPageSize::sizePoints(QPageSize::PageSizeId(stack[1].s_int64))) : new QSize(o->sizePoints(QPageSize::PageSizeId(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 27: { int _r = sc ? QPageSize::windowsId(QPageSize::PageSizeId(stack[1].s_int64)) : o->windowsId(QPageSize::PageSizeId(stack[1].s_int64));
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
        QPageSize *o = reinterpret_cast<QPageSize*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQPageSize::~PlastiQQPageSize() {
    QPageSize* o = reinterpret_cast<QPageSize*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

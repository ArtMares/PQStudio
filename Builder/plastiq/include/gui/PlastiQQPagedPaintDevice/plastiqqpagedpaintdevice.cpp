#include "plastiqmethod.h"
#include "plastiqqpagedpaintdevice.h"

#include "gui/PlastiQQPaintDevice/plastiqqpaintdevice.h"
#include <QPagedPaintDevice> 
#include <QPageLayout>
#include <QSizeF>

QHash<QByteArray, PlastiQMethod> PlastiQQPagedPaintDevice::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQPagedPaintDevice::plastiqMethods = {
    { "margins()", { "margins", "", "Margins", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "newPage()", { "newPage", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pageLayout()", { "pageLayout", "", "QPageLayout", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pageSize()", { "pageSize", "", "PageSize", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pageSizeMM()", { "pageSizeMM", "", "QSizeF", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageLayout(QPageLayout&)", { "setPageLayout", "QPageLayout&", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageMargins(QMarginsF&)", { "setPageMargins", "QMarginsF&", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageMargins(QMarginsF&,enum)", { "setPageMargins", "QMarginsF&,QPageLayout::Unit", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageOrientation(enum)", { "setPageOrientation", "QPageLayout::Orientation", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageSize(QPageSize&)", { "setPageSize", "QPageSize&", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageSize(enum)", { "setPageSize", "PageSize", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageSizeMM(QSizeF&)", { "setPageSizeMM", "QSizeF&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPagedPaintDevice::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPagedPaintDevice::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPagedPaintDevice::plastiqConstants = {

    /* QPagedPaintDevice::PageSize */
   { "A4", QPagedPaintDevice::A4 },
   { "B5", QPagedPaintDevice::B5 },
   { "Letter", QPagedPaintDevice::Letter },
   { "Legal", QPagedPaintDevice::Legal },
   { "Executive", QPagedPaintDevice::Executive },
   { "A0", QPagedPaintDevice::A0 },
   { "A1", QPagedPaintDevice::A1 },
   { "A2", QPagedPaintDevice::A2 },
   { "A3", QPagedPaintDevice::A3 },
   { "A5", QPagedPaintDevice::A5 },
   { "A6", QPagedPaintDevice::A6 },
   { "A7", QPagedPaintDevice::A7 },
   { "A8", QPagedPaintDevice::A8 },
   { "A9", QPagedPaintDevice::A9 },
   { "B0", QPagedPaintDevice::B0 },
   { "B1", QPagedPaintDevice::B1 },
   { "B10", QPagedPaintDevice::B10 },
   { "B2", QPagedPaintDevice::B2 },
   { "B3", QPagedPaintDevice::B3 },
   { "B4", QPagedPaintDevice::B4 },
   { "B6", QPagedPaintDevice::B6 },
   { "B7", QPagedPaintDevice::B7 },
   { "B8", QPagedPaintDevice::B8 },
   { "B9", QPagedPaintDevice::B9 },
   { "C5E", QPagedPaintDevice::C5E },
   { "Comm10E", QPagedPaintDevice::Comm10E },
   { "DLE", QPagedPaintDevice::DLE },
   { "Folio", QPagedPaintDevice::Folio },
   { "Ledger", QPagedPaintDevice::Ledger },
   { "Tabloid", QPagedPaintDevice::Tabloid },
   { "Custom", QPagedPaintDevice::Custom },
   { "A10", QPagedPaintDevice::A10 },
   { "A3Extra", QPagedPaintDevice::A3Extra },
   { "A4Extra", QPagedPaintDevice::A4Extra },
   { "A4Plus", QPagedPaintDevice::A4Plus },
   { "A4Small", QPagedPaintDevice::A4Small },
   { "A5Extra", QPagedPaintDevice::A5Extra },
   { "B5Extra", QPagedPaintDevice::B5Extra },
   { "JisB0", QPagedPaintDevice::JisB0 },
   { "JisB1", QPagedPaintDevice::JisB1 },
   { "JisB2", QPagedPaintDevice::JisB2 },
   { "JisB3", QPagedPaintDevice::JisB3 },
   { "JisB4", QPagedPaintDevice::JisB4 },
   { "JisB5", QPagedPaintDevice::JisB5 },
   { "JisB6", QPagedPaintDevice::JisB6 },
   { "JisB7", QPagedPaintDevice::JisB7 },
   { "JisB8", QPagedPaintDevice::JisB8 },
   { "JisB9", QPagedPaintDevice::JisB9 },
   { "JisB10", QPagedPaintDevice::JisB10 },
   { "AnsiC", QPagedPaintDevice::AnsiC },
   { "AnsiD", QPagedPaintDevice::AnsiD },
   { "AnsiE", QPagedPaintDevice::AnsiE },
   { "LegalExtra", QPagedPaintDevice::LegalExtra },
   { "LetterExtra", QPagedPaintDevice::LetterExtra },
   { "LetterPlus", QPagedPaintDevice::LetterPlus },
   { "LetterSmall", QPagedPaintDevice::LetterSmall },
   { "TabloidExtra", QPagedPaintDevice::TabloidExtra },
   { "ArchA", QPagedPaintDevice::ArchA },
   { "ArchB", QPagedPaintDevice::ArchB },
   { "ArchC", QPagedPaintDevice::ArchC },
   { "ArchD", QPagedPaintDevice::ArchD },
   { "ArchE", QPagedPaintDevice::ArchE },
   { "Imperial7x9", QPagedPaintDevice::Imperial7x9 },
   { "Imperial8x10", QPagedPaintDevice::Imperial8x10 },
   { "Imperial9x11", QPagedPaintDevice::Imperial9x11 },
   { "Imperial9x12", QPagedPaintDevice::Imperial9x12 },
   { "Imperial10x11", QPagedPaintDevice::Imperial10x11 },
   { "Imperial10x13", QPagedPaintDevice::Imperial10x13 },
   { "Imperial10x14", QPagedPaintDevice::Imperial10x14 },
   { "Imperial12x11", QPagedPaintDevice::Imperial12x11 },
   { "Imperial15x11", QPagedPaintDevice::Imperial15x11 },
   { "ExecutiveStandard", QPagedPaintDevice::ExecutiveStandard },
   { "Note", QPagedPaintDevice::Note },
   { "Quarto", QPagedPaintDevice::Quarto },
   { "Statement", QPagedPaintDevice::Statement },
   { "SuperA", QPagedPaintDevice::SuperA },
   { "SuperB", QPagedPaintDevice::SuperB },
   { "Postcard", QPagedPaintDevice::Postcard },
   { "DoublePostcard", QPagedPaintDevice::DoublePostcard },
   { "Prc16K", QPagedPaintDevice::Prc16K },
   { "Prc32K", QPagedPaintDevice::Prc32K },
   { "Prc32KBig", QPagedPaintDevice::Prc32KBig },
   { "FanFoldUS", QPagedPaintDevice::FanFoldUS },
   { "FanFoldGerman", QPagedPaintDevice::FanFoldGerman },
   { "FanFoldGermanLegal", QPagedPaintDevice::FanFoldGermanLegal },
   { "EnvelopeB4", QPagedPaintDevice::EnvelopeB4 },
   { "EnvelopeB5", QPagedPaintDevice::EnvelopeB5 },
   { "EnvelopeB6", QPagedPaintDevice::EnvelopeB6 },
   { "EnvelopeC0", QPagedPaintDevice::EnvelopeC0 },
   { "EnvelopeC1", QPagedPaintDevice::EnvelopeC1 },
   { "EnvelopeC2", QPagedPaintDevice::EnvelopeC2 },
   { "EnvelopeC3", QPagedPaintDevice::EnvelopeC3 },
   { "EnvelopeC4", QPagedPaintDevice::EnvelopeC4 },
   { "EnvelopeC6", QPagedPaintDevice::EnvelopeC6 },
   { "EnvelopeC65", QPagedPaintDevice::EnvelopeC65 },
   { "EnvelopeC7", QPagedPaintDevice::EnvelopeC7 },
   { "Envelope9", QPagedPaintDevice::Envelope9 },
   { "Envelope11", QPagedPaintDevice::Envelope11 },
   { "Envelope12", QPagedPaintDevice::Envelope12 },
   { "Envelope14", QPagedPaintDevice::Envelope14 },
   { "EnvelopeMonarch", QPagedPaintDevice::EnvelopeMonarch },
   { "EnvelopePersonal", QPagedPaintDevice::EnvelopePersonal },
   { "EnvelopeChou3", QPagedPaintDevice::EnvelopeChou3 },
   { "EnvelopeChou4", QPagedPaintDevice::EnvelopeChou4 },
   { "EnvelopeInvite", QPagedPaintDevice::EnvelopeInvite },
   { "EnvelopeItalian", QPagedPaintDevice::EnvelopeItalian },
   { "EnvelopeKaku2", QPagedPaintDevice::EnvelopeKaku2 },
   { "EnvelopeKaku3", QPagedPaintDevice::EnvelopeKaku3 },
   { "EnvelopePrc1", QPagedPaintDevice::EnvelopePrc1 },
   { "EnvelopePrc2", QPagedPaintDevice::EnvelopePrc2 },
   { "EnvelopePrc3", QPagedPaintDevice::EnvelopePrc3 },
   { "EnvelopePrc4", QPagedPaintDevice::EnvelopePrc4 },
   { "EnvelopePrc5", QPagedPaintDevice::EnvelopePrc5 },
   { "EnvelopePrc6", QPagedPaintDevice::EnvelopePrc6 },
   { "EnvelopePrc7", QPagedPaintDevice::EnvelopePrc7 },
   { "EnvelopePrc8", QPagedPaintDevice::EnvelopePrc8 },
   { "EnvelopePrc9", QPagedPaintDevice::EnvelopePrc9 },
   { "EnvelopePrc10", QPagedPaintDevice::EnvelopePrc10 },
   { "EnvelopeYou4", QPagedPaintDevice::EnvelopeYou4 },
   { "LastPageSize", QPagedPaintDevice::LastPageSize },
   { "NPageSize", QPagedPaintDevice::NPageSize },
   { "NPaperSize", QPagedPaintDevice::NPaperSize },
   { "AnsiA", QPagedPaintDevice::AnsiA },
   { "AnsiB", QPagedPaintDevice::AnsiB },
   { "EnvelopeC5", QPagedPaintDevice::EnvelopeC5 },
   { "EnvelopeDL", QPagedPaintDevice::EnvelopeDL },
   { "Envelope10", QPagedPaintDevice::Envelope10 },

};

QVector<PlastiQMetaObject*> PlastiQQPagedPaintDevice::plastiqInherits = { &PlastiQQPaintDevice::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPagedPaintDevice::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPagedPaintDevice::plastiq_static_metaObject = {
    { &PlastiQQPaintDevice::plastiq_static_metaObject, &plastiqInherits, "QPagedPaintDevice", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPagedPaintDevice::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQPagedPaintDeviceWrapper : public QPagedPaintDevice {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    void setPageSize(PageSize size) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setPageSize(PageSize)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_int64 = size;
            stack[1].name = QByteArrayLiteral("PageSize");
            stack[1].type = PlastiQ::Enum;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPagedPaintDevice::setPageSize(size);
    }

    void PlastiQParentCall_setPageSize(PageSize size) {
        return QPagedPaintDevice::setPageSize(size);
    }

    void setPageSizeMM(const QSizeF &size) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void setPageSizeMM(const QSizeF&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QSizeF(size) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QSizeF");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QPagedPaintDevice::setPageSizeMM(size);
    }

    void PlastiQParentCall_setPageSizeMM(const QSizeF &size) {
        return QPagedPaintDevice::setPageSizeMM(size);
    }

};

void PlastiQQPagedPaintDevice::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQPagedPaintDeviceWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQPagedPaintDevice *p = new PlastiQQPagedPaintDevice();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPagedPaintDevice *p = new PlastiQQPagedPaintDevice();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            PlastiQQPaintDevice::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPagedPaintDevice *o = sc ? Q_NULLPTR : reinterpret_cast<QPagedPaintDevice*>(object->plastiq_data());

        switch(id) {
        case 0: /* UNSUPPORTED_RETURN_VALUE o->margins() | ret: `Margins` */ break;
        case 1: { bool _r = o->newPage();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { /* COPY OBJECT */
            QPageLayout *_r = new QPageLayout(o->pageLayout());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPageLayout";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { qint64 _r = o->pageSize(); // HACK for PageSize 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->pageSizeMM());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { bool _r = o->setPageLayout((*reinterpret_cast< QPageLayout(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->setPageMargins((*reinterpret_cast< QMarginsF(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->setPageMargins((*reinterpret_cast< QMarginsF(*) >(stack[1].s_voidp)),
                    QPageLayout::Unit(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->setPageOrientation(QPageLayout::Orientation(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->setPageSize((*reinterpret_cast< QPageSize(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: if (isWrapper) ((PlastiQQPagedPaintDeviceWrapper*)o)->PlastiQParentCall_setPageSize(QPagedPaintDevice::PageSize(stack[1].s_int64));
                else o->setPageSize(QPagedPaintDevice::PageSize(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 11: if (isWrapper) ((PlastiQQPagedPaintDeviceWrapper*)o)->PlastiQParentCall_setPageSizeMM((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)));
                else o->setPageSizeMM((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

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
        QPagedPaintDevice *o = reinterpret_cast<QPagedPaintDevice*>(object->plastiq_data());

        if(className == "QPaintDevice") {
            stack[0].s_voidp = static_cast<QPaintDevice*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPagedPaintDevice::~PlastiQQPagedPaintDevice() {
    QPagedPaintDevice* o = reinterpret_cast<QPagedPaintDevice*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

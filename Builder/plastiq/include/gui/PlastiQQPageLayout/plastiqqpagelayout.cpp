#include "plastiqmethod.h"
#include "plastiqqpagelayout.h"

#include <QPageLayout> 
#include <QRectF>
#include <QRect>
#include <QMarginsF>
#include <QMargins>
#include <QPageSize>

QHash<QByteArray, PlastiQMethod> PlastiQQPageLayout::plastiqConstructors = {
    { "QPageLayout()", { "QPageLayout", "", "QPageLayout*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPageLayout(QPageSize&,enum,QMarginsF&)", { "QPageLayout", "QPageSize&,Orientation,QMarginsF&", "QPageLayout*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPageLayout(QPageSize&,enum,QMarginsF&,enum)", { "QPageLayout", "QPageSize&,Orientation,QMarginsF&,Unit", "QPageLayout*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPageLayout(QPageSize&,enum,QMarginsF&,enum,QMarginsF&)", { "QPageLayout", "QPageSize&,Orientation,QMarginsF&,Unit,QMarginsF&", "QPageLayout*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QPageLayout(QPageLayout&)", { "QPageLayout", "QPageLayout&", "QPageLayout*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPageLayout::plastiqMethods = {
    { "fullRect()", { "fullRect", "", "QRectF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fullRect(enum)", { "fullRect", "Unit", "QRectF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fullRectPixels(int)", { "fullRectPixels", "int", "QRect", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fullRectPoints()", { "fullRectPoints", "", "QRect", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEquivalentTo(QPageLayout&)", { "isEquivalentTo", "QPageLayout&", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "margins()", { "margins", "", "QMarginsF", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "margins(enum)", { "margins", "Unit", "QMarginsF", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "marginsPixels(int)", { "marginsPixels", "int", "QMargins", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "marginsPoints()", { "marginsPoints", "", "QMargins", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "maximumMargins()", { "maximumMargins", "", "QMarginsF", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "minimumMargins()", { "minimumMargins", "", "QMarginsF", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mode()", { "mode", "", "Mode", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "orientation()", { "orientation", "", "Orientation", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pageSize()", { "pageSize", "", "QPageSize", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paintRect()", { "paintRect", "", "QRectF", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paintRect(enum)", { "paintRect", "Unit", "QRectF", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paintRectPixels(int)", { "paintRectPixels", "int", "QRect", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "paintRectPoints()", { "paintRectPoints", "", "QRect", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBottomMargin(double)", { "setBottomMargin", "qreal", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLeftMargin(double)", { "setLeftMargin", "qreal", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMargins(QMarginsF&)", { "setMargins", "QMarginsF&", "bool", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimumMargins(QMarginsF&)", { "setMinimumMargins", "QMarginsF&", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMode(enum)", { "setMode", "Mode", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOrientation(enum)", { "setOrientation", "Orientation", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageSize(QPageSize&)", { "setPageSize", "QPageSize&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPageSize(QPageSize&,QMarginsF&)", { "setPageSize", "QPageSize&,QMarginsF&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRightMargin(double)", { "setRightMargin", "qreal", "bool", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTopMargin(double)", { "setTopMargin", "qreal", "bool", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUnits(enum)", { "setUnits", "Unit", "void", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QPageLayout&)", { "swap", "QPageLayout&", "void", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "units()", { "units", "", "Unit", 31, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPageLayout::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPageLayout::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQPageLayout::plastiqConstants = {

    /* QPageLayout::Mode */
   { "StandardMode", QPageLayout::StandardMode },
   { "FullPageMode", QPageLayout::FullPageMode },

    /* QPageLayout::Orientation */
   { "Portrait", QPageLayout::Portrait },
   { "Landscape", QPageLayout::Landscape },

    /* QPageLayout::Unit */
   { "Millimeter", QPageLayout::Millimeter },
   { "Point", QPageLayout::Point },
   { "Inch", QPageLayout::Inch },
   { "Pica", QPageLayout::Pica },
   { "Didot", QPageLayout::Didot },
   { "Cicero", QPageLayout::Cicero },

};

QVector<PlastiQMetaObject*> PlastiQQPageLayout::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQPageLayout::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQPageLayout::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QPageLayout", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPageLayout::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPageLayout::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPageLayout *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QPageLayout(); break;
        case 1: o = new QPageLayout((*reinterpret_cast< QPageSize(*) >(stack[1].s_voidp)),
                    QPageLayout::Orientation(stack[2].s_int64),
                    (*reinterpret_cast< QMarginsF(*) >(stack[3].s_voidp))); break;
        case 2: o = new QPageLayout((*reinterpret_cast< QPageSize(*) >(stack[1].s_voidp)),
                    QPageLayout::Orientation(stack[2].s_int64),
                    (*reinterpret_cast< QMarginsF(*) >(stack[3].s_voidp)),
                    QPageLayout::Unit(stack[4].s_int64)); break;
        case 3: o = new QPageLayout((*reinterpret_cast< QPageSize(*) >(stack[1].s_voidp)),
                    QPageLayout::Orientation(stack[2].s_int64),
                    (*reinterpret_cast< QMarginsF(*) >(stack[3].s_voidp)),
                    QPageLayout::Unit(stack[4].s_int64),
                    (*reinterpret_cast< QMarginsF(*) >(stack[5].s_voidp))); break;
        case 4: o = new QPageLayout((*reinterpret_cast< QPageLayout(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPageLayout *p = new PlastiQQPageLayout();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPageLayout *p = new PlastiQQPageLayout();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 32) {
            id -= 32;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPageLayout *o = sc ? Q_NULLPTR : reinterpret_cast<QPageLayout*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->fullRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->fullRect(QPageLayout::Unit(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QRect *_r = new QRect(o->fullRectPixels(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QRect *_r = new QRect(o->fullRectPoints());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { bool _r = o->isEquivalentTo((*reinterpret_cast< QPageLayout(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { /* COPY OBJECT */
            QMarginsF *_r = new QMarginsF(o->margins());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMarginsF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { /* COPY OBJECT */
            QMarginsF *_r = new QMarginsF(o->margins(QPageLayout::Unit(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMarginsF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QMargins *_r = new QMargins(o->marginsPixels(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMargins";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { /* COPY OBJECT */
            QMargins *_r = new QMargins(o->marginsPoints());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMargins";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QMarginsF *_r = new QMarginsF(o->maximumMargins());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMarginsF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QMarginsF *_r = new QMarginsF(o->minimumMargins());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMarginsF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { qint64 _r = o->mode(); // HACK for Mode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 13: { qint64 _r = o->orientation(); // HACK for Orientation 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 14: { /* COPY OBJECT */
            QPageSize *_r = new QPageSize(o->pageSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPageSize";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->paintRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->paintRect(QPageLayout::Unit(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { /* COPY OBJECT */
            QRect *_r = new QRect(o->paintRectPixels(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { /* COPY OBJECT */
            QRect *_r = new QRect(o->paintRectPoints());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: { bool _r = o->setBottomMargin(stack[1].s_double);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { bool _r = o->setLeftMargin(stack[1].s_double);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { bool _r = o->setMargins((*reinterpret_cast< QMarginsF(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: o->setMinimumMargins((*reinterpret_cast< QMarginsF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setMode(QPageLayout::Mode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setOrientation(QPageLayout::Orientation(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setPageSize((*reinterpret_cast< QPageSize(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->setPageSize((*reinterpret_cast< QPageSize(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QMarginsF(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 27: { bool _r = o->setRightMargin(stack[1].s_double);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 28: { bool _r = o->setTopMargin(stack[1].s_double);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 29: o->setUnits(QPageLayout::Unit(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 30: o->swap((*reinterpret_cast< QPageLayout(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 31: { qint64 _r = o->units(); // HACK for Unit 
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
        QPageLayout *o = reinterpret_cast<QPageLayout*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQPageLayout::~PlastiQQPageLayout() {
    QPageLayout* o = reinterpret_cast<QPageLayout*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

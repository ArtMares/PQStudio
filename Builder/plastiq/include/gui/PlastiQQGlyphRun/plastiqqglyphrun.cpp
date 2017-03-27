#include "plastiqmethod.h"
#include "plastiqqglyphrun.h"

#include <QGlyphRun> 
#include <QRectF>
#include <QRawFont>

QHash<QByteArray, PlastiQMethod> PlastiQQGlyphRun::plastiqConstructors = {
    { "QGlyphRun()", { "QGlyphRun", "", "QGlyphRun*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGlyphRun(QGlyphRun&)", { "QGlyphRun", "QGlyphRun&", "QGlyphRun*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGlyphRun::plastiqMethods = {
    { "boundingRect()", { "boundingRect", "", "QRectF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flags()", { "flags", "", "GlyphRunFlags", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRightToLeft()", { "isRightToLeft", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "overline()", { "overline", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rawFont()", { "rawFont", "", "QRawFont", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBoundingRect(QRectF&)", { "setBoundingRect", "QRectF&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFlag(enum)", { "setFlag", "GlyphRunFlag", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFlag(enum,bool)", { "setFlag", "GlyphRunFlag,bool", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFlags(enum)", { "setFlags", "GlyphRunFlags", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setGlyphIndexes(QVector<quint32>&)", { "setGlyphIndexes", "QVector<quint32>&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOverline(bool)", { "setOverline", "bool", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPositions(QVector<QPointF>&)", { "setPositions", "QVector<QPointF>&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRawData(const quint32*,const QPointF*,int)", { "setRawData", "quint32*,QPointF*,int", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRawFont(QRawFont&)", { "setRawFont", "QRawFont&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRightToLeft(bool)", { "setRightToLeft", "bool", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStrikeOut(bool)", { "setStrikeOut", "bool", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUnderline(bool)", { "setUnderline", "bool", "void", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "strikeOut()", { "strikeOut", "", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QGlyphRun&)", { "swap", "QGlyphRun&", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "underline()", { "underline", "", "bool", 21, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGlyphRun::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGlyphRun::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGlyphRun::plastiqConstants = {

    /* QGlyphRun::GlyphRunFlag */
   { "Overline", QGlyphRun::Overline },
   { "Underline", QGlyphRun::Underline },
   { "StrikeOut", QGlyphRun::StrikeOut },
   { "RightToLeft", QGlyphRun::RightToLeft },
   { "SplitLigature", QGlyphRun::SplitLigature },

};

QVector<PlastiQMetaObject*> PlastiQQGlyphRun::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQGlyphRun::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQGlyphRun::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QGlyphRun", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGlyphRun::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGlyphRun::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGlyphRun *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QGlyphRun(); break;
        case 1: o = new QGlyphRun((*reinterpret_cast< QGlyphRun(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGlyphRun *p = new PlastiQQGlyphRun();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGlyphRun *p = new PlastiQQGlyphRun();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 22) {
            id -= 22;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGlyphRun *o = sc ? Q_NULLPTR : reinterpret_cast<QGlyphRun*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->boundingRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 2: { qint64 _r = o->flags(); // HACK for GlyphRunFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->isRightToLeft();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->overline();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { /* COPY OBJECT */
            QRawFont *_r = new QRawFont(o->rawFont());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRawFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: o->setBoundingRect((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setFlag(QGlyphRun::GlyphRunFlag(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setFlag(QGlyphRun::GlyphRunFlag(stack[1].s_int64),
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setFlags(QGlyphRun::GlyphRunFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setGlyphIndexes((*reinterpret_cast< QVector<quint32>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setOverline(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setPositions((*reinterpret_cast< QVector<QPointF>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setRawData(reinterpret_cast<const quint32*>(stack[1].s_voidp),
                    reinterpret_cast<const QPointF*>(stack[2].s_voidp),
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setRawFont((*reinterpret_cast< QRawFont(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setRightToLeft(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setStrikeOut(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 18: o->setUnderline(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 19: { bool _r = o->strikeOut();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: o->swap((*reinterpret_cast< QGlyphRun(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 21: { bool _r = o->underline();
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
        QGlyphRun *o = reinterpret_cast<QGlyphRun*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQGlyphRun::~PlastiQQGlyphRun() {
    QGlyphRun* o = reinterpret_cast<QGlyphRun*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

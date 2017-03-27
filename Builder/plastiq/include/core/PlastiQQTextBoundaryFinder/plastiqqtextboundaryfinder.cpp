#include "plastiqmethod.h"
#include "plastiqqtextboundaryfinder.h"

#include <QTextBoundaryFinder> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQTextBoundaryFinder::plastiqConstructors = {
    { "QTextBoundaryFinder()", { "QTextBoundaryFinder", "", "QTextBoundaryFinder*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextBoundaryFinder(QTextBoundaryFinder&)", { "QTextBoundaryFinder", "QTextBoundaryFinder&", "QTextBoundaryFinder*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextBoundaryFinder(enum,QString)", { "QTextBoundaryFinder", "BoundaryType,QString&", "QTextBoundaryFinder*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextBoundaryFinder(enum,const QChar*,int)", { "QTextBoundaryFinder", "BoundaryType,QChar*,int", "QTextBoundaryFinder*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextBoundaryFinder(enum,const QChar*,int,unsigned char*)", { "QTextBoundaryFinder", "BoundaryType,QChar*,int,unsigned char*", "QTextBoundaryFinder*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTextBoundaryFinder(enum,const QChar*,int,unsigned char*,int)", { "QTextBoundaryFinder", "BoundaryType,QChar*,int,unsigned char*,int", "QTextBoundaryFinder*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextBoundaryFinder::plastiqMethods = {
    { "boundaryReasons()", { "boundaryReasons", "", "BoundaryReasons", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAtBoundary()", { "isAtBoundary", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "position()", { "position", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPosition(int)", { "setPosition", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "string()", { "string", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toEnd()", { "toEnd", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toNextBoundary()", { "toNextBoundary", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toPreviousBoundary()", { "toPreviousBoundary", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toStart()", { "toStart", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "BoundaryType", 10, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextBoundaryFinder::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextBoundaryFinder::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextBoundaryFinder::plastiqConstants = {

    /* QTextBoundaryFinder::BoundaryReason */
   { "NotAtBoundary", QTextBoundaryFinder::NotAtBoundary },
   { "BreakOpportunity", QTextBoundaryFinder::BreakOpportunity },
   { "StartOfItem", QTextBoundaryFinder::StartOfItem },
   { "EndOfItem", QTextBoundaryFinder::EndOfItem },
   { "MandatoryBreak", QTextBoundaryFinder::MandatoryBreak },
   { "SoftHyphen", QTextBoundaryFinder::SoftHyphen },

    /* QTextBoundaryFinder::BoundaryType */
   { "Grapheme", QTextBoundaryFinder::Grapheme },
   { "Word", QTextBoundaryFinder::Word },
   { "Sentence", QTextBoundaryFinder::Sentence },
   { "Line", QTextBoundaryFinder::Line },

};

QVector<PlastiQMetaObject*> PlastiQQTextBoundaryFinder::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextBoundaryFinder::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextBoundaryFinder::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextBoundaryFinder", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextBoundaryFinder::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextBoundaryFinder::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextBoundaryFinder *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextBoundaryFinder(); break;
        case 1: o = new QTextBoundaryFinder((*reinterpret_cast< QTextBoundaryFinder(*) >(stack[1].s_voidp))); break;
        case 2: o = new QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType(stack[1].s_int64),
                    stack[2].s_string); break;
        case 3: o = new QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType(stack[1].s_int64),
                    reinterpret_cast<const QChar*>(stack[2].s_voidp),
                    stack[3].s_int); break;
        case 4: o = new QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType(stack[1].s_int64),
                    reinterpret_cast<const QChar*>(stack[2].s_voidp),
                    stack[3].s_int,
                    reinterpret_cast<unsigned char*>(stack[4].s_voidp)); break;
        case 5: o = new QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType(stack[1].s_int64),
                    reinterpret_cast<const QChar*>(stack[2].s_voidp),
                    stack[3].s_int,
                    reinterpret_cast<unsigned char*>(stack[4].s_voidp),
                    stack[5].s_int); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextBoundaryFinder *p = new PlastiQQTextBoundaryFinder();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextBoundaryFinder *p = new PlastiQQTextBoundaryFinder();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 11) {
            id -= 11;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextBoundaryFinder *o = sc ? Q_NULLPTR : reinterpret_cast<QTextBoundaryFinder*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->boundaryReasons(); // HACK for BoundaryReasons 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { bool _r = o->isAtBoundary();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { int _r = o->position();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: o->setPosition(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 5: { QString _r = o->string();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: o->toEnd();
                stack[0].type = PlastiQ::Void; break;
        case 7: { int _r = o->toNextBoundary();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { int _r = o->toPreviousBoundary();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: o->toStart();
                stack[0].type = PlastiQ::Void; break;
        case 10: { qint64 _r = o->type(); // HACK for BoundaryType 
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
        QTextBoundaryFinder *o = reinterpret_cast<QTextBoundaryFinder*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextBoundaryFinder::~PlastiQQTextBoundaryFinder() {
    QTextBoundaryFinder* o = reinterpret_cast<QTextBoundaryFinder*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

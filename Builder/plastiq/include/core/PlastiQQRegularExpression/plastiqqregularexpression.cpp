#include "plastiqmethod.h"
#include "plastiqqregularexpression.h"

#include <QRegularExpression> 
#include <QString>
#include <QRegularExpressionMatchIterator>
#include <QRegularExpressionMatch>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQRegularExpression::plastiqConstructors = {
    { "QRegularExpression()", { "QRegularExpression", "", "QRegularExpression*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegularExpression(QString)", { "QRegularExpression", "QString&", "QRegularExpression*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegularExpression(QString,enum)", { "QRegularExpression", "QString&,PatternOptions", "QRegularExpression*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegularExpression(QRegularExpression&)", { "QRegularExpression", "QRegularExpression&", "QRegularExpression*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRegularExpression::plastiqMethods = {
    { "captureCount()", { "captureCount", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalMatch(QString)", { "globalMatch", "QString&", "QRegularExpressionMatchIterator", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalMatch(QString,int)", { "globalMatch", "QString&,int", "QRegularExpressionMatchIterator", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalMatch(QString,int,enum)", { "globalMatch", "QString&,int,MatchType", "QRegularExpressionMatchIterator", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalMatch(QString,int,enum,enum)", { "globalMatch", "QString&,int,MatchType,MatchOptions", "QRegularExpressionMatchIterator", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalMatch(QStringRef&)", { "globalMatch", "QStringRef&", "QRegularExpressionMatchIterator", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalMatch(QStringRef&,int)", { "globalMatch", "QStringRef&,int", "QRegularExpressionMatchIterator", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalMatch(QStringRef&,int,enum)", { "globalMatch", "QStringRef&,int,MatchType", "QRegularExpressionMatchIterator", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globalMatch(QStringRef&,int,enum,enum)", { "globalMatch", "QStringRef&,int,MatchType,MatchOptions", "QRegularExpressionMatchIterator", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "match(QString)", { "match", "QString&", "QRegularExpressionMatch", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "match(QString,int)", { "match", "QString&,int", "QRegularExpressionMatch", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "match(QString,int,enum)", { "match", "QString&,int,MatchType", "QRegularExpressionMatch", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "match(QString,int,enum,enum)", { "match", "QString&,int,MatchType,MatchOptions", "QRegularExpressionMatch", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "match(QStringRef&)", { "match", "QStringRef&", "QRegularExpressionMatch", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "match(QStringRef&,int)", { "match", "QStringRef&,int", "QRegularExpressionMatch", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "match(QStringRef&,int,enum)", { "match", "QStringRef&,int,MatchType", "QRegularExpressionMatch", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "match(QStringRef&,int,enum,enum)", { "match", "QStringRef&,int,MatchType,MatchOptions", "QRegularExpressionMatch", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "namedCaptureGroups()", { "namedCaptureGroups", "", "QStringList", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "optimize()", { "optimize", "", "void", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pattern()", { "pattern", "", "QString", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "patternErrorOffset()", { "patternErrorOffset", "", "int", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "patternOptions()", { "patternOptions", "", "PatternOptions", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPattern(QString)", { "setPattern", "QString&", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPatternOptions(enum)", { "setPatternOptions", "PatternOptions", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QRegularExpression&)", { "swap", "QRegularExpression&", "void", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "escape(QString)", { "escape", "QString&", "QString", 27, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRegularExpression::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQRegularExpression::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQRegularExpression::plastiqConstants = {

    /* QRegularExpression::MatchOption */
   { "NoMatchOption", QRegularExpression::NoMatchOption },
   { "AnchoredMatchOption", QRegularExpression::AnchoredMatchOption },
   { "DontCheckSubjectStringMatchOption", QRegularExpression::DontCheckSubjectStringMatchOption },

    /* QRegularExpression::MatchType */
   { "NormalMatch", QRegularExpression::NormalMatch },
   { "PartialPreferCompleteMatch", QRegularExpression::PartialPreferCompleteMatch },
   { "PartialPreferFirstMatch", QRegularExpression::PartialPreferFirstMatch },
   { "NoMatch", QRegularExpression::NoMatch },

    /* QRegularExpression::PatternOption */
   { "NoPatternOption", QRegularExpression::NoPatternOption },
   { "CaseInsensitiveOption", QRegularExpression::CaseInsensitiveOption },
   { "DotMatchesEverythingOption", QRegularExpression::DotMatchesEverythingOption },
   { "MultilineOption", QRegularExpression::MultilineOption },
   { "ExtendedPatternSyntaxOption", QRegularExpression::ExtendedPatternSyntaxOption },
   { "InvertedGreedinessOption", QRegularExpression::InvertedGreedinessOption },
   { "DontCaptureOption", QRegularExpression::DontCaptureOption },
   { "UseUnicodePropertiesOption", QRegularExpression::UseUnicodePropertiesOption },
   { "OptimizeOnFirstUsageOption", QRegularExpression::OptimizeOnFirstUsageOption },
   { "DontAutomaticallyOptimizeOption", QRegularExpression::DontAutomaticallyOptimizeOption },

};

QVector<PlastiQMetaObject*> PlastiQQRegularExpression::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQRegularExpression::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQRegularExpression::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QRegularExpression", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRegularExpression::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQRegularExpression::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QRegularExpression *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QRegularExpression(); break;
        case 1: o = new QRegularExpression(stack[1].s_string); break;
        case 2: o = new QRegularExpression(stack[1].s_string,
                    QRegularExpression::PatternOptions(stack[2].s_int64)); break;
        case 3: o = new QRegularExpression((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQRegularExpression *p = new PlastiQQRegularExpression();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRegularExpression *p = new PlastiQQRegularExpression();
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
        QRegularExpression *o = sc ? Q_NULLPTR : reinterpret_cast<QRegularExpression*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->captureCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { /* COPY OBJECT */
            QRegularExpressionMatchIterator *_r = new QRegularExpressionMatchIterator(o->globalMatch(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatchIterator";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QRegularExpressionMatchIterator *_r = new QRegularExpressionMatchIterator(o->globalMatch(stack[1].s_string,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatchIterator";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QRegularExpressionMatchIterator *_r = new QRegularExpressionMatchIterator(o->globalMatch(stack[1].s_string,
                    stack[2].s_int,
                    QRegularExpression::MatchType(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatchIterator";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QRegularExpressionMatchIterator *_r = new QRegularExpressionMatchIterator(o->globalMatch(stack[1].s_string,
                    stack[2].s_int,
                    QRegularExpression::MatchType(stack[3].s_int64),
                    QRegularExpression::MatchOptions(stack[4].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatchIterator";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QRegularExpressionMatchIterator *_r = new QRegularExpressionMatchIterator(o->globalMatch((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatchIterator";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { /* COPY OBJECT */
            QRegularExpressionMatchIterator *_r = new QRegularExpressionMatchIterator(o->globalMatch((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatchIterator";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QRegularExpressionMatchIterator *_r = new QRegularExpressionMatchIterator(o->globalMatch((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    QRegularExpression::MatchType(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatchIterator";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { /* COPY OBJECT */
            QRegularExpressionMatchIterator *_r = new QRegularExpressionMatchIterator(o->globalMatch((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    QRegularExpression::MatchType(stack[3].s_int64),
                    QRegularExpression::MatchOptions(stack[4].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatchIterator";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { /* COPY OBJECT */
            QRegularExpressionMatch *_r = new QRegularExpressionMatch(o->match(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatch";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { /* COPY OBJECT */
            QRegularExpressionMatch *_r = new QRegularExpressionMatch(o->match(stack[1].s_string,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatch";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 13: { /* COPY OBJECT */
            QRegularExpressionMatch *_r = new QRegularExpressionMatch(o->match(stack[1].s_string,
                    stack[2].s_int,
                    QRegularExpression::MatchType(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatch";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { /* COPY OBJECT */
            QRegularExpressionMatch *_r = new QRegularExpressionMatch(o->match(stack[1].s_string,
                    stack[2].s_int,
                    QRegularExpression::MatchType(stack[3].s_int64),
                    QRegularExpression::MatchOptions(stack[4].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatch";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { /* COPY OBJECT */
            QRegularExpressionMatch *_r = new QRegularExpressionMatch(o->match((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatch";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { /* COPY OBJECT */
            QRegularExpressionMatch *_r = new QRegularExpressionMatch(o->match((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatch";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { /* COPY OBJECT */
            QRegularExpressionMatch *_r = new QRegularExpressionMatch(o->match((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    QRegularExpression::MatchType(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatch";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { /* COPY OBJECT */
            QRegularExpressionMatch *_r = new QRegularExpressionMatch(o->match((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    QRegularExpression::MatchType(stack[3].s_int64),
                    QRegularExpression::MatchOptions(stack[4].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatch";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->namedCaptureGroups());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: o->optimize();
                stack[0].type = PlastiQ::Void; break;
        case 21: { QString _r = o->pattern();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 22: { int _r = o->patternErrorOffset();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 23: { qint64 _r = o->patternOptions(); // HACK for PatternOptions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 24: o->setPattern(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 25: o->setPatternOptions(QRegularExpression::PatternOptions(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 26: o->swap((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 27: { QString _r = sc ? QRegularExpression::escape(stack[1].s_string) : o->escape(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

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
        QRegularExpression *o = reinterpret_cast<QRegularExpression*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQRegularExpression::~PlastiQQRegularExpression() {
    QRegularExpression* o = reinterpret_cast<QRegularExpression*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

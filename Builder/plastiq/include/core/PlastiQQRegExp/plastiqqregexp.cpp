#include "plastiqmethod.h"
#include "plastiqqregexp.h"

#include <QRegExp> 
#include <QString>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQRegExp::plastiqConstructors = {
    { "QRegExp()", { "QRegExp", "", "QRegExp*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegExp(QString)", { "QRegExp", "QString&", "QRegExp*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegExp(QString,enum)", { "QRegExp", "QString&,Qt::CaseSensitivity", "QRegExp*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegExp(QString,enum,enum)", { "QRegExp", "QString&,Qt::CaseSensitivity,PatternSyntax", "QRegExp*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegExp(QRegExp&)", { "QRegExp", "QRegExp&", "QRegExp*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRegExp::plastiqMethods = {
    { "cap()", { "cap", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cap(int)", { "cap", "int", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "captureCount()", { "captureCount", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capturedTexts()", { "capturedTexts", "", "QStringList", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "caseSensitivity()", { "caseSensitivity", "", "Qt::CaseSensitivity", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exactMatch(QString)", { "exactMatch", "QString&", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexIn(QString)", { "indexIn", "QString&", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexIn(QString,int)", { "indexIn", "QString&,int", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexIn(QString,int,enum)", { "indexIn", "QString&,int,CaretMode", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMinimal()", { "isMinimal", "", "bool", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexIn(QString)", { "lastIndexIn", "QString&", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexIn(QString,int)", { "lastIndexIn", "QString&,int", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexIn(QString,int,enum)", { "lastIndexIn", "QString&,int,CaretMode", "int", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "matchedLength()", { "matchedLength", "", "int", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pattern()", { "pattern", "", "QString", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "patternSyntax()", { "patternSyntax", "", "PatternSyntax", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "int", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos(int)", { "pos", "int", "int", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCaseSensitivity(enum)", { "setCaseSensitivity", "Qt::CaseSensitivity", "void", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMinimal(bool)", { "setMinimal", "bool", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPattern(QString)", { "setPattern", "QString&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPatternSyntax(enum)", { "setPatternSyntax", "PatternSyntax", "void", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QRegExp&)", { "swap", "QRegExp&", "void", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "escape(QString)", { "escape", "QString&", "QString", 26, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRegExp::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQRegExp::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQRegExp::plastiqConstants = {

    /* QRegExp::CaretMode */
   { "CaretAtZero", QRegExp::CaretAtZero },
   { "CaretAtOffset", QRegExp::CaretAtOffset },
   { "CaretWontMatch", QRegExp::CaretWontMatch },

    /* QRegExp::PatternSyntax */
   { "RegExp", QRegExp::RegExp },
   { "Wildcard", QRegExp::Wildcard },
   { "FixedString", QRegExp::FixedString },
   { "RegExp2", QRegExp::RegExp2 },
   { "WildcardUnix", QRegExp::WildcardUnix },
   { "W3CXmlSchema11", QRegExp::W3CXmlSchema11 },

};

QVector<PlastiQMetaObject*> PlastiQQRegExp::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQRegExp::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQRegExp::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QRegExp", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRegExp::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQRegExp::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QRegExp *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QRegExp(); break;
        case 1: o = new QRegExp(stack[1].s_string); break;
        case 2: o = new QRegExp(stack[1].s_string,
                    Qt::CaseSensitivity(stack[2].s_int64)); break;
        case 3: o = new QRegExp(stack[1].s_string,
                    Qt::CaseSensitivity(stack[2].s_int64),
                    QRegExp::PatternSyntax(stack[3].s_int64)); break;
        case 4: o = new QRegExp((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQRegExp *p = new PlastiQQRegExp();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRegExp *p = new PlastiQQRegExp();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 27) {
            id -= 27;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QRegExp *o = sc ? Q_NULLPTR : reinterpret_cast<QRegExp*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->cap();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = o->cap(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { int _r = o->captureCount();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->capturedTexts());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { qint64 _r = o->caseSensitivity(); // HACK for Qt::CaseSensitivity 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { bool _r = o->exactMatch(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { int _r = o->indexIn(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { int _r = o->indexIn(stack[1].s_string,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { int _r = o->indexIn(stack[1].s_string,
                    stack[2].s_int,
                    QRegExp::CaretMode(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = o->isMinimal();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { int _r = o->lastIndexIn(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { int _r = o->lastIndexIn(stack[1].s_string,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: { int _r = o->lastIndexIn(stack[1].s_string,
                    stack[2].s_int,
                    QRegExp::CaretMode(stack[3].s_int64));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 16: { int _r = o->matchedLength();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 17: { QString _r = o->pattern();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 18: { qint64 _r = o->patternSyntax(); // HACK for PatternSyntax 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 19: { int _r = o->pos();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 20: { int _r = o->pos(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 21: o->setCaseSensitivity(Qt::CaseSensitivity(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 22: o->setMinimal(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 23: o->setPattern(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 24: o->setPatternSyntax(QRegExp::PatternSyntax(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 25: o->swap((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 26: { QString _r = sc ? QRegExp::escape(stack[1].s_string) : o->escape(stack[1].s_string);
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
        QRegExp *o = reinterpret_cast<QRegExp*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQRegExp::~PlastiQQRegExp() {
    QRegExp* o = reinterpret_cast<QRegExp*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

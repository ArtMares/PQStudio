#include "plastiqmethod.h"
#include "plastiqqregularexpressionmatch.h"

#include <QRegularExpressionMatch> 
#include <QString>
#include <QStringRef>
#include <QStringList>
#include <QRegularExpression>

QHash<QByteArray, PlastiQMethod> PlastiQQRegularExpressionMatch::plastiqConstructors = {
    { "QRegularExpressionMatch()", { "QRegularExpressionMatch", "", "QRegularExpressionMatch*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegularExpressionMatch(QRegularExpressionMatch&)", { "QRegularExpressionMatch", "QRegularExpressionMatch&", "QRegularExpressionMatch*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRegularExpressionMatch::plastiqMethods = {
    { "captured()", { "captured", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "captured(int)", { "captured", "int", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "captured(QString)", { "captured", "QString&", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capturedEnd()", { "capturedEnd", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capturedEnd(int)", { "capturedEnd", "int", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capturedEnd(QString)", { "capturedEnd", "QString&", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capturedLength()", { "capturedLength", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capturedLength(int)", { "capturedLength", "int", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capturedLength(QString)", { "capturedLength", "QString&", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capturedRef()", { "capturedRef", "", "QStringRef", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capturedRef(int)", { "capturedRef", "int", "QStringRef", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capturedRef(QString)", { "capturedRef", "QString&", "QStringRef", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capturedStart()", { "capturedStart", "", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capturedStart(int)", { "capturedStart", "int", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capturedStart(QString)", { "capturedStart", "QString&", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "capturedTexts()", { "capturedTexts", "", "QStringList", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasMatch()", { "hasMatch", "", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasPartialMatch()", { "hasPartialMatch", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastCapturedIndex()", { "lastCapturedIndex", "", "int", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "matchOptions()", { "matchOptions", "", "QRegularExpression::MatchOptions", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "matchType()", { "matchType", "", "QRegularExpression::MatchType", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "regularExpression()", { "regularExpression", "", "QRegularExpression", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QRegularExpressionMatch&)", { "swap", "QRegularExpressionMatch&", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRegularExpressionMatch::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQRegularExpressionMatch::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQRegularExpressionMatch::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQRegularExpressionMatch::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQRegularExpressionMatch::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQRegularExpressionMatch::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QRegularExpressionMatch", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRegularExpressionMatch::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQRegularExpressionMatch::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QRegularExpressionMatch *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QRegularExpressionMatch(); break;
        case 1: o = new QRegularExpressionMatch((*reinterpret_cast< QRegularExpressionMatch(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQRegularExpressionMatch *p = new PlastiQQRegularExpressionMatch();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRegularExpressionMatch *p = new PlastiQQRegularExpressionMatch();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 24) {
            id -= 24;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QRegularExpressionMatch *o = sc ? Q_NULLPTR : reinterpret_cast<QRegularExpressionMatch*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->captured();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = o->captured(stack[1].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { QString _r = o->captured(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { int _r = o->capturedEnd();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->capturedEnd(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { int _r = o->capturedEnd(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { int _r = o->capturedLength();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { int _r = o->capturedLength(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { int _r = o->capturedLength(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { /* COPY OBJECT */
            QStringRef *_r = new QStringRef(o->capturedRef());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringRef";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 10: { /* COPY OBJECT */
            QStringRef *_r = new QStringRef(o->capturedRef(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringRef";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QStringRef *_r = new QStringRef(o->capturedRef(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringRef";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { int _r = o->capturedStart();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 13: { int _r = o->capturedStart(stack[1].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { int _r = o->capturedStart(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->capturedTexts());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { bool _r = o->hasMatch();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = o->hasPartialMatch();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { int _r = o->lastCapturedIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 20: { qint64 _r = o->matchOptions(); // HACK for QRegularExpression::MatchOptions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 21: { qint64 _r = o->matchType(); // HACK for QRegularExpression::MatchType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 22: { /* COPY OBJECT */
            QRegularExpression *_r = new QRegularExpression(o->regularExpression());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpression";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 23: o->swap((*reinterpret_cast< QRegularExpressionMatch(*) >(stack[1].s_voidp)));
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
        QRegularExpressionMatch *o = reinterpret_cast<QRegularExpressionMatch*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQRegularExpressionMatch::~PlastiQQRegularExpressionMatch() {
    QRegularExpressionMatch* o = reinterpret_cast<QRegularExpressionMatch*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

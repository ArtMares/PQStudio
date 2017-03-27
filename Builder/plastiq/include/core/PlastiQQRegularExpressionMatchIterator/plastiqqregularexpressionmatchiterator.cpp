#include "plastiqmethod.h"
#include "plastiqqregularexpressionmatchiterator.h"

#include <QRegularExpressionMatchIterator> 
#include <QRegularExpressionMatch>
#include <QRegularExpression>

QHash<QByteArray, PlastiQMethod> PlastiQQRegularExpressionMatchIterator::plastiqConstructors = {
    { "QRegularExpressionMatchIterator()", { "QRegularExpressionMatchIterator", "", "QRegularExpressionMatchIterator*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QRegularExpressionMatchIterator(QRegularExpressionMatchIterator&)", { "QRegularExpressionMatchIterator", "QRegularExpressionMatchIterator&", "QRegularExpressionMatchIterator*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRegularExpressionMatchIterator::plastiqMethods = {
    { "hasNext()", { "hasNext", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "matchOptions()", { "matchOptions", "", "QRegularExpression::MatchOptions", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "matchType()", { "matchType", "", "QRegularExpression::MatchType", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "next()", { "next", "", "QRegularExpressionMatch", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "peekNext()", { "peekNext", "", "QRegularExpressionMatch", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "regularExpression()", { "regularExpression", "", "QRegularExpression", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QRegularExpressionMatchIterator&)", { "swap", "QRegularExpressionMatchIterator&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQRegularExpressionMatchIterator::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQRegularExpressionMatchIterator::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQRegularExpressionMatchIterator::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQRegularExpressionMatchIterator::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQRegularExpressionMatchIterator::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQRegularExpressionMatchIterator::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QRegularExpressionMatchIterator", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQRegularExpressionMatchIterator::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQRegularExpressionMatchIterator::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QRegularExpressionMatchIterator *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QRegularExpressionMatchIterator(); break;
        case 1: o = new QRegularExpressionMatchIterator((*reinterpret_cast< QRegularExpressionMatchIterator(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQRegularExpressionMatchIterator *p = new PlastiQQRegularExpressionMatchIterator();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQRegularExpressionMatchIterator *p = new PlastiQQRegularExpressionMatchIterator();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QRegularExpressionMatchIterator *o = sc ? Q_NULLPTR : reinterpret_cast<QRegularExpressionMatchIterator*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->hasNext();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { qint64 _r = o->matchOptions(); // HACK for QRegularExpression::MatchOptions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { qint64 _r = o->matchType(); // HACK for QRegularExpression::MatchType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { /* COPY OBJECT */
            QRegularExpressionMatch *_r = new QRegularExpressionMatch(o->next());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatch";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QRegularExpressionMatch *_r = new QRegularExpressionMatch(o->peekNext());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpressionMatch";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QRegularExpression *_r = new QRegularExpression(o->regularExpression());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRegularExpression";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: o->swap((*reinterpret_cast< QRegularExpressionMatchIterator(*) >(stack[1].s_voidp)));
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
        QRegularExpressionMatchIterator *o = reinterpret_cast<QRegularExpressionMatchIterator*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQRegularExpressionMatchIterator::~PlastiQQRegularExpressionMatchIterator() {
    QRegularExpressionMatchIterator* o = reinterpret_cast<QRegularExpressionMatchIterator*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

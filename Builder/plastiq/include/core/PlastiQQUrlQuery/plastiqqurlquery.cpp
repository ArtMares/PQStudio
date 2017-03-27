#include "plastiqmethod.h"
#include "plastiqqurlquery.h"

#include <QUrlQuery> 
#include <QStringList>
#include <QString>
#include <QChar>

QHash<QByteArray, PlastiQMethod> PlastiQQUrlQuery::plastiqConstructors = {
    { "QUrlQuery()", { "QUrlQuery", "", "QUrlQuery*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUrlQuery(QUrl&)", { "QUrlQuery", "QUrl&", "QUrlQuery*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUrlQuery(QString)", { "QUrlQuery", "QString&", "QUrlQuery*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QUrlQuery(QUrlQuery&)", { "QUrlQuery", "QUrlQuery&", "QUrlQuery*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUrlQuery::plastiqMethods = {
    { "addQueryItem(QString,QString)", { "addQueryItem", "QString&,QString&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "allQueryItemValues(QString)", { "allQueryItemValues", "QString&", "QStringList", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "allQueryItemValues(QString,enum)", { "allQueryItemValues", "QString&,QUrl::ComponentFormattingOptions", "QStringList", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hasQueryItem(QString)", { "hasQueryItem", "QString&", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "query()", { "query", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "query(enum)", { "query", "QUrl::ComponentFormattingOptions", "QString", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "queryItemValue(QString)", { "queryItemValue", "QString&", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "queryItemValue(QString,enum)", { "queryItemValue", "QString&,QUrl::ComponentFormattingOptions", "QString", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "queryPairDelimiter()", { "queryPairDelimiter", "", "QChar", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "queryValueDelimiter()", { "queryValueDelimiter", "", "QChar", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeAllQueryItems(QString)", { "removeAllQueryItems", "QString&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeQueryItem(QString)", { "removeQueryItem", "QString&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setQuery(QString)", { "setQuery", "QString&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setQueryDelimiters(QChar,QChar)", { "setQueryDelimiters", "QChar,QChar", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setQueryItems(const QList<QPair<QString,QString> >&)", { "setQueryItems", "QList<QPair<QString,QString> >&", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QUrlQuery&)", { "swap", "QUrlQuery&", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString()", { "toString", "", "QString", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toString(enum)", { "toString", "QUrl::ComponentFormattingOptions", "QString", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultQueryPairDelimiter()", { "defaultQueryPairDelimiter", "", "QChar", 20, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "defaultQueryValueDelimiter()", { "defaultQueryValueDelimiter", "", "QChar", 21, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQUrlQuery::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQUrlQuery::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQUrlQuery::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQUrlQuery::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQUrlQuery::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQUrlQuery::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QUrlQuery", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQUrlQuery::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQUrlQuery::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QUrlQuery *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QUrlQuery(); break;
        case 1: o = new QUrlQuery((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp))); break;
        case 2: o = new QUrlQuery(stack[1].s_string); break;
        case 3: o = new QUrlQuery((*reinterpret_cast< QUrlQuery(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQUrlQuery *p = new PlastiQQUrlQuery();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQUrlQuery *p = new PlastiQQUrlQuery();
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
        QUrlQuery *o = sc ? Q_NULLPTR : reinterpret_cast<QUrlQuery*>(object->plastiq_data());

        switch(id) {
        case 0: o->addQueryItem(stack[1].s_string,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 1: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->allQueryItemValues(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->allQueryItemValues(stack[1].s_string,
                    QUrl::ComponentFormattingOptions(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 4: { bool _r = o->hasQueryItem(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { QString _r = o->query();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { QString _r = o->query(QUrl::ComponentFormattingOptions(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 8: { QString _r = o->queryItemValue(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { QString _r = o->queryItemValue(stack[1].s_string,
                    QUrl::ComponentFormattingOptions(stack[2].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: { /* COPY OBJECT */
            QChar *_r = new QChar(o->queryPairDelimiter());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QChar *_r = new QChar(o->queryValueDelimiter());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: o->removeAllQueryItems(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->removeQueryItem(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setQuery(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setQueryDelimiters((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QChar(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 16: /* o->setQueryItems(UNSUPPORTED_TYPE_const QList<QPair<QString,
                    (*reinterpret_cast< QString>>(*) >(stack[2].s_voidp))) | ret: `void` */ break;
        case 17: o->swap((*reinterpret_cast< QUrlQuery(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 18: { QString _r = o->toString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 19: { QString _r = o->toString(QUrl::ComponentFormattingOptions(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 20: { /* COPY OBJECT */
            QChar *_r = sc ? new QChar(QUrlQuery::defaultQueryPairDelimiter()) : new QChar(o->defaultQueryPairDelimiter());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: { /* COPY OBJECT */
            QChar *_r = sc ? new QChar(QUrlQuery::defaultQueryValueDelimiter()) : new QChar(o->defaultQueryValueDelimiter());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QUrlQuery *o = reinterpret_cast<QUrlQuery*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQUrlQuery::~PlastiQQUrlQuery() {
    QUrlQuery* o = reinterpret_cast<QUrlQuery*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

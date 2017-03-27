#include "plastiqmethod.h"
#include "plastiqqnetworkproxyquery.h"

#include <QNetworkProxyQuery> 
#include <QNetworkConfiguration>
#include <QString>
#include <QUrl>

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkProxyQuery::plastiqConstructors = {
    { "QNetworkProxyQuery()", { "QNetworkProxyQuery", "", "QNetworkProxyQuery*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxyQuery(QUrl&)", { "QNetworkProxyQuery", "QUrl&", "QNetworkProxyQuery*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxyQuery(QUrl&,enum)", { "QNetworkProxyQuery", "QUrl&,QueryType", "QNetworkProxyQuery*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxyQuery(QString,int)", { "QNetworkProxyQuery", "QString&,int", "QNetworkProxyQuery*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxyQuery(QString,int,QString)", { "QNetworkProxyQuery", "QString&,int,QString&", "QNetworkProxyQuery*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxyQuery(QString,int,QString,enum)", { "QNetworkProxyQuery", "QString&,int,QString&,QueryType", "QNetworkProxyQuery*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxyQuery(int)", { "QNetworkProxyQuery", "quint16", "QNetworkProxyQuery*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxyQuery(int,QString)", { "QNetworkProxyQuery", "quint16,QString&", "QNetworkProxyQuery*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxyQuery(int,QString,enum)", { "QNetworkProxyQuery", "quint16,QString&,QueryType", "QNetworkProxyQuery*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxyQuery(QNetworkConfiguration&,QUrl&)", { "QNetworkProxyQuery", "QNetworkConfiguration&,QUrl&", "QNetworkProxyQuery*", 9, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxyQuery(QNetworkConfiguration&,QUrl&,enum)", { "QNetworkProxyQuery", "QNetworkConfiguration&,QUrl&,QueryType", "QNetworkProxyQuery*", 10, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxyQuery(QNetworkConfiguration&,QString,int)", { "QNetworkProxyQuery", "QNetworkConfiguration&,QString&,int", "QNetworkProxyQuery*", 11, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxyQuery(QNetworkConfiguration&,QString,int,QString)", { "QNetworkProxyQuery", "QNetworkConfiguration&,QString&,int,QString&", "QNetworkProxyQuery*", 12, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxyQuery(QNetworkConfiguration&,QString,int,QString,enum)", { "QNetworkProxyQuery", "QNetworkConfiguration&,QString&,int,QString&,QueryType", "QNetworkProxyQuery*", 13, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxyQuery(QNetworkConfiguration&,int)", { "QNetworkProxyQuery", "QNetworkConfiguration&,quint16", "QNetworkProxyQuery*", 14, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxyQuery(QNetworkConfiguration&,int,QString)", { "QNetworkProxyQuery", "QNetworkConfiguration&,quint16,QString&", "QNetworkProxyQuery*", 15, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxyQuery(QNetworkConfiguration&,int,QString,enum)", { "QNetworkProxyQuery", "QNetworkConfiguration&,quint16,QString&,QueryType", "QNetworkProxyQuery*", 16, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkProxyQuery(QNetworkProxyQuery&)", { "QNetworkProxyQuery", "QNetworkProxyQuery&", "QNetworkProxyQuery*", 17, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkProxyQuery::plastiqMethods = {
    { "localPort()", { "localPort", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "networkConfiguration()", { "networkConfiguration", "", "QNetworkConfiguration", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "peerHostName()", { "peerHostName", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "peerPort()", { "peerPort", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "protocolTag()", { "protocolTag", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "queryType()", { "queryType", "", "QueryType", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLocalPort(int)", { "setLocalPort", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNetworkConfiguration(QNetworkConfiguration&)", { "setNetworkConfiguration", "QNetworkConfiguration&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPeerHostName(QString)", { "setPeerHostName", "QString&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPeerPort(int)", { "setPeerPort", "int", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setProtocolTag(QString)", { "setProtocolTag", "QString&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setQueryType(enum)", { "setQueryType", "QueryType", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setUrl(QUrl&)", { "setUrl", "QUrl&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QNetworkProxyQuery&)", { "swap", "QNetworkProxyQuery&", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "url()", { "url", "", "QUrl", 14, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkProxyQuery::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQNetworkProxyQuery::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQNetworkProxyQuery::plastiqConstants = {

    /* QNetworkProxyQuery::QueryType */
   { "TcpSocket", QNetworkProxyQuery::TcpSocket },
   { "UdpSocket", QNetworkProxyQuery::UdpSocket },
   { "SctpSocket", QNetworkProxyQuery::SctpSocket },
   { "TcpServer", QNetworkProxyQuery::TcpServer },
   { "UrlRequest", QNetworkProxyQuery::UrlRequest },
   { "SctpServer", QNetworkProxyQuery::SctpServer },

};

QVector<PlastiQMetaObject*> PlastiQQNetworkProxyQuery::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQNetworkProxyQuery::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQNetworkProxyQuery::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QNetworkProxyQuery", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQNetworkProxyQuery::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQNetworkProxyQuery::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QNetworkProxyQuery *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QNetworkProxyQuery(); break;
        case 1: o = new QNetworkProxyQuery((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp))); break;
        case 2: o = new QNetworkProxyQuery((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)),
                    QNetworkProxyQuery::QueryType(stack[2].s_int64)); break;
        case 3: o = new QNetworkProxyQuery(stack[1].s_string,
                    stack[2].s_int); break;
        case 4: o = new QNetworkProxyQuery(stack[1].s_string,
                    stack[2].s_int,
                    stack[3].s_string); break;
        case 5: o = new QNetworkProxyQuery(stack[1].s_string,
                    stack[2].s_int,
                    stack[3].s_string,
                    QNetworkProxyQuery::QueryType(stack[4].s_int64)); break;
        case 6: o = new QNetworkProxyQuery(stack[1].s_int); break;
        case 7: o = new QNetworkProxyQuery(stack[1].s_int,
                    stack[2].s_string); break;
        case 8: o = new QNetworkProxyQuery(stack[1].s_int,
                    stack[2].s_string,
                    QNetworkProxyQuery::QueryType(stack[3].s_int64)); break;
        case 9: o = new QNetworkProxyQuery((*reinterpret_cast< QNetworkConfiguration(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QUrl(*) >(stack[2].s_voidp))); break;
        case 10: o = new QNetworkProxyQuery((*reinterpret_cast< QNetworkConfiguration(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QUrl(*) >(stack[2].s_voidp)),
                    QNetworkProxyQuery::QueryType(stack[3].s_int64)); break;
        case 11: o = new QNetworkProxyQuery((*reinterpret_cast< QNetworkConfiguration(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    stack[3].s_int); break;
        case 12: o = new QNetworkProxyQuery((*reinterpret_cast< QNetworkConfiguration(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    stack[3].s_int,
                    stack[4].s_string); break;
        case 13: o = new QNetworkProxyQuery((*reinterpret_cast< QNetworkConfiguration(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    stack[3].s_int,
                    stack[4].s_string,
                    QNetworkProxyQuery::QueryType(stack[5].s_int64)); break;
        case 14: o = new QNetworkProxyQuery((*reinterpret_cast< QNetworkConfiguration(*) >(stack[1].s_voidp)),
                    stack[2].s_int); break;
        case 15: o = new QNetworkProxyQuery((*reinterpret_cast< QNetworkConfiguration(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_string); break;
        case 16: o = new QNetworkProxyQuery((*reinterpret_cast< QNetworkConfiguration(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_string,
                    QNetworkProxyQuery::QueryType(stack[4].s_int64)); break;
        case 17: o = new QNetworkProxyQuery((*reinterpret_cast< QNetworkProxyQuery(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQNetworkProxyQuery *p = new PlastiQQNetworkProxyQuery();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQNetworkProxyQuery *p = new PlastiQQNetworkProxyQuery();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 15) {
            id -= 15;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QNetworkProxyQuery *o = sc ? Q_NULLPTR : reinterpret_cast<QNetworkProxyQuery*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->localPort();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { /* COPY OBJECT */
            QNetworkConfiguration *_r = new QNetworkConfiguration(o->networkConfiguration());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QNetworkConfiguration";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { QString _r = o->peerHostName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { int _r = o->peerPort();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { QString _r = o->protocolTag();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { qint64 _r = o->queryType(); // HACK for QueryType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: o->setLocalPort(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setNetworkConfiguration((*reinterpret_cast< QNetworkConfiguration(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setPeerHostName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setPeerPort(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setProtocolTag(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setQueryType(QNetworkProxyQuery::QueryType(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setUrl((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 13: o->swap((*reinterpret_cast< QNetworkProxyQuery(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 14: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->url());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
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
        QNetworkProxyQuery *o = reinterpret_cast<QNetworkProxyQuery*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQNetworkProxyQuery::~PlastiQQNetworkProxyQuery() {
    QNetworkProxyQuery* o = reinterpret_cast<QNetworkProxyQuery*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

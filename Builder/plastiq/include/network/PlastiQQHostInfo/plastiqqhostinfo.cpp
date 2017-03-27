#include "plastiqmethod.h"
#include "plastiqqhostinfo.h"

#include <QHostInfo> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQHostInfo::plastiqConstructors = {
    { "QHostInfo()", { "QHostInfo", "", "QHostInfo*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHostInfo(int)", { "QHostInfo", "int", "QHostInfo*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QHostInfo(QHostInfo&)", { "QHostInfo", "QHostInfo&", "QHostInfo*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHostInfo::plastiqMethods = {
    { "error()", { "error", "", "HostInfoError", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "errorString()", { "errorString", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hostName()", { "hostName", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lookupId()", { "lookupId", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAddresses(QList<QHostAddress>&)", { "setAddresses", "QList<QHostAddress>&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setError(enum)", { "setError", "HostInfoError", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setErrorString(QString)", { "setErrorString", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHostName(QString)", { "setHostName", "QString&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLookupId(int)", { "setLookupId", "int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "abortHostLookup(int)", { "abortHostLookup", "int", "void", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromName(QString)", { "fromName", "QString&", "QHostInfo", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "localDomainName()", { "localDomainName", "", "QString", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "localHostName()", { "localHostName", "", "QString", 12, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "lookupHost(QString,QObject*,const char*)", { "lookupHost", "QString&,QObject*,char*", "int", 13, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQHostInfo::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQHostInfo::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQHostInfo::plastiqConstants = {

    /* QHostInfo::HostInfoError */
   { "NoError", QHostInfo::NoError },
   { "HostNotFound", QHostInfo::HostNotFound },
   { "UnknownError", QHostInfo::UnknownError },

};

QVector<PlastiQMetaObject*> PlastiQQHostInfo::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQHostInfo::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQHostInfo::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QHostInfo", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQHostInfo::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQHostInfo::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QHostInfo *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QHostInfo(); break;
        case 1: o = new QHostInfo(stack[1].s_int); break;
        case 2: o = new QHostInfo((*reinterpret_cast< QHostInfo(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQHostInfo *p = new PlastiQQHostInfo();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQHostInfo *p = new PlastiQQHostInfo();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 14) {
            id -= 14;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QHostInfo *o = sc ? Q_NULLPTR : reinterpret_cast<QHostInfo*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->error(); // HACK for HostInfoError 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { QString _r = o->hostName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { int _r = o->lookupId();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: o->setAddresses((*reinterpret_cast< QList<QHostAddress>(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setError(QHostInfo::HostInfoError(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setErrorString(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setHostName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setLookupId(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: if(sc) { QHostInfo::abortHostLookup(stack[1].s_int); } else { o->abortHostLookup(stack[1].s_int); }
                stack[0].type = PlastiQ::Void; break;
        case 10: { /* COPY OBJECT */
            QHostInfo *_r = sc ? new QHostInfo(QHostInfo::fromName(stack[1].s_string)) : new QHostInfo(o->fromName(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QHostInfo";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { QString _r = sc ? QHostInfo::localDomainName() : o->localDomainName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 12: { QString _r = sc ? QHostInfo::localHostName() : o->localHostName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 13: { int _r = sc ? QHostInfo::lookupHost(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp)) : o->lookupHost(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

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
        QHostInfo *o = reinterpret_cast<QHostInfo*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQHostInfo::~PlastiQQHostInfo() {
    QHostInfo* o = reinterpret_cast<QHostInfo*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

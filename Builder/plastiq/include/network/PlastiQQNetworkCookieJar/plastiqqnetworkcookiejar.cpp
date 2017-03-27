#include "plastiqmethod.h"
#include "plastiqqnetworkcookiejar.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QNetworkCookieJar> 
#include <QNetworkCookie>
#include <QUrl>

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkCookieJar::plastiqConstructors = {
    { "QNetworkCookieJar()", { "QNetworkCookieJar", "", "QNetworkCookieJar*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QNetworkCookieJar(QObject*)", { "QNetworkCookieJar", "QObject*", "QNetworkCookieJar*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkCookieJar::plastiqMethods = {
    { "deleteCookie(QNetworkCookie&)", { "deleteCookie", "QNetworkCookie&", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insertCookie(QNetworkCookie&)", { "insertCookie", "QNetworkCookie&", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCookiesFromUrl(QList<QNetworkCookie>&,QUrl&)", { "setCookiesFromUrl", "QList<QNetworkCookie>&,QUrl&", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "updateCookie(QNetworkCookie&)", { "updateCookie", "QNetworkCookie&", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAllCookies(QList<QNetworkCookie>&)", { "setAllCookies", "QList<QNetworkCookie>&", "void", 4, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "validateCookie(QNetworkCookie&,QUrl&)", { "validateCookie", "QNetworkCookie&,QUrl&", "bool", 5, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQNetworkCookieJar::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQNetworkCookieJar::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQNetworkCookieJar::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQNetworkCookieJar::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQNetworkCookieJar::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQNetworkCookieJar::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QNetworkCookieJar", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQNetworkCookieJar::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQNetworkCookieJarWrapper : public QNetworkCookieJar {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQNetworkCookieJarWrapper(QObject *parent = Q_NULLPTR)
         : QNetworkCookieJar(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    bool deleteCookie(const QNetworkCookie &cookie) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool deleteCookie(const QNetworkCookie&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QNetworkCookie(cookie) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QNetworkCookie");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QNetworkCookieJar::deleteCookie(cookie);
    }

    bool PlastiQParentCall_deleteCookie(const QNetworkCookie &cookie) {
        return QNetworkCookieJar::deleteCookie(cookie);
    }

    bool insertCookie(const QNetworkCookie &cookie) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool insertCookie(const QNetworkCookie&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QNetworkCookie(cookie) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QNetworkCookie");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QNetworkCookieJar::insertCookie(cookie);
    }

    bool PlastiQParentCall_insertCookie(const QNetworkCookie &cookie) {
        return QNetworkCookieJar::insertCookie(cookie);
    }

    bool updateCookie(const QNetworkCookie &cookie) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool updateCookie(const QNetworkCookie&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = new QNetworkCookie(cookie) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QNetworkCookie");
            stack[1].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QNetworkCookieJar::updateCookie(cookie);
    }

    bool PlastiQParentCall_updateCookie(const QNetworkCookie &cookie) {
        return QNetworkCookieJar::updateCookie(cookie);
    }

    bool validateCookie(const QNetworkCookie &cookie, const QUrl &url) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool validateCookie(const QNetworkCookie&,const QUrl&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = new QNetworkCookie(cookie) /* COPY OBJECT */;
            stack[1].name = QByteArrayLiteral("QNetworkCookie");
            stack[1].type = PlastiQ::QtObject;
            stack[2].s_voidp = new QUrl(url) /* COPY OBJECT */;
            stack[2].name = QByteArrayLiteral("QUrl");
            stack[2].type = PlastiQ::QtObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QNetworkCookieJar::validateCookie(cookie,url);
    }

    bool PlastiQParentCall_validateCookie(const QNetworkCookie &cookie, const QUrl &url) const {
        return QNetworkCookieJar::validateCookie(cookie,url);
    }

    bool event(QEvent *e) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool event(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(e);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QNetworkCookieJar::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QNetworkCookieJar::event(e);
    }

    bool eventFilter(QObject *watched, QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool eventFilter(QObject*,QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[3];
            stack[1].s_voidp = reinterpret_cast<void*>(watched);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(event);
            stack[2].name = QByteArrayLiteral("QEvent");
            stack[2].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QNetworkCookieJar::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QNetworkCookieJar::eventFilter(watched,event);
    }

    const QMetaObject* metaObject() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("const QMetaObject* metaObject()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMetaObject* _r = reinterpret_cast<QMetaObject*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QNetworkCookieJar::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QNetworkCookieJar::metaObject();
    }

    void childEvent(QChildEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void childEvent(QChildEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QChildEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QNetworkCookieJar::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QNetworkCookieJar::childEvent(event);
    }

    void connectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void connectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QNetworkCookieJar::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QNetworkCookieJar::connectNotify(signal);
    }

    void customEvent(QEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void customEvent(QEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QNetworkCookieJar::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QNetworkCookieJar::customEvent(event);
    }

    void disconnectNotify(const QMetaMethod &signal) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void disconnectNotify(const QMetaMethod&)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(&const_cast<QMetaMethod&>(signal));
            stack[1].name = QByteArrayLiteral("QMetaMethod");
            stack[1].type = PlastiQ::QObject;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QNetworkCookieJar::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QNetworkCookieJar::disconnectNotify(signal);
    }

    void timerEvent(QTimerEvent *event) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void timerEvent(QTimerEvent*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(event);
            stack[1].name = QByteArrayLiteral("QTimerEvent");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QNetworkCookieJar::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QNetworkCookieJar::timerEvent(event);
    }

};

void PlastiQQNetworkCookieJar::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQNetworkCookieJarWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQNetworkCookieJarWrapper(); break;
        case 1: o = new PlastiQQNetworkCookieJarWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQNetworkCookieJar *p = new PlastiQQNetworkCookieJar();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQNetworkCookieJar *p = new PlastiQQNetworkCookieJar();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QNetworkCookieJar *o = sc ? Q_NULLPTR : reinterpret_cast<QNetworkCookieJar*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r;
                if (isWrapper) _r = ((PlastiQQNetworkCookieJarWrapper*)o)->PlastiQParentCall_deleteCookie((*reinterpret_cast< QNetworkCookie(*) >(stack[1].s_voidp)));
                else _r = o->deleteCookie((*reinterpret_cast< QNetworkCookie(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r;
                if (isWrapper) _r = ((PlastiQQNetworkCookieJarWrapper*)o)->PlastiQParentCall_insertCookie((*reinterpret_cast< QNetworkCookie(*) >(stack[1].s_voidp)));
                else _r = o->insertCookie((*reinterpret_cast< QNetworkCookie(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->setCookiesFromUrl((*reinterpret_cast< QList<QNetworkCookie>(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QUrl(*) >(stack[2].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r;
                if (isWrapper) _r = ((PlastiQQNetworkCookieJarWrapper*)o)->PlastiQParentCall_updateCookie((*reinterpret_cast< QNetworkCookie(*) >(stack[1].s_voidp)));
                else _r = o->updateCookie((*reinterpret_cast< QNetworkCookie(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 5: { bool _r;
                if (isWrapper) _r = ((PlastiQQNetworkCookieJarWrapper*)o)->PlastiQParentCall_validateCookie((*reinterpret_cast< QNetworkCookie(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QUrl(*) >(stack[2].s_voidp)));
                else { stack[0].type = PlastiQ::Error; return; }
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QNetworkCookieJar *o = reinterpret_cast<QNetworkCookieJar*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QNetworkCookieJar *o = reinterpret_cast<QNetworkCookieJar*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QNetworkCookieJar *o = reinterpret_cast<QNetworkCookieJar*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QNetworkCookieJar *o = reinterpret_cast<QNetworkCookieJar*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQNetworkCookieJar::~PlastiQQNetworkCookieJar() {
    QNetworkCookieJar* o = reinterpret_cast<QNetworkCookieJar*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

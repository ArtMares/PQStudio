#include "plastiqmethod.h"
#include "plastiqqmediaobject.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QMediaObject> 
#include <QStringList>
#include <QObject>
#include <QVariant>
#include <QMediaService>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQMediaObject::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaObject::plastiqMethods = {
    { "availability()", { "availability", "", "QMultimedia::AvailabilityStatus", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "availableMetaData()", { "availableMetaData", "", "QStringList", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bind(QObject*)", { "bind", "QObject*", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAvailable()", { "isAvailable", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isMetaDataAvailable()", { "isMetaDataAvailable", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "metaData(QString)", { "metaData", "QString&", "QVariant", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "notifyInterval()", { "notifyInterval", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "service()", { "service", "", "QMediaService*", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNotifyInterval(int)", { "setNotifyInterval", "int", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unbind(QObject*)", { "unbind", "QObject*", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addPropertyWatch(QByteArray const&)", { "addPropertyWatch", "QByteArray&", "void", 10, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "removePropertyWatch(QByteArray const&)", { "removePropertyWatch", "QByteArray&", "void", 11, PlastiQMethod::Protected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaObject::plastiqSignals = {
    { "availabilityChanged(bool)", { "availabilityChanged", "bool", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "availabilityChanged(QMultimedia::AvailabilityStatus)", { "availabilityChanged", "QMultimedia::AvailabilityStatus", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "metaDataAvailableChanged(bool)", { "metaDataAvailableChanged", "bool", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "metaDataChanged()", { "metaDataChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "metaDataChanged(QString,QVariant)", { "metaDataChanged", "QString&,QVariant&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "notifyIntervalChanged(int)", { "notifyIntervalChanged", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaObject::plastiqProperties = {
    { "notifyInterval", { "notifyInterval", "int", "setNotifyInterval", "notifyInterval" } },

};

QHash<QByteArray, long> PlastiQQMediaObject::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMediaObject::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQMediaObject::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQMediaObject::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QMediaObject", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaObject::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQMediaObjectWrapper : public QMediaObject {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    bool bind(QObject *object) override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool bind(QObject*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(object);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QMediaObject::bind(object);
    }

    bool PlastiQParentCall_bind(QObject *object) {
        return QMediaObject::bind(object);
    }

    bool isAvailable() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool isAvailable()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QMediaObject::isAvailable();
    }

    bool PlastiQParentCall_isAvailable() const {
        return QMediaObject::isAvailable();
    }

    QMediaService* service() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QMediaService* service()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QMediaService* _r = reinterpret_cast<QMediaService*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QMediaObject::service();
    }

    QMediaService* PlastiQParentCall_service() const {
        return QMediaObject::service();
    }

    void unbind(QObject *object) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void unbind(QObject*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(object);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QMediaObject::unbind(object);
    }

    void PlastiQParentCall_unbind(QObject *object) {
        return QMediaObject::unbind(object);
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
        else return QMediaObject::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QMediaObject::event(e);
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
        else return QMediaObject::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QMediaObject::eventFilter(watched,event);
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
        else return QMediaObject::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QMediaObject::metaObject();
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
        else return QMediaObject::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QMediaObject::childEvent(event);
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
        else return QMediaObject::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QMediaObject::connectNotify(signal);
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
        else return QMediaObject::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QMediaObject::customEvent(event);
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
        else return QMediaObject::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QMediaObject::disconnectNotify(signal);
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
        else return QMediaObject::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QMediaObject::timerEvent(event);
    }

};

void PlastiQQMediaObject::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQMediaObjectWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQMediaObject *p = new PlastiQQMediaObject();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaObject *p = new PlastiQQMediaObject();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMediaObject *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaObject*>(object->plastiq_data());

        switch(id) {
        case 0: /* o->availability() | ret: `QMultimedia::AvailabilityStatus` */ break;
        case 1: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->availableMetaData());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { bool _r;
                if (isWrapper) _r = ((PlastiQQMediaObjectWrapper*)o)->PlastiQParentCall_bind(reinterpret_cast<QObject*>(stack[1].s_voidp));
                else _r = o->bind(reinterpret_cast<QObject*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r;
                if (isWrapper) _r = ((PlastiQQMediaObjectWrapper*)o)->PlastiQParentCall_isAvailable();
                else _r = o->isAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->isMetaDataAvailable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->metaData(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { int _r = o->notifyInterval();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { QMediaService* _r;
                if (isWrapper) _r = ((PlastiQQMediaObjectWrapper*)o)->PlastiQParentCall_service();
                else _r = o->service();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMediaService"; } break;
        case 8: o->setNotifyInterval(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 9: if (isWrapper) ((PlastiQQMediaObjectWrapper*)o)->PlastiQParentCall_unbind(reinterpret_cast<QObject*>(stack[1].s_voidp));
                else o->unbind(reinterpret_cast<QObject*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 10: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;
        case 11: stack[0].type = PlastiQ::Error; break;                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 6) {
            id -= 6;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QMediaObject *o = reinterpret_cast<QMediaObject*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, static_cast<void (QMediaObject::*)(bool)>(&QMediaObject::availabilityChanged),
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "availabilityChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, static_cast<void (QMediaObject::*)(QMultimedia::AvailabilityStatus)>(&QMediaObject::availabilityChanged),
            [=](QMultimedia::AvailabilityStatus arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(&arg0);
                    cstack[0].type = PlastiQ::QObject; cstack[0].name = "QMultimedia::AvailabilityStatus";
                    cstack[0].isRef = true;
                PlastiQ_activate(sender, "availabilityChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 2: QObject::connect(o, &QMediaObject::metaDataAvailableChanged,
            [=](bool arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_bool = arg0;
                    cstack[0].type = PlastiQ::Bool; cstack[0].name = "bool";
                PlastiQ_activate(sender, "metaDataAvailableChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 3: QObject::connect(o, static_cast<void (QMediaObject::*)()>(&QMediaObject::metaDataChanged),
            [=]() {
                PMOGStack cstack = new PMOGStackItem[0];
                PlastiQ_activate(sender, "metaDataChanged", receiver, slot.constData(), 0, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 4: QObject::connect(o, static_cast<void (QMediaObject::*)(const QString&,const QVariant&)>(&QMediaObject::metaDataChanged),
            [=](const QString& arg0, const QVariant& arg1) {
                PMOGStack cstack = new PMOGStackItem[2];
                    cstack[0].s_string = const_cast<QString&>(arg0);
                    cstack[0].type = PlastiQ::String; cstack[0].name = "QString";
                    cstack[1].s_voidp = new QVariant(arg1) /* COPY OBJECT */;
                    cstack[1].type = PlastiQ::QtObject; cstack[1].name = "QVariant";
                PlastiQ_activate(sender, "metaDataChanged", receiver, slot.constData(), 2, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 5: QObject::connect(o, &QMediaObject::notifyIntervalChanged,
            [=](int arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int = arg0;
                    cstack[0].type = PlastiQ::Int; cstack[0].name = "int";
                PlastiQ_activate(sender, "notifyIntervalChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QMediaObject *o = reinterpret_cast<QMediaObject*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QMediaObject *o = reinterpret_cast<QMediaObject*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QMediaObject *o = reinterpret_cast<QMediaObject*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQMediaObject::~PlastiQQMediaObject() {
    QMediaObject* o = reinterpret_cast<QMediaObject*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

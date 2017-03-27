#include "plastiqmethod.h"
#include "plastiqqtranslator.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QTranslator> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQTranslator::plastiqConstructors = {
    { "QTranslator()", { "QTranslator", "", "QTranslator*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTranslator(QObject*)", { "QTranslator", "QObject*", "QTranslator*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTranslator::plastiqMethods = {
    { "isEmpty()", { "isEmpty", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QString)", { "load", "QString&", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QString,QString)", { "load", "QString&,QString&", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QString,QString,QString)", { "load", "QString&,QString&,QString&", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QString,QString,QString,QString)", { "load", "QString&,QString&,QString&,QString&", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QLocale&,QString)", { "load", "QLocale&,QString&", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QLocale&,QString,QString)", { "load", "QLocale&,QString&,QString&", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QLocale&,QString,QString,QString)", { "load", "QLocale&,QString&,QString&,QString&", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(QLocale&,QString,QString,QString,QString)", { "load", "QLocale&,QString&,QString&,QString&,QString&", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(const uchar*,int)", { "load", "uchar*,int", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load(const uchar*,int,QString)", { "load", "uchar*,int,QString&", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(const char*,const char*)", { "translate", "char*,char*", "QString", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(const char*,const char*,const char*)", { "translate", "char*,char*,char*", "QString", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translate(const char*,const char*,const char*,int)", { "translate", "char*,char*,char*,int", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTranslator::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTranslator::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTranslator::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTranslator::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTranslator::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQTranslator::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QTranslator", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTranslator::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQTranslatorWrapper : public QTranslator {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;

    explicit PlastiQQTranslatorWrapper(QObject *parent = Q_NULLPTR)
         : QTranslator(parent),
          virtualMethodList(Q_NULLPTR), pqObjectWPtr(Q_NULLPTR) {}


    bool isEmpty() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("bool isEmpty()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            bool _r = stack[0].s_bool;
            delete [] stack;
            return _r;
        }
        else return QTranslator::isEmpty();
    }

    bool PlastiQParentCall_isEmpty() const {
        return QTranslator::isEmpty();
    }

    QString translate(const char *context, const char *sourceText, const char *disambiguation = Q_NULLPTR, int n = -1) const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QString translate(const char*,const char*,const char*=,int=)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[5];
            stack[1].s_voidp = reinterpret_cast<void*>(const_cast<char*>(context));
            stack[1].name = QByteArrayLiteral("char");
            stack[1].type = PlastiQ::ObjectStar;
            stack[2].s_voidp = reinterpret_cast<void*>(const_cast<char*>(sourceText));
            stack[2].name = QByteArrayLiteral("char");
            stack[2].type = PlastiQ::ObjectStar;
            stack[3].s_voidp = reinterpret_cast<void*>(const_cast<char*>(disambiguation));
            stack[3].name = QByteArrayLiteral("char");
            stack[3].type = PlastiQ::ObjectStar;
            stack[4].s_int = n;
            stack[4].name = QByteArrayLiteral("int");
            stack[4].type = PlastiQ::Int;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QString _r = stack[0].s_string;
            delete [] stack;
            return _r;
        }
        else return QTranslator::translate(context,sourceText,disambiguation,n);
    }

    QString PlastiQParentCall_translate(const char *context, const char *sourceText, const char *disambiguation = Q_NULLPTR, int n = -1) const {
        return QTranslator::translate(context,sourceText,disambiguation,n);
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
        else return QTranslator::event(e);
    }

    bool PlastiQParentCall_event(QEvent *e) {
        return QTranslator::event(e);
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
        else return QTranslator::eventFilter(watched,event);
    }

    bool PlastiQParentCall_eventFilter(QObject *watched, QEvent *event) {
        return QTranslator::eventFilter(watched,event);
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
        else return QTranslator::metaObject();
    }

    const QMetaObject* PlastiQParentCall_metaObject() const {
        return QTranslator::metaObject();
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
        else return QTranslator::childEvent(event);
    }

    void PlastiQParentCall_childEvent(QChildEvent *event) {
        return QTranslator::childEvent(event);
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
        else return QTranslator::connectNotify(signal);
    }

    void PlastiQParentCall_connectNotify(const QMetaMethod &signal) {
        return QTranslator::connectNotify(signal);
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
        else return QTranslator::customEvent(event);
    }

    void PlastiQParentCall_customEvent(QEvent *event) {
        return QTranslator::customEvent(event);
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
        else return QTranslator::disconnectNotify(signal);
    }

    void PlastiQParentCall_disconnectNotify(const QMetaMethod &signal) {
        return QTranslator::disconnectNotify(signal);
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
        else return QTranslator::timerEvent(event);
    }

    void PlastiQParentCall_timerEvent(QTimerEvent *event) {
        return QTranslator::timerEvent(event);
    }

};

void PlastiQQTranslator::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQTranslatorWrapper *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new PlastiQQTranslatorWrapper(); break;
        case 1: o = new PlastiQQTranslatorWrapper(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQTranslator *p = new PlastiQQTranslator();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTranslator *p = new PlastiQQTranslator();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 14) {
            id -= 14;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTranslator *o = sc ? Q_NULLPTR : reinterpret_cast<QTranslator*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r;
                if (isWrapper) _r = ((PlastiQQTranslatorWrapper*)o)->PlastiQParentCall_isEmpty();
                else _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->load(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->load(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->load(stack[1].s_string,
                    stack[2].s_string,
                    stack[3].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->load(stack[1].s_string,
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->load((*reinterpret_cast< QLocale(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->load((*reinterpret_cast< QLocale(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    stack[3].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->load((*reinterpret_cast< QLocale(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->load((*reinterpret_cast< QLocale(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string,
                    stack[5].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->load(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->load(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { QString _r;
                if (isWrapper) _r = ((PlastiQQTranslatorWrapper*)o)->PlastiQParentCall_translate(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                else _r = o->translate(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 12: { QString _r;
                if (isWrapper) _r = ((PlastiQQTranslatorWrapper*)o)->PlastiQParentCall_translate(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp));
                else _r = o->translate(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 13: { QString _r;
                if (isWrapper) _r = ((PlastiQQTranslatorWrapper*)o)->PlastiQParentCall_translate(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp),
                    stack[4].s_int);
                else _r = o->translate(reinterpret_cast<const char*>(stack[1].s_voidp),
                    reinterpret_cast<const char*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp),
                    stack[4].s_int);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QTranslator *o = reinterpret_cast<QTranslator*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QTranslator *o = reinterpret_cast<QTranslator*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QTranslator *o = reinterpret_cast<QTranslator*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QTranslator *o = reinterpret_cast<QTranslator*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTranslator::~PlastiQQTranslator() {
    QTranslator* o = reinterpret_cast<QTranslator*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

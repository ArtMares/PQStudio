#include "plastiqmethod.h"
#include "plastiqqexception.h"

#include <QException> 

QHash<QByteArray, PlastiQMethod> PlastiQQException::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQException::plastiqMethods = {
    { "clone()", { "clone", "", "QException*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "raise()", { "raise", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQException::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQException::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQException::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQException::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQException::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQException::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QException", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQException::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQExceptionWrapper : public QException {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    QException* clone() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("QException* clone()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QException* _r = reinterpret_cast<QException*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QException::clone();
    }

    QException* PlastiQParentCall_clone() const {
        return QException::clone();
    }

    void raise() const override {
        static const QByteArray methodSignature = QByteArrayLiteral("void raise()");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[1];
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QException::raise();
    }

    void PlastiQParentCall_raise() const {
        return QException::raise();
    }

};

void PlastiQQException::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQExceptionWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQException *p = new PlastiQQException();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQException *p = new PlastiQQException();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QException *o = sc ? Q_NULLPTR : reinterpret_cast<QException*>(object->plastiq_data());

        switch(id) {
        case 0: { QException* _r;
                if (isWrapper) _r = ((PlastiQQExceptionWrapper*)o)->PlastiQParentCall_clone();
                else _r = o->clone();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QException"; } break;
        case 1: if (isWrapper) ((PlastiQQExceptionWrapper*)o)->PlastiQParentCall_raise();
                else o->raise();
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
        QException *o = reinterpret_cast<QException*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQException::~PlastiQQException() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

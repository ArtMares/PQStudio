#include "plastiqmethod.h"
#include "plastiqqgesturerecognizer.h"

#include <QGestureRecognizer> 
#include <QGesture>
#include <QObject>

QHash<QByteArray, PlastiQMethod> PlastiQQGestureRecognizer::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQGestureRecognizer::plastiqMethods = {
    { "create(QObject*)", { "create", "QObject*", "QGesture*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "recognize(QGesture*,QObject*,QEvent*)", { "recognize", "QGesture*,QObject*,QEvent*", "Result", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "reset(QGesture*)", { "reset", "QGesture*", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "registerRecognizer(QGestureRecognizer*)", { "registerRecognizer", "QGestureRecognizer*", "Qt::GestureType", 3, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "unregisterRecognizer(enum)", { "unregisterRecognizer", "Qt::GestureType", "void", 4, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGestureRecognizer::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGestureRecognizer::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGestureRecognizer::plastiqConstants = {

    /* QGestureRecognizer::ResultFlag */
   { "Ignore", QGestureRecognizer::Ignore },
   { "MayBeGesture", QGestureRecognizer::MayBeGesture },
   { "TriggerGesture", QGestureRecognizer::TriggerGesture },
   { "FinishGesture", QGestureRecognizer::FinishGesture },
   { "CancelGesture", QGestureRecognizer::CancelGesture },
   { "ResultState_Mask", QGestureRecognizer::ResultState_Mask },
   { "ConsumeEventHint", QGestureRecognizer::ConsumeEventHint },
   { "ResultHint_Mask", QGestureRecognizer::ResultHint_Mask },

};

QVector<PlastiQMetaObject*> PlastiQQGestureRecognizer::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQGestureRecognizer::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQGestureRecognizer::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QGestureRecognizer", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGestureRecognizer::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

class PlastiQQGestureRecognizerWrapper : public QGestureRecognizer {
public:
    VirtualMethodList *virtualMethodList;
    PQObjectWrapper *pqObjectWPtr;


    QGesture* create(QObject *target) override {
        static const QByteArray methodSignature = QByteArrayLiteral("QGesture* create(QObject*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(target);
            stack[1].name = QByteArrayLiteral("QObject");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            QGesture* _r = reinterpret_cast<QGesture*>(stack[0].s_voidp); 
            delete [] stack;
            return _r;
        }
        else return QGestureRecognizer::create(target);
    }

    QGesture* PlastiQParentCall_create(QObject *target) {
        return QGestureRecognizer::create(target);
    }

    void reset(QGesture *gesture) override {
        static const QByteArray methodSignature = QByteArrayLiteral("void reset(QGesture*)");
        if (virtualMethodList->contains(methodSignature)) {
            PMOGStack stack = new PMOGStackItem[2];
            stack[1].s_voidp = reinterpret_cast<void*>(gesture);
            stack[1].name = QByteArrayLiteral("QGesture");
            stack[1].type = PlastiQ::QtObjectStar;
            virtualMethodList->value(methodSignature).call(pqObjectWPtr, stack);
            
            delete [] stack;
        }
        else return QGestureRecognizer::reset(gesture);
    }

    void PlastiQParentCall_reset(QGesture *gesture) {
        return QGestureRecognizer::reset(gesture);
    }

};

void PlastiQQGestureRecognizer::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        PlastiQQGestureRecognizerWrapper *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

        o->virtualMethodList = reinterpret_cast<VirtualMethodList*>(stack[0].s_voidp);
        o->pqObjectWPtr = stack[0].s_pqobject;

        PlastiQQGestureRecognizer *p = new PlastiQQGestureRecognizer();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGestureRecognizer *p = new PlastiQQGestureRecognizer();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGestureRecognizer *o = sc ? Q_NULLPTR : reinterpret_cast<QGestureRecognizer*>(object->plastiq_data());

        switch(id) {
        case 0: { QGesture* _r;
                if (isWrapper) _r = ((PlastiQQGestureRecognizerWrapper*)o)->PlastiQParentCall_create(reinterpret_cast<QObject*>(stack[1].s_voidp));
                else _r = o->create(reinterpret_cast<QObject*>(stack[1].s_voidp));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QGesture"; } break;
        case 1: { qint64 _r = o->recognize(reinterpret_cast<QGesture*>(stack[1].s_voidp),
                    reinterpret_cast<QObject*>(stack[2].s_voidp),
                    reinterpret_cast<QEvent*>(stack[3].s_voidp)); // HACK for Result 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: if (isWrapper) ((PlastiQQGestureRecognizerWrapper*)o)->PlastiQParentCall_reset(reinterpret_cast<QGesture*>(stack[1].s_voidp));
                else o->reset(reinterpret_cast<QGesture*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 3: { qint64 _r = sc ? QGestureRecognizer::registerRecognizer(reinterpret_cast<QGestureRecognizer*>(stack[1].s_voidp)) : o->registerRecognizer(reinterpret_cast<QGestureRecognizer*>(stack[1].s_voidp)); // HACK for Qt::GestureType 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: if(sc) { QGestureRecognizer::unregisterRecognizer(Qt::GestureType(stack[1].s_int64)); } else { o->unregisterRecognizer(Qt::GestureType(stack[1].s_int64)); }
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
        QGestureRecognizer *o = reinterpret_cast<QGestureRecognizer*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQGestureRecognizer::~PlastiQQGestureRecognizer() {
    QGestureRecognizer* o = reinterpret_cast<QGestureRecognizer*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

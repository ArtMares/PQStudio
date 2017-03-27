#include "plastiqmethod.h"
#include "plastiqqswipegesture.h"

#include "widgets/PlastiQQGesture/plastiqqgesture.h"
#include <QSwipeGesture> 

QHash<QByteArray, PlastiQMethod> PlastiQQSwipeGesture::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQSwipeGesture::plastiqMethods = {
    { "horizontalDirection()", { "horizontalDirection", "", "SwipeDirection", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSwipeAngle(double)", { "setSwipeAngle", "qreal", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swipeAngle()", { "swipeAngle", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "verticalDirection()", { "verticalDirection", "", "SwipeDirection", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSwipeGesture::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSwipeGesture::plastiqProperties = {
    { "horizontalDirection", { "horizontalDirection", "long", "", "horizontalDirection" } },
    { "swipeAngle", { "swipeAngle", "qreal", "setSwipeAngle", "swipeAngle" } },
    { "verticalDirection", { "verticalDirection", "long", "", "verticalDirection" } },

};

QHash<QByteArray, long> PlastiQQSwipeGesture::plastiqConstants = {

    /* QSwipeGesture::SwipeDirection */
   { "NoDirection", QSwipeGesture::NoDirection },
   { "Left", QSwipeGesture::Left },
   { "Right", QSwipeGesture::Right },
   { "Up", QSwipeGesture::Up },
   { "Down", QSwipeGesture::Down },

};

QVector<PlastiQMetaObject*> PlastiQQSwipeGesture::plastiqInherits = { &PlastiQQGesture::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSwipeGesture::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQSwipeGesture::plastiq_static_metaObject = {
    { &PlastiQQGesture::plastiq_static_metaObject, &plastiqInherits, "QSwipeGesture", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSwipeGesture::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSwipeGesture::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSwipeGesture *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSwipeGesture *p = new PlastiQQSwipeGesture();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSwipeGesture *p = new PlastiQQSwipeGesture();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            PlastiQQGesture::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSwipeGesture *o = sc ? Q_NULLPTR : reinterpret_cast<QSwipeGesture*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->horizontalDirection(); // HACK for SwipeDirection 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: o->setSwipeAngle(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 2: { double _r = o->swipeAngle();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: { qint64 _r = o->verticalDirection(); // HACK for SwipeDirection 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQGesture::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QSwipeGesture *o = reinterpret_cast<QSwipeGesture*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QSwipeGesture *o = reinterpret_cast<QSwipeGesture*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QSwipeGesture *o = reinterpret_cast<QSwipeGesture*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QSwipeGesture *o = reinterpret_cast<QSwipeGesture*>(object->plastiq_data());

        if(className == "QGesture") {
            stack[0].s_voidp = static_cast<QGesture*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSwipeGesture::~PlastiQQSwipeGesture() {
    QSwipeGesture* o = reinterpret_cast<QSwipeGesture*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

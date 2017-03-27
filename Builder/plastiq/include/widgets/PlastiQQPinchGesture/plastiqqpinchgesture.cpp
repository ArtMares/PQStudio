#include "plastiqmethod.h"
#include "plastiqqpinchgesture.h"

#include "widgets/PlastiQQGesture/plastiqqgesture.h"
#include <QPinchGesture> 
#include <QPointF>

QHash<QByteArray, PlastiQMethod> PlastiQQPinchGesture::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQPinchGesture::plastiqMethods = {
    { "centerPoint()", { "centerPoint", "", "QPointF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "changeFlags()", { "changeFlags", "", "ChangeFlags", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastCenterPoint()", { "lastCenterPoint", "", "QPointF", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastRotationAngle()", { "lastRotationAngle", "", "qreal", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastScaleFactor()", { "lastScaleFactor", "", "qreal", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rotationAngle()", { "rotationAngle", "", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "scaleFactor()", { "scaleFactor", "", "qreal", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCenterPoint(QPointF&)", { "setCenterPoint", "QPointF&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setChangeFlags(enum)", { "setChangeFlags", "ChangeFlags", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLastCenterPoint(QPointF&)", { "setLastCenterPoint", "QPointF&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLastRotationAngle(double)", { "setLastRotationAngle", "qreal", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLastScaleFactor(double)", { "setLastScaleFactor", "qreal", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRotationAngle(double)", { "setRotationAngle", "qreal", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setScaleFactor(double)", { "setScaleFactor", "qreal", "void", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStartCenterPoint(QPointF&)", { "setStartCenterPoint", "QPointF&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTotalChangeFlags(enum)", { "setTotalChangeFlags", "ChangeFlags", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTotalRotationAngle(double)", { "setTotalRotationAngle", "qreal", "void", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTotalScaleFactor(double)", { "setTotalScaleFactor", "qreal", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startCenterPoint()", { "startCenterPoint", "", "QPointF", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "totalChangeFlags()", { "totalChangeFlags", "", "ChangeFlags", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "totalRotationAngle()", { "totalRotationAngle", "", "qreal", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "totalScaleFactor()", { "totalScaleFactor", "", "qreal", 21, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQPinchGesture::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQPinchGesture::plastiqProperties = {
    { "centerPoint", { "centerPoint", "QPointF", "setCenterPoint", "centerPoint" } },
    { "changeFlags", { "changeFlags", "long", "setChangeFlags", "changeFlags" } },
    { "lastCenterPoint", { "lastCenterPoint", "QPointF", "setLastCenterPoint", "lastCenterPoint" } },
    { "lastRotationAngle", { "lastRotationAngle", "qreal", "setLastRotationAngle", "lastRotationAngle" } },
    { "lastScaleFactor", { "lastScaleFactor", "qreal", "setLastScaleFactor", "lastScaleFactor" } },
    { "rotationAngle", { "rotationAngle", "qreal", "setRotationAngle", "rotationAngle" } },
    { "scaleFactor", { "scaleFactor", "qreal", "setScaleFactor", "scaleFactor" } },
    { "startCenterPoint", { "startCenterPoint", "QPointF", "setStartCenterPoint", "startCenterPoint" } },
    { "totalChangeFlags", { "totalChangeFlags", "long", "setTotalChangeFlags", "totalChangeFlags" } },
    { "totalRotationAngle", { "totalRotationAngle", "qreal", "setTotalRotationAngle", "totalRotationAngle" } },
    { "totalScaleFactor", { "totalScaleFactor", "qreal", "setTotalScaleFactor", "totalScaleFactor" } },

};

QHash<QByteArray, long> PlastiQQPinchGesture::plastiqConstants = {

    /* QPinchGesture::ChangeFlag */
   { "ScaleFactorChanged", QPinchGesture::ScaleFactorChanged },
   { "RotationAngleChanged", QPinchGesture::RotationAngleChanged },
   { "CenterPointChanged", QPinchGesture::CenterPointChanged },

};

QVector<PlastiQMetaObject*> PlastiQQPinchGesture::plastiqInherits = { &PlastiQQGesture::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQPinchGesture::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQPinchGesture::plastiq_static_metaObject = {
    { &PlastiQQGesture::plastiq_static_metaObject, &plastiqInherits, "QPinchGesture", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQPinchGesture::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQPinchGesture::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QPinchGesture *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQPinchGesture *p = new PlastiQQPinchGesture();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQPinchGesture *p = new PlastiQQPinchGesture();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 22) {
            id -= 22;
            PlastiQQGesture::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QPinchGesture *o = sc ? Q_NULLPTR : reinterpret_cast<QPinchGesture*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->centerPoint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { qint64 _r = o->changeFlags(); // HACK for ChangeFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->lastCenterPoint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { double _r = o->lastRotationAngle();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 4: { double _r = o->lastScaleFactor();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 5: { double _r = o->rotationAngle();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: { double _r = o->scaleFactor();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 7: o->setCenterPoint((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setChangeFlags(QPinchGesture::ChangeFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setLastCenterPoint((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setLastRotationAngle(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setLastScaleFactor(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setRotationAngle(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 13: o->setScaleFactor(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 14: o->setStartCenterPoint((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 15: o->setTotalChangeFlags(QPinchGesture::ChangeFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 16: o->setTotalRotationAngle(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 17: o->setTotalScaleFactor(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 18: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->startCenterPoint());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: { qint64 _r = o->totalChangeFlags(); // HACK for ChangeFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 20: { double _r = o->totalRotationAngle();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 21: { double _r = o->totalScaleFactor();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQGesture::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QPinchGesture *o = reinterpret_cast<QPinchGesture*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QPinchGesture *o = reinterpret_cast<QPinchGesture*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QPinchGesture *o = reinterpret_cast<QPinchGesture*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QPinchGesture *o = reinterpret_cast<QPinchGesture*>(object->plastiq_data());

        if(className == "QGesture") {
            stack[0].s_voidp = static_cast<QGesture*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQPinchGesture::~PlastiQQPinchGesture() {
    QPinchGesture* o = reinterpret_cast<QPinchGesture*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

#include "plastiqmethod.h"
#include "plastiqqeasingcurve.h"

#include <QEasingCurve> 

QHash<QByteArray, PlastiQMethod> PlastiQQEasingCurve::plastiqConstructors = {
    { "QEasingCurve()", { "QEasingCurve", "", "QEasingCurve*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QEasingCurve(enum)", { "QEasingCurve", "Type", "QEasingCurve*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QEasingCurve(QEasingCurve&)", { "QEasingCurve", "QEasingCurve&", "QEasingCurve*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QEasingCurve(QEasingCurve&&)", { "QEasingCurve", "QEasingCurve&&", "QEasingCurve*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQEasingCurve::plastiqMethods = {
    { "addCubicBezierSegment(QPointF&,QPointF&,QPointF&)", { "addCubicBezierSegment", "QPointF&,QPointF&,QPointF&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addTCBSegment(QPointF&,double,double,double)", { "addTCBSegment", "QPointF&,qreal,qreal,qreal", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "amplitude()", { "amplitude", "", "qreal", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "customType()", { "customType", "", "EasingFunction", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "overshoot()", { "overshoot", "", "qreal", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "period()", { "period", "", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAmplitude(double)", { "setAmplitude", "qreal", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCustomType(EasingFunction)", { "setCustomType", "EasingFunction", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOvershoot(double)", { "setOvershoot", "qreal", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPeriod(double)", { "setPeriod", "qreal", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setType(enum)", { "setType", "Type", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QEasingCurve&)", { "swap", "QEasingCurve&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "Type", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "valueForProgress(double)", { "valueForProgress", "qreal", "qreal", 13, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQEasingCurve::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQEasingCurve::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQEasingCurve::plastiqConstants = {

    /* QEasingCurve::Type */
   { "Linear", QEasingCurve::Linear },
   { "InQuad", QEasingCurve::InQuad },
   { "OutQuad", QEasingCurve::OutQuad },
   { "InOutQuad", QEasingCurve::InOutQuad },
   { "OutInQuad", QEasingCurve::OutInQuad },
   { "InCubic", QEasingCurve::InCubic },
   { "OutCubic", QEasingCurve::OutCubic },
   { "InOutCubic", QEasingCurve::InOutCubic },
   { "OutInCubic", QEasingCurve::OutInCubic },
   { "InQuart", QEasingCurve::InQuart },
   { "OutQuart", QEasingCurve::OutQuart },
   { "InOutQuart", QEasingCurve::InOutQuart },
   { "OutInQuart", QEasingCurve::OutInQuart },
   { "InQuint", QEasingCurve::InQuint },
   { "OutQuint", QEasingCurve::OutQuint },
   { "InOutQuint", QEasingCurve::InOutQuint },
   { "OutInQuint", QEasingCurve::OutInQuint },
   { "InSine", QEasingCurve::InSine },
   { "OutSine", QEasingCurve::OutSine },
   { "InOutSine", QEasingCurve::InOutSine },
   { "OutInSine", QEasingCurve::OutInSine },
   { "InExpo", QEasingCurve::InExpo },
   { "OutExpo", QEasingCurve::OutExpo },
   { "InOutExpo", QEasingCurve::InOutExpo },
   { "OutInExpo", QEasingCurve::OutInExpo },
   { "InCirc", QEasingCurve::InCirc },
   { "OutCirc", QEasingCurve::OutCirc },
   { "InOutCirc", QEasingCurve::InOutCirc },
   { "OutInCirc", QEasingCurve::OutInCirc },
   { "InElastic", QEasingCurve::InElastic },
   { "OutElastic", QEasingCurve::OutElastic },
   { "InOutElastic", QEasingCurve::InOutElastic },
   { "OutInElastic", QEasingCurve::OutInElastic },
   { "InBack", QEasingCurve::InBack },
   { "OutBack", QEasingCurve::OutBack },
   { "InOutBack", QEasingCurve::InOutBack },
   { "OutInBack", QEasingCurve::OutInBack },
   { "InBounce", QEasingCurve::InBounce },
   { "OutBounce", QEasingCurve::OutBounce },
   { "InOutBounce", QEasingCurve::InOutBounce },
   { "OutInBounce", QEasingCurve::OutInBounce },
   { "InCurve", QEasingCurve::InCurve },
   { "OutCurve", QEasingCurve::OutCurve },
   { "SineCurve", QEasingCurve::SineCurve },
   { "CosineCurve", QEasingCurve::CosineCurve },
   { "BezierSpline", QEasingCurve::BezierSpline },
   { "TCBSpline", QEasingCurve::TCBSpline },
   { "Custom", QEasingCurve::Custom },
   { "NCurveTypes", QEasingCurve::NCurveTypes },

};

QVector<PlastiQMetaObject*> PlastiQQEasingCurve::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQEasingCurve::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQEasingCurve::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QEasingCurve", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQEasingCurve::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQEasingCurve::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QEasingCurve *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QEasingCurve(); break;
        case 1: o = new QEasingCurve(QEasingCurve::Type(stack[1].s_int64)); break;
        case 2: o = new QEasingCurve((*reinterpret_cast< QEasingCurve(*) >(stack[1].s_voidp))); break;
        case 3: o = new QEasingCurve((*reinterpret_cast< QEasingCurve(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQEasingCurve *p = new PlastiQQEasingCurve();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQEasingCurve *p = new PlastiQQEasingCurve();
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
        QEasingCurve *o = sc ? Q_NULLPTR : reinterpret_cast<QEasingCurve*>(object->plastiq_data());

        switch(id) {
        case 0: o->addCubicBezierSegment((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[2].s_voidp)),
                    (*reinterpret_cast< QPointF(*) >(stack[3].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addTCBSegment((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    stack[2].s_double,
                    stack[3].s_double,
                    stack[4].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 2: { double _r = o->amplitude();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 3: /* o->customType() | ret: `EasingFunction` (INTERNAL CLASS) */ break;
        case 4: { double _r = o->overshoot();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 5: { double _r = o->period();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: o->setAmplitude(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setCustomType((*reinterpret_cast< QEasingCurve::EasingFunction(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setOvershoot(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setPeriod(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setType(QEasingCurve::Type(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->swap((*reinterpret_cast< QEasingCurve(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: { qint64 _r = o->type(); // HACK for Type 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 13: { double _r = o->valueForProgress(stack[1].s_double);
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;

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
        QEasingCurve *o = reinterpret_cast<QEasingCurve*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQEasingCurve::~PlastiQQEasingCurve() {
    QEasingCurve* o = reinterpret_cast<QEasingCurve*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

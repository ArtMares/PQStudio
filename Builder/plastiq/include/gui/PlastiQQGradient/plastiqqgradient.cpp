#include "plastiqmethod.h"
#include "plastiqqgradient.h"

#include <QGradient> 
#include <QGradientStops>

QHash<QByteArray, PlastiQMethod> PlastiQQGradient::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQGradient::plastiqMethods = {
    { "coordinateMode()", { "coordinateMode", "", "CoordinateMode", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColorAt(double,QColor&)", { "setColorAt", "qreal,QColor&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCoordinateMode(enum)", { "setCoordinateMode", "CoordinateMode", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSpread(enum)", { "setSpread", "Spread", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStops(QGradientStops&)", { "setStops", "QGradientStops&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "spread()", { "spread", "", "Spread", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "stops()", { "stops", "", "QGradientStops", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "type()", { "type", "", "Type", 7, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGradient::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQGradient::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQGradient::plastiqConstants = {

    /* QGradient::CoordinateMode */
   { "LogicalMode", QGradient::LogicalMode },
   { "StretchToDeviceMode", QGradient::StretchToDeviceMode },
   { "ObjectBoundingMode", QGradient::ObjectBoundingMode },

    /* QGradient::Spread */
   { "PadSpread", QGradient::PadSpread },
   { "ReflectSpread", QGradient::ReflectSpread },
   { "RepeatSpread", QGradient::RepeatSpread },

    /* QGradient::Type */
   { "LinearGradient", QGradient::LinearGradient },
   { "RadialGradient", QGradient::RadialGradient },
   { "ConicalGradient", QGradient::ConicalGradient },
   { "NoGradient", QGradient::NoGradient },

};

QVector<PlastiQMetaObject*> PlastiQQGradient::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQGradient::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQGradient::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QGradient", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGradient::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGradient::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGradient *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGradient *p = new PlastiQQGradient();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGradient *p = new PlastiQQGradient();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGradient *o = sc ? Q_NULLPTR : reinterpret_cast<QGradient*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->coordinateMode(); // HACK for CoordinateMode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: o->setColorAt(stack[1].s_double,
                    (*reinterpret_cast< QColor(*) >(stack[2].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->setCoordinateMode(QGradient::CoordinateMode(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setSpread(QGradient::Spread(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setStops((*reinterpret_cast< QGradientStops(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: { qint64 _r = o->spread(); // HACK for Spread 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: /* UNSUPPORTED_RETURN_VALUE o->stops() | ret: `QGradientStops` */ break;
        case 7: { qint64 _r = o->type(); // HACK for Type 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

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
        QGradient *o = reinterpret_cast<QGradient*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQGradient::~PlastiQQGradient() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

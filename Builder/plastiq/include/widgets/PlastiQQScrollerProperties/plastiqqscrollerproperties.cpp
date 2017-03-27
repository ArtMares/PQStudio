#include "plastiqmethod.h"
#include "plastiqqscrollerproperties.h"

#include <QScrollerProperties> 
#include <QVariant>

QHash<QByteArray, PlastiQMethod> PlastiQQScrollerProperties::plastiqConstructors = {
    { "QScrollerProperties()", { "QScrollerProperties", "", "QScrollerProperties*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QScrollerProperties(QScrollerProperties&)", { "QScrollerProperties", "QScrollerProperties&", "QScrollerProperties*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQScrollerProperties::plastiqMethods = {
    { "scrollMetric(enum)", { "scrollMetric", "ScrollMetric", "QVariant", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setScrollMetric(enum,QVariant)", { "setScrollMetric", "ScrollMetric,QVariant&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultScrollerProperties(QScrollerProperties&)", { "setDefaultScrollerProperties", "QScrollerProperties&", "void", 2, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "unsetDefaultScrollerProperties()", { "unsetDefaultScrollerProperties", "", "void", 3, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQScrollerProperties::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQScrollerProperties::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQScrollerProperties::plastiqConstants = {

    /* QScrollerProperties::FrameRates */
   { "Standard", QScrollerProperties::Standard },
   { "Fps60", QScrollerProperties::Fps60 },
   { "Fps30", QScrollerProperties::Fps30 },
   { "Fps20", QScrollerProperties::Fps20 },

    /* QScrollerProperties::OvershootPolicy */
   { "OvershootWhenScrollable", QScrollerProperties::OvershootWhenScrollable },
   { "OvershootAlwaysOff", QScrollerProperties::OvershootAlwaysOff },
   { "OvershootAlwaysOn", QScrollerProperties::OvershootAlwaysOn },

    /* QScrollerProperties::ScrollMetric */
   { "MousePressEventDelay", QScrollerProperties::MousePressEventDelay },
   { "DragStartDistance", QScrollerProperties::DragStartDistance },
   { "DragVelocitySmoothingFactor", QScrollerProperties::DragVelocitySmoothingFactor },
   { "AxisLockThreshold", QScrollerProperties::AxisLockThreshold },
   { "ScrollingCurve", QScrollerProperties::ScrollingCurve },
   { "DecelerationFactor", QScrollerProperties::DecelerationFactor },
   { "MinimumVelocity", QScrollerProperties::MinimumVelocity },
   { "MaximumVelocity", QScrollerProperties::MaximumVelocity },
   { "MaximumClickThroughVelocity", QScrollerProperties::MaximumClickThroughVelocity },
   { "AcceleratingFlickMaximumTime", QScrollerProperties::AcceleratingFlickMaximumTime },
   { "AcceleratingFlickSpeedupFactor", QScrollerProperties::AcceleratingFlickSpeedupFactor },
   { "SnapPositionRatio", QScrollerProperties::SnapPositionRatio },
   { "SnapTime", QScrollerProperties::SnapTime },
   { "OvershootDragResistanceFactor", QScrollerProperties::OvershootDragResistanceFactor },
   { "OvershootDragDistanceFactor", QScrollerProperties::OvershootDragDistanceFactor },
   { "OvershootScrollDistanceFactor", QScrollerProperties::OvershootScrollDistanceFactor },
   { "OvershootScrollTime", QScrollerProperties::OvershootScrollTime },
   { "HorizontalOvershootPolicy", QScrollerProperties::HorizontalOvershootPolicy },
   { "VerticalOvershootPolicy", QScrollerProperties::VerticalOvershootPolicy },
   { "FrameRate", QScrollerProperties::FrameRate },
   { "ScrollMetricCount", QScrollerProperties::ScrollMetricCount },

};

QVector<PlastiQMetaObject*> PlastiQQScrollerProperties::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQScrollerProperties::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQScrollerProperties::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QScrollerProperties", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQScrollerProperties::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQScrollerProperties::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QScrollerProperties *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QScrollerProperties(); break;
        case 1: o = new QScrollerProperties((*reinterpret_cast< QScrollerProperties(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQScrollerProperties *p = new PlastiQQScrollerProperties();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQScrollerProperties *p = new PlastiQQScrollerProperties();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QScrollerProperties *o = sc ? Q_NULLPTR : reinterpret_cast<QScrollerProperties*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QVariant *_r = new QVariant(o->scrollMetric(QScrollerProperties::ScrollMetric(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVariant";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: o->setScrollMetric(QScrollerProperties::ScrollMetric(stack[1].s_int64),
                    stack[2].s_variant);
                stack[0].type = PlastiQ::Void; break;
        case 2: if(sc) { QScrollerProperties::setDefaultScrollerProperties((*reinterpret_cast< QScrollerProperties(*) >(stack[1].s_voidp))); } else { o->setDefaultScrollerProperties((*reinterpret_cast< QScrollerProperties(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 3: if(sc) { QScrollerProperties::unsetDefaultScrollerProperties(); } else { o->unsetDefaultScrollerProperties(); }
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
        QScrollerProperties *o = reinterpret_cast<QScrollerProperties*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQScrollerProperties::~PlastiQQScrollerProperties() {
    QScrollerProperties* o = reinterpret_cast<QScrollerProperties*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

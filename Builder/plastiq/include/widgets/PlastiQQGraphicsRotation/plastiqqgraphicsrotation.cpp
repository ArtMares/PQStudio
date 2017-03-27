#include "plastiqmethod.h"
#include "plastiqqgraphicsrotation.h"

#include "widgets/PlastiQQGraphicsTransform/plastiqqgraphicstransform.h"
#include <QGraphicsRotation> 
#include <QVector3D>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsRotation::plastiqConstructors = {
    { "QGraphicsRotation()", { "QGraphicsRotation", "", "QGraphicsRotation*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsRotation(QObject*)", { "QGraphicsRotation", "QObject*", "QGraphicsRotation*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsRotation::plastiqMethods = {
    { "angle()", { "angle", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "axis()", { "axis", "", "QVector3D", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "origin()", { "origin", "", "QVector3D", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAngle(double)", { "setAngle", "qreal", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAxis(QVector3D&)", { "setAxis", "QVector3D&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAxis(enum)", { "setAxis", "Qt::Axis", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOrigin(QVector3D&)", { "setOrigin", "QVector3D&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsRotation::plastiqSignals = {
    { "angleChanged()", { "angleChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "axisChanged()", { "axisChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "originChanged()", { "originChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsRotation::plastiqProperties = {
    { "angle", { "angle", "qreal", "setAngle", "angle" } },
    { "axis", { "axis", "QVector3D", "setAxis", "axis" } },
    { "origin", { "origin", "QVector3D", "setOrigin", "origin" } },

};

QHash<QByteArray, long> PlastiQQGraphicsRotation::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsRotation::plastiqInherits = { &PlastiQQGraphicsTransform::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsRotation::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQGraphicsRotation::plastiq_static_metaObject = {
    { &PlastiQQGraphicsTransform::plastiq_static_metaObject, &plastiqInherits, "QGraphicsRotation", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsRotation::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsRotation::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsRotation *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QGraphicsRotation(); break;
        case 1: o = new QGraphicsRotation(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsRotation *p = new PlastiQQGraphicsRotation();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsRotation *p = new PlastiQQGraphicsRotation();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQGraphicsTransform::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsRotation *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsRotation*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->angle();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { /* COPY OBJECT */
            QVector3D *_r = new QVector3D(o->axis());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector3D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { /* COPY OBJECT */
            QVector3D *_r = new QVector3D(o->origin());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector3D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: o->setAngle(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setAxis((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setAxis(Qt::Axis(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setOrigin((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)));
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
        QGraphicsRotation *o = reinterpret_cast<QGraphicsRotation*>(object->plastiq_data());

        if(className == "QGraphicsTransform") {
            stack[0].s_voidp = static_cast<QGraphicsTransform*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsRotation::~PlastiQQGraphicsRotation() {
    QGraphicsRotation* o = reinterpret_cast<QGraphicsRotation*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

#include "plastiqmethod.h"
#include "plastiqqgraphicsscale.h"

#include "widgets/PlastiQQGraphicsTransform/plastiqqgraphicstransform.h"
#include <QGraphicsScale> 
#include <QVector3D>

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsScale::plastiqConstructors = {
    { "QGraphicsScale()", { "QGraphicsScale", "", "QGraphicsScale*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QGraphicsScale(QObject*)", { "QGraphicsScale", "QObject*", "QGraphicsScale*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsScale::plastiqMethods = {
    { "origin()", { "origin", "", "QVector3D", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setOrigin(QVector3D&)", { "setOrigin", "QVector3D&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setXScale(double)", { "setXScale", "qreal", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setYScale(double)", { "setYScale", "qreal", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setZScale(double)", { "setZScale", "qreal", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "xScale()", { "xScale", "", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "yScale()", { "yScale", "", "qreal", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "zScale()", { "zScale", "", "qreal", 7, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQGraphicsScale::plastiqSignals = {
    { "originChanged()", { "originChanged", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "scaleChanged()", { "scaleChanged", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "xScaleChanged()", { "xScaleChanged", "", "void", 2, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "yScaleChanged()", { "yScaleChanged", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "zScaleChanged()", { "zScaleChanged", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQGraphicsScale::plastiqProperties = {
    { "origin", { "origin", "QVector3D", "setOrigin", "origin" } },
    { "xScale", { "xScale", "qreal", "setXScale", "xScale" } },
    { "yScale", { "yScale", "qreal", "setYScale", "yScale" } },
    { "zScale", { "zScale", "qreal", "setZScale", "zScale" } },

};

QHash<QByteArray, long> PlastiQQGraphicsScale::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQGraphicsScale::plastiqInherits = { &PlastiQQGraphicsTransform::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQGraphicsScale::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQGraphicsScale::plastiq_static_metaObject = {
    { &PlastiQQGraphicsTransform::plastiq_static_metaObject, &plastiqInherits, "QGraphicsScale", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQGraphicsScale::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQGraphicsScale::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QGraphicsScale *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QGraphicsScale(); break;
        case 1: o = new QGraphicsScale(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQGraphicsScale *p = new PlastiQQGraphicsScale();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQGraphicsScale *p = new PlastiQQGraphicsScale();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            PlastiQQGraphicsTransform::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QGraphicsScale *o = sc ? Q_NULLPTR : reinterpret_cast<QGraphicsScale*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QVector3D *_r = new QVector3D(o->origin());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVector3D";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: o->setOrigin((*reinterpret_cast< QVector3D(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->setXScale(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setYScale(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setZScale(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 5: { double _r = o->xScale();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 6: { double _r = o->yScale();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 7: { double _r = o->zScale();
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
        QGraphicsScale *o = reinterpret_cast<QGraphicsScale*>(object->plastiq_data());

        if(className == "QGraphicsTransform") {
            stack[0].s_voidp = static_cast<QGraphicsTransform*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQGraphicsScale::~PlastiQQGraphicsScale() {
    QGraphicsScale* o = reinterpret_cast<QGraphicsScale*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

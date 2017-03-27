#include "plastiqmethod.h"
#include "plastiqqscrollprepareevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QScrollPrepareEvent> 
#include <QPointF>
#include <QRectF>
#include <QSizeF>

QHash<QByteArray, PlastiQMethod> PlastiQQScrollPrepareEvent::plastiqConstructors = {
    { "QScrollPrepareEvent(QPointF&)", { "QScrollPrepareEvent", "QPointF&", "QScrollPrepareEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQScrollPrepareEvent::plastiqMethods = {
    { "contentPos()", { "contentPos", "", "QPointF", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contentPosRange()", { "contentPosRange", "", "QRectF", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContentPos(QPointF&)", { "setContentPos", "QPointF&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setContentPosRange(QRectF&)", { "setContentPosRange", "QRectF&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setViewportSize(QSizeF&)", { "setViewportSize", "QSizeF&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "startPos()", { "startPos", "", "QPointF", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "viewportSize()", { "viewportSize", "", "QSizeF", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQScrollPrepareEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQScrollPrepareEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQScrollPrepareEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQScrollPrepareEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQScrollPrepareEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQScrollPrepareEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QScrollPrepareEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQScrollPrepareEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQScrollPrepareEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QScrollPrepareEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QScrollPrepareEvent((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQScrollPrepareEvent *p = new PlastiQQScrollPrepareEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQScrollPrepareEvent *p = new PlastiQQScrollPrepareEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QScrollPrepareEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QScrollPrepareEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->contentPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->contentPosRange());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: o->setContentPos((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->setContentPosRange((*reinterpret_cast< QRectF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setViewportSize((*reinterpret_cast< QSizeF(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->startPos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QSizeF *_r = new QSizeF(o->viewportSize());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizeF";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QScrollPrepareEvent *o = reinterpret_cast<QScrollPrepareEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQScrollPrepareEvent::~PlastiQQScrollPrepareEvent() {
    QScrollPrepareEvent* o = reinterpret_cast<QScrollPrepareEvent*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

#include "plastiqmethod.h"
#include "plastiqqdropevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QDropEvent> 
#include <QMimeData>
#include <QPoint>
#include <QPointF>
#include <QObject>

QHash<QByteArray, PlastiQMethod> PlastiQQDropEvent::plastiqConstructors = {
    { "QDropEvent(QPointF&,enum,const QMimeData*,enum,enum)", { "QDropEvent", "QPointF&,Qt::DropActions,QMimeData*,Qt::MouseButtons,Qt::KeyboardModifiers", "QDropEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDropEvent(QPointF&,enum,const QMimeData*,enum,enum,Type)", { "QDropEvent", "QPointF&,Qt::DropActions,QMimeData*,Qt::MouseButtons,Qt::KeyboardModifiers,Type", "QDropEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDropEvent::plastiqMethods = {
    { "acceptProposedAction()", { "acceptProposedAction", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dropAction()", { "dropAction", "", "Qt::DropAction", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "keyboardModifiers()", { "keyboardModifiers", "", "Qt::KeyboardModifiers", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeData()", { "mimeData", "", "const QMimeData*", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mouseButtons()", { "mouseButtons", "", "Qt::MouseButtons", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "QPoint", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "posF()", { "posF", "", "const QPointF&", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "possibleActions()", { "possibleActions", "", "Qt::DropActions", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "proposedAction()", { "proposedAction", "", "Qt::DropAction", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDropAction(enum)", { "setDropAction", "Qt::DropAction", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "source()", { "source", "", "QObject*", 10, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDropEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDropEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDropEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDropEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQDropEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQDropEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QDropEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDropEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDropEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDropEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDropEvent((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    Qt::DropActions(stack[2].s_int64),
                    reinterpret_cast<const QMimeData*>(stack[3].s_voidp),
                    Qt::MouseButtons(stack[4].s_int64),
                    Qt::KeyboardModifiers(stack[5].s_int64)); break;
        /*case 1: o = new QDropEvent((*reinterpret_cast< QPointF(*) >(stack[1].s_voidp)),
                    Qt::DropActions(stack[2].s_int64),
                    reinterpret_cast<const QMimeData*>(stack[3].s_voidp),
                    Qt::MouseButtons(stack[4].s_int64),
                    Qt::KeyboardModifiers(stack[5].s_int64),
                    UNSUPPORTED_TYPE_Type); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDropEvent *p = new PlastiQQDropEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDropEvent *p = new PlastiQQDropEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 11) {
            id -= 11;
            PlastiQQEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDropEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QDropEvent*>(object->plastiq_data());

        switch(id) {
        case 0: o->acceptProposedAction();
                stack[0].type = PlastiQ::Void; break;
        case 1: { qint64 _r = o->dropAction(); // HACK for Qt::DropAction 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 2: { qint64 _r = o->keyboardModifiers(); // HACK for Qt::KeyboardModifiers 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { QMimeData* _r = const_cast<QMimeData*>(o->mimeData());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMimeData"; } break;
        case 4: { qint64 _r = o->mouseButtons(); // HACK for Qt::MouseButtons 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->pos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QPointF *_r = new QPointF(o->posF());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPointF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { qint64 _r = o->possibleActions(); // HACK for Qt::DropActions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 8: { qint64 _r = o->proposedAction(); // HACK for Qt::DropAction 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: o->setDropAction(Qt::DropAction(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: { QObject* _r = o->source();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;

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
        QDropEvent *o = reinterpret_cast<QDropEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQDropEvent::~PlastiQQDropEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

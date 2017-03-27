#include "plastiqmethod.h"
#include "plastiqqdragmoveevent.h"

#include "gui/PlastiQQDropEvent/plastiqqdropevent.h"
#include <QDragMoveEvent> 
#include <QRect>

QHash<QByteArray, PlastiQMethod> PlastiQQDragMoveEvent::plastiqConstructors = {
    { "QDragMoveEvent(QPoint&,enum,const QMimeData*,enum,enum)", { "QDragMoveEvent", "QPoint&,Qt::DropActions,QMimeData*,Qt::MouseButtons,Qt::KeyboardModifiers", "QDragMoveEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDragMoveEvent(QPoint&,enum,const QMimeData*,enum,enum,Type)", { "QDragMoveEvent", "QPoint&,Qt::DropActions,QMimeData*,Qt::MouseButtons,Qt::KeyboardModifiers,Type", "QDragMoveEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDragMoveEvent::plastiqMethods = {
    { "accept(QRect&)", { "accept", "QRect&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "accept()", { "accept", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "answerRect()", { "answerRect", "", "QRect", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ignore(QRect&)", { "ignore", "QRect&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ignore()", { "ignore", "", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDragMoveEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDragMoveEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDragMoveEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDragMoveEvent::plastiqInherits = { &PlastiQQDropEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQDragMoveEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQDragMoveEvent::plastiq_static_metaObject = {
    { &PlastiQQDropEvent::plastiq_static_metaObject, &plastiqInherits, "QDragMoveEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDragMoveEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDragMoveEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDragMoveEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDragMoveEvent((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    Qt::DropActions(stack[2].s_int64),
                    reinterpret_cast<const QMimeData*>(stack[3].s_voidp),
                    Qt::MouseButtons(stack[4].s_int64),
                    Qt::KeyboardModifiers(stack[5].s_int64)); break;
        /*case 1: o = new QDragMoveEvent((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    Qt::DropActions(stack[2].s_int64),
                    reinterpret_cast<const QMimeData*>(stack[3].s_voidp),
                    Qt::MouseButtons(stack[4].s_int64),
                    Qt::KeyboardModifiers(stack[5].s_int64),
                    UNSUPPORTED_TYPE_Type); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDragMoveEvent *p = new PlastiQQDragMoveEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDragMoveEvent *p = new PlastiQQDragMoveEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQDropEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDragMoveEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QDragMoveEvent*>(object->plastiq_data());

        switch(id) {
        case 0: o->accept((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->accept();
                stack[0].type = PlastiQ::Void; break;
        case 2: { /* COPY OBJECT */
            QRect *_r = new QRect(o->answerRect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRect";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: o->ignore((*reinterpret_cast< QRect(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: o->ignore();
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
        QDragMoveEvent *o = reinterpret_cast<QDragMoveEvent*>(object->plastiq_data());

        if(className == "QDropEvent") {
            stack[0].s_voidp = static_cast<QDropEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQDragMoveEvent::~PlastiQQDragMoveEvent() {
    QDragMoveEvent* o = reinterpret_cast<QDragMoveEvent*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

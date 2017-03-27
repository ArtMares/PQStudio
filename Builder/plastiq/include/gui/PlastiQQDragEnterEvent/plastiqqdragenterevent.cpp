#include "plastiqmethod.h"
#include "plastiqqdragenterevent.h"

#include "gui/PlastiQQDragMoveEvent/plastiqqdragmoveevent.h"
#include <QDragEnterEvent> 

QHash<QByteArray, PlastiQMethod> PlastiQQDragEnterEvent::plastiqConstructors = {
    { "QDragEnterEvent(QPoint&,enum,const QMimeData*,enum,enum)", { "QDragEnterEvent", "QPoint&,Qt::DropActions,QMimeData*,Qt::MouseButtons,Qt::KeyboardModifiers", "QDragEnterEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDragEnterEvent::plastiqMethods = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQDragEnterEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDragEnterEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDragEnterEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDragEnterEvent::plastiqInherits = { &PlastiQQDragMoveEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQDragEnterEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQDragEnterEvent::plastiq_static_metaObject = {
    { &PlastiQQDragMoveEvent::plastiq_static_metaObject, &plastiqInherits, "QDragEnterEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDragEnterEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDragEnterEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDragEnterEvent *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDragEnterEvent((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)),
                    Qt::DropActions(stack[2].s_int64),
                    reinterpret_cast<const QMimeData*>(stack[3].s_voidp),
                    Qt::MouseButtons(stack[4].s_int64),
                    Qt::KeyboardModifiers(stack[5].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDragEnterEvent *p = new PlastiQQDragEnterEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDragEnterEvent *p = new PlastiQQDragEnterEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 0) {
            id -= 0;
            PlastiQQDragMoveEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDragEnterEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QDragEnterEvent*>(object->plastiq_data());

        switch(id) {

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
        QDragEnterEvent *o = reinterpret_cast<QDragEnterEvent*>(object->plastiq_data());

        if(className == "QDragMoveEvent") {
            stack[0].s_voidp = static_cast<QDragMoveEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQDragEnterEvent::~PlastiQQDragEnterEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

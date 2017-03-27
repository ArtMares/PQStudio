#include "plastiqmethod.h"
#include "plastiqqdrag.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QDrag> 
#include <QPixmap>
#include <QPoint>
#include <QMimeData>
#include <QObject>

QHash<QByteArray, PlastiQMethod> PlastiQQDrag::plastiqConstructors = {
    { "QDrag(QObject*)", { "QDrag", "QObject*", "QDrag*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDrag::plastiqMethods = {
    { "defaultAction()", { "defaultAction", "", "Qt::DropAction", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dragCursor(enum)", { "dragCursor", "Qt::DropAction", "QPixmap", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exec()", { "exec", "", "Qt::DropAction", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exec(enum)", { "exec", "Qt::DropActions", "Qt::DropAction", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exec(enum,enum)", { "exec", "Qt::DropActions,Qt::DropAction", "Qt::DropAction", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hotSpot()", { "hotSpot", "", "QPoint", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeData()", { "mimeData", "", "QMimeData*", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap()", { "pixmap", "", "QPixmap", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDragCursor(QPixmap&,enum)", { "setDragCursor", "QPixmap&,Qt::DropAction", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHotSpot(QPoint&)", { "setHotSpot", "QPoint&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMimeData(QMimeData*)", { "setMimeData", "QMimeData*", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPixmap(QPixmap&)", { "setPixmap", "QPixmap&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "source()", { "source", "", "QObject*", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "supportedActions()", { "supportedActions", "", "Qt::DropActions", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "target()", { "target", "", "QObject*", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cancel()", { "cancel", "", "void", 15, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDrag::plastiqSignals = {
    { "actionChanged(enum)", { "actionChanged", "Qt::DropAction", "void", 0, PlastiQMethod::Public, PlastiQMethod::Signal } },
    { "targetChanged(QObject*)", { "targetChanged", "QObject*", "void", 1, PlastiQMethod::Public, PlastiQMethod::Signal } },

};

QHash<QByteArray, PlastiQProperty> PlastiQQDrag::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDrag::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDrag::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQDrag::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQDrag::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QDrag", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDrag::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDrag::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDrag *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDrag(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDrag *p = new PlastiQQDrag();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDrag *p = new PlastiQQDrag();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 16) {
            id -= 16;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDrag *o = sc ? Q_NULLPTR : reinterpret_cast<QDrag*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->defaultAction(); // HACK for Qt::DropAction 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->dragCursor(Qt::DropAction(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { qint64 _r = o->exec(); // HACK for Qt::DropAction 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { qint64 _r = o->exec(Qt::DropActions(stack[1].s_int64)); // HACK for Qt::DropAction 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { qint64 _r = o->exec(Qt::DropActions(stack[1].s_int64),
                    Qt::DropAction(stack[2].s_int64)); // HACK for Qt::DropAction 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->hotSpot());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { QMimeData* _r = o->mimeData();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QMimeData"; } break;
        case 7: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: o->setDragCursor((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)),
                    Qt::DropAction(stack[2].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setHotSpot((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setMimeData(reinterpret_cast<QMimeData*>(stack[1].s_voidp));
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setPixmap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: { QObject* _r = o->source();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 13: { qint64 _r = o->supportedActions(); // HACK for Qt::DropActions 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 14: { QObject* _r = o->target();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QObject"; } break;
        case 15: if(sc) { QDrag::cancel(); } else { o->cancel(); }
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 2) {
            id -= 2;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QDrag *o = reinterpret_cast<QDrag*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {
        case 0: QObject::connect(o, &QDrag::actionChanged,
            [=](Qt::DropAction arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_int64 = arg0;
                    cstack[0].type = PlastiQ::Enum; cstack[0].name = "Qt::DropAction";
                PlastiQ_activate(sender, "actionChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;

        case 1: QObject::connect(o, &QDrag::targetChanged,
            [=](QObject* arg0) {
                PMOGStack cstack = new PMOGStackItem[1];
                    cstack[0].s_voidp = reinterpret_cast<void*>(arg0);
                    cstack[0].type = PlastiQ::QtObjectStar; cstack[0].name = "QObject";
                PlastiQ_activate(sender, "targetChanged", receiver, slot.constData(), 1, cstack);
                delete [] cstack;
                cstack = 0;
                });
            break;


        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QDrag *o = reinterpret_cast<QDrag*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QDrag *o = reinterpret_cast<QDrag*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QDrag *o = reinterpret_cast<QDrag*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQDrag::~PlastiQQDrag() {
    QDrag* o = reinterpret_cast<QDrag*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

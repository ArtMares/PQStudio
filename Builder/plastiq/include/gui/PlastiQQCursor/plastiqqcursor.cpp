#include "plastiqmethod.h"
#include "plastiqqcursor.h"

#include <QCursor> 
#include <QBitmap>
#include <QPoint>
#include <QPixmap>

QHash<QByteArray, PlastiQMethod> PlastiQQCursor::plastiqConstructors = {
    { "QCursor()", { "QCursor", "", "QCursor*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCursor(enum)", { "QCursor", "Qt::CursorShape", "QCursor*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCursor(QBitmap&,QBitmap&)", { "QCursor", "QBitmap&,QBitmap&", "QCursor*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCursor(QBitmap&,QBitmap&,int)", { "QCursor", "QBitmap&,QBitmap&,int", "QCursor*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCursor(QBitmap&,QBitmap&,int,int)", { "QCursor", "QBitmap&,QBitmap&,int,int", "QCursor*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCursor(QPixmap&)", { "QCursor", "QPixmap&", "QCursor*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCursor(QPixmap&,int)", { "QCursor", "QPixmap&,int", "QCursor*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCursor(QPixmap&,int,int)", { "QCursor", "QPixmap&,int,int", "QCursor*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCursor(QCursor&)", { "QCursor", "QCursor&", "QCursor*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCursor(QCursor&&)", { "QCursor", "QCursor&&", "QCursor*", 9, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCursor::plastiqMethods = {
    { "bitmap()", { "bitmap", "", "const QBitmap*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "hotSpot()", { "hotSpot", "", "QPoint", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mask()", { "mask", "", "const QBitmap*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixmap()", { "pixmap", "", "QPixmap", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setShape(enum)", { "setShape", "Qt::CursorShape", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "shape()", { "shape", "", "Qt::CursorShape", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QCursor&)", { "swap", "QCursor&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pos()", { "pos", "", "QPoint", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "pos(const QScreen*)", { "pos", "QScreen*", "QPoint", 8, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setPos(int,int)", { "setPos", "int,int", "void", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setPos(QScreen*,int,int)", { "setPos", "QScreen*,int,int", "void", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setPos(QPoint&)", { "setPos", "QPoint&", "void", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setPos(QScreen*,QPoint&)", { "setPos", "QScreen*,QPoint&", "void", 12, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCursor::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQCursor::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCursor::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCursor::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQCursor::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQCursor::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QCursor", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCursor::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCursor::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCursor *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QCursor(); break;
        case 1: o = new QCursor(Qt::CursorShape(stack[1].s_int64)); break;
        case 2: o = new QCursor((*reinterpret_cast< QBitmap(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QBitmap(*) >(stack[2].s_voidp))); break;
        case 3: o = new QCursor((*reinterpret_cast< QBitmap(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QBitmap(*) >(stack[2].s_voidp)),
                    stack[3].s_int); break;
        case 4: o = new QCursor((*reinterpret_cast< QBitmap(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QBitmap(*) >(stack[2].s_voidp)),
                    stack[3].s_int,
                    stack[4].s_int); break;
        case 5: o = new QCursor((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp))); break;
        case 6: o = new QCursor((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)),
                    stack[2].s_int); break;
        case 7: o = new QCursor((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)),
                    stack[2].s_int,
                    stack[3].s_int); break;
        case 8: o = new QCursor((*reinterpret_cast< QCursor(*) >(stack[1].s_voidp))); break;
        case 9: o = new QCursor((*reinterpret_cast< QCursor(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCursor *p = new PlastiQQCursor();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCursor *p = new PlastiQQCursor();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 13) {
            id -= 13;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCursor *o = sc ? Q_NULLPTR : reinterpret_cast<QCursor*>(object->plastiq_data());

        switch(id) {
        case 0: { QBitmap* _r = const_cast<QBitmap*>(o->bitmap());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QBitmap"; } break;
        case 1: { /* COPY OBJECT */
            QPoint *_r = new QPoint(o->hotSpot());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { QBitmap* _r = const_cast<QBitmap*>(o->mask());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QBitmap"; } break;
        case 3: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->pixmap());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: o->setShape(Qt::CursorShape(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 5: { qint64 _r = o->shape(); // HACK for Qt::CursorShape 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 6: o->swap((*reinterpret_cast< QCursor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 7: { /* COPY OBJECT */
            QPoint *_r = sc ? new QPoint(QCursor::pos()) : new QPoint(o->pos());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 8: { /* COPY OBJECT */
            QPoint *_r = sc ? new QPoint(QCursor::pos(reinterpret_cast<const QScreen*>(stack[1].s_voidp))) : new QPoint(o->pos(reinterpret_cast<const QScreen*>(stack[1].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPoint";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: if(sc) { QCursor::setPos(stack[1].s_int,
                    stack[2].s_int); } else { o->setPos(stack[1].s_int,
                    stack[2].s_int); }
                stack[0].type = PlastiQ::Void; break;
        case 10: if(sc) { QCursor::setPos(reinterpret_cast<QScreen*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int); } else { o->setPos(reinterpret_cast<QScreen*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int); }
                stack[0].type = PlastiQ::Void; break;
        case 11: if(sc) { QCursor::setPos((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))); } else { o->setPos((*reinterpret_cast< QPoint(*) >(stack[1].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 12: if(sc) { QCursor::setPos(reinterpret_cast<QScreen*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp))); } else { o->setPos(reinterpret_cast<QScreen*>(stack[1].s_voidp),
                    (*reinterpret_cast< QPoint(*) >(stack[2].s_voidp))); }
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
        QCursor *o = reinterpret_cast<QCursor*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQCursor::~PlastiQQCursor() {
    QCursor* o = reinterpret_cast<QCursor*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

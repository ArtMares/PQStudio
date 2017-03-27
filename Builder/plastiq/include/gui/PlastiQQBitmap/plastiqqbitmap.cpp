#include "plastiqmethod.h"
#include "plastiqqbitmap.h"

#include "gui/PlastiQQPixmap/plastiqqpixmap.h"
#include <QBitmap> 

QHash<QByteArray, PlastiQMethod> PlastiQQBitmap::plastiqConstructors = {
    { "QBitmap()", { "QBitmap", "", "QBitmap*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBitmap(QPixmap&)", { "QBitmap", "QPixmap&", "QBitmap*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBitmap(int,int)", { "QBitmap", "int,int", "QBitmap*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBitmap(QSize&)", { "QBitmap", "QSize&", "QBitmap*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBitmap(QString)", { "QBitmap", "QString&", "QBitmap*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBitmap(QString,const char*)", { "QBitmap", "QString&,char*", "QBitmap*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBitmap(QBitmap&)", { "QBitmap", "QBitmap&", "QBitmap*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBitmap::plastiqMethods = {
    { "clear()", { "clear", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QBitmap&)", { "swap", "QBitmap&", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transformed(QTransform&)", { "transformed", "QTransform&", "QBitmap", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fromData(QSize&,const uchar*)", { "fromData", "QSize&,uchar*", "QBitmap", 3, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromData(QSize&,const uchar*,enum)", { "fromData", "QSize&,uchar*,QImage::Format", "QBitmap", 4, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromImage(QImage&)", { "fromImage", "QImage&", "QBitmap", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromImage(QImage&,enum)", { "fromImage", "QImage&,Qt::ImageConversionFlags", "QBitmap", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBitmap::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQBitmap::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQBitmap::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQBitmap::plastiqInherits = { &PlastiQQPixmap::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQBitmap::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQBitmap::plastiq_static_metaObject = {
    { &PlastiQQPixmap::plastiq_static_metaObject, &plastiqInherits, "QBitmap", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQBitmap::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQBitmap::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QBitmap *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QBitmap(); break;
        case 1: o = new QBitmap((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp))); break;
        case 2: o = new QBitmap(stack[1].s_int,
                    stack[2].s_int); break;
        case 3: o = new QBitmap((*reinterpret_cast< QSize(*) >(stack[1].s_voidp))); break;
        case 4: o = new QBitmap(stack[1].s_string); break;
        case 5: o = new QBitmap(stack[1].s_string,
                    reinterpret_cast<const char*>(stack[2].s_voidp)); break;
        case 6: o = new QBitmap((*reinterpret_cast< QBitmap(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQBitmap *p = new PlastiQQBitmap();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQBitmap *p = new PlastiQQBitmap();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQPixmap::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QBitmap *o = sc ? Q_NULLPTR : reinterpret_cast<QBitmap*>(object->plastiq_data());

        switch(id) {
        case 0: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 1: o->swap((*reinterpret_cast< QBitmap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 2: { /* COPY OBJECT */
            QBitmap *_r = new QBitmap(o->transformed((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBitmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QBitmap *_r = sc ? new QBitmap(QBitmap::fromData((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    reinterpret_cast<const uchar*>(stack[2].s_voidp))) : new QBitmap(o->fromData((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    reinterpret_cast<const uchar*>(stack[2].s_voidp)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBitmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QBitmap *_r = sc ? new QBitmap(QBitmap::fromData((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    reinterpret_cast<const uchar*>(stack[2].s_voidp),
                    QImage::Format(stack[3].s_int64))) : new QBitmap(o->fromData((*reinterpret_cast< QSize(*) >(stack[1].s_voidp)),
                    reinterpret_cast<const uchar*>(stack[2].s_voidp),
                    QImage::Format(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBitmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QBitmap *_r = sc ? new QBitmap(QBitmap::fromImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)))) : new QBitmap(o->fromImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBitmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QBitmap *_r = sc ? new QBitmap(QBitmap::fromImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)),
                    Qt::ImageConversionFlags(stack[2].s_int64))) : new QBitmap(o->fromImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)),
                    Qt::ImageConversionFlags(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QBitmap";
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
        QBitmap *o = reinterpret_cast<QBitmap*>(object->plastiq_data());

        if(className == "QPixmap") {
            stack[0].s_voidp = static_cast<QPixmap*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQBitmap::~PlastiQQBitmap() {
    QBitmap* o = reinterpret_cast<QBitmap*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

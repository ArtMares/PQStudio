#include "plastiqmethod.h"
#include "plastiqqcolormap.h"

#include <QColormap> 
#include <QColor>

QHash<QByteArray, PlastiQMethod> PlastiQQColormap::plastiqConstructors = {
    { "QColormap(QColormap&)", { "QColormap", "QColormap&", "QColormap*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQColormap::plastiqMethods = {
    { "colorAt(long)", { "colorAt", "uint", "const QColor", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "depth()", { "depth", "", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mode()", { "mode", "", "Mode", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixel(QColor&)", { "pixel", "QColor&", "uint", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "instance()", { "instance", "", "QColormap", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "instance(int)", { "instance", "int", "QColormap", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQColormap::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQColormap::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQColormap::plastiqConstants = {

    /* QColormap::Mode */
   { "Direct", QColormap::Direct },
   { "Indexed", QColormap::Indexed },
   { "Gray", QColormap::Gray },

};

QVector<PlastiQMetaObject*> PlastiQQColormap::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQColormap::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQColormap::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QColormap", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQColormap::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQColormap::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QColormap *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QColormap((*reinterpret_cast< QColormap(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQColormap *p = new PlastiQQColormap();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQColormap *p = new PlastiQQColormap();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QColormap *o = sc ? Q_NULLPTR : reinterpret_cast<QColormap*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QColor *_r = new QColor(o->colorAt(stack[1].s_long));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { int _r = o->depth();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { qint64 _r = o->mode(); // HACK for Mode 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { long _r = o->pixel((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 4: { int _r = o->size();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { /* COPY OBJECT */
            QColormap *_r = sc ? new QColormap(QColormap::instance()) : new QColormap(o->instance());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColormap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QColormap *_r = sc ? new QColormap(QColormap::instance(stack[1].s_int)) : new QColormap(o->instance(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColormap";
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
        QColormap *o = reinterpret_cast<QColormap*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQColormap::~PlastiQQColormap() {
    QColormap* o = reinterpret_cast<QColormap*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

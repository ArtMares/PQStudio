#include "plastiqmethod.h"
#include "plastiqqbrush.h"

#include <QBrush> 
#include <QColor>
#include <QGradient>
#include <QMatrix>
#include <QPixmap>
#include <QImage>
#include <QTransform>

QHash<QByteArray, PlastiQMethod> PlastiQQBrush::plastiqConstructors = {
    { "QBrush()", { "QBrush", "", "QBrush*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBrush(enum)", { "QBrush", "Qt::BrushStyle", "QBrush*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBrush(QColor&)", { "QBrush", "QColor&", "QBrush*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBrush(QColor&,enum)", { "QBrush", "QColor&,Qt::BrushStyle", "QBrush*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBrush(enum,enum)", { "QBrush", "Qt::GlobalColor,Qt::BrushStyle", "QBrush*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBrush(QColor&,QPixmap&)", { "QBrush", "QColor&,QPixmap&", "QBrush*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBrush(enum,QPixmap&)", { "QBrush", "Qt::GlobalColor,QPixmap&", "QBrush*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBrush(QPixmap&)", { "QBrush", "QPixmap&", "QBrush*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBrush(QImage&)", { "QBrush", "QImage&", "QBrush*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBrush(QBrush&)", { "QBrush", "QBrush&", "QBrush*", 9, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBrush(QGradient&)", { "QBrush", "QGradient&", "QBrush*", 10, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBrush::plastiqMethods = {
    { "color()", { "color", "", "const QColor&", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "gradient()", { "gradient", "", "const QGradient*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isOpaque()", { "isOpaque", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "matrix()", { "matrix", "", "const QMatrix&", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColor(QColor&)", { "setColor", "QColor&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setColor(enum)", { "setColor", "Qt::GlobalColor", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setMatrix(QMatrix&)", { "setMatrix", "QMatrix&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStyle(enum)", { "setStyle", "Qt::BrushStyle", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTexture(QPixmap&)", { "setTexture", "QPixmap&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTextureImage(QImage&)", { "setTextureImage", "QImage&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTransform(QTransform&)", { "setTransform", "QTransform&", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "style()", { "style", "", "Qt::BrushStyle", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QBrush&)", { "swap", "QBrush&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "texture()", { "texture", "", "QPixmap", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textureImage()", { "textureImage", "", "QImage", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "transform()", { "transform", "", "QTransform", 15, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBrush::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQBrush::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQBrush::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQBrush::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQBrush::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQBrush::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QBrush", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQBrush::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQBrush::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QBrush *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QBrush(); break;
        case 1: o = new QBrush(Qt::BrushStyle(stack[1].s_int64)); break;
        case 2: o = new QBrush((*reinterpret_cast< QColor(*) >(stack[1].s_voidp))); break;
        case 3: o = new QBrush((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)),
                    Qt::BrushStyle(stack[2].s_int64)); break;
        case 4: o = new QBrush(Qt::GlobalColor(stack[1].s_int64),
                    Qt::BrushStyle(stack[2].s_int64)); break;
        case 5: o = new QBrush((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp))); break;
        case 6: o = new QBrush(Qt::GlobalColor(stack[1].s_int64),
                    (*reinterpret_cast< QPixmap(*) >(stack[2].s_voidp))); break;
        case 7: o = new QBrush((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp))); break;
        case 8: o = new QBrush((*reinterpret_cast< QImage(*) >(stack[1].s_voidp))); break;
        case 9: o = new QBrush((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp))); break;
        case 10: o = new QBrush((*reinterpret_cast< QGradient(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQBrush *p = new PlastiQQBrush();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQBrush *p = new PlastiQQBrush();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 16) {
            id -= 16;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QBrush *o = sc ? Q_NULLPTR : reinterpret_cast<QBrush*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QColor *_r = new QColor(o->color());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QColor";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { QGradient* _r = const_cast<QGradient*>(o->gradient());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QGradient"; } break;
        case 2: { bool _r = o->isOpaque();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: /* UNSUPPORTED_RETURN_VALUE o->matrix() | ret: `const QMatrix&` */ break;
        case 4: o->setColor((*reinterpret_cast< QColor(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setColor(Qt::GlobalColor(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setMatrix((*reinterpret_cast< QMatrix(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setStyle(Qt::BrushStyle(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setTexture((*reinterpret_cast< QPixmap(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setTextureImage((*reinterpret_cast< QImage(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setTransform((*reinterpret_cast< QTransform(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 11: { qint64 _r = o->style(); // HACK for Qt::BrushStyle 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 12: o->swap((*reinterpret_cast< QBrush(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 13: { /* COPY OBJECT */
            QPixmap *_r = new QPixmap(o->texture());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QPixmap";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { /* COPY OBJECT */
            QImage *_r = new QImage(o->textureImage());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QImage";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { /* COPY OBJECT */
            QTransform *_r = new QTransform(o->transform());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTransform";
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
        QBrush *o = reinterpret_cast<QBrush*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQBrush::~PlastiQQBrush() {
    QBrush* o = reinterpret_cast<QBrush*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

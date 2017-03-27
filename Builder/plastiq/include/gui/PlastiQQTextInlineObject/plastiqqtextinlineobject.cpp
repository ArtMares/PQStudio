#include "plastiqmethod.h"
#include "plastiqqtextinlineobject.h"

#include <QTextInlineObject> 
#include <QTextFormat>
#include <QRectF>

QHash<QByteArray, PlastiQMethod> PlastiQQTextInlineObject::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextInlineObject::plastiqMethods = {
    { "ascent()", { "ascent", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "descent()", { "descent", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "format()", { "format", "", "QTextFormat", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "formatIndex()", { "formatIndex", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "height()", { "height", "", "qreal", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rect()", { "rect", "", "QRectF", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAscent(double)", { "setAscent", "qreal", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDescent(double)", { "setDescent", "qreal", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWidth(double)", { "setWidth", "qreal", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textDirection()", { "textDirection", "", "Qt::LayoutDirection", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "textPosition()", { "textPosition", "", "int", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "qreal", 12, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextInlineObject::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextInlineObject::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextInlineObject::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextInlineObject::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextInlineObject::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextInlineObject::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextInlineObject", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextInlineObject::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextInlineObject::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextInlineObject *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextInlineObject *p = new PlastiQQTextInlineObject();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextInlineObject *p = new PlastiQQTextInlineObject();
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
        QTextInlineObject *o = sc ? Q_NULLPTR : reinterpret_cast<QTextInlineObject*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->ascent();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { double _r = o->descent();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { /* COPY OBJECT */
            QTextFormat *_r = new QTextFormat(o->format());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QTextFormat";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { int _r = o->formatIndex();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { double _r = o->height();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 5: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { /* COPY OBJECT */
            QRectF *_r = new QRectF(o->rect());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QRectF";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: o->setAscent(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setDescent(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 10: { qint64 _r = o->textDirection(); // HACK for Qt::LayoutDirection 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 11: { int _r = o->textPosition();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 12: { double _r = o->width();
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
        QTextInlineObject *o = reinterpret_cast<QTextInlineObject*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextInlineObject::~PlastiQQTextInlineObject() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

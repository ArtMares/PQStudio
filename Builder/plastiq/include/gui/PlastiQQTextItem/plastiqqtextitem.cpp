#include "plastiqmethod.h"
#include "plastiqqtextitem.h"

#include <QTextItem> 
#include <QFont>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQTextItem::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextItem::plastiqMethods = {
    { "ascent()", { "ascent", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "descent()", { "descent", "", "qreal", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "font()", { "font", "", "QFont", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "renderFlags()", { "renderFlags", "", "RenderFlags", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "qreal", 5, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextItem::plastiqConstants = {

    /* QTextItem::RenderFlag */
   { "RightToLeft", QTextItem::RightToLeft },
   { "Overline", QTextItem::Overline },
   { "Underline", QTextItem::Underline },
   { "StrikeOut", QTextItem::StrikeOut },
   { "Dummy", QTextItem::Dummy },

};

QVector<PlastiQMetaObject*> PlastiQQTextItem::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQTextItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQTextItem::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QTextItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextItem *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextItem *p = new PlastiQQTextItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextItem *p = new PlastiQQTextItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextItem *o = sc ? Q_NULLPTR : reinterpret_cast<QTextItem*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->ascent();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { double _r = o->descent();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 2: { /* COPY OBJECT */
            QFont *_r = new QFont(o->font());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QFont";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { qint64 _r = o->renderFlags(); // HACK for RenderFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 4: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { double _r = o->width();
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
        QTextItem *o = reinterpret_cast<QTextItem*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQTextItem::~PlastiQQTextItem() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

#include "plastiqmethod.h"
#include "plastiqqtextimageformat.h"

#include "gui/PlastiQQTextCharFormat/plastiqqtextcharformat.h"
#include <QTextImageFormat> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQTextImageFormat::plastiqConstructors = {
    { "QTextImageFormat()", { "QTextImageFormat", "", "QTextImageFormat*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextImageFormat::plastiqMethods = {
    { "height()", { "height", "", "qreal", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setHeight(double)", { "setHeight", "qreal", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setName(QString)", { "setName", "QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setWidth(double)", { "setWidth", "qreal", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "width()", { "width", "", "qreal", 6, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextImageFormat::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextImageFormat::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextImageFormat::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTextImageFormat::plastiqInherits = { &PlastiQQTextCharFormat::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTextImageFormat::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextImageFormat::plastiq_static_metaObject = {
    { &PlastiQQTextCharFormat::plastiq_static_metaObject, &plastiqInherits, "QTextImageFormat", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextImageFormat::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextImageFormat::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextImageFormat *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextImageFormat(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextImageFormat *p = new PlastiQQTextImageFormat();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextImageFormat *p = new PlastiQQTextImageFormat();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 7) {
            id -= 7;
            PlastiQQTextCharFormat::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextImageFormat *o = sc ? Q_NULLPTR : reinterpret_cast<QTextImageFormat*>(object->plastiq_data());

        switch(id) {
        case 0: { double _r = o->height();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 1: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: o->setHeight(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setWidth(stack[1].s_double);
                stack[0].type = PlastiQ::Void; break;
        case 6: { double _r = o->width();
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
        QTextImageFormat *o = reinterpret_cast<QTextImageFormat*>(object->plastiq_data());

        if(className == "QTextCharFormat") {
            stack[0].s_voidp = static_cast<QTextCharFormat*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTextImageFormat::~PlastiQQTextImageFormat() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

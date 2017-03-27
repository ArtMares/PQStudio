#include "plastiqmethod.h"
#include "plastiqqtextlistformat.h"

#include "gui/PlastiQQTextFormat/plastiqqtextformat.h"
#include <QTextListFormat> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQTextListFormat::plastiqConstructors = {
    { "QTextListFormat()", { "QTextListFormat", "", "QTextListFormat*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextListFormat::plastiqMethods = {
    { "indent()", { "indent", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "numberPrefix()", { "numberPrefix", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "numberSuffix()", { "numberSuffix", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIndent(int)", { "setIndent", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNumberPrefix(QString)", { "setNumberPrefix", "QString&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNumberSuffix(QString)", { "setNumberSuffix", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStyle(enum)", { "setStyle", "Style", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "style()", { "style", "", "Style", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTextListFormat::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTextListFormat::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTextListFormat::plastiqConstants = {

    /* QTextListFormat::Style */
   { "ListDisc", QTextListFormat::ListDisc },
   { "ListCircle", QTextListFormat::ListCircle },
   { "ListSquare", QTextListFormat::ListSquare },
   { "ListDecimal", QTextListFormat::ListDecimal },
   { "ListLowerAlpha", QTextListFormat::ListLowerAlpha },
   { "ListUpperAlpha", QTextListFormat::ListUpperAlpha },
   { "ListLowerRoman", QTextListFormat::ListLowerRoman },
   { "ListUpperRoman", QTextListFormat::ListUpperRoman },
   { "ListStyleUndefined", QTextListFormat::ListStyleUndefined },

};

QVector<PlastiQMetaObject*> PlastiQQTextListFormat::plastiqInherits = { &PlastiQQTextFormat::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTextListFormat::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTextListFormat::plastiq_static_metaObject = {
    { &PlastiQQTextFormat::plastiq_static_metaObject, &plastiqInherits, "QTextListFormat", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTextListFormat::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTextListFormat::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTextListFormat *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTextListFormat(); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTextListFormat *p = new PlastiQQTextListFormat();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTextListFormat *p = new PlastiQQTextListFormat();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            PlastiQQTextFormat::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTextListFormat *o = sc ? Q_NULLPTR : reinterpret_cast<QTextListFormat*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->indent();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { QString _r = o->numberPrefix();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { QString _r = o->numberSuffix();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: o->setIndent(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setNumberPrefix(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setNumberSuffix(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setStyle(QTextListFormat::Style(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: { qint64 _r = o->style(); // HACK for Style 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;

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
        QTextListFormat *o = reinterpret_cast<QTextListFormat*>(object->plastiq_data());

        if(className == "QTextFormat") {
            stack[0].s_voidp = static_cast<QTextFormat*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTextListFormat::~PlastiQQTextListFormat() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

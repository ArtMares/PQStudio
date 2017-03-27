#include "plastiqmethod.h"
#include "plastiqqfontinfo.h"

#include <QFontInfo> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQFontInfo::plastiqConstructors = {
    { "QFontInfo(QFont&)", { "QFontInfo", "QFont&", "QFontInfo*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFontInfo(QFontInfo&)", { "QFontInfo", "QFontInfo&", "QFontInfo*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFontInfo::plastiqMethods = {
    { "bold()", { "bold", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exactMatch()", { "exactMatch", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "family()", { "family", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fixedPitch()", { "fixedPitch", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "italic()", { "italic", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pixelSize()", { "pixelSize", "", "int", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pointSize()", { "pointSize", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pointSizeF()", { "pointSizeF", "", "qreal", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "style()", { "style", "", "QFont::Style", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "styleHint()", { "styleHint", "", "QFont::StyleHint", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "styleName()", { "styleName", "", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QFontInfo&)", { "swap", "QFontInfo&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "weight()", { "weight", "", "int", 12, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFontInfo::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQFontInfo::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQFontInfo::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQFontInfo::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQFontInfo::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQFontInfo::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QFontInfo", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFontInfo::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQFontInfo::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QFontInfo *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QFontInfo((*reinterpret_cast< QFont(*) >(stack[1].s_voidp))); break;
        case 1: o = new QFontInfo((*reinterpret_cast< QFontInfo(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQFontInfo *p = new PlastiQQFontInfo();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFontInfo *p = new PlastiQQFontInfo();
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
        QFontInfo *o = sc ? Q_NULLPTR : reinterpret_cast<QFontInfo*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->bold();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->exactMatch();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { QString _r = o->family();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { bool _r = o->fixedPitch();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->italic();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { int _r = o->pixelSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 6: { int _r = o->pointSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { double _r = o->pointSizeF();
                  stack[0].s_double = _r; stack[0].type = PlastiQ::Double; } break;
        case 8: { qint64 _r = o->style(); // HACK for QFont::Style 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 9: { qint64 _r = o->styleHint(); // HACK for QFont::StyleHint 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 10: { QString _r = o->styleName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: o->swap((*reinterpret_cast< QFontInfo(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 12: { int _r = o->weight();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

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
        QFontInfo *o = reinterpret_cast<QFontInfo*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQFontInfo::~PlastiQQFontInfo() {
    QFontInfo* o = reinterpret_cast<QFontInfo*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

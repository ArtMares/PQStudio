#include "plastiqmethod.h"
#include "plastiqqmimetype.h"

#include <QMimeType> 
#include <QStringList>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQMimeType::plastiqConstructors = {
    { "QMimeType()", { "QMimeType", "", "QMimeType*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMimeType(QMimeType&)", { "QMimeType", "QMimeType&", "QMimeType*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMimeType::plastiqMethods = {
    { "aliases()", { "aliases", "", "QStringList", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "allAncestors()", { "allAncestors", "", "QStringList", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "comment()", { "comment", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filterString()", { "filterString", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "genericIconName()", { "genericIconName", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "globPatterns()", { "globPatterns", "", "QStringList", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "iconName()", { "iconName", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "inherits(QString)", { "inherits", "QString&", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isDefault()", { "isDefault", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "parentMimeTypes()", { "parentMimeTypes", "", "QStringList", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "preferredSuffix()", { "preferredSuffix", "", "QString", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "suffixes()", { "suffixes", "", "QStringList", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QMimeType&)", { "swap", "QMimeType&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMimeType::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMimeType::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMimeType::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMimeType::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQMimeType::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMimeType::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QMimeType", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMimeType::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMimeType::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMimeType *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QMimeType(); break;
        case 1: o = new QMimeType((*reinterpret_cast< QMimeType(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMimeType *p = new PlastiQQMimeType();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMimeType *p = new PlastiQQMimeType();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 15) {
            id -= 15;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMimeType *o = sc ? Q_NULLPTR : reinterpret_cast<QMimeType*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->aliases());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->allAncestors());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { QString _r = o->comment();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { QString _r = o->filterString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { QString _r = o->genericIconName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->globPatterns());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { QString _r = o->iconName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { bool _r = o->inherits(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isDefault();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->parentMimeTypes());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { QString _r = o->preferredSuffix();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 13: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->suffixes());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: o->swap((*reinterpret_cast< QMimeType(*) >(stack[1].s_voidp)));
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
        QMimeType *o = reinterpret_cast<QMimeType*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQMimeType::~PlastiQQMimeType() {
    QMimeType* o = reinterpret_cast<QMimeType*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

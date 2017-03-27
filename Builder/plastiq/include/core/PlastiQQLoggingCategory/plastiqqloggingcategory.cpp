#include "plastiqmethod.h"
#include "plastiqqloggingcategory.h"

#include <QLoggingCategory> 

QHash<QByteArray, PlastiQMethod> PlastiQQLoggingCategory::plastiqConstructors = {
    { "QLoggingCategory(const char*)", { "QLoggingCategory", "char*", "QLoggingCategory*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLoggingCategory(const char*,QtMsgType)", { "QLoggingCategory", "char*,QtMsgType", "QLoggingCategory*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLoggingCategory::plastiqMethods = {
    { "categoryName()", { "categoryName", "", "const char*", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCriticalEnabled()", { "isCriticalEnabled", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isDebugEnabled()", { "isDebugEnabled", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEnabled(QtMsgType)", { "isEnabled", "QtMsgType", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isInfoEnabled()", { "isInfoEnabled", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isWarningEnabled()", { "isWarningEnabled", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setEnabled(QtMsgType,bool)", { "setEnabled", "QtMsgType,bool", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "defaultCategory()", { "defaultCategory", "", "QLoggingCategory*", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "installFilter(CategoryFilter)", { "installFilter", "CategoryFilter", "CategoryFilter", 8, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setFilterRules(QString)", { "setFilterRules", "QString&", "void", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLoggingCategory::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQLoggingCategory::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQLoggingCategory::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQLoggingCategory::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQLoggingCategory::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQLoggingCategory::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QLoggingCategory", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLoggingCategory::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQLoggingCategory::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QLoggingCategory *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QLoggingCategory(reinterpret_cast<const char*>(stack[1].s_voidp)); break;
        /*case 1: o = new QLoggingCategory(reinterpret_cast<const char*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_QtMsgType); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQLoggingCategory *p = new PlastiQQLoggingCategory();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLoggingCategory *p = new PlastiQQLoggingCategory();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 10) {
            id -= 10;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLoggingCategory *o = sc ? Q_NULLPTR : reinterpret_cast<QLoggingCategory*>(object->plastiq_data());

        switch(id) {
        case 0: { char* _r = const_cast<char*>(o->categoryName());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "char"; } break;
        case 1: { bool _r = o->isCriticalEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->isDebugEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: /* o->isEnabled(UNSUPPORTED_TYPE_QtMsgType) | ret: `bool` */ break;
        case 4: { bool _r = o->isInfoEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { bool _r = o->isWarningEnabled();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: /* o->setEnabled(UNSUPPORTED_TYPE_QtMsgType,
                    stack[2].s_bool) | ret: `void` */ break;
        case 7: { QLoggingCategory* _r = sc ? QLoggingCategory::defaultCategory() : o->defaultCategory();
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QLoggingCategory"; } break;
        case 8: /* o->installFilter((*reinterpret_cast< QLoggingCategory::CategoryFilter(*) >(stack[1].s_voidp))) | ret: `CategoryFilter` (INTERNAL CLASS) */ break;
        case 9: if(sc) { QLoggingCategory::setFilterRules(stack[1].s_string); } else { o->setFilterRules(stack[1].s_string); }
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
        QLoggingCategory *o = reinterpret_cast<QLoggingCategory*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQLoggingCategory::~PlastiQQLoggingCategory() {
    QLoggingCategory* o = reinterpret_cast<QLoggingCategory*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

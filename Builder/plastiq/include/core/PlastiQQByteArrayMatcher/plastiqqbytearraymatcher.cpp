#include "plastiqmethod.h"
#include "plastiqqbytearraymatcher.h"

#include <QByteArrayMatcher> 
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQByteArrayMatcher::plastiqConstructors = {
    { "QByteArrayMatcher()", { "QByteArrayMatcher", "", "QByteArrayMatcher*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QByteArrayMatcher(QByteArray)", { "QByteArrayMatcher", "QByteArray&", "QByteArrayMatcher*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QByteArrayMatcher(const char*,int)", { "QByteArrayMatcher", "char*,int", "QByteArrayMatcher*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QByteArrayMatcher(QByteArrayMatcher&)", { "QByteArrayMatcher", "QByteArrayMatcher&", "QByteArrayMatcher*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQByteArrayMatcher::plastiqMethods = {
    { "indexIn(QByteArray)", { "indexIn", "QByteArray&", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexIn(QByteArray,int)", { "indexIn", "QByteArray&,int", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexIn(const char*,int)", { "indexIn", "char*,int", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexIn(const char*,int,int)", { "indexIn", "char*,int,int", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pattern()", { "pattern", "", "QByteArray", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPattern(QByteArray)", { "setPattern", "QByteArray&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQByteArrayMatcher::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQByteArrayMatcher::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQByteArrayMatcher::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQByteArrayMatcher::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQByteArrayMatcher::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQByteArrayMatcher::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QByteArrayMatcher", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQByteArrayMatcher::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQByteArrayMatcher::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QByteArrayMatcher *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QByteArrayMatcher(); break;
        case 1: o = new QByteArrayMatcher(stack[1].s_bytearray); break;
        case 2: o = new QByteArrayMatcher(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int); break;
        case 3: o = new QByteArrayMatcher((*reinterpret_cast< QByteArrayMatcher(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQByteArrayMatcher *p = new PlastiQQByteArrayMatcher();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQByteArrayMatcher *p = new PlastiQQByteArrayMatcher();
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
        QByteArrayMatcher *o = sc ? Q_NULLPTR : reinterpret_cast<QByteArrayMatcher*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->indexIn(stack[1].s_bytearray);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { int _r = o->indexIn(stack[1].s_bytearray,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->indexIn(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->indexIn(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { QByteArray _r = o->pattern();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 5: o->setPattern(stack[1].s_bytearray);
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
        QByteArrayMatcher *o = reinterpret_cast<QByteArrayMatcher*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQByteArrayMatcher::~PlastiQQByteArrayMatcher() {
    QByteArrayMatcher* o = reinterpret_cast<QByteArrayMatcher*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

#include "plastiqmethod.h"
#include "plastiqqlatin1string.h"

#include <QLatin1String> 
#include <QLatin1Char>

QHash<QByteArray, PlastiQMethod> PlastiQQLatin1String::plastiqConstructors = {
    { "QLatin1String()", { "QLatin1String", "", "QLatin1String*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLatin1String(const char*)", { "QLatin1String", "char*", "QLatin1String*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLatin1String(const char*,int)", { "QLatin1String", "char*,int", "QLatin1String*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLatin1String(QByteArray)", { "QLatin1String", "QByteArray&", "QLatin1String*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLatin1String::plastiqMethods = {
    { "at(int)", { "at", "int", "QLatin1Char", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data()", { "data", "", "const char*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "latin1()", { "latin1", "", "const char*", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "left(int)", { "left", "int", "QLatin1String", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mid(int)", { "mid", "int", "QLatin1String", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mid(int,int)", { "mid", "int,int", "QLatin1String", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "right(int)", { "right", "int", "QLatin1String", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLatin1String::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQLatin1String::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQLatin1String::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQLatin1String::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQLatin1String::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQLatin1String::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QLatin1String", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLatin1String::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQLatin1String::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QLatin1String *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QLatin1String(); break;
        case 1: o = new QLatin1String(reinterpret_cast<const char*>(stack[1].s_voidp)); break;
        case 2: o = new QLatin1String(reinterpret_cast<const char*>(stack[1].s_voidp),
                    stack[2].s_int); break;
        case 3: o = new QLatin1String(stack[1].s_bytearray); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQLatin1String *p = new PlastiQQLatin1String();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLatin1String *p = new PlastiQQLatin1String();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLatin1String *o = sc ? Q_NULLPTR : reinterpret_cast<QLatin1String*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QLatin1Char *_r = new QLatin1Char(o->at(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLatin1Char";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { char* _r = const_cast<char*>(o->data());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "char"; } break;
        case 2: { char* _r = const_cast<char*>(o->latin1());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "char"; } break;
        case 3: { /* COPY OBJECT */
            QLatin1String *_r = new QLatin1String(o->left(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLatin1String";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QLatin1String *_r = new QLatin1String(o->mid(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLatin1String";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QLatin1String *_r = new QLatin1String(o->mid(stack[1].s_int,
                    stack[2].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLatin1String";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QLatin1String *_r = new QLatin1String(o->right(stack[1].s_int));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLatin1String";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: { int _r = o->size();
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
        QLatin1String *o = reinterpret_cast<QLatin1String*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQLatin1String::~PlastiQQLatin1String() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

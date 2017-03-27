#include "plastiqmethod.h"
#include "plastiqqmargins.h"

#include <QMargins> 

QHash<QByteArray, PlastiQMethod> PlastiQQMargins::plastiqConstructors = {
    { "QMargins()", { "QMargins", "", "QMargins*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMargins(int,int,int,int)", { "QMargins", "int,int,int,int", "QMargins*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMargins::plastiqMethods = {
    { "bottom()", { "bottom", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "left()", { "left", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "right()", { "right", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBottom(int)", { "setBottom", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLeft(int)", { "setLeft", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setRight(int)", { "setRight", "int", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setTop(int)", { "setTop", "int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "top()", { "top", "", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMargins::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMargins::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMargins::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMargins::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQMargins::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMargins::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QMargins", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMargins::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMargins::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMargins *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QMargins(); break;
        case 1: o = new QMargins(stack[1].s_int,
                    stack[2].s_int,
                    stack[3].s_int,
                    stack[4].s_int); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMargins *p = new PlastiQQMargins();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMargins *p = new PlastiQQMargins();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QMargins *o = sc ? Q_NULLPTR : reinterpret_cast<QMargins*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->bottom();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { int _r = o->left();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->right();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: o->setBottom(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setLeft(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setRight(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setTop(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: { int _r = o->top();
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
        QMargins *o = reinterpret_cast<QMargins*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQMargins::~PlastiQQMargins() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

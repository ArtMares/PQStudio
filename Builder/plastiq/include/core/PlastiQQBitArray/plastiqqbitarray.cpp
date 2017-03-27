#include "plastiqmethod.h"
#include "plastiqqbitarray.h"

#include <QBitArray> 

QHash<QByteArray, PlastiQMethod> PlastiQQBitArray::plastiqConstructors = {
    { "QBitArray()", { "QBitArray", "", "QBitArray*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBitArray(int)", { "QBitArray", "int", "QBitArray*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBitArray(int,bool)", { "QBitArray", "int,bool", "QBitArray*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBitArray(QBitArray&)", { "QBitArray", "QBitArray&", "QBitArray*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QBitArray(QBitArray&&)", { "QBitArray", "QBitArray&&", "QBitArray*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBitArray::plastiqMethods = {
    { "at(int)", { "at", "int", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clearBit(int)", { "clearBit", "int", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count(bool)", { "count", "bool", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fill(bool)", { "fill", "bool", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fill(bool,int)", { "fill", "bool,int", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fill(bool,int,int)", { "fill", "bool,int,int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNull()", { "isNull", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resize(int)", { "resize", "int", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBit(int)", { "setBit", "int", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setBit(int,bool)", { "setBit", "int,bool", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QBitArray&)", { "swap", "QBitArray&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "testBit(int)", { "testBit", "int", "bool", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toggleBit(int)", { "toggleBit", "int", "bool", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "truncate(int)", { "truncate", "int", "void", 17, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQBitArray::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQBitArray::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQBitArray::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQBitArray::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQBitArray::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQBitArray::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QBitArray", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQBitArray::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQBitArray::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QBitArray *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QBitArray(); break;
        case 1: o = new QBitArray(stack[1].s_int); break;
        case 2: o = new QBitArray(stack[1].s_int,
                    stack[2].s_bool); break;
        case 3: o = new QBitArray((*reinterpret_cast< QBitArray(*) >(stack[1].s_voidp))); break;
        case 4: o = new QBitArray((*reinterpret_cast< QBitArray(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQBitArray *p = new PlastiQQBitArray();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQBitArray *p = new PlastiQQBitArray();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 18) {
            id -= 18;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QBitArray *o = sc ? Q_NULLPTR : reinterpret_cast<QBitArray*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->at(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 2: o->clearBit(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 3: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->count(stack[1].s_bool);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { bool _r = o->fill(stack[1].s_bool);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { bool _r = o->fill(stack[1].s_bool,
                    stack[2].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: o->fill(stack[1].s_bool,
                    stack[2].s_int,
                    stack[3].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isNull();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: o->resize(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->setBit(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 12: o->setBit(stack[1].s_int,
                    stack[2].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 13: { int _r = o->size();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: o->swap((*reinterpret_cast< QBitArray(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 15: { bool _r = o->testBit(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r = o->toggleBit(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: o->truncate(stack[1].s_int);
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
        QBitArray *o = reinterpret_cast<QBitArray*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQBitArray::~PlastiQQBitArray() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

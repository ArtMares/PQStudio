#include "plastiqmethod.h"
#include "plastiqqkeyevent.h"

#include "gui/PlastiQQInputEvent/plastiqqinputevent.h"
#include <QKeyEvent> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQKeyEvent::plastiqConstructors = {
    { "QKeyEvent(Type,int,enum)", { "QKeyEvent", "Type,int,Qt::KeyboardModifiers", "QKeyEvent*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeyEvent(Type,int,enum,QString)", { "QKeyEvent", "Type,int,Qt::KeyboardModifiers,QString&", "QKeyEvent*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeyEvent(Type,int,enum,QString,bool)", { "QKeyEvent", "Type,int,Qt::KeyboardModifiers,QString&,bool", "QKeyEvent*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeyEvent(Type,int,enum,QString,bool,int)", { "QKeyEvent", "Type,int,Qt::KeyboardModifiers,QString&,bool,ushort", "QKeyEvent*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeyEvent(Type,int,enum,int,int,int)", { "QKeyEvent", "Type,int,Qt::KeyboardModifiers,quint32,quint32,quint32", "QKeyEvent*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeyEvent(Type,int,enum,int,int,int,QString)", { "QKeyEvent", "Type,int,Qt::KeyboardModifiers,quint32,quint32,quint32,QString&", "QKeyEvent*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeyEvent(Type,int,enum,int,int,int,QString,bool)", { "QKeyEvent", "Type,int,Qt::KeyboardModifiers,quint32,quint32,quint32,QString&,bool", "QKeyEvent*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QKeyEvent(Type,int,enum,int,int,int,QString,bool,int)", { "QKeyEvent", "Type,int,Qt::KeyboardModifiers,quint32,quint32,quint32,QString&,bool,ushort", "QKeyEvent*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQKeyEvent::plastiqMethods = {
    { "count()", { "count", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAutoRepeat()", { "isAutoRepeat", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "key()", { "key", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "matches(enum)", { "matches", "QKeySequence::StandardKey", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "modifiers()", { "modifiers", "", "Qt::KeyboardModifiers", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nativeModifiers()", { "nativeModifiers", "", "quint32", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nativeScanCode()", { "nativeScanCode", "", "quint32", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nativeVirtualKey()", { "nativeVirtualKey", "", "quint32", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "text()", { "text", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQKeyEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQKeyEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQKeyEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQKeyEvent::plastiqInherits = { &PlastiQQInputEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQKeyEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQKeyEvent::plastiq_static_metaObject = {
    { &PlastiQQInputEvent::plastiq_static_metaObject, &plastiqInherits, "QKeyEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQKeyEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQKeyEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QKeyEvent *o = Q_NULLPTR;

        switch(id) {
        /*case 0: o = new QKeyEvent(UNSUPPORTED_TYPE_Type,
                    stack[2].s_int,
                    Qt::KeyboardModifiers(stack[3].s_int64)); break;*/
        /*case 1: o = new QKeyEvent(UNSUPPORTED_TYPE_Type,
                    stack[2].s_int,
                    Qt::KeyboardModifiers(stack[3].s_int64),
                    stack[4].s_string); break;*/
        /*case 2: o = new QKeyEvent(UNSUPPORTED_TYPE_Type,
                    stack[2].s_int,
                    Qt::KeyboardModifiers(stack[3].s_int64),
                    stack[4].s_string,
                    stack[5].s_bool); break;*/
        /*case 3: o = new QKeyEvent(UNSUPPORTED_TYPE_Type,
                    stack[2].s_int,
                    Qt::KeyboardModifiers(stack[3].s_int64),
                    stack[4].s_string,
                    stack[5].s_bool,
                    stack[6].s_int); break;*/
        /*case 4: o = new QKeyEvent(UNSUPPORTED_TYPE_Type,
                    stack[2].s_int,
                    Qt::KeyboardModifiers(stack[3].s_int64),
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int); break;*/
        /*case 5: o = new QKeyEvent(UNSUPPORTED_TYPE_Type,
                    stack[2].s_int,
                    Qt::KeyboardModifiers(stack[3].s_int64),
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int,
                    stack[7].s_string); break;*/
        /*case 6: o = new QKeyEvent(UNSUPPORTED_TYPE_Type,
                    stack[2].s_int,
                    Qt::KeyboardModifiers(stack[3].s_int64),
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int,
                    stack[7].s_string,
                    stack[8].s_bool); break;*/
        /*case 7: o = new QKeyEvent(UNSUPPORTED_TYPE_Type,
                    stack[2].s_int,
                    Qt::KeyboardModifiers(stack[3].s_int64),
                    stack[4].s_int,
                    stack[5].s_int,
                    stack[6].s_int,
                    stack[7].s_string,
                    stack[8].s_bool,
                    stack[9].s_int); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQKeyEvent *p = new PlastiQQKeyEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQKeyEvent *p = new PlastiQQKeyEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 9) {
            id -= 9;
            PlastiQQInputEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QKeyEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QKeyEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->count();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { bool _r = o->isAutoRepeat();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { int _r = o->key();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { bool _r = o->matches(QKeySequence::StandardKey(stack[1].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { qint64 _r = o->modifiers(); // HACK for Qt::KeyboardModifiers 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: /* UNSUPPORTED_RETURN_VALUE o->nativeModifiers() | ret: `quint32` */ break;
        case 6: /* UNSUPPORTED_RETURN_VALUE o->nativeScanCode() | ret: `quint32` */ break;
        case 7: /* UNSUPPORTED_RETURN_VALUE o->nativeVirtualKey() | ret: `quint32` */ break;
        case 8: { QString _r = o->text();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

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
        QKeyEvent *o = reinterpret_cast<QKeyEvent*>(object->plastiq_data());

        if(className == "QInputEvent") {
            stack[0].s_voidp = static_cast<QInputEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQKeyEvent::~PlastiQQKeyEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

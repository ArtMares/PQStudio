#include "plastiqmethod.h"
#include "plastiqqsound.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QSound> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQSound::plastiqConstructors = {
    { "QSound(QString)", { "QSound", "QString&", "QSound*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSound(QString,QObject*)", { "QSound", "QString&,QObject*", "QSound*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSound::plastiqMethods = {
    { "fileName()", { "fileName", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFinished()", { "isFinished", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loops()", { "loops", "", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loopsRemaining()", { "loopsRemaining", "", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLoops(int)", { "setLoops", "int", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "play(QString)", { "play", "QString&", "void", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "play()", { "play", "", "void", 6, PlastiQMethod::Public, PlastiQMethod::Slot } },
    { "stop()", { "stop", "", "void", 7, PlastiQMethod::Public, PlastiQMethod::Slot } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSound::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSound::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSound::plastiqConstants = {

    /* QSound::Loop */
   { "Infinite", QSound::Infinite },

};

QVector<PlastiQMetaObject*> PlastiQQSound::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSound::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQSound::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QSound", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSound::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSound::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSound *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSound(stack[1].s_string); break;
        case 1: o = new QSound(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSound *p = new PlastiQQSound();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSound *p = new PlastiQQSound();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSound *o = sc ? Q_NULLPTR : reinterpret_cast<QSound*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->fileName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { bool _r = o->isFinished();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { int _r = o->loops();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->loopsRemaining();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: o->setLoops(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 5: if(sc) { QSound::play(stack[1].s_string); } else { o->play(stack[1].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 6: o->play();
                stack[0].type = PlastiQ::Void; break;
        case 7: o->stop();
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QSound *o = reinterpret_cast<QSound*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QSound *o = reinterpret_cast<QSound*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QSound *o = reinterpret_cast<QSound*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QSound *o = reinterpret_cast<QSound*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSound::~PlastiQQSound() {
    QSound* o = reinterpret_cast<QSound*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

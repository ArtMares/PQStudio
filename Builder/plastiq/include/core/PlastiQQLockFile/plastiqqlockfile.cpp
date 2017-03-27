#include "plastiqmethod.h"
#include "plastiqqlockfile.h"

#include <QLockFile> 

QHash<QByteArray, PlastiQMethod> PlastiQQLockFile::plastiqConstructors = {
    { "QLockFile(QString)", { "QLockFile", "QString&", "QLockFile*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLockFile::plastiqMethods = {
    { "error()", { "error", "", "LockError", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "getLockInfo(qint64*,QString*,QString*)", { "getLockInfo", "qint64*,QString*,QString*", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isLocked()", { "isLocked", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lock()", { "lock", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeStaleLockFile()", { "removeStaleLockFile", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setStaleLockTime(int)", { "setStaleLockTime", "int", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "staleLockTime()", { "staleLockTime", "", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tryLock()", { "tryLock", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "tryLock(int)", { "tryLock", "int", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unlock()", { "unlock", "", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLockFile::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQLockFile::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQLockFile::plastiqConstants = {

    /* QLockFile::LockError */
   { "NoError", QLockFile::NoError },
   { "LockFailedError", QLockFile::LockFailedError },
   { "PermissionError", QLockFile::PermissionError },
   { "UnknownError", QLockFile::UnknownError },

};

QVector<PlastiQMetaObject*> PlastiQQLockFile::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQLockFile::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQLockFile::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QLockFile", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLockFile::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQLockFile::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QLockFile *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QLockFile(stack[1].s_string); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQLockFile *p = new PlastiQQLockFile();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLockFile *p = new PlastiQQLockFile();
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
        QLockFile *o = sc ? Q_NULLPTR : reinterpret_cast<QLockFile*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->error(); // HACK for LockError 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { bool _r = o->getLockInfo(reinterpret_cast<qint64*>(stack[1].s_voidp),
                    reinterpret_cast<QString*>(stack[2].s_voidp),
                    reinterpret_cast<QString*>(stack[3].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->isLocked();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->lock();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->removeStaleLockFile();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: o->setStaleLockTime(stack[1].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 6: { int _r = o->staleLockTime();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { bool _r = o->tryLock();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->tryLock(stack[1].s_int);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: o->unlock();
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
        QLockFile *o = reinterpret_cast<QLockFile*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQLockFile::~PlastiQQLockFile() {
    QLockFile* o = reinterpret_cast<QLockFile*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

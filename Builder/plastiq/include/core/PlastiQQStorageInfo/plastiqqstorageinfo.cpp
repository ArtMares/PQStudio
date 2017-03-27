#include "plastiqmethod.h"
#include "plastiqqstorageinfo.h"

#include <QStorageInfo> 
#include <QByteArray>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQStorageInfo::plastiqConstructors = {
    { "QStorageInfo()", { "QStorageInfo", "", "QStorageInfo*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStorageInfo(QString)", { "QStorageInfo", "QString&", "QStorageInfo*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStorageInfo(QDir&)", { "QStorageInfo", "QDir&", "QStorageInfo*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStorageInfo(QStorageInfo&)", { "QStorageInfo", "QStorageInfo&", "QStorageInfo*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStorageInfo::plastiqMethods = {
    { "blockSize()", { "blockSize", "", "int", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bytesAvailable()", { "bytesAvailable", "", "qint64", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bytesFree()", { "bytesFree", "", "qint64", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bytesTotal()", { "bytesTotal", "", "qint64", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "device()", { "device", "", "QByteArray", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "displayName()", { "displayName", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileSystemType()", { "fileSystemType", "", "QByteArray", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isReadOnly()", { "isReadOnly", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isReady()", { "isReady", "", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRoot()", { "isRoot", "", "bool", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "name()", { "name", "", "QString", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "refresh()", { "refresh", "", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rootPath()", { "rootPath", "", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPath(QString)", { "setPath", "QString&", "void", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QStorageInfo&)", { "swap", "QStorageInfo&", "void", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "root()", { "root", "", "QStorageInfo", 16, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStorageInfo::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStorageInfo::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStorageInfo::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQStorageInfo::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQStorageInfo::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStorageInfo::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QStorageInfo", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStorageInfo::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStorageInfo::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStorageInfo *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStorageInfo(); break;
        case 1: o = new QStorageInfo(stack[1].s_string); break;
        case 2: o = new QStorageInfo((*reinterpret_cast< QDir(*) >(stack[1].s_voidp))); break;
        case 3: o = new QStorageInfo((*reinterpret_cast< QStorageInfo(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStorageInfo *p = new PlastiQQStorageInfo();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStorageInfo *p = new PlastiQQStorageInfo();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 17) {
            id -= 17;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStorageInfo *o = sc ? Q_NULLPTR : reinterpret_cast<QStorageInfo*>(object->plastiq_data());

        switch(id) {
        case 0: { int _r = o->blockSize();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 1: { long _r = o->bytesAvailable();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 2: { long _r = o->bytesFree();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 3: { long _r = o->bytesTotal();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 4: { QByteArray _r = o->device();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 5: { QString _r = o->displayName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: { QByteArray _r = o->fileSystemType();
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 7: { bool _r = o->isReadOnly();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->isReady();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: { bool _r = o->isRoot();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 10: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { QString _r = o->name();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 12: o->refresh();
                stack[0].type = PlastiQ::Void; break;
        case 13: { QString _r = o->rootPath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: o->setPath(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 15: o->swap((*reinterpret_cast< QStorageInfo(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 16: { /* COPY OBJECT */
            QStorageInfo *_r = sc ? new QStorageInfo(QStorageInfo::root()) : new QStorageInfo(o->root());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStorageInfo";
            stack[0].type = PlastiQ::QtObject;
        } break;

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
        QStorageInfo *o = reinterpret_cast<QStorageInfo*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQStorageInfo::~PlastiQQStorageInfo() {
    QStorageInfo* o = reinterpret_cast<QStorageInfo*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

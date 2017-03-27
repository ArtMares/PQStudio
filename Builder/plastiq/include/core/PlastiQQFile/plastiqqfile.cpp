#include "plastiqmethod.h"
#include "plastiqqfile.h"

#include "core/PlastiQQFileDevice/plastiqqfiledevice.h"
#include <QFile> 
#include <QString>
#include <QByteArray>

QHash<QByteArray, PlastiQMethod> PlastiQQFile::plastiqConstructors = {
    { "QFile()", { "QFile", "", "QFile*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFile(QString)", { "QFile", "QString&", "QFile*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFile(QObject*)", { "QFile", "QObject*", "QFile*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFile(QString,QObject*)", { "QFile", "QString&,QObject*", "QFile*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFile::plastiqMethods = {
    { "copy(QString)", { "copy", "QString&", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exists()", { "exists", "", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "link(QString)", { "link", "QString&", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "open(FILE*,OpenMode)", { "open", "FILE*,OpenMode", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "open(FILE*,OpenMode,FileHandleFlags)", { "open", "FILE*,OpenMode,FileHandleFlags", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "open(int,OpenMode)", { "open", "int,OpenMode", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "open(int,OpenMode,FileHandleFlags)", { "open", "int,OpenMode,FileHandleFlags", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove()", { "remove", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rename(QString)", { "rename", "QString&", "bool", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFileName(QString)", { "setFileName", "QString&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "symLinkTarget()", { "symLinkTarget", "", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "copy(QString,QString)", { "copy", "QString&,QString&", "bool", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "decodeName(QByteArray)", { "decodeName", "QByteArray&", "QString", 12, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "decodeName(const char*)", { "decodeName", "char*", "QString", 13, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "encodeName(QString)", { "encodeName", "QString&", "QByteArray", 14, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "exists(QString)", { "exists", "QString&", "bool", 15, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "link(QString,QString)", { "link", "QString&,QString&", "bool", 16, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "permissions(QString)", { "permissions", "QString&", "Permissions", 17, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "remove(QString)", { "remove", "QString&", "bool", 18, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "rename(QString,QString)", { "rename", "QString&,QString&", "bool", 19, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "resize(QString,long)", { "resize", "QString&,qint64", "bool", 20, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setPermissions(QString,Permissions)", { "setPermissions", "QString&,Permissions", "bool", 21, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "symLinkTarget(QString)", { "symLinkTarget", "QString&", "QString", 22, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFile::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQFile::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQFile::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQFile::plastiqInherits = { &PlastiQQFileDevice::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQFile::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQFile::plastiq_static_metaObject = {
    { &PlastiQQFileDevice::plastiq_static_metaObject, &plastiqInherits, "QFile", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFile::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQFile::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QFile *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QFile(); break;
        case 1: o = new QFile(stack[1].s_string); break;
        case 2: o = new QFile(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 3: o = new QFile(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQFile *p = new PlastiQQFile();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFile *p = new PlastiQQFile();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 23) {
            id -= 23;
            PlastiQQFileDevice::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFile *o = sc ? Q_NULLPTR : reinterpret_cast<QFile*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->copy(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->exists();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->link(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: /* o->open(reinterpret_cast<FILE*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_OpenMode) | ret: `bool` */ break;
        case 4: /* o->open(reinterpret_cast<FILE*>(stack[1].s_voidp),
                    UNSUPPORTED_TYPE_OpenMode,
                    UNSUPPORTED_TYPE_FileHandleFlags) | ret: `bool` */ break;
        case 5: /* o->open(stack[1].s_int,
                    UNSUPPORTED_TYPE_OpenMode) | ret: `bool` */ break;
        case 6: /* o->open(stack[1].s_int,
                    UNSUPPORTED_TYPE_OpenMode,
                    UNSUPPORTED_TYPE_FileHandleFlags) | ret: `bool` */ break;
        case 7: { bool _r = o->remove();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { bool _r = o->rename(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 9: o->setFileName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 10: { QString _r = o->symLinkTarget();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: { bool _r = sc ? QFile::copy(stack[1].s_string,
                    stack[2].s_string) : o->copy(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { QString _r = sc ? QFile::decodeName(stack[1].s_bytearray) : o->decodeName(stack[1].s_bytearray);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 13: { QString _r = sc ? QFile::decodeName(reinterpret_cast<const char*>(stack[1].s_voidp)) : o->decodeName(reinterpret_cast<const char*>(stack[1].s_voidp));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: { QByteArray _r = sc ? QFile::encodeName(stack[1].s_string) : o->encodeName(stack[1].s_string);
                  stack[0].s_bytearray = _r; stack[0].type = PlastiQ::ByteArray; } break;
        case 15: { bool _r = sc ? QFile::exists(stack[1].s_string) : o->exists(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r = sc ? QFile::link(stack[1].s_string,
                    stack[2].s_string) : o->link(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: /* UNSUPPORTED_RETURN_VALUE o->permissions(stack[1].s_string) | ret: `Permissions` */ break;
        case 18: { bool _r = sc ? QFile::remove(stack[1].s_string) : o->remove(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r = sc ? QFile::rename(stack[1].s_string,
                    stack[2].s_string) : o->rename(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { bool _r = sc ? QFile::resize(stack[1].s_string,
                    stack[2].s_long) : o->resize(stack[1].s_string,
                    stack[2].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: /* o->setPermissions(stack[1].s_string,
                    UNSUPPORTED_TYPE_Permissions) | ret: `bool` */ break;
        case 22: { QString _r = sc ? QFile::symLinkTarget(stack[1].s_string) : o->symLinkTarget(stack[1].s_string);
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
        QFile *o = reinterpret_cast<QFile*>(object->plastiq_data());

        if(className == "QFileDevice") {
            stack[0].s_voidp = static_cast<QFileDevice*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQFile::~PlastiQQFile() {
    QFile* o = reinterpret_cast<QFile*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

#include "plastiqmethod.h"
#include "plastiqqfileinfo.h"

#include <QFileInfo> 
#include <QDir>
#include <QString>
#include <QDateTime>

QHash<QByteArray, PlastiQMethod> PlastiQQFileInfo::plastiqConstructors = {
    { "QFileInfo()", { "QFileInfo", "", "QFileInfo*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFileInfo(QString)", { "QFileInfo", "QString&", "QFileInfo*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFileInfo(QFile&)", { "QFileInfo", "QFile&", "QFileInfo*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFileInfo(QDir&,QString)", { "QFileInfo", "QDir&,QString&", "QFileInfo*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFileInfo(QFileInfo&)", { "QFileInfo", "QFileInfo&", "QFileInfo*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFileInfo::plastiqMethods = {
    { "absoluteDir()", { "absoluteDir", "", "QDir", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "absoluteFilePath()", { "absoluteFilePath", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "absolutePath()", { "absolutePath", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "baseName()", { "baseName", "", "QString", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "bundleName()", { "bundleName", "", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "caching()", { "caching", "", "bool", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canonicalFilePath()", { "canonicalFilePath", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canonicalPath()", { "canonicalPath", "", "QString", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "completeBaseName()", { "completeBaseName", "", "QString", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "completeSuffix()", { "completeSuffix", "", "QString", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "created()", { "created", "", "QDateTime", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dir()", { "dir", "", "QDir", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exists()", { "exists", "", "bool", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileName()", { "fileName", "", "QString", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filePath()", { "filePath", "", "QString", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "group()", { "group", "", "QString", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "groupId()", { "groupId", "", "uint", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAbsolute()", { "isAbsolute", "", "bool", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isBundle()", { "isBundle", "", "bool", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isDir()", { "isDir", "", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isExecutable()", { "isExecutable", "", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isFile()", { "isFile", "", "bool", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isHidden()", { "isHidden", "", "bool", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNativePath()", { "isNativePath", "", "bool", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isReadable()", { "isReadable", "", "bool", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRelative()", { "isRelative", "", "bool", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRoot()", { "isRoot", "", "bool", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isSymLink()", { "isSymLink", "", "bool", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isWritable()", { "isWritable", "", "bool", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastModified()", { "lastModified", "", "QDateTime", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastRead()", { "lastRead", "", "QDateTime", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "makeAbsolute()", { "makeAbsolute", "", "bool", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "owner()", { "owner", "", "QString", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ownerId()", { "ownerId", "", "uint", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "path()", { "path", "", "QString", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "permission(QFile::Permissions)", { "permission", "QFile::Permissions", "bool", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "permissions()", { "permissions", "", "QFile::Permissions", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "refresh()", { "refresh", "", "void", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCaching(bool)", { "setCaching", "bool", "void", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFile(QString)", { "setFile", "QString&", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFile(QFile&)", { "setFile", "QFile&", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFile(QDir&,QString)", { "setFile", "QDir&,QString&", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "qint64", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "suffix()", { "suffix", "", "QString", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QFileInfo&)", { "swap", "QFileInfo&", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "symLinkTarget()", { "symLinkTarget", "", "QString", 45, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exists(QString)", { "exists", "QString&", "bool", 46, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFileInfo::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQFileInfo::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQFileInfo::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQFileInfo::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQFileInfo::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQFileInfo::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QFileInfo", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFileInfo::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQFileInfo::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QFileInfo *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QFileInfo(); break;
        case 1: o = new QFileInfo(stack[1].s_string); break;
        case 2: o = new QFileInfo((*reinterpret_cast< QFile(*) >(stack[1].s_voidp))); break;
        case 3: o = new QFileInfo((*reinterpret_cast< QDir(*) >(stack[1].s_voidp)),
                    stack[2].s_string); break;
        case 4: o = new QFileInfo((*reinterpret_cast< QFileInfo(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQFileInfo *p = new PlastiQQFileInfo();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFileInfo *p = new PlastiQQFileInfo();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 47) {
            id -= 47;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFileInfo *o = sc ? Q_NULLPTR : reinterpret_cast<QFileInfo*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QDir *_r = new QDir(o->absoluteDir());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDir";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { QString _r = o->absoluteFilePath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { QString _r = o->absolutePath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { QString _r = o->baseName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { QString _r = o->bundleName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { bool _r = o->caching();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 6: { QString _r = o->canonicalFilePath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: { QString _r = o->canonicalPath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 8: { QString _r = o->completeBaseName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 9: { QString _r = o->completeSuffix();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->created());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 11: { /* COPY OBJECT */
            QDir *_r = new QDir(o->dir());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDir";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: { bool _r = o->exists();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { QString _r = o->fileName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 14: { QString _r = o->filePath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 15: { QString _r = o->group();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 16: { long _r = o->groupId();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 17: { bool _r = o->isAbsolute();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { bool _r = o->isBundle();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 19: { bool _r = o->isDir();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { bool _r = o->isExecutable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { bool _r = o->isFile();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 22: { bool _r = o->isHidden();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 23: { bool _r = o->isNativePath();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: { bool _r = o->isReadable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 25: { bool _r = o->isRelative();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 26: { bool _r = o->isRoot();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 27: { bool _r = o->isSymLink();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 28: { bool _r = o->isWritable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 29: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->lastModified());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 30: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->lastRead());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 31: { bool _r = o->makeAbsolute();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 32: { QString _r = o->owner();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 33: { long _r = o->ownerId();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 34: { QString _r = o->path();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 35: /* o->permission(UNSUPPORTED_TYPE_QFile::Permissions) | ret: `bool` */ break;
        case 36: /* o->permissions() | ret: `QFile::Permissions` */ break;
        case 37: o->refresh();
                stack[0].type = PlastiQ::Void; break;
        case 38: o->setCaching(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 39: o->setFile(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setFile((*reinterpret_cast< QFile(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setFile((*reinterpret_cast< QDir(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 42: { long _r = o->size();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 43: { QString _r = o->suffix();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 44: o->swap((*reinterpret_cast< QFileInfo(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 45: { QString _r = o->symLinkTarget();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 46: { bool _r = sc ? QFileInfo::exists(stack[1].s_string) : o->exists(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;

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
        QFileInfo *o = reinterpret_cast<QFileInfo*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQFileInfo::~PlastiQQFileInfo() {
    QFileInfo* o = reinterpret_cast<QFileInfo*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

#include "plastiqmethod.h"
#include "plastiqqdir.h"

#include <QDir> 
#include <QString>
#include <QFileInfoList>
#include <QStringList>
#include <QChar>

QHash<QByteArray, PlastiQMethod> PlastiQQDir::plastiqConstructors = {
    { "QDir(QDir&)", { "QDir", "QDir&", "QDir*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDir()", { "QDir", "", "QDir*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDir(QString)", { "QDir", "QString&", "QDir*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDir(QString,QString)", { "QDir", "QString&,QString&", "QDir*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDir(QString,QString,enum)", { "QDir", "QString&,QString&,SortFlags", "QDir*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QDir(QString,QString,enum,enum)", { "QDir", "QString&,QString&,SortFlags,Filters", "QDir*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDir::plastiqMethods = {
    { "absoluteFilePath(QString)", { "absoluteFilePath", "QString&", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "absolutePath()", { "absolutePath", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canonicalPath()", { "canonicalPath", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cd(QString)", { "cd", "QString&", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "cdUp()", { "cdUp", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "count()", { "count", "", "uint", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "dirName()", { "dirName", "", "QString", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "entryInfoList(QStringList&)", { "entryInfoList", "QStringList&", "QFileInfoList", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "entryInfoList(QStringList&,enum)", { "entryInfoList", "QStringList&,Filters", "QFileInfoList", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "entryInfoList(QStringList&,enum,enum)", { "entryInfoList", "QStringList&,Filters,SortFlags", "QFileInfoList", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "entryInfoList()", { "entryInfoList", "", "QFileInfoList", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "entryInfoList(enum)", { "entryInfoList", "Filters", "QFileInfoList", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "entryInfoList(enum,enum)", { "entryInfoList", "Filters,SortFlags", "QFileInfoList", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "entryList(QStringList&)", { "entryList", "QStringList&", "QStringList", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "entryList(QStringList&,enum)", { "entryList", "QStringList&,Filters", "QStringList", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "entryList(QStringList&,enum,enum)", { "entryList", "QStringList&,Filters,SortFlags", "QStringList", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "entryList()", { "entryList", "", "QStringList", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "entryList(enum)", { "entryList", "Filters", "QStringList", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "entryList(enum,enum)", { "entryList", "Filters,SortFlags", "QStringList", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exists(QString)", { "exists", "QString&", "bool", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "exists()", { "exists", "", "bool", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filePath(QString)", { "filePath", "QString&", "QString", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filter()", { "filter", "", "Filters", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isAbsolute()", { "isAbsolute", "", "bool", 23, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isReadable()", { "isReadable", "", "bool", 24, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRelative()", { "isRelative", "", "bool", 25, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isRoot()", { "isRoot", "", "bool", 26, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "makeAbsolute()", { "makeAbsolute", "", "bool", 27, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mkdir(QString)", { "mkdir", "QString&", "bool", 28, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mkpath(QString)", { "mkpath", "QString&", "bool", 29, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "nameFilters()", { "nameFilters", "", "QStringList", 30, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "path()", { "path", "", "QString", 31, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "refresh()", { "refresh", "", "void", 32, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "relativeFilePath(QString)", { "relativeFilePath", "QString&", "QString", 33, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QString)", { "remove", "QString&", "bool", 34, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeRecursively()", { "removeRecursively", "", "bool", 35, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rename(QString,QString)", { "rename", "QString&,QString&", "bool", 36, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rmdir(QString)", { "rmdir", "QString&", "bool", 37, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "rmpath(QString)", { "rmpath", "QString&", "bool", 38, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFilter(enum)", { "setFilter", "Filters", "void", 39, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNameFilters(QStringList&)", { "setNameFilters", "QStringList&", "void", 40, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPath(QString)", { "setPath", "QString&", "void", 41, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setSorting(enum)", { "setSorting", "SortFlags", "void", 42, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sorting()", { "sorting", "", "SortFlags", 43, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QDir&)", { "swap", "QDir&", "void", 44, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addSearchPath(QString,QString)", { "addSearchPath", "QString&,QString&", "void", 45, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "cleanPath(QString)", { "cleanPath", "QString&", "QString", 46, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "current()", { "current", "", "QDir", 47, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "currentPath()", { "currentPath", "", "QString", 48, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "drives()", { "drives", "", "QFileInfoList", 49, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "fromNativeSeparators(QString)", { "fromNativeSeparators", "QString&", "QString", 50, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "home()", { "home", "", "QDir", 51, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "homePath()", { "homePath", "", "QString", 52, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isAbsolutePath(QString)", { "isAbsolutePath", "QString&", "bool", 53, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "isRelativePath(QString)", { "isRelativePath", "QString&", "bool", 54, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "listSeparator()", { "listSeparator", "", "QChar", 55, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "match(QString,QString)", { "match", "QString&,QString&", "bool", 56, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "match(QStringList&,QString)", { "match", "QStringList&,QString&", "bool", 57, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "root()", { "root", "", "QDir", 58, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "rootPath()", { "rootPath", "", "QString", 59, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "searchPaths(QString)", { "searchPaths", "QString&", "QStringList", 60, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "separator()", { "separator", "", "QChar", 61, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setCurrent(QString)", { "setCurrent", "QString&", "bool", 62, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setSearchPaths(QString,QStringList&)", { "setSearchPaths", "QString&,QStringList&", "void", 63, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "temp()", { "temp", "", "QDir", 64, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "tempPath()", { "tempPath", "", "QString", 65, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "toNativeSeparators(QString)", { "toNativeSeparators", "QString&", "QString", 66, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDir::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDir::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDir::plastiqConstants = {

    /* QDir::Filter */
   { "Dirs", QDir::Dirs },
   { "Files", QDir::Files },
   { "Drives", QDir::Drives },
   { "NoSymLinks", QDir::NoSymLinks },
   { "AllEntries", QDir::AllEntries },
   { "TypeMask", QDir::TypeMask },
   { "Readable", QDir::Readable },
   { "Writable", QDir::Writable },
   { "Executable", QDir::Executable },
   { "PermissionMask", QDir::PermissionMask },
   { "Modified", QDir::Modified },
   { "Hidden", QDir::Hidden },
   { "System", QDir::System },
   { "AccessMask", QDir::AccessMask },
   { "AllDirs", QDir::AllDirs },
   { "CaseSensitive", QDir::CaseSensitive },
   { "NoDot", QDir::NoDot },
   { "NoDotDot", QDir::NoDotDot },
   { "NoDotAndDotDot", QDir::NoDotAndDotDot },
   { "NoFilter", QDir::NoFilter },

    /* QDir::SortFlag */
   { "Name", QDir::Name },
   { "Time", QDir::Time },
   { "Size", QDir::Size },
   { "Unsorted", QDir::Unsorted },
   { "SortByMask", QDir::SortByMask },
   { "DirsFirst", QDir::DirsFirst },
   { "Reversed", QDir::Reversed },
   { "IgnoreCase", QDir::IgnoreCase },
   { "DirsLast", QDir::DirsLast },
   { "LocaleAware", QDir::LocaleAware },
   { "Type", QDir::Type },
   { "NoSort", QDir::NoSort },

};

QVector<PlastiQMetaObject*> PlastiQQDir::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQDir::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQDir::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QDir", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDir::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDir::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDir *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QDir((*reinterpret_cast< QDir(*) >(stack[1].s_voidp))); break;
        case 1: o = new QDir(); break;
        case 2: o = new QDir(stack[1].s_string); break;
        case 3: o = new QDir(stack[1].s_string,
                    stack[2].s_string); break;
        case 4: o = new QDir(stack[1].s_string,
                    stack[2].s_string,
                    QDir::SortFlags(stack[3].s_int64)); break;
        case 5: o = new QDir(stack[1].s_string,
                    stack[2].s_string,
                    QDir::SortFlags(stack[3].s_int64),
                    QDir::Filters(stack[4].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDir *p = new PlastiQQDir();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDir *p = new PlastiQQDir();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 67) {
            id -= 67;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QDir *o = sc ? Q_NULLPTR : reinterpret_cast<QDir*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->absoluteFilePath(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = o->absolutePath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { QString _r = o->canonicalPath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { bool _r = o->cd(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->cdUp();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { long _r = o->count();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 6: { QString _r = o->dirName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 7: /* UNSUPPORTED_RETURN_VALUE o->entryInfoList((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp))) | ret: `QFileInfoList` */ break;
        case 8: /* UNSUPPORTED_RETURN_VALUE o->entryInfoList((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)),
                    QDir::Filters(stack[2].s_int64)) | ret: `QFileInfoList` */ break;
        case 9: /* UNSUPPORTED_RETURN_VALUE o->entryInfoList((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)),
                    QDir::Filters(stack[2].s_int64),
                    QDir::SortFlags(stack[3].s_int64)) | ret: `QFileInfoList` */ break;
        case 10: /* UNSUPPORTED_RETURN_VALUE o->entryInfoList() | ret: `QFileInfoList` */ break;
        case 11: /* UNSUPPORTED_RETURN_VALUE o->entryInfoList(QDir::Filters(stack[1].s_int64)) | ret: `QFileInfoList` */ break;
        case 12: /* UNSUPPORTED_RETURN_VALUE o->entryInfoList(QDir::Filters(stack[1].s_int64),
                    QDir::SortFlags(stack[2].s_int64)) | ret: `QFileInfoList` */ break;
        case 13: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->entryList((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 14: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->entryList((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)),
                    QDir::Filters(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 15: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->entryList((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)),
                    QDir::Filters(stack[2].s_int64),
                    QDir::SortFlags(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 16: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->entryList());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 17: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->entryList(QDir::Filters(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 18: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->entryList(QDir::Filters(stack[1].s_int64),
                    QDir::SortFlags(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: { bool _r = o->exists(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 20: { bool _r = o->exists();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 21: { QString _r = o->filePath(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 22: { qint64 _r = o->filter(); // HACK for Filters 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 23: { bool _r = o->isAbsolute();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 24: { bool _r = o->isReadable();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 25: { bool _r = o->isRelative();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 26: { bool _r = o->isRoot();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 27: { bool _r = o->makeAbsolute();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 28: { bool _r = o->mkdir(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 29: { bool _r = o->mkpath(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 30: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->nameFilters());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 31: { QString _r = o->path();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 32: o->refresh();
                stack[0].type = PlastiQ::Void; break;
        case 33: { QString _r = o->relativeFilePath(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 34: { bool _r = o->remove(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 35: { bool _r = o->removeRecursively();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 36: { bool _r = o->rename(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 37: { bool _r = o->rmdir(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 38: { bool _r = o->rmpath(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 39: o->setFilter(QDir::Filters(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 40: o->setNameFilters((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 41: o->setPath(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 42: o->setSorting(QDir::SortFlags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 43: { qint64 _r = o->sorting(); // HACK for SortFlags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 44: o->swap((*reinterpret_cast< QDir(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 45: if(sc) { QDir::addSearchPath(stack[1].s_string,
                    stack[2].s_string); } else { o->addSearchPath(stack[1].s_string,
                    stack[2].s_string); }
                stack[0].type = PlastiQ::Void; break;
        case 46: { QString _r = sc ? QDir::cleanPath(stack[1].s_string) : o->cleanPath(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 47: { /* COPY OBJECT */
            QDir *_r = sc ? new QDir(QDir::current()) : new QDir(o->current());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDir";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 48: { QString _r = sc ? QDir::currentPath() : o->currentPath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 49: /* UNSUPPORTED_RETURN_VALUE o->drives() | ret: `QFileInfoList` */ break;
        case 50: { QString _r = sc ? QDir::fromNativeSeparators(stack[1].s_string) : o->fromNativeSeparators(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 51: { /* COPY OBJECT */
            QDir *_r = sc ? new QDir(QDir::home()) : new QDir(o->home());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDir";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 52: { QString _r = sc ? QDir::homePath() : o->homePath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 53: { bool _r = sc ? QDir::isAbsolutePath(stack[1].s_string) : o->isAbsolutePath(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 54: { bool _r = sc ? QDir::isRelativePath(stack[1].s_string) : o->isRelativePath(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 55: { /* COPY OBJECT */
            QChar *_r = sc ? new QChar(QDir::listSeparator()) : new QChar(o->listSeparator());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 56: { bool _r = sc ? QDir::match(stack[1].s_string,
                    stack[2].s_string) : o->match(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 57: { bool _r = sc ? QDir::match((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)),
                    stack[2].s_string) : o->match((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)),
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 58: { /* COPY OBJECT */
            QDir *_r = sc ? new QDir(QDir::root()) : new QDir(o->root());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDir";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 59: { QString _r = sc ? QDir::rootPath() : o->rootPath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 60: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QDir::searchPaths(stack[1].s_string)) : new QStringList(o->searchPaths(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 61: { /* COPY OBJECT */
            QChar *_r = sc ? new QChar(QDir::separator()) : new QChar(o->separator());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QChar";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 62: { bool _r = sc ? QDir::setCurrent(stack[1].s_string) : o->setCurrent(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 63: if(sc) { QDir::setSearchPaths(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp))); } else { o->setSearchPaths(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp))); }
                stack[0].type = PlastiQ::Void; break;
        case 64: { /* COPY OBJECT */
            QDir *_r = sc ? new QDir(QDir::temp()) : new QDir(o->temp());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDir";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 65: { QString _r = sc ? QDir::tempPath() : o->tempPath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 66: { QString _r = sc ? QDir::toNativeSeparators(stack[1].s_string) : o->toNativeSeparators(stack[1].s_string);
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
        QDir *o = reinterpret_cast<QDir*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQDir::~PlastiQQDir() {
    QDir* o = reinterpret_cast<QDir*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

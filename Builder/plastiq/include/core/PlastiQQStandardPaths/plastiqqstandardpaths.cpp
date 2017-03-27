#include "plastiqmethod.h"
#include "plastiqqstandardpaths.h"

#include <QStandardPaths> 
#include <QString>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQStandardPaths::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStandardPaths::plastiqMethods = {
    { "displayName(enum)", { "displayName", "StandardLocation", "QString", 0, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "findExecutable(QString)", { "findExecutable", "QString&", "QString", 1, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "findExecutable(QString,QStringList&)", { "findExecutable", "QString&,QStringList&", "QString", 2, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "locate(enum,QString)", { "locate", "StandardLocation,QString&", "QString", 3, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "locate(enum,QString,enum)", { "locate", "StandardLocation,QString&,LocateOptions", "QString", 4, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "locateAll(enum,QString)", { "locateAll", "StandardLocation,QString&", "QStringList", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "locateAll(enum,QString,enum)", { "locateAll", "StandardLocation,QString&,LocateOptions", "QStringList", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setTestModeEnabled(bool)", { "setTestModeEnabled", "bool", "void", 7, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "standardLocations(enum)", { "standardLocations", "StandardLocation", "QStringList", 8, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "writableLocation(enum)", { "writableLocation", "StandardLocation", "QString", 9, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStandardPaths::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStandardPaths::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStandardPaths::plastiqConstants = {

    /* QStandardPaths::LocateOption */
   { "LocateFile", QStandardPaths::LocateFile },
   { "LocateDirectory", QStandardPaths::LocateDirectory },

    /* QStandardPaths::StandardLocation */
   { "DesktopLocation", QStandardPaths::DesktopLocation },
   { "DocumentsLocation", QStandardPaths::DocumentsLocation },
   { "FontsLocation", QStandardPaths::FontsLocation },
   { "ApplicationsLocation", QStandardPaths::ApplicationsLocation },
   { "MusicLocation", QStandardPaths::MusicLocation },
   { "MoviesLocation", QStandardPaths::MoviesLocation },
   { "PicturesLocation", QStandardPaths::PicturesLocation },
   { "TempLocation", QStandardPaths::TempLocation },
   { "HomeLocation", QStandardPaths::HomeLocation },
   { "DataLocation", QStandardPaths::DataLocation },
   { "CacheLocation", QStandardPaths::CacheLocation },
   { "GenericDataLocation", QStandardPaths::GenericDataLocation },
   { "RuntimeLocation", QStandardPaths::RuntimeLocation },
   { "ConfigLocation", QStandardPaths::ConfigLocation },
   { "DownloadLocation", QStandardPaths::DownloadLocation },
   { "GenericCacheLocation", QStandardPaths::GenericCacheLocation },
   { "GenericConfigLocation", QStandardPaths::GenericConfigLocation },
   { "AppDataLocation", QStandardPaths::AppDataLocation },
   { "AppConfigLocation", QStandardPaths::AppConfigLocation },
   { "AppLocalDataLocation", QStandardPaths::AppLocalDataLocation },

};

QVector<PlastiQMetaObject*> PlastiQQStandardPaths::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQStandardPaths::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStandardPaths::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QStandardPaths", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStandardPaths::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStandardPaths::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStandardPaths *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStandardPaths *p = new PlastiQQStandardPaths();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStandardPaths *p = new PlastiQQStandardPaths();
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
        QStandardPaths *o = sc ? Q_NULLPTR : reinterpret_cast<QStandardPaths*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = sc ? QStandardPaths::displayName(QStandardPaths::StandardLocation(stack[1].s_int64)) : o->displayName(QStandardPaths::StandardLocation(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = sc ? QStandardPaths::findExecutable(stack[1].s_string) : o->findExecutable(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { QString _r = sc ? QStandardPaths::findExecutable(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp))) : o->findExecutable(stack[1].s_string,
                    (*reinterpret_cast< QStringList(*) >(stack[2].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { QString _r = sc ? QStandardPaths::locate(QStandardPaths::StandardLocation(stack[1].s_int64),
                    stack[2].s_string) : o->locate(QStandardPaths::StandardLocation(stack[1].s_int64),
                    stack[2].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 4: { QString _r = sc ? QStandardPaths::locate(QStandardPaths::StandardLocation(stack[1].s_int64),
                    stack[2].s_string,
                    QStandardPaths::LocateOptions(stack[3].s_int64)) : o->locate(QStandardPaths::StandardLocation(stack[1].s_int64),
                    stack[2].s_string,
                    QStandardPaths::LocateOptions(stack[3].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QStandardPaths::locateAll(QStandardPaths::StandardLocation(stack[1].s_int64),
                    stack[2].s_string)) : new QStringList(o->locateAll(QStandardPaths::StandardLocation(stack[1].s_int64),
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QStandardPaths::locateAll(QStandardPaths::StandardLocation(stack[1].s_int64),
                    stack[2].s_string,
                    QStandardPaths::LocateOptions(stack[3].s_int64))) : new QStringList(o->locateAll(QStandardPaths::StandardLocation(stack[1].s_int64),
                    stack[2].s_string,
                    QStandardPaths::LocateOptions(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: if(sc) { QStandardPaths::setTestModeEnabled(stack[1].s_bool); } else { o->setTestModeEnabled(stack[1].s_bool); }
                stack[0].type = PlastiQ::Void; break;
        case 8: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QStandardPaths::standardLocations(QStandardPaths::StandardLocation(stack[1].s_int64))) : new QStringList(o->standardLocations(QStandardPaths::StandardLocation(stack[1].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { QString _r = sc ? QStandardPaths::writableLocation(QStandardPaths::StandardLocation(stack[1].s_int64)) : o->writableLocation(QStandardPaths::StandardLocation(stack[1].s_int64));
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
        QStandardPaths *o = reinterpret_cast<QStandardPaths*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQStandardPaths::~PlastiQQStandardPaths() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

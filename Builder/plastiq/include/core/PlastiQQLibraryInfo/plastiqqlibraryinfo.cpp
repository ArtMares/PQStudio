#include "plastiqmethod.h"
#include "plastiqqlibraryinfo.h"

#include <QLibraryInfo> 
#include <QString>
#include <QVersionNumber>

QHash<QByteArray, PlastiQMethod> PlastiQQLibraryInfo::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQLibraryInfo::plastiqMethods = {
    { "isDebugBuild()", { "isDebugBuild", "", "bool", 0, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "location(enum)", { "location", "LibraryLocation", "QString", 1, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "version()", { "version", "", "QVersionNumber", 2, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLibraryInfo::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQLibraryInfo::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQLibraryInfo::plastiqConstants = {

    /* QLibraryInfo::LibraryLocation */
   { "PrefixPath", QLibraryInfo::PrefixPath },
   { "DocumentationPath", QLibraryInfo::DocumentationPath },
   { "HeadersPath", QLibraryInfo::HeadersPath },
   { "LibrariesPath", QLibraryInfo::LibrariesPath },
   { "LibraryExecutablesPath", QLibraryInfo::LibraryExecutablesPath },
   { "BinariesPath", QLibraryInfo::BinariesPath },
   { "PluginsPath", QLibraryInfo::PluginsPath },
   { "ImportsPath", QLibraryInfo::ImportsPath },
   { "Qml2ImportsPath", QLibraryInfo::Qml2ImportsPath },
   { "ArchDataPath", QLibraryInfo::ArchDataPath },
   { "DataPath", QLibraryInfo::DataPath },
   { "TranslationsPath", QLibraryInfo::TranslationsPath },
   { "ExamplesPath", QLibraryInfo::ExamplesPath },
   { "TestsPath", QLibraryInfo::TestsPath },
   { "SettingsPath", QLibraryInfo::SettingsPath },

};

QVector<PlastiQMetaObject*> PlastiQQLibraryInfo::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQLibraryInfo::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQLibraryInfo::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QLibraryInfo", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLibraryInfo::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQLibraryInfo::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QLibraryInfo *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQLibraryInfo *p = new PlastiQQLibraryInfo();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLibraryInfo *p = new PlastiQQLibraryInfo();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLibraryInfo *o = sc ? Q_NULLPTR : reinterpret_cast<QLibraryInfo*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = sc ? QLibraryInfo::isDebugBuild() : o->isDebugBuild();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { QString _r = sc ? QLibraryInfo::location(QLibraryInfo::LibraryLocation(stack[1].s_int64)) : o->location(QLibraryInfo::LibraryLocation(stack[1].s_int64));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { /* COPY OBJECT */
            QVersionNumber *_r = sc ? new QVersionNumber(QLibraryInfo::version()) : new QVersionNumber(o->version());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QVersionNumber";
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
        QLibraryInfo *o = reinterpret_cast<QLibraryInfo*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQLibraryInfo::~PlastiQQLibraryInfo() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

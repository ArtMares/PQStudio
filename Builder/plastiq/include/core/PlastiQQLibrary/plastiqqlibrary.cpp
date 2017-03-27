#include "plastiqmethod.h"
#include "plastiqqlibrary.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QLibrary> 
#include <QString>
#include <QFunctionPointer>

QHash<QByteArray, PlastiQMethod> PlastiQQLibrary::plastiqConstructors = {
    { "QLibrary()", { "QLibrary", "", "QLibrary*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLibrary(QObject*)", { "QLibrary", "QObject*", "QLibrary*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLibrary(QString)", { "QLibrary", "QString&", "QLibrary*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLibrary(QString,QObject*)", { "QLibrary", "QString&,QObject*", "QLibrary*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLibrary(QString,int)", { "QLibrary", "QString&,int", "QLibrary*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLibrary(QString,int,QObject*)", { "QLibrary", "QString&,int,QObject*", "QLibrary*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLibrary(QString,QString)", { "QLibrary", "QString&,QString&", "QLibrary*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QLibrary(QString,QString,QObject*)", { "QLibrary", "QString&,QString&,QObject*", "QLibrary*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLibrary::plastiqMethods = {
    { "errorString()", { "errorString", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileName()", { "fileName", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isLoaded()", { "isLoaded", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "load()", { "load", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "loadHints()", { "loadHints", "", "LoadHints", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "resolve(const char*)", { "resolve", "char*", "QFunctionPointer", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFileName(QString)", { "setFileName", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFileNameAndVersion(QString,int)", { "setFileNameAndVersion", "QString&,int", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFileNameAndVersion(QString,QString)", { "setFileNameAndVersion", "QString&,QString&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLoadHints(enum)", { "setLoadHints", "LoadHints", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "unload()", { "unload", "", "bool", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isLibrary(QString)", { "isLibrary", "QString&", "bool", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "resolve(QString,const char*)", { "resolve", "QString&,char*", "QFunctionPointer", 12, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "resolve(QString,int,const char*)", { "resolve", "QString&,int,char*", "QFunctionPointer", 13, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "resolve(QString,QString,const char*)", { "resolve", "QString&,QString&,char*", "QFunctionPointer", 14, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQLibrary::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQLibrary::plastiqProperties = {
    { "fileName", { "fileName", "QString", "setFileName", "fileName" } },
    { "loadHints", { "loadHints", "long", "setLoadHints", "loadHints" } },

};

QHash<QByteArray, long> PlastiQQLibrary::plastiqConstants = {

    /* QLibrary::LoadHint */
   { "ResolveAllSymbolsHint", QLibrary::ResolveAllSymbolsHint },
   { "ExportExternalSymbolsHint", QLibrary::ExportExternalSymbolsHint },
   { "LoadArchiveMemberHint", QLibrary::LoadArchiveMemberHint },
   { "PreventUnloadHint", QLibrary::PreventUnloadHint },
   { "DeepBindHint", QLibrary::DeepBindHint },

};

QVector<PlastiQMetaObject*> PlastiQQLibrary::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQLibrary::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQLibrary::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QLibrary", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQLibrary::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQLibrary::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QLibrary *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QLibrary(); break;
        case 1: o = new QLibrary(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 2: o = new QLibrary(stack[1].s_string); break;
        case 3: o = new QLibrary(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;
        case 4: o = new QLibrary(stack[1].s_string,
                    stack[2].s_int); break;
        case 5: o = new QLibrary(stack[1].s_string,
                    stack[2].s_int,
                    reinterpret_cast<QObject*>(stack[3].s_voidp)); break;
        case 6: o = new QLibrary(stack[1].s_string,
                    stack[2].s_string); break;
        case 7: o = new QLibrary(stack[1].s_string,
                    stack[2].s_string,
                    reinterpret_cast<QObject*>(stack[3].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQLibrary *p = new PlastiQQLibrary();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQLibrary *p = new PlastiQQLibrary();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 15) {
            id -= 15;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QLibrary *o = sc ? Q_NULLPTR : reinterpret_cast<QLibrary*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->errorString();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { QString _r = o->fileName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { bool _r = o->isLoaded();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { bool _r = o->load();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { qint64 _r = o->loadHints(); // HACK for LoadHints 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 5: /* UNSUPPORTED_RETURN_VALUE o->resolve(reinterpret_cast<const char*>(stack[1].s_voidp)) | ret: `QFunctionPointer` */ break;
        case 6: o->setFileName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setFileNameAndVersion(stack[1].s_string,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setFileNameAndVersion(stack[1].s_string,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setLoadHints(QLibrary::LoadHints(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 10: { bool _r = o->unload();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = sc ? QLibrary::isLibrary(stack[1].s_string) : o->isLibrary(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: /* UNSUPPORTED_RETURN_VALUE o->resolve(stack[1].s_string,
                    reinterpret_cast<const char*>(stack[2].s_voidp)) | ret: `QFunctionPointer` */ break;
        case 13: /* UNSUPPORTED_RETURN_VALUE o->resolve(stack[1].s_string,
                    stack[2].s_int,
                    reinterpret_cast<const char*>(stack[3].s_voidp)) | ret: `QFunctionPointer` */ break;
        case 14: /* UNSUPPORTED_RETURN_VALUE o->resolve(stack[1].s_string,
                    stack[2].s_string,
                    reinterpret_cast<const char*>(stack[3].s_voidp)) | ret: `QFunctionPointer` */ break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QLibrary *o = reinterpret_cast<QLibrary*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QLibrary *o = reinterpret_cast<QLibrary*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QLibrary *o = reinterpret_cast<QLibrary*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QLibrary *o = reinterpret_cast<QLibrary*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQLibrary::~PlastiQQLibrary() {
    QLibrary* o = reinterpret_cast<QLibrary*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

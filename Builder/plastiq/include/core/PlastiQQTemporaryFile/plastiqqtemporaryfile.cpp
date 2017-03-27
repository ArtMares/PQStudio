#include "plastiqmethod.h"
#include "plastiqqtemporaryfile.h"

#include "core/PlastiQQFile/plastiqqfile.h"
#include <QTemporaryFile> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQTemporaryFile::plastiqConstructors = {
    { "QTemporaryFile()", { "QTemporaryFile", "", "QTemporaryFile*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTemporaryFile(QString)", { "QTemporaryFile", "QString&", "QTemporaryFile*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTemporaryFile(QObject*)", { "QTemporaryFile", "QObject*", "QTemporaryFile*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QTemporaryFile(QString,QObject*)", { "QTemporaryFile", "QString&,QObject*", "QTemporaryFile*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTemporaryFile::plastiqMethods = {
    { "autoRemove()", { "autoRemove", "", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileTemplate()", { "fileTemplate", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "open()", { "open", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setAutoRemove(bool)", { "setAutoRemove", "bool", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFileTemplate(QString)", { "setFileTemplate", "QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "createNativeFile(QFile&)", { "createNativeFile", "QFile&", "QTemporaryFile*", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "createNativeFile(QString)", { "createNativeFile", "QString&", "QTemporaryFile*", 6, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "open(OpenMode)", { "open", "OpenMode", "bool", 7, PlastiQMethod::VirtualProtected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQTemporaryFile::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQTemporaryFile::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQTemporaryFile::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQTemporaryFile::plastiqInherits = { &PlastiQQFile::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQTemporaryFile::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQTemporaryFile::plastiq_static_metaObject = {
    { &PlastiQQFile::plastiq_static_metaObject, &plastiqInherits, "QTemporaryFile", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQTemporaryFile::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQTemporaryFile::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QTemporaryFile *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QTemporaryFile(); break;
        case 1: o = new QTemporaryFile(stack[1].s_string); break;
        case 2: o = new QTemporaryFile(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;
        case 3: o = new QTemporaryFile(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQTemporaryFile *p = new PlastiQQTemporaryFile();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQTemporaryFile *p = new PlastiQQTemporaryFile();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            PlastiQQFile::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QTemporaryFile *o = sc ? Q_NULLPTR : reinterpret_cast<QTemporaryFile*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->autoRemove();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { QString _r = o->fileTemplate();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { bool _r = o->open();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: o->setAutoRemove(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 4: o->setFileTemplate(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 5: { QTemporaryFile* _r = sc ? QTemporaryFile::createNativeFile((*reinterpret_cast< QFile(*) >(stack[1].s_voidp))) : o->createNativeFile((*reinterpret_cast< QFile(*) >(stack[1].s_voidp)));
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTemporaryFile"; } break;
        case 6: { QTemporaryFile* _r = sc ? QTemporaryFile::createNativeFile(stack[1].s_string) : o->createNativeFile(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QtObjectStar; stack[0].name = "QTemporaryFile"; } break;
        case 7: /* o->open(UNSUPPORTED_TYPE_OpenMode) | ret: `bool` */ break;

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
        QTemporaryFile *o = reinterpret_cast<QTemporaryFile*>(object->plastiq_data());

        if(className == "QFile") {
            stack[0].s_voidp = static_cast<QFile*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQTemporaryFile::~PlastiQQTemporaryFile() {
    QTemporaryFile* o = reinterpret_cast<QTemporaryFile*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

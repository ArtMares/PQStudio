#include "plastiqmethod.h"
#include "plastiqqresource.h"

#include <QResource> 
#include <QString>
#include <QDateTime>
#include <QLocale>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQResource::plastiqConstructors = {
    { "QResource()", { "QResource", "", "QResource*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QResource(QString)", { "QResource", "QString&", "QResource*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QResource(QString,QLocale&)", { "QResource", "QString&,QLocale&", "QResource*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQResource::plastiqMethods = {
    { "absoluteFilePath()", { "absoluteFilePath", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "data()", { "data", "", "const uchar*", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "fileName()", { "fileName", "", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isCompressed()", { "isCompressed", "", "bool", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isValid()", { "isValid", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastModified()", { "lastModified", "", "QDateTime", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "locale()", { "locale", "", "QLocale", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFileName(QString)", { "setFileName", "QString&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLocale(QLocale&)", { "setLocale", "QLocale&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "size()", { "size", "", "qint64", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "registerResource(QString)", { "registerResource", "QString&", "bool", 10, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "registerResource(QString,QString)", { "registerResource", "QString&,QString&", "bool", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "registerResource(const uchar*)", { "registerResource", "uchar*", "bool", 12, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "registerResource(const uchar*,QString)", { "registerResource", "uchar*,QString&", "bool", 13, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "unregisterResource(QString)", { "unregisterResource", "QString&", "bool", 14, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "unregisterResource(QString,QString)", { "unregisterResource", "QString&,QString&", "bool", 15, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "unregisterResource(const uchar*)", { "unregisterResource", "uchar*", "bool", 16, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "unregisterResource(const uchar*,QString)", { "unregisterResource", "uchar*,QString&", "bool", 17, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "children()", { "children", "", "QStringList", 18, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "isDir()", { "isDir", "", "bool", 19, PlastiQMethod::Protected, PlastiQMethod::Method } },
    { "isFile()", { "isFile", "", "bool", 20, PlastiQMethod::Protected, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQResource::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQResource::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQResource::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQResource::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQResource::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQResource::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QResource", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQResource::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQResource::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QResource *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QResource(); break;
        case 1: o = new QResource(stack[1].s_string); break;
        case 2: o = new QResource(stack[1].s_string,
                    (*reinterpret_cast< QLocale(*) >(stack[2].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQResource *p = new PlastiQQResource();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQResource *p = new PlastiQQResource();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 21) {
            id -= 21;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QResource *o = sc ? Q_NULLPTR : reinterpret_cast<QResource*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->absoluteFilePath();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { uchar* _r = const_cast<uchar*>(o->data());
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::ObjectStar; stack[0].name = "uchar"; } break;
        case 2: { QString _r = o->fileName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { bool _r = o->isCompressed();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 4: { bool _r = o->isValid();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { /* COPY OBJECT */
            QDateTime *_r = new QDateTime(o->lastModified());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QDateTime";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { /* COPY OBJECT */
            QLocale *_r = new QLocale(o->locale());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLocale";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 7: o->setFileName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setLocale((*reinterpret_cast< QLocale(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 9: { long _r = o->size();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 10: { bool _r = sc ? QResource::registerResource(stack[1].s_string) : o->registerResource(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 11: { bool _r = sc ? QResource::registerResource(stack[1].s_string,
                    stack[2].s_string) : o->registerResource(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 12: { bool _r = sc ? QResource::registerResource(reinterpret_cast<const uchar*>(stack[1].s_voidp)) : o->registerResource(reinterpret_cast<const uchar*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 13: { bool _r = sc ? QResource::registerResource(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_string) : o->registerResource(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 14: { bool _r = sc ? QResource::unregisterResource(stack[1].s_string) : o->unregisterResource(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 15: { bool _r = sc ? QResource::unregisterResource(stack[1].s_string,
                    stack[2].s_string) : o->unregisterResource(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 16: { bool _r = sc ? QResource::unregisterResource(reinterpret_cast<const uchar*>(stack[1].s_voidp)) : o->unregisterResource(reinterpret_cast<const uchar*>(stack[1].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 17: { bool _r = sc ? QResource::unregisterResource(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_string) : o->unregisterResource(reinterpret_cast<const uchar*>(stack[1].s_voidp),
                    stack[2].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 18: { /* COPY OBJECT */
            QStringList *_r; stack[0].type = PlastiQ::Error; } break;
        case 19: { bool _r; stack[0].type = PlastiQ::Error; } break;
        case 20: { bool _r; stack[0].type = PlastiQ::Error; } break;

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
        QResource *o = reinterpret_cast<QResource*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQResource::~PlastiQQResource() {
    QResource* o = reinterpret_cast<QResource*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

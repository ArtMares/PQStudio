#include "plastiqmethod.h"
#include "plastiqqwinmime.h"

#include <QWinMime> 
#include <QVariant>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQWinMime::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQWinMime::plastiqMethods = {
    { "canConvertFromMime(FORMATETC&,const QMimeData*)", { "canConvertFromMime", "FORMATETC&,QMimeData*", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "canConvertToMime(QString,IDataObject*)", { "canConvertToMime", "QString&,IDataObject*", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "convertFromMime(FORMATETC&,const QMimeData*,STGMEDIUM*)", { "convertFromMime", "FORMATETC&,QMimeData*,STGMEDIUM*", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "convertToMime(QString,IDataObject*,QVariant::Type)", { "convertToMime", "QString&,IDataObject*,QVariant::Type", "QVariant", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "mimeForFormat(FORMATETC&)", { "mimeForFormat", "FORMATETC&", "QString", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "registerMimeType(QString)", { "registerMimeType", "QString&", "int", 5, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQWinMime::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQWinMime::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQWinMime::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQWinMime::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQWinMime::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQWinMime::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QWinMime", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQWinMime::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQWinMime::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QWinMime *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQWinMime *p = new PlastiQQWinMime();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQWinMime *p = new PlastiQQWinMime();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 6) {
            id -= 6;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QWinMime *o = sc ? Q_NULLPTR : reinterpret_cast<QWinMime*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->canConvertFromMime((*reinterpret_cast< FORMATETC(*) >(stack[1].s_voidp)),
                    reinterpret_cast<const QMimeData*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->canConvertToMime(stack[1].s_string,
                    reinterpret_cast<IDataObject*>(stack[2].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { bool _r = o->convertFromMime((*reinterpret_cast< FORMATETC(*) >(stack[1].s_voidp)),
                    reinterpret_cast<const QMimeData*>(stack[2].s_voidp),
                    reinterpret_cast<STGMEDIUM*>(stack[3].s_voidp));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: /* o->convertToMime(stack[1].s_string,
                    reinterpret_cast<IDataObject*>(stack[2].s_voidp),
                    UNSUPPORTED_TYPE_QVariant::Type) | ret: `QVariant` */ break;
        case 4: { QString _r = o->mimeForFormat((*reinterpret_cast< FORMATETC(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 5: { int _r = sc ? QWinMime::registerMimeType(stack[1].s_string) : o->registerMimeType(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;

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
        QWinMime *o = reinterpret_cast<QWinMime*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQWinMime::~PlastiQQWinMime() {
    QWinMime* o = reinterpret_cast<QWinMime*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

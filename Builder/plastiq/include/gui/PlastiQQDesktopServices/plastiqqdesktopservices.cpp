#include "plastiqmethod.h"
#include "plastiqqdesktopservices.h"

#include <QDesktopServices> 

QHash<QByteArray, PlastiQMethod> PlastiQQDesktopServices::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQDesktopServices::plastiqMethods = {
    { "openUrl(QUrl&)", { "openUrl", "QUrl&", "bool", 0, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "setUrlHandler(QString,QObject*,const char*)", { "setUrlHandler", "QString&,QObject*,char*", "void", 1, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "unsetUrlHandler(QString)", { "unsetUrlHandler", "QString&", "void", 2, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQDesktopServices::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQDesktopServices::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQDesktopServices::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQDesktopServices::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQDesktopServices::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQDesktopServices::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QDesktopServices", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQDesktopServices::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQDesktopServices::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QDesktopServices *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQDesktopServices *p = new PlastiQQDesktopServices();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQDesktopServices *p = new PlastiQQDesktopServices();
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
        QDesktopServices *o = sc ? Q_NULLPTR : reinterpret_cast<QDesktopServices*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = sc ? QDesktopServices::openUrl((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp))) : o->openUrl((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp)));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: if(sc) { QDesktopServices::setUrlHandler(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp)); } else { o->setUrlHandler(stack[1].s_string,
                    reinterpret_cast<QObject*>(stack[2].s_voidp),
                    reinterpret_cast<const char*>(stack[3].s_voidp)); }
                stack[0].type = PlastiQ::Void; break;
        case 2: if(sc) { QDesktopServices::unsetUrlHandler(stack[1].s_string); } else { o->unsetUrlHandler(stack[1].s_string); }
                stack[0].type = PlastiQ::Void; break;

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
        QDesktopServices *o = reinterpret_cast<QDesktopServices*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQDesktopServices::~PlastiQQDesktopServices() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

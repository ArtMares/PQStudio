#include "plastiqmethod.h"
#include "plastiqqstylefactory.h"

#include <QStyleFactory> 
#include <QStyle>
#include <QStringList>

QHash<QByteArray, PlastiQMethod> PlastiQQStyleFactory::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleFactory::plastiqMethods = {
    { "create(QString)", { "create", "QString&", "QStyle*", 0, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },
    { "keys()", { "keys", "", "QStringList", 1, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStyleFactory::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStyleFactory::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStyleFactory::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQStyleFactory::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQStyleFactory::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStyleFactory::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QStyleFactory", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStyleFactory::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStyleFactory::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStyleFactory *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStyleFactory *p = new PlastiQQStyleFactory();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStyleFactory *p = new PlastiQQStyleFactory();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 2) {
            id -= 2;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStyleFactory *o = sc ? Q_NULLPTR : reinterpret_cast<QStyleFactory*>(object->plastiq_data());

        switch(id) {
        case 0: { QStyle* _r = sc ? QStyleFactory::create(stack[1].s_string) : o->create(stack[1].s_string);
                  reinterpret_cast<void*>(stack[0].s_voidp) = _r; stack[0].type = PlastiQ::QObjectStar; stack[0].name = "QStyle"; } break;
        case 1: { /* COPY OBJECT */
            QStringList *_r = sc ? new QStringList(QStyleFactory::keys()) : new QStringList(o->keys());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
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
        QStyleFactory *o = reinterpret_cast<QStyleFactory*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQStyleFactory::~PlastiQQStyleFactory() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

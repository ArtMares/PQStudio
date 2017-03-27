#include "plastiqmethod.h"
#include "plastiqqspaceritem.h"

#include "widgets/PlastiQQLayoutItem/plastiqqlayoutitem.h"
#include <QSpacerItem> 
#include <QSizePolicy>

QHash<QByteArray, PlastiQMethod> PlastiQQSpacerItem::plastiqConstructors = {
    { "QSpacerItem(int,int)", { "QSpacerItem", "int,int", "QSpacerItem*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSpacerItem(int,int,enum)", { "QSpacerItem", "int,int,QSizePolicy::Policy", "QSpacerItem*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QSpacerItem(int,int,enum,enum)", { "QSpacerItem", "int,int,QSizePolicy::Policy,QSizePolicy::Policy", "QSpacerItem*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSpacerItem::plastiqMethods = {
    { "changeSize(int,int)", { "changeSize", "int,int", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "changeSize(int,int,enum)", { "changeSize", "int,int,QSizePolicy::Policy", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "changeSize(int,int,enum,enum)", { "changeSize", "int,int,QSizePolicy::Policy,QSizePolicy::Policy", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sizePolicy()", { "sizePolicy", "", "QSizePolicy", 3, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQSpacerItem::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQSpacerItem::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQSpacerItem::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQSpacerItem::plastiqInherits = { &PlastiQQLayoutItem::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQSpacerItem::plastiq_static_objectType = PlastiQ::IsQtItem;
PlastiQMetaObject PlastiQQSpacerItem::plastiq_static_metaObject = {
    { &PlastiQQLayoutItem::plastiq_static_metaObject, &plastiqInherits, "QSpacerItem", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQSpacerItem::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQSpacerItem::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QSpacerItem *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QSpacerItem(stack[1].s_int,
                    stack[2].s_int); break;
        case 1: o = new QSpacerItem(stack[1].s_int,
                    stack[2].s_int,
                    QSizePolicy::Policy(stack[3].s_int64)); break;
        case 2: o = new QSpacerItem(stack[1].s_int,
                    stack[2].s_int,
                    QSizePolicy::Policy(stack[3].s_int64),
                    QSizePolicy::Policy(stack[4].s_int64)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQSpacerItem *p = new PlastiQQSpacerItem();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQSpacerItem *p = new PlastiQQSpacerItem();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 4) {
            id -= 4;
            PlastiQQLayoutItem::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QSpacerItem *o = sc ? Q_NULLPTR : reinterpret_cast<QSpacerItem*>(object->plastiq_data());

        switch(id) {
        case 0: o->changeSize(stack[1].s_int,
                    stack[2].s_int);
                stack[0].type = PlastiQ::Void; break;
        case 1: o->changeSize(stack[1].s_int,
                    stack[2].s_int,
                    QSizePolicy::Policy(stack[3].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 2: o->changeSize(stack[1].s_int,
                    stack[2].s_int,
                    QSizePolicy::Policy(stack[3].s_int64),
                    QSizePolicy::Policy(stack[4].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 3: { /* COPY OBJECT */
            QSizePolicy *_r = new QSizePolicy(o->sizePolicy());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QSizePolicy";
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
        QSpacerItem *o = reinterpret_cast<QSpacerItem*>(object->plastiq_data());

        if(className == "QLayoutItem") {
            stack[0].s_voidp = static_cast<QLayoutItem*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQSpacerItem::~PlastiQQSpacerItem() {
    QSpacerItem* o = reinterpret_cast<QSpacerItem*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

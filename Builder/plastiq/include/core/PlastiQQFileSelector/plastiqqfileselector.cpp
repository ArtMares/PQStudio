#include "plastiqmethod.h"
#include "plastiqqfileselector.h"

#include "core/PlastiQQObject/plastiqqobject.h"
#include <QFileSelector> 
#include <QStringList>
#include <QString>
#include <QUrl>

QHash<QByteArray, PlastiQMethod> PlastiQQFileSelector::plastiqConstructors = {
    { "QFileSelector()", { "QFileSelector", "", "QFileSelector*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QFileSelector(QObject*)", { "QFileSelector", "QObject*", "QFileSelector*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFileSelector::plastiqMethods = {
    { "allSelectors()", { "allSelectors", "", "QStringList", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "extraSelectors()", { "extraSelectors", "", "QStringList", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "select(QString)", { "select", "QString&", "QString", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "select(QUrl&)", { "select", "QUrl&", "QUrl", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setExtraSelectors(QStringList&)", { "setExtraSelectors", "QStringList&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFileSelector::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQFileSelector::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQFileSelector::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQFileSelector::plastiqInherits = { &PlastiQQObject::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQFileSelector::plastiq_static_objectType = PlastiQ::IsQObject;
PlastiQMetaObject PlastiQQFileSelector::plastiq_static_metaObject = {
    { &PlastiQQObject::plastiq_static_metaObject, &plastiqInherits, "QFileSelector", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFileSelector::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQFileSelector::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QFileSelector *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QFileSelector(); break;
        case 1: o = new QFileSelector(reinterpret_cast<QObject*>(stack[1].s_voidp)); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQFileSelector *p = new PlastiQQFileSelector();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFileSelector *p = new PlastiQQFileSelector();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 5) {
            id -= 5;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFileSelector *o = sc ? Q_NULLPTR : reinterpret_cast<QFileSelector*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->allSelectors());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->extraSelectors());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 2: { QString _r = o->select(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 3: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->select((*reinterpret_cast< QUrl(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: o->setExtraSelectors((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::CreateConnection) {
        if(id >= 0) {
            id -= 0;
            PlastiQQObject::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        QFileSelector *o = reinterpret_cast<QFileSelector*>(object->plastiq_data());
        PQObjectWrapper *sender = reinterpret_cast<PQObjectWrapper *>(stack[1].s_voidp);
        PQObjectWrapper *receiver = reinterpret_cast<PQObjectWrapper *>(stack[2].s_voidp);
        QByteArray slot = stack[3].s_bytearray;

        switch(id) {

        default: ;
        }
    }
    else if(call == PlastiQMetaObject::ToQObject) {
        QFileSelector *o = reinterpret_cast<QFileSelector*>(object->plastiq_data());
        QObject *qo = qobject_cast<QObject*>(o);
        *reinterpret_cast<QObject**>(stack[0].s_voidpp) = qo;
    }
    else if(call == PlastiQMetaObject::HaveParent) {
        QFileSelector *o = reinterpret_cast<QFileSelector*>(object->plastiq_data());
        stack[0].s_bool = o->parent() != Q_NULLPTR;
    }
    else if(call == PlastiQMetaObject::DownCast) {
        QByteArray className = stack[1].s_bytearray;
        QFileSelector *o = reinterpret_cast<QFileSelector*>(object->plastiq_data());

        if(className == "QObject") {
            stack[0].s_voidp = static_cast<QObject*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQFileSelector::~PlastiQQFileSelector() {
    QFileSelector* o = reinterpret_cast<QFileSelector*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

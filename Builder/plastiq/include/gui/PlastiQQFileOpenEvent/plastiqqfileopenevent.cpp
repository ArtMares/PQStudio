#include "plastiqmethod.h"
#include "plastiqqfileopenevent.h"

#include "core/PlastiQQEvent/plastiqqevent.h"
#include <QFileOpenEvent> 
#include <QString>
#include <QUrl>

QHash<QByteArray, PlastiQMethod> PlastiQQFileOpenEvent::plastiqConstructors = {

};

QHash<QByteArray, PlastiQMethod> PlastiQQFileOpenEvent::plastiqMethods = {
    { "file()", { "file", "", "QString", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "openFile(QFile&,enum)", { "openFile", "QFile&,QIODevice::OpenMode", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "url()", { "url", "", "QUrl", 2, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQFileOpenEvent::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQFileOpenEvent::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQFileOpenEvent::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQFileOpenEvent::plastiqInherits = { &PlastiQQEvent::plastiq_static_metaObject };

const PlastiQ::ObjectType PlastiQQFileOpenEvent::plastiq_static_objectType = PlastiQ::IsQEvent;
PlastiQMetaObject PlastiQQFileOpenEvent::plastiq_static_metaObject = {
    { &PlastiQQEvent::plastiq_static_metaObject, &plastiqInherits, "QFileOpenEvent", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQFileOpenEvent::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQFileOpenEvent::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QFileOpenEvent *o = Q_NULLPTR;

        switch(id) {

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQFileOpenEvent *p = new PlastiQQFileOpenEvent();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQFileOpenEvent *p = new PlastiQQFileOpenEvent();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 3) {
            id -= 3;
            PlastiQQEvent::plastiq_static_metaObject.d.static_metacall(object, call, id, stack);
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QFileOpenEvent *o = sc ? Q_NULLPTR : reinterpret_cast<QFileOpenEvent*>(object->plastiq_data());

        switch(id) {
        case 0: { QString _r = o->file();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 1: { bool _r = o->openFile((*reinterpret_cast< QFile(*) >(stack[1].s_voidp)),
                    QIODevice::OpenMode(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { /* COPY OBJECT */
            QUrl *_r = new QUrl(o->url());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QUrl";
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
        QFileOpenEvent *o = reinterpret_cast<QFileOpenEvent*>(object->plastiq_data());

        if(className == "QEvent") {
            stack[0].s_voidp = static_cast<QEvent*>(o);
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQFileOpenEvent::~PlastiQQFileOpenEvent() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

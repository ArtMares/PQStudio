#include "plastiqmethod.h"
#include "plastiqqprocessenvironment.h"

#include <QProcessEnvironment> 
#include <QStringList>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQProcessEnvironment::plastiqConstructors = {
    { "QProcessEnvironment()", { "QProcessEnvironment", "", "QProcessEnvironment*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QProcessEnvironment(QProcessEnvironment&)", { "QProcessEnvironment", "QProcessEnvironment&", "QProcessEnvironment*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQProcessEnvironment::plastiqMethods = {
    { "clear()", { "clear", "", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QString)", { "contains", "QString&", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(QString,QString)", { "insert", "QString&,QString&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "insert(QProcessEnvironment&)", { "insert", "QProcessEnvironment&", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "keys()", { "keys", "", "QStringList", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "remove(QString)", { "remove", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QProcessEnvironment&)", { "swap", "QProcessEnvironment&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "toStringList()", { "toStringList", "", "QStringList", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value(QString)", { "value", "QString&", "QString", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "value(QString,QString)", { "value", "QString&,QString&", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "systemEnvironment()", { "systemEnvironment", "", "QProcessEnvironment", 11, PlastiQMethod::StaticPublic, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQProcessEnvironment::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQProcessEnvironment::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQProcessEnvironment::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQProcessEnvironment::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQProcessEnvironment::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQProcessEnvironment::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QProcessEnvironment", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQProcessEnvironment::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQProcessEnvironment::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QProcessEnvironment *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QProcessEnvironment(); break;
        case 1: o = new QProcessEnvironment((*reinterpret_cast< QProcessEnvironment(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQProcessEnvironment *p = new PlastiQQProcessEnvironment();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQProcessEnvironment *p = new PlastiQQProcessEnvironment();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 12) {
            id -= 12;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QProcessEnvironment *o = sc ? Q_NULLPTR : reinterpret_cast<QProcessEnvironment*>(object->plastiq_data());

        switch(id) {
        case 0: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 1: { bool _r = o->contains(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: o->insert(stack[1].s_string,
                    stack[2].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 3: o->insert((*reinterpret_cast< QProcessEnvironment(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 4: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->keys());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: o->remove(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->swap((*reinterpret_cast< QProcessEnvironment(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 8: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->toStringList());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 9: { QString _r = o->value(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 10: { QString _r = o->value(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: { /* COPY OBJECT */
            QProcessEnvironment *_r = sc ? new QProcessEnvironment(QProcessEnvironment::systemEnvironment()) : new QProcessEnvironment(o->systemEnvironment());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QProcessEnvironment";
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
        QProcessEnvironment *o = reinterpret_cast<QProcessEnvironment*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQProcessEnvironment::~PlastiQQProcessEnvironment() {
    QProcessEnvironment* o = reinterpret_cast<QProcessEnvironment*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

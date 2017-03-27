#include "plastiqmethod.h"
#include "plastiqqmediatimeinterval.h"

#include <QMediaTimeInterval> 

QHash<QByteArray, PlastiQMethod> PlastiQQMediaTimeInterval::plastiqConstructors = {
    { "QMediaTimeInterval()", { "QMediaTimeInterval", "", "QMediaTimeInterval*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaTimeInterval(long,long)", { "QMediaTimeInterval", "qint64,qint64", "QMediaTimeInterval*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaTimeInterval(QMediaTimeInterval&)", { "QMediaTimeInterval", "QMediaTimeInterval&", "QMediaTimeInterval*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaTimeInterval::plastiqMethods = {
    { "contains(long)", { "contains", "qint64", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "end()", { "end", "", "qint64", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isNormal()", { "isNormal", "", "bool", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "normalized()", { "normalized", "", "QMediaTimeInterval", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "start()", { "start", "", "qint64", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "translated(long)", { "translated", "qint64", "QMediaTimeInterval", 5, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaTimeInterval::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaTimeInterval::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaTimeInterval::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMediaTimeInterval::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQMediaTimeInterval::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMediaTimeInterval::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QMediaTimeInterval", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaTimeInterval::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaTimeInterval::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaTimeInterval *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QMediaTimeInterval(); break;
        case 1: o = new QMediaTimeInterval(stack[1].s_long,
                    stack[2].s_long); break;
        case 2: o = new QMediaTimeInterval((*reinterpret_cast< QMediaTimeInterval(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMediaTimeInterval *p = new PlastiQQMediaTimeInterval();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaTimeInterval *p = new PlastiQQMediaTimeInterval();
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
        QMediaTimeInterval *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaTimeInterval*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->contains(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { long _r = o->end();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 2: { bool _r = o->isNormal();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 3: { /* COPY OBJECT */
            QMediaTimeInterval *_r = new QMediaTimeInterval(o->normalized());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMediaTimeInterval";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { long _r = o->start();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 5: { /* COPY OBJECT */
            QMediaTimeInterval *_r = new QMediaTimeInterval(o->translated(stack[1].s_long));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QMediaTimeInterval";
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
        QMediaTimeInterval *o = reinterpret_cast<QMediaTimeInterval*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQMediaTimeInterval::~PlastiQQMediaTimeInterval() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

#include "plastiqmethod.h"
#include "plastiqqmediatimerange.h"

#include <QMediaTimeRange> 

QHash<QByteArray, PlastiQMethod> PlastiQQMediaTimeRange::plastiqConstructors = {
    { "QMediaTimeRange()", { "QMediaTimeRange", "", "QMediaTimeRange*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaTimeRange(long,long)", { "QMediaTimeRange", "qint64,qint64", "QMediaTimeRange*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaTimeRange(QMediaTimeInterval&)", { "QMediaTimeRange", "QMediaTimeInterval&", "QMediaTimeRange*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QMediaTimeRange(QMediaTimeRange&)", { "QMediaTimeRange", "QMediaTimeRange&", "QMediaTimeRange*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaTimeRange::plastiqMethods = {
    { "addInterval(QMediaTimeInterval&)", { "addInterval", "QMediaTimeInterval&", "void", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addInterval(long,long)", { "addInterval", "qint64,qint64", "void", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "addTimeRange(QMediaTimeRange&)", { "addTimeRange", "QMediaTimeRange&", "void", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "clear()", { "clear", "", "void", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(long)", { "contains", "qint64", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "earliestTime()", { "earliestTime", "", "qint64", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isContinuous()", { "isContinuous", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "isEmpty()", { "isEmpty", "", "bool", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "latestTime()", { "latestTime", "", "qint64", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeInterval(QMediaTimeInterval&)", { "removeInterval", "QMediaTimeInterval&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeInterval(long,long)", { "removeInterval", "qint64,qint64", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeTimeRange(QMediaTimeRange&)", { "removeTimeRange", "QMediaTimeRange&", "void", 11, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQMediaTimeRange::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQMediaTimeRange::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQMediaTimeRange::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQMediaTimeRange::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQMediaTimeRange::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQMediaTimeRange::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QMediaTimeRange", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQMediaTimeRange::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQMediaTimeRange::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QMediaTimeRange *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QMediaTimeRange(); break;
        case 1: o = new QMediaTimeRange(stack[1].s_long,
                    stack[2].s_long); break;
        case 2: o = new QMediaTimeRange((*reinterpret_cast< QMediaTimeInterval(*) >(stack[1].s_voidp))); break;
        case 3: o = new QMediaTimeRange((*reinterpret_cast< QMediaTimeRange(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQMediaTimeRange *p = new PlastiQQMediaTimeRange();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQMediaTimeRange *p = new PlastiQQMediaTimeRange();
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
        QMediaTimeRange *o = sc ? Q_NULLPTR : reinterpret_cast<QMediaTimeRange*>(object->plastiq_data());

        switch(id) {
        case 0: o->addInterval((*reinterpret_cast< QMediaTimeInterval(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 1: o->addInterval(stack[1].s_long,
                    stack[2].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 2: o->addTimeRange((*reinterpret_cast< QMediaTimeRange(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 3: o->clear();
                stack[0].type = PlastiQ::Void; break;
        case 4: { bool _r = o->contains(stack[1].s_long);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { long _r = o->earliestTime();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 6: { bool _r = o->isContinuous();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: { bool _r = o->isEmpty();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 8: { long _r = o->latestTime();
                  stack[0].s_long = _r; stack[0].type = PlastiQ::Long; } break;
        case 9: o->removeInterval((*reinterpret_cast< QMediaTimeInterval(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->removeInterval(stack[1].s_long,
                    stack[2].s_long);
                stack[0].type = PlastiQ::Void; break;
        case 11: o->removeTimeRange((*reinterpret_cast< QMediaTimeRange(*) >(stack[1].s_voidp)));
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
        QMediaTimeRange *o = reinterpret_cast<QMediaTimeRange*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQMediaTimeRange::~PlastiQQMediaTimeRange() {
    QMediaTimeRange* o = reinterpret_cast<QMediaTimeRange*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

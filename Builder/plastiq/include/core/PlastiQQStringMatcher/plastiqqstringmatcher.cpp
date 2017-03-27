#include "plastiqmethod.h"
#include "plastiqqstringmatcher.h"

#include <QStringMatcher> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQStringMatcher::plastiqConstructors = {
    { "QStringMatcher()", { "QStringMatcher", "", "QStringMatcher*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStringMatcher(QString)", { "QStringMatcher", "QString&", "QStringMatcher*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStringMatcher(QString,enum)", { "QStringMatcher", "QString&,Qt::CaseSensitivity", "QStringMatcher*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStringMatcher(const QChar*,int)", { "QStringMatcher", "QChar*,int", "QStringMatcher*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStringMatcher(const QChar*,int,enum)", { "QStringMatcher", "QChar*,int,Qt::CaseSensitivity", "QStringMatcher*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStringMatcher(QStringMatcher&)", { "QStringMatcher", "QStringMatcher&", "QStringMatcher*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStringMatcher::plastiqMethods = {
    { "caseSensitivity()", { "caseSensitivity", "", "Qt::CaseSensitivity", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexIn(QString)", { "indexIn", "QString&", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexIn(QString,int)", { "indexIn", "QString&,int", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexIn(const QChar*,int)", { "indexIn", "QChar*,int", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexIn(const QChar*,int,int)", { "indexIn", "QChar*,int,int", "int", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "pattern()", { "pattern", "", "QString", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCaseSensitivity(enum)", { "setCaseSensitivity", "Qt::CaseSensitivity", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setPattern(QString)", { "setPattern", "QString&", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStringMatcher::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStringMatcher::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStringMatcher::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQStringMatcher::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQStringMatcher::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStringMatcher::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QStringMatcher", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStringMatcher::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStringMatcher::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStringMatcher *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStringMatcher(); break;
        case 1: o = new QStringMatcher(stack[1].s_string); break;
        case 2: o = new QStringMatcher(stack[1].s_string,
                    Qt::CaseSensitivity(stack[2].s_int64)); break;
        case 3: o = new QStringMatcher(reinterpret_cast<const QChar*>(stack[1].s_voidp),
                    stack[2].s_int); break;
        case 4: o = new QStringMatcher(reinterpret_cast<const QChar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    Qt::CaseSensitivity(stack[3].s_int64)); break;
        case 5: o = new QStringMatcher((*reinterpret_cast< QStringMatcher(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStringMatcher *p = new PlastiQQStringMatcher();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStringMatcher *p = new PlastiQQStringMatcher();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 8) {
            id -= 8;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStringMatcher *o = sc ? Q_NULLPTR : reinterpret_cast<QStringMatcher*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->caseSensitivity(); // HACK for Qt::CaseSensitivity 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { int _r = o->indexIn(stack[1].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->indexIn(stack[1].s_string,
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->indexIn(reinterpret_cast<const QChar*>(stack[1].s_voidp),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { int _r = o->indexIn(reinterpret_cast<const QChar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    stack[3].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 5: { QString _r = o->pattern();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 6: o->setCaseSensitivity(Qt::CaseSensitivity(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setPattern(stack[1].s_string);
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
        QStringMatcher *o = reinterpret_cast<QStringMatcher*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQStringMatcher::~PlastiQQStringMatcher() {
    QStringMatcher* o = reinterpret_cast<QStringMatcher*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

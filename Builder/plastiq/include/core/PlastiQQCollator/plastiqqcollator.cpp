#include "plastiqmethod.h"
#include "plastiqqcollator.h"

#include <QCollator> 
#include <QLocale>
#include <QCollatorSortKey>

QHash<QByteArray, PlastiQMethod> PlastiQQCollator::plastiqConstructors = {
    { "QCollator()", { "QCollator", "", "QCollator*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCollator(QLocale&)", { "QCollator", "QLocale&", "QCollator*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCollator(QCollator&)", { "QCollator", "QCollator&", "QCollator*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCollator(QCollator&&)", { "QCollator", "QCollator&&", "QCollator*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCollator::plastiqMethods = {
    { "caseSensitivity()", { "caseSensitivity", "", "Qt::CaseSensitivity", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(QString,QString)", { "compare", "QString&,QString&", "int", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(QStringRef&,QStringRef&)", { "compare", "QStringRef&,QStringRef&", "int", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "compare(const QChar*,int,const QChar*,int)", { "compare", "QChar*,int,QChar*,int", "int", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "ignorePunctuation()", { "ignorePunctuation", "", "bool", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "locale()", { "locale", "", "QLocale", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "numericMode()", { "numericMode", "", "bool", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setCaseSensitivity(enum)", { "setCaseSensitivity", "Qt::CaseSensitivity", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setIgnorePunctuation(bool)", { "setIgnorePunctuation", "bool", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setLocale(QLocale&)", { "setLocale", "QLocale&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setNumericMode(bool)", { "setNumericMode", "bool", "void", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sortKey(QString)", { "sortKey", "QString&", "QCollatorSortKey", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QCollator&)", { "swap", "QCollator&", "void", 12, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCollator::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQCollator::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCollator::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQCollator::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQCollator::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQCollator::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QCollator", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCollator::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCollator::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCollator *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QCollator(); break;
        case 1: o = new QCollator((*reinterpret_cast< QLocale(*) >(stack[1].s_voidp))); break;
        case 2: o = new QCollator((*reinterpret_cast< QCollator(*) >(stack[1].s_voidp))); break;
        case 3: o = new QCollator((*reinterpret_cast< QCollator(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCollator *p = new PlastiQQCollator();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCollator *p = new PlastiQQCollator();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 13) {
            id -= 13;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCollator *o = sc ? Q_NULLPTR : reinterpret_cast<QCollator*>(object->plastiq_data());

        switch(id) {
        case 0: { qint64 _r = o->caseSensitivity(); // HACK for Qt::CaseSensitivity 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 1: { int _r = o->compare(stack[1].s_string,
                    stack[2].s_string);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 2: { int _r = o->compare((*reinterpret_cast< QStringRef(*) >(stack[1].s_voidp)),
                    (*reinterpret_cast< QStringRef(*) >(stack[2].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 3: { int _r = o->compare(reinterpret_cast<const QChar*>(stack[1].s_voidp),
                    stack[2].s_int,
                    reinterpret_cast<const QChar*>(stack[3].s_voidp),
                    stack[4].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 4: { bool _r = o->ignorePunctuation();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 5: { /* COPY OBJECT */
            QLocale *_r = new QLocale(o->locale());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QLocale";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { bool _r = o->numericMode();
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 7: o->setCaseSensitivity(Qt::CaseSensitivity(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setIgnorePunctuation(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->setLocale((*reinterpret_cast< QLocale(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 10: o->setNumericMode(stack[1].s_bool);
                stack[0].type = PlastiQ::Void; break;
        case 11: { /* COPY OBJECT */
            QCollatorSortKey *_r = new QCollatorSortKey(o->sortKey(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QCollatorSortKey";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 12: o->swap((*reinterpret_cast< QCollator(*) >(stack[1].s_voidp)));
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
        QCollator *o = reinterpret_cast<QCollator*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQCollator::~PlastiQQCollator() {
    QCollator* o = reinterpret_cast<QCollator*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

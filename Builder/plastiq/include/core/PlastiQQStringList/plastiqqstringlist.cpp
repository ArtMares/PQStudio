#include "plastiqmethod.h"
#include "plastiqqstringlist.h"

#include <QStringList> 
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQStringList::plastiqConstructors = {
    { "QStringList()", { "QStringList", "", "QStringList*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStringList(QString)", { "QStringList", "QString&", "QStringList*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStringList(QList<QString>&)", { "QStringList", "QList<QString>&", "QStringList*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStringList(QList<QString>&&)", { "QStringList", "QList<QString>&&", "QStringList*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QStringList(std::initializer_list<QString>)", { "QStringList", "std::initializer_list<QString>", "QStringList*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStringList::plastiqMethods = {
    { "contains(QString)", { "contains", "QString&", "bool", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "contains(QString,enum)", { "contains", "QString&,Qt::CaseSensitivity", "bool", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filter(QString)", { "filter", "QString&", "QStringList", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filter(QString,enum)", { "filter", "QString&,Qt::CaseSensitivity", "QStringList", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filter(QRegExp&)", { "filter", "QRegExp&", "QStringList", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "filter(QRegularExpression&)", { "filter", "QRegularExpression&", "QStringList", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QRegExp&)", { "indexOf", "QRegExp&", "int", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QRegExp&,int)", { "indexOf", "QRegExp&,int", "int", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QRegularExpression&)", { "indexOf", "QRegularExpression&", "int", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "indexOf(QRegularExpression&,int)", { "indexOf", "QRegularExpression&,int", "int", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "join(QString)", { "join", "QString&", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "join(QLatin1String)", { "join", "QLatin1String", "QString", 11, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "join(QChar)", { "join", "QChar", "QString", 12, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QRegExp&)", { "lastIndexOf", "QRegExp&", "int", 13, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QRegExp&,int)", { "lastIndexOf", "QRegExp&,int", "int", 14, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QRegularExpression&)", { "lastIndexOf", "QRegularExpression&", "int", 15, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "lastIndexOf(QRegularExpression&,int)", { "lastIndexOf", "QRegularExpression&,int", "int", 16, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "removeDuplicates()", { "removeDuplicates", "", "int", 17, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replaceInStrings(QString,QString)", { "replaceInStrings", "QString&,QString&", "QStringList&", 18, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replaceInStrings(QString,QString,enum)", { "replaceInStrings", "QString&,QString&,Qt::CaseSensitivity", "QStringList&", 19, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replaceInStrings(QRegExp&,QString)", { "replaceInStrings", "QRegExp&,QString&", "QStringList&", 20, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "replaceInStrings(QRegularExpression&,QString)", { "replaceInStrings", "QRegularExpression&,QString&", "QStringList&", 21, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sort()", { "sort", "", "void", 22, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "sort(enum)", { "sort", "Qt::CaseSensitivity", "void", 23, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQStringList::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQStringList::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQStringList::plastiqConstants = {

};

QVector<PlastiQMetaObject*> PlastiQQStringList::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQStringList::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQStringList::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QStringList", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQStringList::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQStringList::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QStringList *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QStringList(); break;
        case 1: o = new QStringList(stack[1].s_string); break;
        case 2: o = new QStringList((*reinterpret_cast< QList<QString>(*) >(stack[1].s_voidp))); break;
        case 3: o = new QStringList((*reinterpret_cast< QList<QString>(*) >(stack[1].s_voidp))); break;
        /*case 4: o = new QStringList(UNSUPPORTED_TYPE_std::initializer_list<QString>); break;*/

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQStringList *p = new PlastiQQStringList();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQStringList *p = new PlastiQQStringList();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 24) {
            id -= 24;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QStringList *o = sc ? Q_NULLPTR : reinterpret_cast<QStringList*>(object->plastiq_data());

        switch(id) {
        case 0: { bool _r = o->contains(stack[1].s_string);
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 1: { bool _r = o->contains(stack[1].s_string,
                    Qt::CaseSensitivity(stack[2].s_int64));
                  stack[0].s_bool = _r; stack[0].type = PlastiQ::Bool; } break;
        case 2: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->filter(stack[1].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 3: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->filter(stack[1].s_string,
                    Qt::CaseSensitivity(stack[2].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->filter((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 5: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->filter((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp))));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 6: { int _r = o->indexOf((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 7: { int _r = o->indexOf((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 8: { int _r = o->indexOf((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 9: { int _r = o->indexOf((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 10: { QString _r = o->join(stack[1].s_string);
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 11: { QString _r = o->join((*reinterpret_cast< QLatin1String(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 12: { QString _r = o->join((*reinterpret_cast< QChar(*) >(stack[1].s_voidp)));
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 13: { int _r = o->lastIndexOf((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 14: { int _r = o->lastIndexOf((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 15: { int _r = o->lastIndexOf((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)));
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 16: { int _r = o->lastIndexOf((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)),
                    stack[2].s_int);
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 17: { int _r = o->removeDuplicates();
                  stack[0].s_int = _r; stack[0].type = PlastiQ::Int; } break;
        case 18: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->replaceInStrings(stack[1].s_string,
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 19: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->replaceInStrings(stack[1].s_string,
                    stack[2].s_string,
                    Qt::CaseSensitivity(stack[3].s_int64)));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 20: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->replaceInStrings((*reinterpret_cast< QRegExp(*) >(stack[1].s_voidp)),
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 21: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->replaceInStrings((*reinterpret_cast< QRegularExpression(*) >(stack[1].s_voidp)),
                    stack[2].s_string));
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 22: o->sort();
                stack[0].type = PlastiQ::Void; break;
        case 23: o->sort(Qt::CaseSensitivity(stack[1].s_int64));
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
        QStringList *o = reinterpret_cast<QStringList*>(object->plastiq_data());

        if(className == "QList") { // NOT SUPPORT!
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
        else {
            stack[0].s_voidp = Q_NULLPTR;
            stack[0].name = "Q_NULLPTR";
        }
    }
}

PlastiQQStringList::~PlastiQQStringList() {
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}

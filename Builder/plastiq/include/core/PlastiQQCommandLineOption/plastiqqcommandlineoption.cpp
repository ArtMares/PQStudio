#include "plastiqmethod.h"
#include "plastiqqcommandlineoption.h"

#include <QCommandLineOption> 
#include <QStringList>
#include <QString>

QHash<QByteArray, PlastiQMethod> PlastiQQCommandLineOption::plastiqConstructors = {
    { "QCommandLineOption(QString)", { "QCommandLineOption", "QString&", "QCommandLineOption*", 0, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCommandLineOption(QStringList&)", { "QCommandLineOption", "QStringList&", "QCommandLineOption*", 1, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCommandLineOption(QString,QString)", { "QCommandLineOption", "QString&,QString&", "QCommandLineOption*", 2, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCommandLineOption(QString,QString,QString)", { "QCommandLineOption", "QString&,QString&,QString&", "QCommandLineOption*", 3, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCommandLineOption(QString,QString,QString,QString)", { "QCommandLineOption", "QString&,QString&,QString&,QString&", "QCommandLineOption*", 4, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCommandLineOption(QStringList&,QString)", { "QCommandLineOption", "QStringList&,QString&", "QCommandLineOption*", 5, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCommandLineOption(QStringList&,QString,QString)", { "QCommandLineOption", "QStringList&,QString&,QString&", "QCommandLineOption*", 6, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCommandLineOption(QStringList&,QString,QString,QString)", { "QCommandLineOption", "QStringList&,QString&,QString&,QString&", "QCommandLineOption*", 7, PlastiQMethod::Public, PlastiQMethod::Constructor } },
    { "QCommandLineOption(QCommandLineOption&)", { "QCommandLineOption", "QCommandLineOption&", "QCommandLineOption*", 8, PlastiQMethod::Public, PlastiQMethod::Constructor } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCommandLineOption::plastiqMethods = {
    { "defaultValues()", { "defaultValues", "", "QStringList", 0, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "description()", { "description", "", "QString", 1, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "flags()", { "flags", "", "Flags", 2, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "names()", { "names", "", "QStringList", 3, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultValue(QString)", { "setDefaultValue", "QString&", "void", 4, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDefaultValues(QStringList&)", { "setDefaultValues", "QStringList&", "void", 5, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setDescription(QString)", { "setDescription", "QString&", "void", 6, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setFlags(enum)", { "setFlags", "Flags", "void", 7, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "setValueName(QString)", { "setValueName", "QString&", "void", 8, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "swap(QCommandLineOption&)", { "swap", "QCommandLineOption&", "void", 9, PlastiQMethod::Public, PlastiQMethod::Method } },
    { "valueName()", { "valueName", "", "QString", 10, PlastiQMethod::Public, PlastiQMethod::Method } },

};

QHash<QByteArray, PlastiQMethod> PlastiQQCommandLineOption::plastiqSignals = {

};

QHash<QByteArray, PlastiQProperty> PlastiQQCommandLineOption::plastiqProperties = {

};

QHash<QByteArray, long> PlastiQQCommandLineOption::plastiqConstants = {

    /* QCommandLineOption::Flag */
   { "HiddenFromHelp", QCommandLineOption::HiddenFromHelp },
   { "ShortOptionStyle", QCommandLineOption::ShortOptionStyle },

};

QVector<PlastiQMetaObject*> PlastiQQCommandLineOption::plastiqInherits = {  };

const PlastiQ::ObjectType PlastiQQCommandLineOption::plastiq_static_objectType = PlastiQ::IsQtObject;
PlastiQMetaObject PlastiQQCommandLineOption::plastiq_static_metaObject = {
    { Q_NULLPTR, &plastiqInherits, "QCommandLineOption", &plastiq_static_objectType,
      &plastiqConstructors,
      &plastiqMethods,
      &plastiqSignals,
      &plastiqProperties,
      &plastiqConstants,
      plastiq_static_metacall
    }
};

const PlastiQMetaObject *PlastiQQCommandLineOption::plastiq_metaObject() const {
    return &plastiq_static_metaObject;
}

void PlastiQQCommandLineOption::plastiq_static_metacall(PlastiQObject *object, PlastiQMetaObject::Call call, int id, const PMOGStack &stack) {
    if(call == PlastiQMetaObject::CreateInstance) {
        QCommandLineOption *o = Q_NULLPTR;

        switch(id) {
        case 0: o = new QCommandLineOption(stack[1].s_string); break;
        case 1: o = new QCommandLineOption((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp))); break;
        case 2: o = new QCommandLineOption(stack[1].s_string,
                    stack[2].s_string); break;
        case 3: o = new QCommandLineOption(stack[1].s_string,
                    stack[2].s_string,
                    stack[3].s_string); break;
        case 4: o = new QCommandLineOption(stack[1].s_string,
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string); break;
        case 5: o = new QCommandLineOption((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)),
                    stack[2].s_string); break;
        case 6: o = new QCommandLineOption((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    stack[3].s_string); break;
        case 7: o = new QCommandLineOption((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)),
                    stack[2].s_string,
                    stack[3].s_string,
                    stack[4].s_string); break;
        case 8: o = new QCommandLineOption((*reinterpret_cast< QCommandLineOption(*) >(stack[1].s_voidp))); break;

        default: ;
        }

/*%UPDATEWRAPPER%*/        PlastiQQCommandLineOption *p = new PlastiQQCommandLineOption();
        p->plastiq_setData(reinterpret_cast<void*>(o), p);
        PlastiQObject *po = static_cast<PlastiQObject*>(p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = po;
    }
    else if(call == PlastiQMetaObject::CreateDataInstance) {
        PlastiQQCommandLineOption *p = new PlastiQQCommandLineOption();
        p->plastiq_setData(stack[1].s_voidp, p);
        *reinterpret_cast<PlastiQObject**>(stack[0].s_voidpp) = p;
    }
    else if(call == PlastiQMetaObject::InvokeMethod || call == PlastiQMetaObject::InvokeStaticMember) {
        if(id >= 11) {
            id -= 11;
            return;
        }

        bool sc = call == PlastiQMetaObject::InvokeStaticMember;
        bool isWrapper = sc ? false : object->isWrapper();
        QCommandLineOption *o = sc ? Q_NULLPTR : reinterpret_cast<QCommandLineOption*>(object->plastiq_data());

        switch(id) {
        case 0: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->defaultValues());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 1: { QString _r = o->description();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;
        case 2: { qint64 _r = o->flags(); // HACK for Flags 
                  stack[0].s_int64 = _r; stack[0].type = PlastiQ::Enum; } break;
        case 3: { /* COPY OBJECT */
            QStringList *_r = new QStringList(o->names());
            reinterpret_cast<void*>(stack[0].s_voidp) = _r;
            stack[0].name = "QStringList";
            stack[0].type = PlastiQ::QtObject;
        } break;
        case 4: o->setDefaultValue(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 5: o->setDefaultValues((*reinterpret_cast< QStringList(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 6: o->setDescription(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 7: o->setFlags(QCommandLineOption::Flags(stack[1].s_int64));
                stack[0].type = PlastiQ::Void; break;
        case 8: o->setValueName(stack[1].s_string);
                stack[0].type = PlastiQ::Void; break;
        case 9: o->swap((*reinterpret_cast< QCommandLineOption(*) >(stack[1].s_voidp)));
                stack[0].type = PlastiQ::Void; break;
        case 10: { QString _r = o->valueName();
                  stack[0].s_string = _r; stack[0].type = PlastiQ::String; } break;

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
        QCommandLineOption *o = reinterpret_cast<QCommandLineOption*>(object->plastiq_data());

        stack[0].s_voidp = Q_NULLPTR;
        stack[0].name = "Q_NULLPTR";
    }
}

PlastiQQCommandLineOption::~PlastiQQCommandLineOption() {
    QCommandLineOption* o = reinterpret_cast<QCommandLineOption*>(plastiq_data());
    if(o != Q_NULLPTR) {
        delete o;
    }
    o = Q_NULLPTR;
    plastiq_setData(Q_NULLPTR, Q_NULLPTR);
}
